from gem5.components.boards.simple_board import SimpleBoard
from gem5.components.cachehierarchies.classic.private_l1_cache_hierarchy import PrivateL1CacheHierarchy
from gem5.components.memory.single_channel import SingleChannelDDR3_1600
from gem5.components.processors.simple_processor import SimpleProcessor
from gem5.components.processors.cpu_types import CPUTypes
from gem5.resources.resource import BinaryResource
from gem5.simulate.simulator import Simulator
from gem5.isas import ISA

import os

"""This is a test to check for the presence and correctness of the RISC-V
`ADD16` inmstruction modelled by the gem5 simulator.

The binary this config scripts contains the `ADD16` instruction and this will
fail to be decoded and executed if the `ADD16` instruction is not implemented
(or implemented correctly).

Usage
-----

```sh
gem5 add16_test.pygit 
```
"""

dir_path = os.path.dirname(os.path.realpath(__file__))

cache_hierarchy = PrivateL1CacheHierarchy(l1d_size="32KiB", l1i_size="32KiB")
memory = SingleChannelDDR3_1600("1GiB")

processor = SimpleProcessor(cpu_type=CPUTypes.TIMING, num_cores=1, isa=ISA.RISCV)

board = SimpleBoard(
    clk_freq="3GHz",
    processor=processor,
    memory=memory,
    cache_hierarchy=cache_hierarchy,
)

board.set_se_binary_workload(BinaryResource(dir_path + "/add16_test"))

simulator = Simulator(board=board)
simulator.run()
