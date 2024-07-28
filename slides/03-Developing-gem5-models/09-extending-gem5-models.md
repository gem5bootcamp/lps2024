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

## Probe Point

There are three components related to probe point in gem5:

1. [ProbeManger](https://github.com/gem5/gem5/blob/stable/src/sim/probe/probe.hh#L163)
2. [ProbePoint](https://github.com/gem5/gem5/blob/stable/src/sim/probe/probe.hh#L146)
3. [ProbeListener](https://github.com/gem5/gem5/blob/stable/src/sim/probe/probe.hh#L126)

### Use-case of Probe Points

- Profiling a component without adding too much to the component's codebase
- Making more flexible exit events
- Tracking advance behaviors
- More

---

<!-- _class: center-image -->

## More about Probe Point

- Every SimObject has a ProbeManager
- The ProbeManager manages all registered ProbePoints and the connected ProbeListeners for the SimObject
- One ProbePoint can notify multiple ProbeListeners, and one ProbeListener can listen to multiple ProbePoints
- One ProbeListener can only attach to one SimObject

![](09-extending-gem5-models-imgs/probepoint-diagram.drawio.svg)

---

## How to use Probe Point?

1. Create a ProbePoint in a SimObject
2. Register the ProbePoint with the SimObject's ProbeManager
3. Create a ProbeListener
4. Connect the ProbeListener to the SimObject and register it with the SimObject's ProbeManager

Let's try it with a simple example!

---

## Hands-On Time!

### 01-local-inst-tracker

Currently, in gem5, there is not a straight-forward method to raise an exit event after we executed (committed) a number of instructions. We can easily create one with Probe Point. We will start with creating ProbeListener that listen to each core's `Committed` ProbePoint, then in 02-global-inst-tracker, we will create a SimObject to manage all the ProbeListener to raise an exit event after the simulation executed (committed) a number of instructions.

### Goal

1. Create a ProbeListener called the local-instruction-tracker
2. Connect the ProbeListener to the BaseCPU and register our ProbeListener with the BaseCPU's ProbeManager
3. Run a simple simulation with the local-instruction-tracker

---

## Hands-On Time!

### 01-local-inst-tracker



---
