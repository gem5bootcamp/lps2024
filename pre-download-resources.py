from gem5.resources.resource import obtain_resource

# grep "obtain_resource(.*)" materials/isca24/ -roh | sort | uniq

obtain_resource("riscv-getting-started-benchmark-suite")
obtain_resource("x86-linux-kernel-5.4.0-105-generic")
obtain_resource("x86-m5-exit")
obtain_resource("x86-npb-is-size-s-run")
obtain_resource("x86-ubuntu-24.04-boot-no-systemd")
obtain_resource("x86-ubuntu-24.04-boot-with-systemd")
obtain_resource("x86-ubuntu-24.04-npb-img")
# obtain_resource("x86-ubuntu-24.04-npb-is-s-run")
