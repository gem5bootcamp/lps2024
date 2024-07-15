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

<ul style="list-style-type: disc; padding-left: 20px; font-size: 1.2em;">
  <li style="margin-bottom: 20px;">ExitEvent.EXIT</li>
  <li style="margin-bottom: 20px;">ExitEvent.CHECKPOINT</li>
  <li style="margin-bottom: 20px;">ExitEvent.FAIL</li>
  <li style="margin-bottom: 20px;">ExitEvent.SWITCHCPU</li>
  <li style="margin-bottom: 20px;">ExitEvent.WORKBEGIN</li>
  <li style="margin-bottom: 20px;">ExitEvent.WORKEND</li>
  <li style="margin-bottom: 20px;">ExitEvent.USER_INTERRUPT</li>
  <li style="margin-bottom: 20px;">ExitEvent.MAX_TICK</li>
</ul>

More info can be found on [gem5 website](https://www.gem5.org/documentation/general_docs/m5ops/)

---

## (Holder for example slides on annotation)

---

## Now we mark the ROI, how can we get to it

### <span style="margin-top: 80px; display: block;">There are two ways:</span>

<ol style="margin-top: 50px; padding-left: 20px; font-size: 1.2em;">
  <li style="margin-bottom: 30px;">Fast-forwarding with KVM</li>
  <li style="margin-bottom: 30px;">Checkpoint</li>
</ol>

---

## Fast-forwarding with KVM


