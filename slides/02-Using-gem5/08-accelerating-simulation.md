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

![width:1200 bg](08-accelerating-simulation-img/fig1.png)

---

## Fortunately, there are some work arounds

### You don't need to simulate everything perfectly, or at all

![width:600 bg](08-accelerating-simulation-img/fig2.png)

---

## Simulations can always be made faster by simulating less

![width:720 bg](08-accelerating-simulation-img/fig3.png)

---

## This isn't always a bad thing... a lot of a simulation is of no interest to us

![width:990 bg](08-accelerating-simulation-img/fig4.png)

---

## our goal is to just run the ROI in detailed mode


### But how do we get to the ROI?

- Using KVM to fast-forward
- Taking and restoring a checkpoint

---

## Fast-forwarding with KVM

- KVM: Kernel-based virtual machine
-

```c
int main() {
  char[] hello = "hello world!";
  if (true) {
    printf(hello);
  }
}
```

---

