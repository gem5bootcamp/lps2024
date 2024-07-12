---
marp: true
paginate: true
theme: gem5
title: Modeling DRAM in gem5
---

<!-- _class: title -->

## Modeling DRAM in gem5

Description Goes Here

---

<!-- _class: center-image -->

## Memory System

### gem5's Memory system consists of two main components

1. Memory Controller

2. Memory Interface(s)
<br/>

![Diagram of the gem5 memory system](06-memory-imgs/memory-system.drawio.png)

---

<!-- _class: center-image -->

## Memory Controller

### When `MemCtrl` receives packets...

1. Packets enqueued into the read and/or write queues

2. Applies **scheduling algorithm** (FCFS, FR-FCFS, ...) to issue read and write requests
<br/>

![Diagram of the gem5 memory controller queues](06-memory-imgs/memory-controller-queues.drawio.png)

---

<!-- _class: center-image -->

## Memory Interface

-  The memory interface implements the **architecture** and **timing parameters** of the chosen memory type.

- It manages the **media specific operations** like activation, pre-charge, refresh and low-power modes, etc.
<br/>

![Diagram of the gem5 memory interface](06-memory-imgs/memory-interface.drawio.png)

---

<!-- _class: center-image -->

## gem5's Memory Controllers

![Hierarchy of gem5 memory controller classes](06-memory-imgs/memory-controller-classes.drawio.png)

---

<!-- _class: center-image -->

## gem5's Memory Interfaces

![Hierarchy of gem5 memory interface classes](06-memory-imgs/memory-interface-classes.drawio.png)

---

## Configuring Memory Controllers & Interfaces

![w:550px](06-memory-imgs/memory-controller-script.png) ![w:550px](06-memory-imgs/memory-controller-script-hetero.png)

For full list of their configuration options, investigate their Python object files in: `gem5/src/mem`

---

## Configuring Memory Controllers & Interfaces

![w:1100px](06-memory-imgs/memory-controller-script-hbm.png)

For full list of their configuration options, investigate their Python object files in: `gem5/src/mem`

---

## CommMonitor

- SimObject monitoring communication happening between two ports

- Does not have any effect on timing

- `gem5/src/mem/CommMonitor.py`

---

<!-- _class: center-image -->

## CommMonitor

### Simple system to modify

![Simple system diagram](06-memory-imgs/comm-monitor-0.drawio.png)

### Let's simulate:

    > gem5-x86 –outdir=results/simple materials/extra-topics/02-monitor-and-trace/simple.py

---

<!-- _class: center-image -->

## CommMonitor

### Let's add the CommMonitor

![Simple system with CommMonitor diagram](06-memory-imgs/comm-monitor-1.drawio.png)

### Let's simulate:

    > gem5-x86 –outdir=results/simple_comm materials/extra-topics/02-monitor-and-trace/simple_comm.py
    > diff results/simple/stats.txt results/simple_comm/stats.txt

---

## Address Interleaving

### Idea: we can parallelize memory accesses

- For example, we can access multiple banks/channels/etc at the same time

- Use part of the address as a selector to choose which bank/channel to access

- Allows contiguous address ranges to interleave between banks/channels

---

<!-- _class: center-image -->

## Address Interleaving

### For example...

![Diagram showing an example of address interleaving](06-memory-imgs/address-interleaving.drawio.png)

---

## Address Interleaving

### Using address interleaving in gem5

- We can AddrRange constructors to define a selector function
    - `src/base/addr_range.hh`

- Example: standard library's multi-channel memory
    - `gem5/src/python/gem5/components/memory/multi_channel.py`

---

## Address Interleaving

### There are two constructors

Constructor 1:

    AddrRange(Addr _start,
              Addr _end,
              const std::vector<Addr> &_masks,
              uint8_t _intlv_match)

`_masks`: an array of masks, where bit `k` of selector is the XOR of all bits specified by `masks[k]`

---

## Address Interleaving

### There are two constructors

Constructor 2 (legacy):

    AddrRange(Addr _start,
              Addr _end,
              uint8_t _intlv_high_bit,
              uint8_t _xor_high_bit,
              uint8_t _intlv_bits,
              uint8_t _intlv_match)

Selector defined as two ranges:

    addr[_intlv_high_bit:_intlv_low_bit] XOR addr[_xor_high_bit:_xor_low_bit]
