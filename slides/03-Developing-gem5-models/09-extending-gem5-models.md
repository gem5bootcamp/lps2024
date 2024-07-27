---
marp: true
paginate: true
theme: gem5
title: Developing SimObjects in gem5
---

<!-- _class: title -->

## Useful Tools to Extend gem5 Models

---

## The Ninja Feature of gem5

There are many useful tools inside gem5 that do not have proper documentations.
In this section, we will cover

- Probe point
- Bitset
- Random number generation
<!-- - Signal ports? a big maybe. if I have extra time I'll dive in to gem5/src/dev/IntPin.py -->

---

<!-- _class: start -->

## Probe Point

---

<!-- _class: center-image -->

## Probe Point

There are three components related to probe point in gem5:

1. [ProbeManger](https://github.com/gem5/gem5/blob/stable/src/sim/probe/probe.hh#L163)
2. [ProbePoint](https://github.com/gem5/gem5/blob/stable/src/sim/probe/probe.hh#L146)
3. [ProbeListener](https://github.com/gem5/gem5/blob/stable/src/sim/probe/probe.hh#L126)

Every SimObject has a ProbeManager. The ProbeManager is responsible for managing the registered ProbePoints and ProbeListeners that are listening to the registered ProbePoints.

![](09-extending-gem5-models-imgs/probepoint-diagram.drawio.svg)

---
