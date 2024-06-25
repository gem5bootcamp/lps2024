from gem5.components.boards.simple_board import SimpleBoard
from gem5.components.memory.single_channel import SingleChannelDDR4_2400
from gem5.components.processors.simple_processor import SimpleProcessor
from gem5.components.cachehierarchies.classic.private_l1_shared_l2_cache_hierarchy import (
    PrivateL1SharedL2CacheHierarchy,
)
# from gem5.components.cachehierarchies.ruby.mesi_two_level_cache_hierarchy import (
#     MESITwoLevelCacheHierarchy,
# )
from gem5.components.processors.cpu_types import CPUTypes
from gem5.isas import ISA
from gem5.simulate.simulator import Simulator
from gem5.resources.resource import obtain_resource

simple_in_order_core = SimpleProcessor(
    cpu_type=CPUTypes.TIMING, num_cores=1, isa=ISA.X86
)

main_memory = SingleChannelDDR4_2400(size="2GB")

# caches = MESITwoLevelCacheHierarchy(
#     l1d_size="32KiB",
#     l1d_assoc=8,
#     l1i_size="32KiB",
#     l1i_assoc=8,
#     l2_size="256KiB",
#     l2_assoc=16,
#     num_l2_banks=1,
# )

caches = PrivateL1SharedL2CacheHierarchy(
    l1d_size="32KiB",
    l1d_assoc=8,
    l1i_size="32KiB",
    l1i_assoc=8,
    l2_size="256KiB",
    l2_assoc=16,
)

board = SimpleBoard(
    processor=simple_in_order_core,
    memory=main_memory,
    cache_hierarchy=caches,
    clk_freq="3GHz",
)

board.set_workload(obtain_resource("x86-hello64-static"))

simulator = Simulator(board)
simulator.run()
