from m5.objects.ClockedObject import ClockedObject
from m5.params import *


class InspectorGadget(ClockedObject):
    type = "InspectorGadget"
    cxx_header = "bootcamp/inspector-gadget/inspector_gadget.hh"
    cxx_class = "gem5::InspectorGadget"

    cpu_side_port = ResponsePort(
        "ResponsePort to received requests from CPU side."
    )
    mem_side_port = RequestPort(
        "RequestPort to send received requests to memory side."
    )

    inspection_buffer_entries = Param.Int(
        "Number of entries in the inspection buffer."
    )

    output_buffer_entries = Param.Int("Number of entries in output buffer.")

    response_buffer_entries = Param.Int(
        "Number of entries in the response buffer."
    )
