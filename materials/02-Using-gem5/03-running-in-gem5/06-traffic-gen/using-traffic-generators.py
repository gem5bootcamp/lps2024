# Copyright (c) 2021 The Regents of the University of California
# All rights reserved.
#
# Redistribution and use in source and binary forms, with or without
# modification, are permitted provided that the following conditions are
# met: redistributions of source code must retain the above copyright
# notice, this list of conditions and the following disclaimer;
# redistributions in binary form must reproduce the above copyright
# notice, this list of conditions and the following disclaimer in the
# documentation and/or other materials provided with the distribution;
# neither the name of the copyright holders nor the names of its
# contributors may be used to endorse or promote products derived from
# this software without specific prior written permission.
#
# THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
# "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
# LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
# A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
# OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
# SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
# LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
# DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
# THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
# (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
# OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

import argparse

from components.cache_hierarchy import CacheHierarchy
from components.hybrid_generator import HybridGenerator

import m5
from m5.objects import Root

from gem5.components.boards.test_board import TestBoard
# from gem5.components.cachehierarchies.classic.private_l1_cache_hierarchy import (
#             PrivateL1CacheHierarchy,
#         )
from gem5.components.cachehierarchies.classic.private_l1_shared_l2_cache_hierarchy import (
    PrivateL1SharedL2CacheHierarchy,
)
from gem5.components.memory import SingleChannelDDR3_1600
from gem5.components.processors.linear_generator import LinearGenerator
from gem5.components.processors.random_generator import RandomGenerator

# Run with the following command
    # gem5 --debug-flags=TrafficGen --debug-end=30000 ./materials/02-Using-gem5/03-running-in-gem5/06-traffic-gen/using-traffic-generators.py [generator_class] [num_cores]

def getGenerator(generator_class, num_cores):
    if generator_class.lower() == "linear":
        return LinearGenerator(
            rate="40GB/s",
            min_addr= 0,
            max_addr= 131072,
            num_cores=num_cores, #1
        )
    elif generator_class.lower() == "random":
        return RandomGenerator(
            rate="40GB/s",
            min_addr= 0,
            max_addr= 131072,
            num_cores=num_cores, #1
        )
    elif generator_class.lower() == "hybrid":
        return HybridGenerator(
            rate="40GB/s",
            num_cores=num_cores, #6
        )

def parseArgs():
    parser = argparse.ArgumentParser(
        description="A program to test different types of traffic generators."
        )
    parser.add_argument(
        "generator_class",
        type=str.lower,
        help="Which generator to run with",
        choices=[
            "linear",
            "random",
            "hybrid",
        ],
    )
    parser.add_argument(
        "num_cores",
        type=int,
        help="Number of cores to run generator with",
    )
    args = parser.parse_args()
    return args


args = parseArgs()

cache_hierarchy = CacheHierarchy()

memory = SingleChannelDDR3_1600()

generator = getGenerator(args.generator_class, args.num_cores)

motherboard = TestBoard(
    clk_freq="3GHz",
    generator=generator,
    memory=memory,
    cache_hierarchy=cache_hierarchy,
)

root = Root(full_system=False, system=motherboard)
motherboard._pre_instantiate()
m5.instantiate()
generator.start_traffic()
print("Beginning simulation!")
exit_event = m5.simulate()
print(f"Exiting @ tick {m5.curTick()} because {exit_event.getCause()}.")
