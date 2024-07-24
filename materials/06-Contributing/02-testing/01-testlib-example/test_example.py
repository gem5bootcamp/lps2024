from testlib import *

"""
**Prior to starting, move this directory ("02-testing") to the gem5 directory's
"tests/gem5" directory.**



Here is the `gem5_verify_config` function that will be used to test the
running of a gem5 instance via a configuration script example configuration
script.

```python
gem5_verify_config(
    name="test-example-1", # Name of the test. Must be unique.
    verifiers=(), # Outside exit-code zero check, additional  to be added.
    fixtures=(), # Fixtures: this is laregely deprecated and can be ignored.
    config=joinpath(), # The path to the config script.
    config_args=[], # The arguments to be passed to the config script.
    valid_isas=(constants.arm_tag), # Need to run on ARM ISA
    length=constants.quick_tag, # A quick test to run in the CI pipeline
)
```

In this exercise achieve the following.
After each step run the tests to verify the changes.:
`./main.py run gem5/01-testing-example`

1. Create a test that runs the `example_config.py` script without any arguments and verifies it runs correctly.
2. Have this test use the `--to-print` argument to print "Arm Simulation Completed." at the end of the simulation.
3. Update this test with a verifier that checks the output of the simulation after the run is complete.
4. Write a second test that does the same as the first test but with a different output message (inclusive of a verifier).


Hints and tips
==============

- Adding `-vvv` to the end of the test command will give you more information about the test, particularly if an error occurs.
- Look at the other tests in "tests/gem5" for examples of how to write tests.
- You can pre-build the ARM/gem5.opt build.
`scons build/ARM/gem5.opt -j`nproc` then, when running `./main.py run gem5/02-testing` add the `--skip-build` flag to skip the build step.
"""



