"""
This script is used for running a traffic generator connected to a memory
device to exhibit mermory devices in the standard library.

It is currently set up to run with a SingleChannelDDR4_2400 memory device.
However this can be replaced wioth any other memory device in the standard
library.

This script can be run with the following command:
$ gem5/build/NULL/gem5.opt /workspaces/2024/materials/02-Using-gem5/\
06-memory/completed/lpddr2_test.py
"""

import argparse

from m5.objects import MemorySize

from gem5.components.boards.test_board import TestBoard
from gem5.components.memory.dram_interfaces.hbm import HBM_2000_4H_1x64
from gem5.components.memory.hbm import HighBandwidthMemory
from gem5.components.memory.simple import SingleChannelSimpleMemory
from gem5.components.memory.single_channel import SingleChannelDDR4_2400
from lpddr2 import SingleChannelLPDDR20_S4_1066_1x32


from gem5.components.processors.linear_generator import LinearGenerator
from gem5.components.processors.random_generator import RandomGenerator
from gem5.simulate.simulator import Simulator


def generator_factory(
    generator_class: str, rd_perc: int, mem_size: MemorySize
):
    rd_perc = int(rd_perc)
    if rd_perc > 100 or rd_perc < 0:
        raise ValueError(
            "Read percentage has to be an integer number between 0 and 100."
        )
    if generator_class == "LinearGenerator":
        return LinearGenerator(
            duration="1ms", rate="32GiB/s", max_addr=mem_size, rd_perc=rd_perc
        )
    elif generator_class == "RandomGenerator":
        return RandomGenerator(
            duration="1ms", rate="32GiB/s", max_addr=mem_size, rd_perc=rd_perc
        )
    else:
        raise ValueError(f"Unknown generator class {generator_class}")


parser = argparse.ArgumentParser(
    description="A traffic generator that can be used to test a gem5 "
    "memory component."
)


args = parser.parse_args()
args.generator_class = "LinearGenerator"
args.read_percentage = 50


# Insert the desired memory here
# Available memory can be found in src/python/gem5/components/memory/
# memory = SingleChannelDDR4_2400()
memory = SingleChannelLPDDR20_S4_1066_1x32()

generator = generator_factory(
    args.generator_class, args.read_percentage, memory.get_size()
)

# We use the Test Board. This is a special board to run traffic generation
# tasks. Can replace the cache_hierarchy with any hierarchy to simulate the
# cache as well as the memory
board = TestBoard(
    clk_freq="1GHz",  # Ignored for these generators
    generator=generator,  # We pass the traffic generator as the processor.
    memory=memory,
    # With no cache hierarchy the test board will directly connect the
    # generator to the memory
    cache_hierarchy=None,
)

simulator = Simulator(board=board)
simulator.run()
