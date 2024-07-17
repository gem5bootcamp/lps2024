---
marp: true
paginate: true
theme: gem5
title: Running Things on gem5

---

<!-- _class: title -->

## Running Things on gem5

---

## What we will cover

- Intro to Syscall Emulation mode
- m5ops
- Annotating workloads
- Cross-compiling workloads
- Traffic generator

---

<!-- _class: start -->
## Intro to Syscall Emulation Mode

---

## What is Syscall Emulation mode, and when to use/avoid it

**Syscall Emulation (SE)** mode does not model all the devices in a system. It focuses on simulating the CPU and memory system. It only emulates Linux system calls, and only models user-mode code.

SE mode is a good choice when the experiment does not need to model the OS (such as translations), does not need a high fidelity model, and faster simulation speed is needed.

However, if the experiment needs to model the OS interaction, or needs to model a system in high fidelity, then we should use the full-system (FS) mode. The FS mode will be covered in [07-full-system](07-full-system.md).

---

<!-- _class: start -->

## m5ops

---

## What is m5ops

- The **m5ops** provides different funcitonilties that can be used to communicate between ​the simulated workload and the simulator
  - the commonly used functionailites, and more can be found in [the m5ops doucmentation](https://www.gem5.org/documentation/general_docs/m5ops/):
    - exit [delay]: Stop the simulation in delay nanoseconds
    - workbegin: Cause an exit event of type, "workbegin", that can be used to mark the begining of an ROI
    - workend: Cause and exit event of type, "workend", that can be used to mark the ending of an ROI
    - resetstats [delay[period]]: Reset simulation statistics in delay nanoseconds; repeat this every period nanoseconds
    - dumpstats [delayp[period]]: Save simulation statistics to a file in delay nanoseconds; repeat this every period nanoseconds
    - checkpoint [delay [period]]: Create a checkpoint in delay nanoseconds; repeat this every period nanoseconds
    - switchcpu: Cause an exit event of type, “switch cpu,” allowing the Python to switch to a different CPU model if desired

---

## More about m5ops

There are three versions of the m5ops:

1. Instruction mode: it only works with native CPU models
2. Address mode: it works with native CPU models and KVM CPU (only supports arm and X86)
3. Semihosting: it works with native CPU models and Fast Model

Different mode should be used depending on the CPU type and ISA.

The address mode m5ops will be covered in [07-full-system](07-full-system.md) as gem5-bridge and [08-accelerating-simulation](08-accelerating-simulation.md) after introducing the KVM CPU.
**In this session, we will only cover the instruction mode.**

---

## When to use m5ops

There are two main ways of using the m5ops:

1. annotate workloads
2. gem5-bridge calls in disk image

In this session, we will focus on learning how to use the m5ops to annotate workloads.

---

## How to use m5ops

m5ops provides a library of functions for different functionailities. All functions can be found in [gem5/include/gem5/m5ops.h](../../gem5/include/gem5/m5ops.h).
The commonly used functions (they are matched with the commonly used functionailites above):

-`void m5_exit(uint64_t ns_delay)`
-`void m5_work_begin(uint64_t workid, uint64_t threadid)`
-`void m5_work_end(uint64_t workid, uint64_t threadid)`
-`void m5_reset_stats(uint64_t ns_delay, uint64_t ns_period)`
-`void m5_dump_stats(uint64_t ns_delay, uint64_t ns_period)`
-`void m5_checkpoint(uint64_t ns_delay, uint64_t ns_period)`
-`void m5_switch_cpu(void)`

In order to call these functions in the workload, we will need to link the m5ops library to the workload.
So, first, we need to build the m5ops library.

---

## Building the m5ops library

The m5 utility is in [gem5/util/m5](../../gem5/util/m5) directory.​
In order to build the m5ops library,

1. cd into the ```gem5/util/m5``` directory
2. run ```scons [{TARGET_ISA}.CROSS_COMPILE={TARGET_ISA CROSS COMPILER}] build/{TARGET_ISA}/out/m5​```
3. the compiled library (`m5` is for command line utility, and `libm5.a` is a C library) will be at ```gem5/util/m5/build/{TARGET_ISA}/out```



### Note

- if the host system ISA does not match with the target ISA, then we will need to use the cross-compiler
- `TARGET_ISA` has to be in lower case

---

## Hand-on Time!

### 01-build-m5ops-library
### Let's build the m5ops library for x86 and arm64

```bash
cd gem5/util/m5
scons build/x86/out/m5
scons arm64.CROSS_COMPILE=aarch64-unknown-linux-gnu- build/arm64/out/m5
```

<!-- example output -->

---

## Linking the m5ops library to C/C++ code​

After building the m5ops library, we can link them to our workload by:​

1. Include **gem5/m5ops.h** in the workload's source file(s)

2. Add **gem5/include** to the compiler's include search path

3. Add **gem5/util/m5/build/{TARGET_ISA}/out** to the linker search path

4. Link against **libm5.a** with `-lm5`

---

## Hand-on Time!

### 02-annotate-this
### Let's annotate the workload with m5_work_begin and m5_work_end

In `materials/02-Using-gem5/03-running-in-gem5/02-annotate-this`, there is a workload source file [02-annotate-this.cpp](../../materials/02-Using-gem5/03-running-in-gem5/02-annotate-this/02-annotate-this.cpp) and a [Makefile](../../materials/02-Using-gem5/03-running-in-gem5/02-annotate-this/Makefile).

The workload mainly does two things:

Write a string to the standard out
```cpp
write(1, "This will be output to standard out\n", 36);
```
---

## 02-annotate-this

and output all the files and folders names in the current directory
```cpp
struct dirent *d;
DIR *dr;
dr = opendir(".");
if (dr!=NULL) {
    std::cout<<"List of Files & Folders:\n";
    for (d=readdir(dr); d!=NULL; d=readdir(dr)) {
        std::cout<<d->d_name<< ", ";
    }
    closedir(dr);
}
else {
    std::cout<<"\nError Occurred!";
}
std::cout<<std::endl;
```

---

## 02-annotate-this

### our goal in this exercise

Mark ```write(1, "This will be output to standard out\n", 36);``` as our region of interest so we can see the execution trace of the syscall.

### how do we do that

1. include the m5ops header file with ```#include <gem5/m5ops.h>```
2. call ```m5_work_begin(0, 0);``` right before ```write(1, "This will be output to standard out\n", 36);```.
3. call ```m5_work_end(0, 0);``` right after ```write(1, "This will be output to standard out\n", 36);```
4. compile the workload with the following requirments
    1. Add **gem5/include** to the compiler's include search path
    2. Add **gem5/util/m5/build/x86/out** to the linker search path
    3. Link against **libm5.a** using `-lm5`

---

## 02-annotate-this

For step 4, we can modifiy the [Makefile](../../materials/02-Using-gem5/03-running-in-gem5/02-annotate-this/Makefile) to have it run
```Makefile
$(GXX) -o 02-annotate-this 02-annotate-this.cpp -I$(GEM5_PATH)/include -L$(GEM5_PATH)/util/m5/build/$(ISA)/out -lm5
```
If you are having any troubles, the completed version is under ```materials/02-Using-gem5/03-running-in-gem5/02-annotate-this/complete```.

If the workload is successfully compiled, we can try to run it with
However, we will see the following error:
```bash
Illegal instruction (core dumped)
```
This is because the host does not recognize the instruction version of m5ops.
This is also the reason why we will need to use the address version of m5ops if we use the KVM CPU for our simulation.

---

## Hand-on Time!

### 03-run-x86-SE
### Let's write a handler to handle the m5 exit events

What I want to do in this exercies:
1. Have pepole run ```gem5 -re 03-run-x86-SE.py``` without any modification and show them what is the default handler for workbegin and workend in stdlib.
2. Have people to add a workbegin handler and a workend handler that uses debug.flags["ExecAll] to enable and disable debug flag to see the execution trace of the syscall.
3. Point out that SE mode do not time the syscall and it can read/write the host directory

---

<!-- _class: start -->

## Cross-compiling

---

## Cross-compiling from one ISA to another.​

<!-- Insert image here -->

![Cross compiling width:800px center](03-running-in-gem5-imgs/slide-24.drawio.jpg)

---

## Hand-on Time!

### 04-cross-compile-workload
### Let's cross compile the workload to arm64 statically and dynmaically

What I want to do in this execerise:
1. have people to cross compile the workload statically and dynamically by modifying the Makefile
2. point out the cross compiler and "-static"

---

## Hand-on Time!

### 05-run-arm-SE
### Let's run the compiled arm64 workloads and see what happens

What I want to do in this execerise:
1. first let people run the static one, and let them know this is arm
2. then let people run the dynamic one which will lead to errors
3. show people how to redirect lib

---

<!-- _class: start -->
## Traffic Generator in gem5

---

## Traffic Generator

- A traffic generator module generates stimuli for the memory system.​

- Used for creating test cases for caches, interconnects, and memory controllers, etc.​

![Traffic generator center](03-running-in-gem5-imgs/slide-29.drawio.png)

---

## gem5’s Traffic Gen: PyTrafficGen​

- PyTrafficGen is a traffic generator module (SimObject) located in: `gem5/src/cpu/testers/traffic_gen`

- Used as a black box replacement for any generator of read/write requestor.​

![PyTrafficGen center](03-running-in-gem5-imgs/slide-30.drawio.png)

---

## PyTrafficGen: Params​

- PyTrafficGen’s parameters allow you to control the characteristics of the generated traffic.​

| Parameter | Definition |
| :--------- | ---------- |
| pattern | The pattern of generated addresses: linear/ random ​|
| duration | The duration of generating requests in ticks (quantum of time in gem5).​ |
| start address​ | The lower bound for addresses that the synthetic traffic will access.​ |
| end address​ | The upper bound for addresses that the synthetic traffic will access.​ |
| minimum period​ | The minimum timing difference between two consecutive requests in ticks. ​|
| maximum period​ | The maximum timing difference between two consecutive requests in ticks. ​|
| request size | The number of bytes that are read/written by each request. ​|
| read percentage​ | The percentage of reads among all the requests, the rest of requests are write requests.​ |

---

## Hand-on Time!

### 06-traffic-gen
### Let's run an example on how to use the traffic generator

---

## Desserts

### SE mode does NOT implement many things!​

- Filesystem​
- Most of systemcalls
- I/O devices
- Interrupts
- TLB misses
- Page table walks
- Context switches
- multiple threads
  - You may have a multithreaded execution, but there's no context switches & no spin locks​

---

## More desserts

### m5ops can be used to communicate between simulated workload and the simulator

### Traffic generator can abstract away the details of a data requestor such as CPU for generating test cases for memory systems

