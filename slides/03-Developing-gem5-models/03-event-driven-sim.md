---
marp: true
paginate: true
theme: gem5
title: Programming Event-Driven Simulation
math: mathjax
---

<!-- _class: title -->

## Programming Event-Driven Simulation

Here you'll learn how to actually model architecture!

---

- Creating a simple callback event
- Scheduling events
- Modeling bandwidth and latency with events
- Other SimObjects as parameters
- GoodByeExampleFlag and CompoundFlag(GreetExampleFlag, HelloExampleFlag, GoodByeExampleFlag)
- Hello/Goodbye example with buffer

---

## Detour: Let's Take a Look at Other Slides

```cpp
Jason's event driven slides.
```

---
<!-- _class: small-code -->

## Event-Driven Simulation: Abstract Thoughts

`Event-Driven` Simulation, is a method for simulation where the simulator reacts to the occurrence of `events`. Each type of `event` will have its own specific reaction. The reaction to an `event` is defined by a call to a specific function that is referred to as the `callback` function. The `callback` function might itself cause new `events` to occur. The new `events` could of the same type as the `event` that caused the call to the `callback` function or of different types.

Let's look at an example to understand it better. Let's say that at time $t_0$ event $A$ occurs. The simulator will react by calling $A.callback$. Let's say below is the definition for $A.callback$.

```python
def A::callback():
    print("Reacting to Event A")
    delay = 1000
    curr_time = Simulator.get_current_time()
    schedule(B, current_time + delay)
```

This way every time event $A$ occurs, event $B$ occurs 1000 units of time after which the simulator will react to by calling $B.callback$

---

## Event-Driven Simulation: Practical View

An event-driven simulator needs to facilitate the following:

- Notion of time: The simulator needs to track the global time of the simulation and allow access to current time. It also needs to move the time forward.
- Interface to `events`: The simulator needs to define the base interface for `events` in the simulator so that they can be defined and raise (i.e. make occur/schedule) new `events`.
  - The base interface of `event` should allow for tieing `events` to `callback` functions.

Let's look at how this will look like if you were to write your hardware simulator.

1- In the beginning ($t = 0$), the simulator will schedule an event that makes the CPU cores fetch an instruction, let's call that type of event `CPU::fetch`.
2- When simulator reaches ($t = 0$), the simulator will react to all the `events` that are scheduled at that time. If we have 2 cores, this means that simulator needs to call `cpu_0::fetch::callback` and `cpu_1::fetch::callback`.

Continued on next slide.

---

## Event-Driven Simulation: Practical View cont.

3- `CPU::fetch::callback` will have to then find out what the next program counter is and send a request to the instruction cache to fetch the instruction. Therefore, it will schedule an event like `CPU::accessICache` in the future. To impose the latency of the fetch we will schedule `CPU::accessICache` in `current_time + fetch_delay`, e.g. `schedule(CPU::accessICache, currentTime() + fetch_delay)`. This will raise two `CPU::accessICache` events (e.g. `cpu_0::accessICache` and `cpu_1::accessICache`) `fetch_delay` into the future.
4- When the simulator has finished reacting to all events that occured at $t = 0$, it will move time to the closest time that an event is scheduled to occur ($t = 0 + fetch\_delay$ in this case).
5- At time $t= fetch\_delay$ the simulator will call `cpu_0::accessICache::callback` and `cpu_1::accessICache::callback` to react to both events. These events will probably access the instruction caches and then might schedule event to handle misses in the cache like `Cache::handleMiss`.
6- This process continue until the program we're simulating is finished.

---
<!-- _class: small-code -->

## Event-Driven Simulation in gem5

Let's look at `src/sim/eventq.hh`. In there you will see a declaration for class `Event` that has a function called `process` like below.

```cpp
  public:

    /*
     * This member function is invoked when the event is processed
     * (occurs).  There is no default implementation; each subclass
     * must provide its own implementation.  The event is not
     * automatically deleted after it is processed (to allow for
     * statically allocated event objects).
     *
     * If the AutoDestroy flag is set, the object is deleted once it
     * is processed.
     *
     * @ingroup api_eventq
     */
    virtual void process() = 0;
```

---
<!-- _class: small-code -->

## A Hypothetical Example for Event

Let's now see how class `Event` would be used in a `ClockedObject` that models a CPU.

```cpp
class CPU: public ClockedObject
{
  public:
    void processFetch(); // Function to model fetch
  private:
    class FetchEvent: public Event
    {
      private:
        CPU* owner;
      public:
        FetchEvent(CPU* owner): Event(), owner(owner)
        {}
        virtual void process() override
        {
            owner->processFetch(); // call processFetch from the CPU that owns this
        }
    };
    FetchEvent nextFetch;
};
```

In this example every time, an instance of `FetchEvent` occurs (`cpu_0::nextFetch` and not `CPU::nextFetch`), the simulator will call `processFetch` from the `CPU` instance that owns the event.

---
<!-- _class: small-code -->

## EventFunctionWrapper

In addition to class `Event`, you can find the declaration for `EventFunctionWrapper` in `src/sim/eventq.hh`. This class wraps an `event` with a callable object that will be called when `Event::process` is called. The following lines from `src/sim/eventq.hh` are useful to look over.

```cpp
  public:
    /**
     * This function wraps a function into an event, to be
     * executed later.
     * @ingroup api_eventq
     */
    EventFunctionWrapper(const std::function<void(void)> &callback,
                         const std::string &name,
                         bool del = false,
                         Priority p = Default_Pri)
        : Event(p), callback(callback), _name(name)
    {
        if (del)
            setFlags(AutoDelete);
    }
    void process() { callback(); }
```

For `EventFunctionWrapper` the function `process` is defined as a call to `callback` which is passed as an argument to the constructor of `EventFunctionWrapper`.

---
<!-- _class: small-code -->

## Detour: m5.simulate: SimObject::startup

Below is a snippet of code from the definition of `m5.simulate` in `src/python/m5/simulate.py`:

```python
def simulate(*args, **kwargs):
    # ...
    if need_startup:
        root = objects.Root.getInstance()
        for obj in root.descendants():
            obj.startup()
        need_startup = False
```

By calling `m5.simulate`, gem5 will call function `startup` from every `SimObject` in the system. Let's take a look at `startup` in header file for `SimObject` in `src/sim/sim_object.hh`.

```cpp
    /**
     * startup() is the final initialization call before simulation.
     * All state is initialized (including unserialized state, if any,
     * such as the curTick() value), so this is the appropriate place to
     * schedule initial event(s) for objects that need them.
    */
    virtual void startup();
```

`startup` is where we schedule the first `events` that trigger a simulation (`CPU::nextFetch` in our hypothetical scenario).

---

## HelloEvent

Now, let's add an `event` to our `HelloSimObject` to print `Hello ...` periodically for a certain number of times (i.e. `num_hellos`).
