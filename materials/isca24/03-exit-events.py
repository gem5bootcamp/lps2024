from gem5.components.boards.simple_board import SimpleBoard
from gem5.components.memory.single_channel import SingleChannelDDR4_2400
from gem5.components.processors.simple_processor import SimpleProcessor
from gem5.components.cachehierarchies.ruby.mesi_two_level_cache_hierarchy import (
    MESITwoLevelCacheHierarchy,
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

caches = MESITwoLevelCacheHierarchy(
    l1d_size="32KiB",
    l1d_assoc=8,
    l1i_size="32KiB",
    l1i_assoc=8,
    l2_size="256KiB",
    l2_assoc=16,
    num_l2_banks=1,
)

board = SimpleBoard(
    processor=simple_in_order_core,
    memory=main_memory,
    cache_hierarchy=caches,
    clk_freq="3GHz",
)

board.set_workload(obtain_resource("x86-npb-is-size-s-run"))

def on_work_begin():
    print("Work begin")
    m5.stats.reset()
    yield False # Do not exit

def on_work_end():
    print("Work end")
    yield True # Exit the simulation

simulator = Simulator(
    board=board,
    on_exit_event={
        ExitEvent.WORKBEGIN: on_work_begin,
        ExitEvent.WORKEND: on_work_end
    }
)
simulator.run()