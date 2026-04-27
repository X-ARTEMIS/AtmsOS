#!/bin/sh
set -e
. ./build.sh

mkdir -p isodir
mkdir -p isodir/boot
mkdir -p isodir/boot/grub

cp sysroot/boot/AtmsOS.kernel isodir/boot/AtmsOS.kernel
cat > isodir/boot/grub/grub.cfg << EOF
menuentry "AtmsOS" {
	multiboot /boot/AtmsOS.kernel
}
EOF
grub-mkrescue -o AtmsOS.iso isodir
