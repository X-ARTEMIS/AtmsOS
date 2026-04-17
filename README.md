# Artemis OS
(TBA)

## Manual Compilation
This will teach you how to manualy compile the source code into a bootable image.
### What you need
1. The GNU Linker from Binutils to link your object files into the final kernel.
2. The GNU Assembler from Binutils (or optionally NASM) to assemble instructions into object files containing machine code.
3. The GNU Compiler Collection to compile your high level code into assembly.
4. The C programming language (or optionally C++) to write the high level parts of your kernel.
5. The GRUB bootloader to bootload your kernel using the Multiboot boot protocol that loads us into 32-bit protected mode with paging disabled.
6. The ELF as the executable format that gives us control of where and how the kernel is loaded.
### Compilation
1. Open a terminal of your choice (Konsole, fish, OSX) make sure its UNIX Like, if its not, like windows: use WSL.
2. In ther terminal type ```i686-elf-as boot.s -o boot.o```
3. Then type ```i686-elf-gcc -c kernel.c -o kernel.o -std=gnu99 -ffreestanding -O2 -Wall -Wextra```
4. After that, type ```i686-elf-gcc -T linker.ld -o myos -ffreestanding -O2 -nostdlib boot.o kernel.o -lgcc```
5. If you want to verify multiboot (use grub) which is recomended: exucute ```grub-file --is-x86-multiboot myos```

> [!WARNING]  
> For some reason I wasn't able to get GRUB to verify the multiboot on OSX, this may just be me.

> [!NOTE]  
> The term ```myos``` or ```myos.iso``` refers to ArtemisOS, or the operating you are compiling. This will be changed later to ```atmsos``` or  ```atmsos.iso``` later in development.

## Running ArtemisOS
(TBA)
### Qemu
Currently the best way to run ArtemisOS is in QEMU. To run it in QEMU you will want to run it with ```i386``` (TBA)
Run ```qemu-system-i386 -cdrom myos.iso``` This should start a new virtual machine containing only your ISO as a cdrom. If all goes well, you will be met with a menu provided by the bootloader. Then you can continue onto the OS!

Additionally, QEMU supports booting multiboot kernels directly without bootable medium: ```qemu-system-i386 -kernel myos``` which from my knowledge works best with MacOS.

> [!WARNING]  
> If QEMU states qemu: ```could not open kernel file 'myos': No such file or directory``` you may need to add ```.iso``` onto ```myos``` making ```myos.iso```
