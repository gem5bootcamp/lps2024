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
<!-- - Bitset
- Random number generation -->
<!-- - Signal ports? a big maybe. if I have extra time I'll dive in to gem5/src/dev/IntPin.py -->

### OOO Action

If you have never built /gem5/build/X86/gem5.fast, please do so with the following command due to the time needed to build gem5 might be long

```bash
cd gem5
scons build/X86/gem5.fast -j$(nproc)
```

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

All completed materials can be found under `materials/03-Developing-gem5-models/09-extending-gem5-models/01-local-inst-tracker/complete`.

Let's start with creating a `inst_tracker.hh` and `inst_tacker.cc` files under `/src/cpu/probes`.

In the `inst_tracker.hh` file, we need to include the headers and necessary libraries:

```cpp
#ifndef __CPU_PROBES_INST_TRACKER_HH__
#define __CPU_PROBES_INST_TRACKER_HH__

#include "sim/sim_exit.hh"
#include "sim/probe/probe.hh"
#include "params/LocalInstTracker.hh"
```
---

## 01-local-inst-tracker

Then, we can create a `ProbeListenerObject` called `LocalInstTracker`. A `ProbeListenerObject` is a minimum wrapper of the `ProbeListener` that allows us to attach it to the SimObject we want to listen to.

```cpp
namespace gem5
{
class LocalInstTracker : public ProbeListenerObject
{
  public:
    LocalInstTracker(const LocalInstTrackerParams &params);
    virtual void regProbeListeners();
}
```

Now, we have a constructor for the `LocalInstTracker` and a virtual function `regProbeListeners()`. The `regProbeListeners` is called automatically when the simulation starts. We will use it to attach to the ProbePoint.

---

## 01-local-inst-tracker

Our goal is to count the number of committed instruction for our attached core, so we can listen to the `ppRetiredInsts` ProbePoint that already exists in the `BaseCPU` SimObject.

Let's look at the `ppRetiredInsts` ProbePoint a bit.
It is a `PMU probe point` that as suggested in [src/cpu/base.hh](https://github.com/gem5/gem5/blob/stable/src/sim/probe/pmu.hh) that it will notify the listeners with a `uint64_t` variable.
In [src/cpu/base.cc:379](https://github.com/gem5/gem5/blob/stable/src/cpu/base.cc#L379), we can see that it is registered to the `BaseCPU` SimObject's ProbeManager with the string `"RetiredInsts"`. All ProbePoints are registered with the ProbeManager with a unique string variable, so we can use this string later to attach our listeners to this ProbePoint. Lastly, we can find that this ProbePoint notifies its listeners with an integer `1` when there is an instruction committed in [src/cpu/base.cc:393](https://github.com/gem5/gem5/blob/stable/src/cpu/base.cc#L393).
Now that we know what ProbePoint we are targeting, we can set it up for our LocalInstTracker.

---

## 01-local-inst-tracker


