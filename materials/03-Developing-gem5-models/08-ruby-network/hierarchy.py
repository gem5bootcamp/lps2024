"""
This file contains a two level hierarchy with a private L1 and shared L2/dir

You can use the new hierarchy in a test script like this:

```python
from hierarchy import PrivateL1SharedL2CacheHierarchy
cache_hierarchy = PrivateL1SharedL2CacheHierarchy(
    l1_size="32KiB",
    l1_assoc=8,
    l2_size="2MiB",
    l2_assoc=16,
)

Note: This hierarchy is just an example of how to customize a CHI hierarchy.
It has been tested with mostly user-mode workloads in SE mode and FS mode after
Linux boot. There seems to be a bug in the DMA controller that causes x86 Linux
to fail to bring up PCI devices.
"""

from itertools import chain

from gem5.components.cachehierarchies.chi.nodes.abstract_node import (
    AbstractNode,
)
from gem5.components.cachehierarchies.chi.nodes.memory_controller import (
    MemoryController,
)
from gem5.components.cachehierarchies.chi.nodes.private_l1_moesi_cache import (
    PrivateL1MOESICache,
)
from gem5.components.cachehierarchies.chi.nodes.dma_requestor import DMARequestor
from gem5.components.cachehierarchies.ruby.abstract_ruby_cache_hierarchy import AbstractRubyCacheHierarchy

from gem5.isas import ISA

from ring import Ring

from m5.objects import (
    RRIPRP,
    RubyNetwork,
    RubyCache,
    NULL,
    RubySystem,
    RubyPortProxy,
    SubSystem,
    RubySequencer,
)

class SharedL2(AbstractNode):
    """A home node (HNF) with a shared cache"""

    def __init__(
        self,
        size: str,
        assoc: int,
        network: RubyNetwork,
        cache_line_size: int,
    ):
        super().__init__(network, cache_line_size)

        self.cache = RubyCache(
            size=size,
            assoc=assoc,
            # Can choose any replacement policy
            replacement_policy=RRIPRP(),
        )
        # Note: As of gem5 v24.0.0.0 the replacement policy in CHI is broken.
        # See

        # Only used for L1 controllers
        self.send_evictions = False
        self.sequencer = NULL

        # No prefetcher (home nodes don't support prefetchers right now)
        self.use_prefetcher = False
        self.prefetcher = NULL

        # Set up home node that allows three hop protocols
        self.is_HN = True
        self.enable_DMT = True
        self.enable_DCT = True

        # "Owned state"
        self.allow_SD = True

        # MOESI / Mostly inclusive for shared / Exclusive for unique
        self.alloc_on_seq_acc = False
        self.alloc_on_seq_line_write = False
        self.alloc_on_readshared = True
        self.alloc_on_readunique = False
        self.alloc_on_readonce = True
        self.alloc_on_writeback = True
        self.alloc_on_atomic = True
        self.dealloc_on_unique = True
        self.dealloc_on_shared = False
        self.dealloc_backinv_unique = False
        self.dealloc_backinv_shared = False

        # Some reasonable default TBE params
        self.number_of_TBEs = 32
        self.number_of_repl_TBEs = 32
        self.number_of_snoop_TBEs = 1
        self.number_of_DVM_TBEs = 1  # should not receive any dvm
        self.number_of_DVM_snoop_TBEs = 1  # should not receive any dvm
        self.unify_repl_TBEs = False

class PrivateL1SharedL2CacheHierarchy(AbstractRubyCacheHierarchy):
    """A two level cache based on CHI
    """

    def __init__(self, l1_size: str, l1_assoc: int, l2_size: str, l2_assoc: int):
        """
        :param l1_size: The size of the priavte I/D caches in the hierarchy.
        :param l1_assoc: The associativity of each cache.
        :param l2_size: The size of the shared L2 cache.
        :param l2_assoc: The associativity of the shared L2 cache.
        """
        super().__init__()

        self._l1_size = l1_size
        self._l1_assoc = l1_assoc
        self._l2_size = l2_size
        self._l2_assoc = l2_assoc

    def incorporate_cache(self, board):

        # Create the Ruby System. This is a singleton that is required for
        # all ruby protocols. Must be exactly 1 in the simulation.
        # Most Ruby controllers, etc. need a pointer to this.
        self.ruby_system = RubySystem()

        # Ruby's global network.
        self.ruby_system.network = SimplePt2Pt(self.ruby_system)

        # Network configurations
        # virtual networks: 0=request, 1=snoop, 2=response, 3=data
        self.ruby_system.number_of_virtual_networks = 4
        self.ruby_system.network.number_of_virtual_networks = 4

        # Create a single centralized L2/Home node
        self.l2cache = SharedL2(
            size=self._l2_size,
            assoc=self._l2_assoc,
            network=self.ruby_system.network,
            cache_line_size=board.get_cache_line_size()
        )
        self.l2cache.ruby_system = self.ruby_system

        # Create one core cluster with a split I/D cache for each core
        self.core_clusters = [
            self._create_core_cluster(core, i, board)
            for i, core in enumerate(board.get_processor().get_cores())
        ]

        # Create the coherent side of the memory controllers
        self.memory_controllers = self._create_memory_controllers(board)

        # In CHI, you must explicitly set downstream controllers
        self.l2cache.downstream_destinations = self.memory_controllers

        # Create the DMA Controllers, if required as in FS mode
        if board.has_dma_ports():
            self.dma_controllers = self._create_dma_controllers(board)
            self.ruby_system.num_of_sequencers = len(
                self.core_clusters
            ) * 2 + len(self.dma_controllers)
        else:
            self.ruby_system.num_of_sequencers = len(self.core_clusters) * 2

        # FILL THIS IN

        self.ruby_system.network.setup_buffers()

        # Set up a proxy port for the system_port. Used for load binaries and
        # other functional-only things.
        self.ruby_system.sys_port_proxy = RubyPortProxy()
        board.connect_system_port(self.ruby_system.sys_port_proxy.in_ports)

    def _create_core_cluster(
        self, core, core_num: int, board
    ) -> SubSystem:
        """Given the core and the core number this function creates a cluster
        for the core with a split I/D cache.
        """
        # Create a cluster for each core.
        cluster = SubSystem()

        # Create the caches
        cluster.dcache = PrivateL1MOESICache(
            size=self._l1_size,
            assoc=self._l1_assoc,
            network=self.ruby_system.network,
            core=core,
            cache_line_size=board.get_cache_line_size(),
            target_isa=board.get_processor().get_isa(),
            clk_domain=board.get_clock_domain(),
        )
        cluster.icache = PrivateL1MOESICache(
            size=self._l1_size,
            assoc=self._l1_assoc,
            network=self.ruby_system.network,
            core=core,
            cache_line_size=board.get_cache_line_size(),
            target_isa=board.get_processor().get_isa(),
            clk_domain=board.get_clock_domain(),
        )

        # The sequencers are used to connect the core to the cache
        cluster.icache.sequencer = RubySequencer(
            version=core_num, dcache=NULL, clk_domain=cluster.icache.clk_domain
        )
        cluster.dcache.sequencer = RubySequencer(
            version=core_num,
            dcache=cluster.dcache.cache,
            clk_domain=cluster.dcache.clk_domain,
        )

        # If full system, connect the IO bus to the sequencer
        if board.has_io_bus():
            cluster.dcache.sequencer.connectIOPorts(board.get_io_bus())

        cluster.dcache.ruby_system = self.ruby_system
        cluster.icache.ruby_system = self.ruby_system

        # Connect the core "classic" ports to the sequencers
        core.connect_icache(cluster.icache.sequencer.in_ports)
        core.connect_dcache(cluster.dcache.sequencer.in_ports)

        # Same thing for the page table walkers
        core.connect_walker_ports(
            cluster.dcache.sequencer.in_ports,
            cluster.icache.sequencer.in_ports,
        )

        # Connect the interrupt ports
        if board.get_processor().get_isa() == ISA.X86:
            int_req_port = cluster.dcache.sequencer.interrupt_out_port
            int_resp_port = cluster.dcache.sequencer.in_ports
            core.connect_interrupt(int_req_port, int_resp_port)
        else:
            core.connect_interrupt()

        # Set the downstream destinations for the caches
        cluster.dcache.downstream_destinations = [self.l2cache]
        cluster.icache.downstream_destinations = [self.l2cache]

        return cluster

    def _create_memory_controllers(
        self, board
    ):
        """This creates the CHI objects that interact with gem5's memory
        controllers
        """
        memory_controllers = []
        for rng, port in board.get_mem_ports():
            mc = MemoryController(self.ruby_system.network, rng, port)
            mc.ruby_system = self.ruby_system
            memory_controllers.append(mc)
        return memory_controllers

    def _create_dma_controllers(
        self, board
    ):
        dma_controllers = []
        for i, port in enumerate(board.get_dma_ports()):
            ctrl = DMARequestor(
                self.ruby_system.network,
                board.get_cache_line_size(),
                board.get_clock_domain(),
            )
            version = len(board.get_processor().get_cores()) + i
            ctrl.sequencer = RubySequencer(version=version, in_ports=port)
            ctrl.sequencer.dcache = NULL

            ctrl.ruby_system = self.ruby_system
            ctrl.sequencer.ruby_system = self.ruby_system

            ctrl.downstream_destinations = [self.l2cache]

            dma_controllers.append(ctrl)

        return dma_controllers
