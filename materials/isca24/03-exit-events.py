from gem5.components.boards.simple_board import SimpleBoard
from gem5.components.memory.single_channel import SingleChannelDDR4_2400
from gem5.components.processors.simple_processor import SimpleProcessor
from gem5.components.cachehierarchies.chi.private_l1_cache_hierarchy import (
    PrivateL1CacheHierarchy
)
from gem5.components.processors.cpu_types import CPUTypes
from gem5.isas import ISA
from gem5.simulate.simulator import Simulator
from gem5.resources.resource import obtain_resource
from gem5.simulate.exit_event import ExitEvent
import m5

simple_in_order_core = SimpleProcessor(
    cpu_type=CPUTypes.TIMING, num_cores=1, isa=ISA.X86
)

main_memory = SingleChannelDDR4_2400(size="2GB")

caches = PrivateL1CacheHierarchy(
    size = "128KiB",
    assoc = 8,
)

board = SimpleBoard(
    processor=simple_in_order_core,
    memory=main_memory,
    cache_hierarchy=caches,
    clk_freq="3GHz",
)

board.set_se_binary_workload(
    binary=obtain_resource("x86-m5-exit")
)

def on_exit():
    print("Work exit!")
    m5.stats.reset()
    yield False # Do not exit

simulator = Simulator(
    board=board,
    on_exit_event={
        ExitEvent.EXIT: on_exit,
    }
)
simulator.run()
