"""
An example ring topology for the Ruby network.

Note that this requires exactly four L1 caches, two L2 caches, and two memory
controllers.
"""

from m5.objects import (
    SimpleExtLink,
    SimpleIntLink,
    SimpleNetwork,
    Switch,
)

# Add class



# Add connectControllers


# Create routers for the L1D and L1I caches


# Create routers for the L2s and memory

# if we're running is FS mode, we need DMAs

# Create internal links

# A little more boilerplate
