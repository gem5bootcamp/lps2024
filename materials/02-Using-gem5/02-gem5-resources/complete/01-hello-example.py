"""
This example demonstrates how to set up a simple gem5 simulation using
the prebuilt x86 demo board to run a static 'hello world' binary. The
steps include:

1. Importing necessary gem5 modules.
2. Creating an instance of the X86DemoBoard.
3. Setting a 'hello world' workload on the board.
4. Running the simulation.
"""
from gem5.prebuilt.demo.x86_demo_board import X86DemoBoard
from gem5.resources.resource import obtain_resource
from gem5.simulate.simulator import Simulator

board = X86DemoBoard()
board.set_se_binary_workload(obtain_resource("x86-hello64-static"))

simulator = Simulator(board=board)
simulator.run()
