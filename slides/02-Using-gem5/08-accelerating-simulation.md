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

<div style="text-align: center;">
  <img src="08-accelerating-simulation-img/fig1.png" alt="Figure 1" style="width: 1200px;">
</div>

---

## Fortunately, there are some work arounds

### You don't need to simulate everything perfectly, or at all

<div style="text-align: center;">
  <img src="08-accelerating-simulation-img/fig2.png" alt="Figure 2" style="width: 720px;">
</div>

---

## Simulations can always be made faster by simulating less

<div style="text-align: center; margin-top: 100px">
  <img src="08-accelerating-simulation-img/fig3.png" alt="Figure 3" style="width: 720px;">
</div>

---

## This isn't always a bad thing... a lot of a simulation is of no interest to us

<div style="text-align: center; margin-top: 100px;">
  <img src="08-accelerating-simulation-img/fig4.png" alt="Figure 4" style="width: 990px;">
</div>

---

## Some techiques we provide

<ul style="font-size: 1.5em; line-height: 2em;">
  <li style="margin-bottom: 10px;">Different CPU models</li>
  <li style="margin-bottom: 10px;">KVM Mode</li>
  <li style="margin-bottom: 10px;">SE Mode</li>
  <li style="margin-bottom: 10px;">Checkpointing</li>
  <li style="margin-bottom: 10px;">Sampling: SimPoint and LoopPoint</li>
</ul>

---

<!-- ## SE mode vs FS mode -->

## What we will focus on this session

<ul style="font-size: 1.5em; line-height: 2em;">
  <li style="margin-bottom: 10px;">Annotate region of interest</li>
  <li style="margin-bottom: 10px;">Using KVM</li>
  <li style="margin-bottom: 10px;">Taking and restoring checkpoints</li>
</ul>

---

## Annotate region of interest

### our goal is to just run the ROI in detailed mode

<div style="text-align: center; margin-top: 100px;">
  <img src="08-accelerating-simulation-img/fig5.png" alt="Figure 4" style="width: 990px;">
</div>

### But how does the simulation knows when it gets to the ROI?

<span style="background-color: lightblue; font-size: 1.15em;">Exit Events</span> in gem5 allows us to communicate from the simulator to the host.

---

## gem5 Exit Events

### There are different types of exit events in gem5

- ExitEvent.EXIT
- ExitEvent.CHECKPOINT
- ExitEvent.FAIL
- ExitEvent.SIWTHCH

