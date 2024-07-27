"""
This script is used for running a traffic generator connected to a memory
device to exhibit mermory devices in the standard library.

It is currently set up to run with a Single Channel Simple memory device.
However this can be replaced wioth any other memory device in the standard
library.

This script can be run with the following command:
gem5 run-mem.py
"""

import argparse

from m5.objects import MemorySize

from gem5.components.boards.test_board import TestBoard
from gem5.components.memory.simple import SingleChannelSimpleMemory
from gem5.components.memory.single_channel import SingleChannelDDR4_2400
from lpddr2 import SingleChannelLPDDR2

from gem5.components.processors.linear_generator import LinearGenerator
from gem5.components.processors.random_generator import RandomGenerator
from gem5.simulate.simulator import Simulator


def generator_factory(
    generator_class: str, rd_perc: int, rate, mem_size: MemorySize
):
    rd_perc = int(rd_perc)
    if rd_perc > 100 or rd_perc < 0:
        raise ValueError(
            "Read percentage has to be an integer number between 0 and 100."
        )
    if generator_class == "LinearGenerator":
        return LinearGenerator(
            duration="1ms", rate=rate, max_addr=mem_size, rd_perc=rd_perc
        )
    elif generator_class == "RandomGenerator":
        return RandomGenerator(
            duration="1ms", rate=rate, max_addr=mem_size, rd_perc=rd_perc
        )
    else:
        raise ValueError(f"Unknown generator class {generator_class}")


parser = argparse.ArgumentParser(
    description="A traffic generator that can be used to test a gem5 "
    "memory component."
)
parser.add_argument(
    "-c",
    "--generator_class",
    type=str,
    help="The class of the generator to use. "
    "Available options: LinearGenerator, RandomGenerator",
    default="LinearGenerator",
)
parser.add_argument(
    "-r",
    "--read_percentage",
    type=int,
    help="The percentage of read operations to perform. "
    "Must be an integer between 0 and 100.",
    default=50,
)
parser.add_argument(
    "-b",
    "--bandwidth",
    type=str,
    help="The bandwidth of the memory device. "
    "Must be a string representing a memory size (e.g., 32GiB/s).",
    default="32GiB/s",
)


args = parser.parse_args()

# Insert the desired memory here
# Available memory can be found in src/python/gem5/components/memory/

# Fill this in
# memory = SingleChannelSimpleMemory(latency="50ns", bandwidth="32GiB/s", size="8GiB", latency_var="10ns")
# memory = SingleChannelDDR4_2400()
memory = SingleChannelLPDDR2()


generator = generator_factory(
    args.generator_class, args.read_percentage, args.bandwidth, memory.get_size()
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

stats = simulator.get_stats()
gen_stats = stats['board']['processor']['cores']['value'][0]['generator']
data = gen_stats['bytesRead']['value'] + gen_stats['bytesWritten']['value']
print(f"Total data transferred: {data}")
print(f"Total bandwidth: {data/1_000_000} GB/s")
