from gem5.prebuilt.demo.x86_demo_board import X86DemoBoard
from gem5.resources.resource import obtain_resource
from gem5.simulate.simulator import Simulator

board = X86DemoBoard()
board.set_workload(obtain_resource("x86-ubuntu-24.04-boot-no-systemd"))

simulator = Simulator(board=board)
simulator.run(100_000_000_000)
