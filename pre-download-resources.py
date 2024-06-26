from gem5.resources.resource import obtain_resource

# grep "obtain_resource(.*)" materials/isca24/ -roh | sort | uniq

obtain_resource("riscv-getting-started-benchmark-suite").get_local_path()
obtain_resource("x86-linux-kernel-5.4.0-105-generic").get_local_path()
obtain_resource("x86-m5-exit").get_local_path()
obtain_resource("x86-npb-is-size-s-run").get_local_path()
obtain_resource("x86-ubuntu-24.04-boot-no-systemd").get_local_path()
obtain_resource("x86-ubuntu-24.04-boot-with-systemd").get_local_path()
obtain_resource("x86-ubuntu-24.04-npb-img").get_local_path()
# obtain_resource("x86-ubuntu-24.04-npb-is-s-run").get_local_path()
