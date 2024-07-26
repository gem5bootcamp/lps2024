---
marp: true
paginate: true
theme: gem5
title: gem5's Standard Library
---

<!-- _class: title -->

## gem5's Standard Library

---

## Why a Standard Library?

When done without the library you must define *every part* of your simulation: Every Simobject, connected correctly to every port, for every part, no matter now small.
This can result in scripts of hundreds of lines of code even for the most basic of simulations.

This resulted in:

- A lot of duplicated code.
- Error-prone configurations.
- A lock of portability between different simulations setups.

In addition, while there is no "one size fits all" for gem5 users, most users have similar needs and requirements for their simulations; requiring only a few modifications off some commonly used configuration systems.
Prior to the creation of the standard library users would regularly circulte long complex scripts and hack at them endlessly.
Such practises inspired the creation of the gem5 Standard Library.

---

## What is the Standard Library?

The purpose of the gem5 Standard library is to provide a set of pre-defined components that can be used to build a simulation that does the majority of the work for you.

The the remainder not supported by the standard library, APIs are provided that make it easy to extend the library for your own use.

---

## The metaphor: Plugging components together into a board

![overview of some standard library components and their relationships bg fit 90%](01-stdlib-imgs/stdlib-design.drawio.svg)

---

## Main idea

Due to is modular, object-oriented design, gem5 can be thought of as a set of components that can be plugged together to form a simulation.

The main types of components are:

- **Component**: A component is a *model* with set parameters (or possibly a few customizable parameters). The types of components are *boards*, *processors*, *memory systems*, and *cache hierarchies*.
- **Board**: The "backbone" of the system. You plug components into the board. The board also contains the system-level things like devices, workload, etc. It's the boards job to negotiate the connections between other components.
- **Processor**: Processors connect to boards and have one or more *cores*
- **Cache hiearchy**: A cache hierarchy is a set of caches that can be connected to a processor and memory system.
- **Memory system**: A memory system is a set of memory controllers and memory devices that can be connected to the cache hierarchy.

---

## Quick note on relationship to gem5 models

The C++ code in gem5 specifies *parameterized* **models**.
These models are then instantiated in the Python scripts.

The standard library is a way to *wrap* these models in a standard API.
Most of the components in the standard library are models with pre-specified parameters.

If you want to change the values of the parameters of the models, you are encouraged to *extend* (i.e., subclass) the components in the standard library or create new components.
We will see some examples of this over the coming lectures.

---

## Let's get started!

<!-- _class: code-80-percent -->

In [`materials/02-Using-gem5/01-stdlib/01-components.py`](../../materials/02-Using-gem5/01-stdlib/01-components.py) you'll see some imports already included for you.

```python
from gem5.components.boards.x86_board import X86Board
from gem5.components.cachehierarchies.ruby.mesi_two_level_cache_hierarchy import (
    MESITwoLevelCacheHierarchy,
)
from gem5.components.memory.single_channel import SingleChannelDDR3_1600
from gem5.components.processors.cpu_types import CPUTypes
from gem5.components.processors.simple_switchable_processor import (
    SimpleSwitchableProcessor,
)
from gem5.isas import ISA
from gem5.resources.resource import obtain_resource
from gem5.simulate.exit_event import ExitEvent
from gem5.simulate.simulator import Simulator
```

---

## Let's build a system with a cache hierarchy

```python
cache_hierarchy = MESITwoLevelCacheHierarchy(
    l1d_size="16kB",
    l1d_assoc=8,
    l1i_size="16kB",
    l1i_assoc=8,
    l2_size="256kB",
    l2_assoc=16,
    num_l2_banks=1,
)
```

`MESITwoLevelCacheHierarchy` is a component that represents a two-level MESI cache hierarchy.
This uses the [Ruby memory model](05-cache-hierarchies.md).

The component for the cache hierarchy is parameterized with the sizes and associativities of the L1 and L2 caches.

---

## Next, let's add a memory system

```python
memory = SingleChannelDDR3_1600()
```

This component represents a single-channel DDR3 memory system.

There is a `size` parameter that can be used to specify the size of the memory system of the simulated system. You can reduce the size to save simulation time, or use the default for the memory type (e.g., one channel of DDR3 defaults to 8 GiB).

There are also multi channel memories available.
We'll cover this more in [Memory Systems](06-memory.md).




---

## Where to find stuff: Importing in a script

```python
from gem5.components import *
```

The "slides-to-translate" directory contains slides that cover stdlib topics from my HPCA tutorial.
These need translated and in some cases expanded upon to for the Bootcamp.
If the slide references materials, these are available in the "slides-to-translate/materials" directory.
Compelted materials can be found in the "slides-to-translate/materials-completed" directory.

