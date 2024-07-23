# Modeling CPU cores in gem5


The slides that go over this material can be found here.

[slides/02-Using-gem5/04-cores.md](../../../slides/02-Using-gem5/04-cores.md)

## Using gem5's CPU Models

### Start by opening the following file.

[materials/02-Using-gem5/04-cores/cores.py](../../../materials/02-Using-gem5/04-cores/cores.py)

**We will be running a workload called matrix-multiply on different CPU types and cache sizes.**

### Steps
1. Leave `cpu_type` as Atomic and run the program

    ```sh
    gem5 --outdir=atomic-normal-cache ./materials/02-Using-gem5/04-cores/cores.py
    ```

2. Change `cpu_type` to Timing and run the program

    ```sh
    gem5 --outdir=timing-normal-cache ./materials/02-Using-gem5/04-cores/cores.py
    ```

3. Change `l1d_size` and `l1i_size` to 1KiB and run the program

    ```sh
    gem5 --outdir=timing-small-cache ./materials/02-Using-gem5/04-cores/cores.py
    ```

4. Change `cpu_type` to Atomic and run the program

    ```sh
    gem5 --outdir=atomic-small-cache ./materials/02-Using-gem5/04-cores/cores.py
    ```

5. Compare the `stats.txt` file in

    `atomic-normal-cache/`

    `timing-normal-cache/`

    `timing-small-cache/`

    `atomic-small-cache/`

    You can use the following command to compare the number of cycles for each run.

    ```sh
    grep -ri "cores0.*numCycles" *cache
    ```

    I'd encourage you to look at the actual `stats.txt` file or to think about more parameters to compare via `grep`.

## Configuring a Custom Processor

### Start by opening the following file.

[materials/02-Using-gem5/04-cores/components/processors.py](../../../materials/02-Using-gem5/04-cores/components/processors.py)

**We will be running a workload called matrix-multiply on two custom processors.**

### Steps
1. Update the following classes with the following parameters.
    - Big(O3CPU)
        - width=**10**
        - rob_size=**40**
        - num_int_regs=**50**
        - num_fp_regs=**50**
    - Little(O3CPU)
        - width=**2**
        - rob_size=**30**
        - num_int_regs=**40**
        - num_fp_regs=**40**

2. Run with
    ```sh
    gem5 --outdir=big-proc ./materials/02-Using-gem5/04-cores/cores-complex.py -p big
    ```

3. Run with

    ```sh
    gem5 --outdir=little-proc ./materials/02-Using-gem5/04-cores/cores-complex.py -p little
    ```

4. Compare the `stats.txt` file in

    `big-proc/`

    `little-proc/`

    You can use the following command to compare the number of seconds and cycles for each processor to run matrix-multiply.

    ```sh
    grep -ri "simSeconds" *proc && grep -ri "numCycles" *proc
    ```

    I'd encourage you to look at the actual `stats.txt` file or to think about more parameters to compare via `grep`.
