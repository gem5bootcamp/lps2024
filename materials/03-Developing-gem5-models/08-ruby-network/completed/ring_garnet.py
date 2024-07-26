"""
An example ring topology for the Ruby network using Garnet

Note that this requires exactly four L1 caches, two L2 caches, and two memory
controllers.

NOTE: THIS does not work!!!
"""

from m5.objects import (
    GarnetExtLink,
    GarnetIntLink,
    GarnetNetwork,
    GarnetNetworkInterface,
    GarnetRouter,
)

class MyRouter(GarnetRouter):
    def __init__(self, *args, **kwargs):
        super().__init__(*args, **kwargs)
        self.latency = 3

class Ring(GarnetNetwork):
    def __init__(self, ruby_system):
        super().__init__()
        self.ruby_system = ruby_system
        self.ni_flit_size = 32

    def connectControllers(
        self, l1i_ctrls, l1d_ctrls, l2_ctrls, mem_ctrls, dma_ctrls
    ):
        assert len(l1i_ctrls) == 4
        assert len(l1d_ctrls) == 4
        assert len(l2_ctrls) == 2
        assert len(mem_ctrls) == 2

        self.l1_routers = [MyRouter(router_id=i) for i in range(4)]
        self.l1i_ext_links = [
            GarnetExtLink(link_id=i, ext_node=c, int_node=self.l1_routers[i])
            for i, c in enumerate(l1i_ctrls)
        ]
        self.l1d_ext_links = [
            GarnetExtLink(link_id=4+i, ext_node=c, int_node=self.l1_routers[i])
            for i, c in enumerate(l1d_ctrls)
        ]

        self.l2_routers = [MyRouter(router_id=4+i) for i in range(2)]
        self.l2_ext_links = [
            GarnetExtLink(link_id=8+i, ext_node=c, int_node=self.l2_routers[i])
            for i, c in enumerate(l2_ctrls)
        ]

        self.mem_routers = [MyRouter(router_id=6+i) for i in range(2)]
        self.mem_ext_links = [
            GarnetExtLink(link_id=10+i, ext_node=c, int_node=self.mem_routers[i])
            for i, c in enumerate(mem_ctrls)
        ]
        if dma_ctrls:
            self.dma_ext_links = [
                GarnetExtLink(
                    link_id=12+i, ext_node=c, int_node=self.mem_routers[0]
                )
                for i, c in enumerate(dma_ctrls)
            ]

        self.int_links = [
            GarnetIntLink(
                link_id=0,
                src_node=self.l1_routers[0],
                dst_node=self.l1_routers[1],
            ),
            GarnetIntLink(
                link_id=1,
                src_node=self.l1_routers[1],
                dst_node=self.mem_routers[0],
            ),
            GarnetIntLink(
                link_id=2,
                src_node=self.mem_routers[0],
                dst_node=self.l2_routers[0],
            ),
            GarnetIntLink(
                link_id=3,
                src_node=self.l2_routers[0],
                dst_node=self.l1_routers[2],
            ),
            GarnetIntLink(
                link_id=4,
                src_node=self.l1_routers[2],
                dst_node=self.l1_routers[3],
            ),
            GarnetIntLink(
                link_id=5,
                src_node=self.l1_routers[3],
                dst_node=self.mem_routers[1],
            ),
            GarnetIntLink(
                link_id=6,
                src_node=self.mem_routers[1],
                dst_node=self.l2_routers[1],
            ),
            GarnetIntLink(
                link_id=7,
                src_node=self.l2_routers[1],
                dst_node=self.l1_routers[0],
            ),
        ]

        # Required by SimpleNetwork for some magic behind the scenes
        self.ext_links = (
            self.l1i_ext_links
            + self.l1d_ext_links
            + self.l2_ext_links
            + self.mem_ext_links
            + getattr(self, "dma_ext_links", [])
        )
        self.routers = (
            self.l1_routers
            + self.l2_routers
            + self.mem_routers
        )
        self.netifs = [GarnetNetworkInterface(id=i) \
                    for (i,n) in enumerate(self.ext_links)]
