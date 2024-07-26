---
marp: true
paginate: true
theme: gem5
title: Sampled simulation with gem5
---

<!-- _class: title -->

## Sampled simulation with gem5

---

## Recap: What if the ROI is large

### We now know how to skip the "unimportant" part of the simulation, but what if the important part of the simulation is too too large?

<!-- some artistic image here -->

---

<!-- _class: start -->

## Sampling

---

## What is sampling

There are two major types of sampling:

1. Targeted sampling
2. Statistical sampling

---

## Targeted Sampling

Representative methodologies: SimPoint, LoopPoint
<!-- _class: center-image -->
![width:950](09-sampling/targeted_sampling.png)

Targeted sampling selects samples based on specific characteristics that are discovered by analysis.

---

## More about Targeted Sampling

Well-known simulation sampling methods that use the targeted sampling approach include **SimPoint** and **LoopPoint**.​

Both methods divided the whole program execution into regions that each executes a fixed number of instructions.
They record the basic block execution pattern inside each region to be the signature of the program behavior for the region. It's known as the **basic block vector**. Here is an example of a basic block vector.
<!-- _class: center-image -->
![basic block vecotr](09-sampling/basic_block_vecotr.png)

They use the basic block vectors to cluster and find the representative regions. They will predict the overall performance of the program by collecting only the representative regions' performance and sum them with weights.

---

## Statistical Sampling
<!-- _class: center-image -->
Representative methodologies: SMARTS, FSA

![width:950](09-sampling/statical_sampling.png)

Statistical sampling, as the name suggests, statistically selects its sampling units.

---

## More about Statistical Sampling

The representative simulation sampling methods in statistical sampling include **SMARTS** and **FSA**.

​Both methods periodically or randomly simulated in detailed for a small amount of execution throughout the whole program execution, and fast-forward between the detailed simulations.
They use the performance of the randomly distributed samples to predict the overall performance of the whole program execution.

---

## What should we know before we apply the techinuqes

<!-- warn people that different types of samplings guarentee different things -->
### No matter how great a tool or a technique is, misusing it can be DANGEROUS

Before using any of the sampling techiques, we need to make sure the sampling techique works for our experiments.
For example, SimPoint is designed to work with single-threaded workloads only, so **if our experiments require multi-threaded workloads, we should NOT use SimPoint with them.**
<!-- _class: center-image -->
![width:500](09-sampling/misuse_tool.png)

---

## What gem5 offers

In gem5, we have infrastructures for

1. SimPoint ([paper](https://cseweb.ucsd.edu/~calder/papers/ASPLOS-02-SimPoint.pdf))
2. LoopPoint ([paper](https://alenks.github.io/pdf/looppoint_hpca2022.pdf))
3. ElFie ([paper](https://heirman.net/papers/patil2021elfies.pdf))
4. SMARTS ([paper](https://web.eecs.umich.edu/~twenisch/papers/isca03.pdf))
5. FSA ([paper](https://ieeexplore.ieee.org/document/7314164)) (Might not be supported officially)

---

<!-- _class: start -->

## Targeted Sampling in gem5

---

## Targeted Sampling in gem5

- gem5 provides infrastructures for **SimPoint** and **LoopPoint** to analyze the program, take checkpoints for the representative regions, and run the representative regions.
Note that LoopPoint's analysis support is not currently supported in gem5 24.0 but is tested and prepared to be upstream to gem5 24.1.
- gem5 also provides infrastructures for **ElFies** to be executed in SE mode, but gem5 does not support creating ElFies files and information.

---

## SimPoint

As mentioned before, there are three steps in using SimPoint:

1. Analysis
2. Taking checkpoints
3. Run the regions

There are two key files related to using SimPoint in gem5:
1. [src/python/gem5/utils/simpoint.py](https://github.com/gem5/gem5/blob/stable/src/python/gem5/utils/simpoint.py)
2. [src/cpu/simple/probes/SimPoint.py](https://github.com/gem5/gem5/blob/stable/src/cpu/simple/probes/SimPoint.py)

We will step through them in this section

---

## SimPoint Analysis

In gem5, we use the `SimPoint` probe listener object to collect the information SimPoint needed to cluster the regions.
This object is defined in [src/cpu/simple/probes/SimPoint.py](https://github.com/gem5/gem5/blob/stable/src/cpu/simple/probes/SimPoint.py).

The `SimPoint` probe listener has two parameters: [interval](https://github.com/gem5/gem5/blob/stable/src/cpu/simple/probes/SimPoint.py#L47) and [profile_file](https://github.com/gem5/gem5/blob/stable/src/cpu/simple/probes/SimPoint.py#L48).

- The `interval` takes in a length as our definition of a region. It means that every time we execute n number of instructions, we see it as the end of a region. The default length is 100,000,000.
- The `profile_file` takes in a name for the output zip file. The default name is "simpoint.bb.gz".

In order to use this probe listener object, we need to attach it to an ATOMIC CPU. It will start collecting information as soon as the simulation starts and stops when the simulation ends.
After exiting the simulation, there will be a zip file with the basic block vector information for each region under the simulation outdir directory.

---

## Hands-On Time!

### 01-simpoint

All materials can be found under `materials/02-Using-gem5/09-sampling/01-simpoint`. The completed version is under `materials/02-Using-gem5/09-sampling/01-simpoint/complete`.
In this exercise, we will not modify any of the scripts, but just to run the scripts.
We will only work with [materials/02-Using-gem5/09-sampling/01-simpoint/simpoint-analysis.py](../../materials/02-Using-gem5/09-sampling/01-simpoint/simpoint-analysis.py) and [materials/02-Using-gem5/09-sampling/01-simpoint/simpoint3.2-cmd.sh](../../materials/02-Using-gem5/09-sampling/01-simpoint/simpoint3.2-cmd.sh).

### Goal

1. Run the SimPoint analysis
2. Process the data to get the representative regions and their weights

---

## 01-simpoint

Because the profiling might take a while, so we can run the simulation first with the following command

```bash
gem5 -re --outdir=full-detailed-run-m5out full-detailed-run.py
gem5 -re --outdir=simpoint-analysis-m5out simpoint-analysis.py
```

In this exercise, we are trying to create SimPoints for a simple workload.
The source code of the simple workload can be found in [materials/02-Using-gem5/09-sampling/01-simpoint/workload/simple_workload.c](../../materials/02-Using-gem5/09-sampling/01-simpoint/workload/simple_workload.c).
It allocates an array of one thousand 64 bits elements, assign each a number, then sum all up with one thousand iterations.
We can expect the program behavior of this workload to be really repeating.

---

## 01-simpoint

The [materials/02-Using-gem5/09-sampling/01-simpoint/simpoint-analysis.py](../../materials/02-Using-gem5/09-sampling/01-simpoint/simpoint-analysis.py) uses the `SimPoint` probe listener object that we introduced earlier to collect basic block information for this simple workload.
It connects the ATOMIC CPU core to the `SimPoint` probe listener using

```python
processor.get_cores()[0].core.addSimPointProbe(1_000_000)
```

The definition of this `addSimPointProbe()` function can be found under [src/cpu/simple/BaseAtomicSimpleCPU.py](https://github.com/gem5/gem5/blob/stable/src/cpu/simple/BaseAtomicSimpleCPU.py#L65).

In this example, we set the `interval_length` as 1,000,000, which means that we define a region as 1,000,000 instruction executed (committed).

---

## 01-simpoint

After the simulation finishes, we will see a zip file named `simpoint.bb.gz` under the `simpoint-analysis-m5out` folder.
We can unzip it with the following command

```bash
gzip -d -k simpoint.bb.gz
```

After unzipping it, we can look at the `simpoint.bb` file.
This file contains all basic block vector information for the simple workload.
There are 9 regions found in this workload.
Each region has a basic block vector, which starts with a `T`.

---

## 01-simpoint

As we can see, region 2 to region 9 have almost identical basic block vectors.

```bash
T:1900:222 :1901:222 :1902:999216 :1903:333
T:1900:222 :1901:222 :1902:999225 :1903:333
T:1900:222 :1901:222 :1902:999225 :1903:333
T:1900:222 :1901:222 :1902:999225 :1903:333
T:1900:222 :1901:222 :1902:999216 :1903:333
T:1900:222 :1901:222 :1902:999225 :1903:333
T:1900:222 :1901:222 :1902:999225 :1903:333
T:1900:222 :1901:222 :1902:999225 :1903:333
```

The similar basic block vectors indicate the program behavior for region 2 to region 9 are really similar. Therefore, we can expect to cluster region 2 to region 9 together, and pick one region out of it to be our representative region to represent the performance of all regions from region 2 to region 9.

---

## 01-simpoint

Let's further understand what this line means

```bash
T:1900:222 :1901:222 :1902:999216 :1903:333
```

- `T` means the start of the region's basic block vector.
- `:1900:222` means basic block 1900 executed (committed) 222 instructions. The key here is that 222 is NOT the number of time the basic block has been executed, but the number of time the basic block has been executed multiples with the basic block's total instructions. If we sum up all the instructions that have been executed by the basic blocks, we will get roughly the length of the region.`222+222+999216+333=999993`.

The next step is to use this information to cluster the regions and find the representative regions.
There are many methods to do it. In this exercise, we will be using the SimPoint3.2 tool that was provided by the SimPoint paper authors.

---

## 01-simpoint

The tool is already compiled under [materials/02-Using-gem5/09-sampling/01-simpoint/Simpoint3.2/bin/simpoint](../../materials/02-Using-gem5/09-sampling/01-simpoint/Simpoint3.2/bin/simpoint).
We also provided a runscript with the command in [materials/02-Using-gem5/09-sampling/01-simpoint/simpoint3.2-cmd.sh](../../materials/02-Using-gem5/09-sampling/01-simpoint/simpoint3.2-cmd.sh).

```bash
/workspaces/2024/materials/02-Using-gem5/09-sampling/01-simpoint/Simpoint3.2/bin/simpoint \
    -inputVectorsGzipped -loadFVFile simpoint-analysis-m5out/simpoint.bb.gz -k 5 -saveSimpoints \
    results.simpts -saveSimpointWeights results.weights
```

Let's look at this command.
It pass in the `simpoint.bb.gz` to the tool.
It set the number of clusters expected to be 5 using `-k 5`.
It saves the SimPoint information in `results.simpts` and their weights in `results.weight`.

---

## 01-simpoint

After running command, we will get the following file

```bash
#results.simpts`            # results.weights
2 0                         0.666667 0
1 1                         0.222222 1
0 3                         0.111111 3
```

This means that it found 3 SimPoints out of this program.
Region 2 is SimPoint 0, which has a weight of 0.666667.
Region 1 is SimPoint 1, which has a weight of 0.222222.
Region 0 is SimPoint 3, which has a weight of 0.111111.

There are not 5 clusters because the algorithm found that 3 clusters are enough to represent all the program behaviors.
The SimPoint tag number might not be continuous because it is the tag number for the cluster.

---



---

## ElFie

---

## ElFie example

---

## SMARTS

---

## SMARTS example

---

## Summary
