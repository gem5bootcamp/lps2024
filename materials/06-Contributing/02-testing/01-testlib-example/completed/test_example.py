from testlib import *

"""
These tests are designed to test demonstrate the use of the testlib framework.
The enclosing directory should be moved to "tests/gem5" in the gem5 directory
to then be executed in "tests" using the command:

```shell
/main.py run gem5/01-testlib-example
```
"""


gem5_verify_config(
    name="test-example-1",
    verifiers=(
        verifier.MatchStdoutNoPerf(joinpath(getcwd(), "ref", "simout_1.txt")),
    ),
    fixtures=(),
    config=joinpath(
        config.base_dir,
        "tests",
        "gem5",
        "bootcamp",
        "example_config.py",
    ),
    config_args=[],
    valid_isas=(constants.arm_tag), # Need to run on ARM ISA
    length=constants.quick_tag, # A quick test to run in the CI pipeline
)

gem5_verify_config(
    name="test-example-2",
    verifiers=(
        verifier.MatchStdoutNoPerf(joinpath(getcwd(), "ref", "simout_2.txt")),
    ),
    fixtures=(),
    config=joinpath(
        config.base_dir,
        "tests",
        "gem5",
        "bootcamp",
        "example_config.py",
    ),
    config_args=["--to-print", "Arm Simulation Completed."],
    valid_isas=(constants.arm_tag,),
    length=constants.quick_tag,
)

