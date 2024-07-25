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

<!-- some artistic plot here -->

---

## What is sampling

<!-- satistical sampling -->
<!-- targeted sampling -->
There are two major types of sampling:

1. Targeted sampling
2. Statistical sampling

### Targeted sampling

Representative methodologies: SimPoint, LoopPoint
<!-- class: center-image -->
![width:950](09-sampling/targeted_sampling.png)

---

## More about sampling

### Statistical sampling

Representative methodologies: SMARTS, FSA

![width:950](09-sampling/statical_sampling.png)

---

## What should we know before we apply the techinuqes

<!-- warn people that different types of samplings guarentee different things -->
### No matter how great a tool or a technique is, misusing it can be DANGEROUS

Before using any of the sampling techiques, we need to make sure the sampling techique works for our experiments.
For example, SimPoint is designed to work with single-threaded workloads only, so **if our experiments require multi-threaded workloads, we should not use SimPoint with them.**

![width:500](09-sampling/misuse_tool.png)

---

## What gem5 offers

In gem5, we have infrastructure for

1. SimPoint ([original paper](https://cseweb.ucsd.edu/~calder/papers/ASPLOS-02-SimPoint.pdf))
2. LoopPoint ([original paper](https://alenks.github.io/pdf/looppoint_hpca2022.pdf))
3. SMARTS ([original paper](https://web.eecs.umich.edu/~twenisch/papers/isca03.pdf))



---

## SimPoint

---

## LoopPoint

---

## SimPoint example

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


