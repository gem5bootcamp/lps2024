---
marp: true
paginate: true
theme: gem5
title: Accelerating gem5 simulations
---

<!-- _class: title -->

## Accelerating gem5 simulations

In this section, we will cover how to accelerate gem5 simulations using fast-forwarding and checkpointing.

---

## gem5 is sllooww

(Not our fault: It’s the natural of simulation)
<!-- class: center-image -->

![width:1000](08-accelerating-simulation-img/fig1.drawio.svg)

---

## Fortunately, there are some work arounds

### You don't need to simulate everything perfectly, or at all

<!-- class: center-image -->

![width:800](08-accelerating-simulation-img/fig2.drawio.svg)

---

## Simulations can always be made faster by simulating less

![width:720 bg](08-accelerating-simulation-img/fig3.png)

---

## This isn't always a bad thing... a lot of a simulation is not interesting to us

![width:990 bg](08-accelerating-simulation-img/fig4.png)

---

## Our goal is to just run the region of interest in detailed mode

### how do we get to the ROI fast?

- Using KVM to fast-forward
- Taking and restoring a checkpoint

---

## Fast-forwarding with KVM

- KVM: Kernel-based virtual machine
- Uses hardware virtualization extensions (e.g., nested page tables, vmexit, etc.)
- gem5 uses KVM as the “CPU model”, i.e., the code is actually executing on the host CPU
- It is fast!

### Things to be aware of when using KVM to fast forward

- **the guest ISA (the ISA that is simulating) must matches the host ISA**
- **the m5 (gem5-bridge) annotation must be address version**

---

## Address version m5 (gem5-bridge) annotation

The m5 (gem5-bridge) annotation we did in [03-running-in-gem5](03-running-in-gem5.md) will not work with KVM because the host does not recognize the m5 (gem5-bridge) instructions.
The following error message will appear:
> illegal instruction (core dumped)

<!-- put an example here -->

### Note

"magic" instruction for

X86 is `0XFFFF0000`
arm64 is `0x10010000`

---

## Hand-on Time!

### Let's use KVM to fast forward to the ROI

1. Setup a switchable processor to switch from the KVM CPU to O3 CPU after reaching
2. Setup exit event handler to switch the cpu type when m5 workbegin is encountered
3. Let's boot it up!

<!-- give example here -->

---

## Checkpointing

- Saves the architectural state of the system
- Saves *some* microarchitectural state
- With some limitations, a checkpoint that is taken with one system configuration  can be restore with different system configurations
  - the number of core has to be the same
  - the size of the memory has to be the same
  - the workload and its dependencies (i.e. the disk image) have to be the same

<!-- example error if not the same -->

---

## Hand-on Time!

### Let's take a checkpoint at the beginning of the ROI!

<!--  -->

---

## Conclusion



