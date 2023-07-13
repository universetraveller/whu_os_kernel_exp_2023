cd linux && /usr/local/qemu/bin/qemu-system-riscv64 -machine virt -cpu rv64 -nographic -smp 1 -m 2G -kernel arch/riscv/boot/Image -append "root=/dev/vda console=ttyS0" -initrd ../rootfs.img
