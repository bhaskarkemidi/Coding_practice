//Linux Kernal
/*
//two types of systems
embedded systems (designed for single specific task (one task))
automatic car or self driving car (collection of embedded systems)

general purpose systems (music, video, gaming, work with files)

Desktop architecture:
BIOS
MBR
GRUB
KERNAL
INIT

Embedded architecture:
ROM code
S1BL - stage 1 boot loader
S2BL
Kernal
BUSYBOX

BBB:
ROM code
MLO/SPL
U-Boot
Linux Kernal
BUSYBOX

media will support when your sytstem having the removable devices
otherwise it will be mount

QEMU -> Q emulator (): nothing but a virtual machine, it works on many machines.
In computing, an emulator is hardware or software that enables one computer system (called the host) to
behaveost system to run software or use peripheral devices designed for the guest system.
Emulation refers to the ability of a computer program in an electronic device to emulate (or imitate)
another program or device.

to install qemu on your system:
sudo apt install qemu 
qemu-system-arm-machine help
qemu-system-arm-version
selecting V-Express- A9 board.

Makefile: 
to compile a file 


Linux vs Ubuntu


User
Difference between Linux and Ubuntu 

ChatGPT
Linux and Ubuntu are related but distinct concepts in the world of operating systems:

Linux: Linux is an open-source kernel, or the core component, of an operating system. Developed by Linus Torvalds in 1991, it provides the foundation for various operating systems, known as Linux distributions or simply "distros." The Linux kernel interacts with hardware and manages system resources, allowing other software programs to run on top of it.

Ubuntu: Ubuntu is a popular Linux distribution based on the Linux kernel. It is developed and maintained by Canonical Ltd. Ubuntu aims to provide a user-friendly and accessible computing experience for individuals and organizations. It includes a desktop environment (typically GNOME) and a collection of pre-installed software applications, including productivity tools, web browsers, media players, and more. Ubuntu is known for its emphasis on ease of use, regular release cycles, and strong community support.

To summarize the difference:

Linux is the kernel that powers various operating systems.
Ubuntu is a Linux distribution that utilizes the Linux kernel and adds its own user-friendly desktop environment and software packages.
In other words, Ubuntu is a specific implementation of Linux, tailored to provide a complete operating system experience out of the box, while Linux refers more broadly to the underlying kernel used by multiple distributions. There are many other Linux distributions available, such as Fedora, Debian, CentOS, and Arch Linux, each with its own characteristics, software choices, and target audience.

//Device Driver:
a set of files that tells a piece of hardware to function by commmunicating with computers operating hardware.
         (OR)
A Special kind of software program that controls a specific hardware device attached to a computer.


////////////////////////////////////////////////////////////////////////////////////
Initiated by Linus Torvalds as a hobby project in 1991
Inspired by Minix OS designed by Andrew S Tanenbaum
Driven by large and dynamic community
Popular kernel for Free and Open Source Operating Systems,  e.g. GNU Linux
Licensed under GPLv2 terms

1. Linux Kernel Highlights

Scalable for wide range of architectures and configurations – tiny embedded devices to powerful super computers
Standardized and interoperable programming interface (system calls, std compliance)
Secure, Stable and Reliable
Rich set of generic drivers
Rich set of networking drivers & protocol stacks
Upstream (mainline) vs Downstream kernel

2. Linux Kernel Versions

a.b.c-d format
a.b represents major version
c represents release version
d represents local version
Older convention of kernel versions (major, minor, release versions)
Patch set, optional fourth digit
Key changes between 2.4.x – 2.6.x
LTS versions – Long Term Support
6.1.x is latest stable version (as on Feb 2023)

3. Linux Architecture

Dual Mode operations of modern CPUs
Components of OS
Kernel
Drivers
Libraries
Utilities
User mode and Kernel Mode
User space and Kernel space
Linux Kernel - Modular Architecture
Access to kernel space
System Calls
Pseudo file systems – device files, procfs, sysfs, debugfs etc.

4. System Call Overview

Interface between kernel space and userspace 
Defined in kernel, part of kernel core (static part)
Invoked from user space and executed in kernel space
Mode switching, Trap instruction
Identified by unique number
Passing system call number
Passing parameters
Handling return values
Application Binary Interface (ABI)
System call wrappers in user space, workflow behind
System call workflow in kernel space
Additional Ref:- https://courses.linuxchix.org/kernel-hacking-2002/09-understanding-system-calls.html

5. Programming Paradigm in Kernel

Supported Languages – C and Assembly
No libraries, but similar APIs for most purposes
Avoid floating point operations
ANSI/C89 standard
Sensitive Memory Access Issues
System call interface is stable , e.g., POSIX standard
Volatile changes in kernel internal code & APIs

6. Kernel Source

Large proportion of architecture independent code
Small amount of architecture dependent code
Drivers – major stake in kernel source
Top level directories in KSRC
Refer your kernel source or online LXR
Additional Ref:-
Overview of the Kernel Source | LinuxChix Courses


/////////////////////////////////////////////
Workspace Creation Guidelines

Please adhere to the following points to have a clean workspace so that it become easy to organize the required files

Choose a clean directory for all the work
You may choose directory like EmbeddedLinux / E-Linux / EOS or with any sensible name under home directory
Don’t use Desktop, Downloads, Documents, Music, Videos, Pictures etc, which are meant for other purpose.
Avoid spaces or special symbols in path names, the build may fail, it is very important
Under this workspace keep different sub directories for downloaded packages, extracted source to build, configuration files, examples etc.

Project Directory Creation
It is possible we work on different types of projects, like for example you may work on driver development for
Native architecture
Embedded architecture
Both may need certain components that would be used while development.
You may select one of the below options as needed.

Project Directory Creation
2.1. Native Architecture (Desktop)
Assuming you are in you home directory, if not you may type
user@Host:~] cd # Changes directory to home directory

Let’s create a project directory, you may give any name but let it be meaningful
user@Host:~] mkdir KernelProgramming
user@Host:~] cd KernelProgramming
user@Host:KernelProgramming]

Let’s create all the major top-level directories that would be used will working on Embedded Linux development.
user@Host:KernelProgramming] mkdir Sources # To store all the raw source files
user@Host:KernelProgramming] mkdir Linux # Directory to work with Linux kernel
user@Host:KernelProgramming] mkdir Images # Directory to store all the built target images
user@Host:KernelProgramming] mkdir Modules # Directory to store all developed Modules
user@Host:KernelProgramming] mkdir SystemCalls # Directory to store all developed System Calls

Project Directory Creation
2.2. Embedded Architecture
Assuming you are in you home directory, if not you may type
user@Host:~] cd # Changes directory to home directory

Let’s create a project directory, you may give any name but let it be meaningful
user@Host:~] mkdir EmbeddedLinux
user@Host:~] cd EmbedddedLinux
user@Host:EmbeddedLinux]

Let’s create all the major top-level directories that would be used will working on Embedded Linux development.
user@Host:EmbeddedLinux] mkdir Sources # To store all the raw source files
user@Host:EmbeddedLinux] mkdir Linux # Directory to work with Linux kernel
user@Host:EmbeddedLinux] mkdir U-Boot # Directory to work with U-Boot
user@Host:EmbeddedLinux] mkdir RootFS # Directory to store root filesystem data
user@Host:EmbeddedLinux] mkdir Images # Directory to store all the built target images
user@Host:EmbeddedLinux] mkdir KernelProgramming
user@Host:EmbeddedLinux] cd KernelProgramming
user@Host:KernelProgramming] mkdir Modules # Directory to store all developed Modules
user@Host:KernelProgramming] mkdir SystemCalls # Directory to store all developed System Calls

While configuring and building the packages we will need some system packages, you can install them using the following command

user@Host:EmbeddedLinux] sudo apt install libncurses-dev flex bison libssl-dev

Install ifconfig command as follows
user@Host:EmbeddedLinux] sudo apt install net-tools

Install TFTP packages to copy data into target.
user@Host:EmbeddedLinux] sudo apt install tftpd-hpa tftp-hpa

Toolchain
Completion requirements
The first and major component without which it's not possible to build and embedded system (in fact we can say a system in general). 

This book covers the following,

What is a Toolchain?
Why Toolchain?
Components of Toolchain
Obtaining Toolchain
Native Tools
Cross Toolchain
1. What is a Toolchain?
Set of applications which help us to generate and investigate binaries as per the need
One application’s output may be used as in input to next, so that the final executable is generated,
hence the name Toolchain
2. Why Toolchain?
As said this a first and major component we will start with in our product development phase. But in general 
we did not discuss or ponder on this topic in general while writing applications in our PC right? why now? Well,

Generally, the tools installed in the host are native, which mean they generate the output for the same system!
But in case of embedded systems, the binaries are specific to the Target System, hence we have tools which can 
generate them as needed. This is where the cross toolchain come into existence.
3. Components of Toolchain
Well, while working on system development we may have to deal with lots of tools based on the situation, but there few major components which we may have tp specifically consider as put below

Compiler
Binary Utilities (binutils)
Libraries
Kernel Headers
Debugger 

4. Obtaining Toolchain
The installation would vary based on the target we work with. Please pick one as per your need

4.1. Native Tools
In case of native system, you may try the below command. This will make sure all the needed packages are installed.

user@Host:~] sudo apt install build-essential
4.2. Cross Toolchain
It possible for us to get the toolchain in different possible means, like to name some

Home Built - Creating toolchain from scratch ourselves. Required good time, patients and knowledge
Build System - Adapting some commonly available build system to build the toolchain just by configuration.
Pre-Built - Download some readily available package that can be installed
In our case let's consider the last one, since its very easy and suffice our need.

We will be going with pre-built toolchain by Linaro, In case your are working on Ubuntu, you may use the below command to install it
user@Host:~] sudo apt update
user@Host:~] sudo apt install gcc-arm-linux-gnueabi # Incase of soft fpu

Incase your target supports hardware floating point unit, you may install
user@Host:~] sudo apt install gcc-arm-linux-gnueabihf # Incase of hard fpu


/////////////////////////////////////////////
Linux Kernel
Completion requirements
"The Operating System Core"

This book covers,

Overview on Linux Kernel
Configuring Kernel
Building Kernel
Deploying Kernel
1. Introduction
What’s a Kernel?
Core of an Operating System that is responsible manage the hardware resources across the applications efficiently and effectively
Why Kernel?
As the complexity of the system requirement increase, the number of peripheral interfaces too increases
The bare metal programing approach would not be the efficient pick, we may see lag in the system performance
So, the scheduling approach is preferred, and the kernel is one which responsible for that
Why Linux Kernel?
An opensource software created by Linus Torvalds, The full source code is available for learning and adaptation
Strong development community across the world, you will see individuals and corporates in the pool
Runs in most of the processor architectures and good portability support
Provides a mature and stable build system being an opensource initiative
The kernel can be configured in such a way that, it can be made to run on tiny devices as well as super computers, that’s the scalability advantage we get with Linux kernel
It’s stable, reliable and secure
Its modular, it allows us to load or unload the modules or drivers at runtime
It has good compliance to standards and is interoperable
Royalty free
Important Terms
Unix - Multitasking, multi-user OS developed in 1969 by AT&T employees at Bell Labs
Linux - Unix like (not implementation) kernel by Linux Torvalds, officially known as GNU / Linux
GNU - GNU is not Unix. Collection of Free Software that can form an OS or can be part of an OS
GPL - General Public License, that guarantee the freedom to Use, Study, Modify and Share. In fact, the first copyleft license
FSF - Free Software Foundation, to promote GNU by Richard Stallman
FOSS - Free and Opensource Software
Distribution - Collections of software including Bootloaders, Kernel and RFS with applications forming an Operating System
Interface




From the above diagram you can observe that the kernel acts an interface between the user and hardware. Lots of information would pass between the user space and kernel space to interact with the hardware that could be directly or indirectly. 

So, it is the kernel which is responsible to facilitate all the system activities by providing different features, a high level picture is given below





Major role of Kernel
Hardware Management
CPU
Memory and Storage
Network
I/O …
Interaction
Should provide arch and hardware independent APIs so that user applications can access the hardware
Concurrency
Allow hardware access to multiple applications
Kernel Subsystem


Process Scheduler
Responsible to provide fair access of CPU to the process while interacting with the hardware
Memory Manager
Responsible to allocate system memory securely and efficiently by multiple process. Incase of larger memory needs, it should support Virtual Memory
Virtual File System
This layer is responsible for abstracting the application from the internal hardware being used and provide a common interface for all the devices
Network
Responsible to provide standards to access networking hardware
IPC
Responsible to allow user process communication securely and efficiently
Where to get the source?
www.kernel.org


2. Kernel Source Tree
Download the source code (make sure you have selected a stable version as needed) and store it in you project source directory or you may also use git clone
Uncompress the downloaded source (Refer the project work creation section)

3. Embedded Linux
You may follow the sub chapters to configure you Linux for ARM target board.

3. Embedded Linux
3.1. Build Targets
Once the kernel source is downloaded, its time to configure and build it
The kernel build system provides us lots of functions / targets to do that
It’s all based on multiple Makefiles, and the top level Makefile would invoke the inner levels as needed
To know the available targets, you may type the below command
user@Host:linux-5.18.3] make ARCH=arm | less

In the above command if you don’t specify the ARCH, it will pick the host  architecture implicitly
The list would depend on the architecture selected
Let's see some important targets provided by the build system
Cleaning targets:
clean         - Remove most generated files but keep the config and enough build support to build external modules
mrproper  - Remove all generated files + config + various backup files
distclean   - mrproper + remove editor backup and patch files
The above targets are used to clean the kernel source in case you want to build the kernel source fresh
Depending on the depth of cleaning you may pick any one of them
Configuration targets:
The Linux kernel build system provides us lots of configuration options that can be used as needed
Some commonly used configurations targets are
config
Based on line-oriented program
Though this not that user friendly, could be used in situations like limited host installation
Forces you to follow a sequence of questions while configuring the kernel
menuconfig
The most common make target used to configure the Linux kernel
Simple to use based on ncurses library
Navigation options are bases on keyboard arrow keys and hot keys
xconfig
GUI based approach, needs libqt-dev package installation
Easy to use with the help of mouse and key board
Build targets:
The build framework provides us some architecture specific targets
The default is zImage, which is a compressed kernel image
In case you want U-Boot wrapped zImage you may explicitly provide uImage while building the kernel
3.2. Configuration
The downloaded kernel source contains code for variety of architectures and hardwares
We will not be able to build unless and until we specify the architecture we intend to build for, and that must be done by kernel configuration
As seen in the previous slide there are few configuration targets available that could be used, menuconfig being the common pick
But the issue is, we will have to configure all from scratch which would be time consuming and knowledge curve needed would be high
To make life easy, the board vendors provide default configuration files
These configurations file would make sure the right architecture is set along with the peripherals interfaced in the target system
These configuration can be found in “Architecture specific targets:” section of make ARCH=help output
The other way to get this info is to see the configs directory as shown below
user@Host:linux-5.18.3] ls arch/arm/configs # Note: you will see lots of file here.
at91_dt_defconfig         bcm2835_defconfig         exynos_defconfig
multi_v7_defconfig        omap1_defconfig            qcom_defconfig
vexpress_defconfig
user@Host:linux-5.18.3]

Proceeding with these configuration file in general save lots of time
Once you have the kernel running, you can reconfigure it as needed later using menuconfig target later
Assume, you are working on ARM Versatile Express Board, you will have to configure your board as follows
user@Host:linux-5.18.3] make ARCH=arm vexpress_defconfig # The output print may vary!
HOSTCC scripts/kconfig/conf.o
HOSTLD scripts/kconfig/conf
#
# configuration written to .config
#
user@Host:linux-5.18.3]

As you can see above, the configuration would be stored in a .config file, you may proceed with the build
But if you need any further configuration, you may invoke the menuconfig target
user@Host:linux-5.18.3] make ARCH=arm menuconfig
The configuration would be saved in .config file found in top level of kernel source
If you feel the above configuration is fine and need to preserve it, you may follow as mentioned below
user@Host:linux-5.18.3] make ARCH=arm savedefconfig
user@Host:linux-5.18.3] ls
COPYING                 Kconfig                README    crypto          include      lib                scripts      usr
CREDITS                  LICENSES             arch           defconfig    init            mm              security    virt
Documentation       MAINTAINERS     block         drivers          ipc            net                sound
Kbuild                      Makefile              certs          fs                  kernel       samples        tools
user@Host:linux-5.18.3]

You may give a meaningful name based on you project and use it later
user@Host:linux-5.18.3] mv defconfig arch/arm/configs/custom_defconfig

3.3. Build
Once the Linux kernel is configured, it’s time to build it
You may invoke build as shown below
user@Host:linux-5.18.3] make -j$(nproc) ARCH=arm CROSS_COMPILE=arm-linux-gnueabi-
The build could take some good time based on your system configuration
It is assumed that the dependency packages are installed as mentioned Host Setup
Observe -j option that could help you speedup the build
Since we have not provided any explicit targets, it will build all the default targets which will be marked with * in  make ARCH=help output
Once the build is successful you will see multiple outputs files, some are as shown below
vmlinux – The bare kernel in ELF format. This is bulky file containing the symbol information that is generally used of debugging purpose. This file acts as source to generate other target images. This will be found in the top level of kernel source directory
Image - Uncompressed bootable kernel image found in arch/<arch>/boot directory
zImage - Compressed bootable kernel image for ARM based targets. Even this would be found in found in arch/<arch>/boot directory
vexpress-dtb - Device tree blob for the selected target board. This will be available in arch/<arch>/boot/dts directory
.ko files - The modules if any selected while configuration
It’s time to test the built image on the target
3.4. Deploy - Qemu (vexpress-a9)
Once the build is successful, its time to test the binary image that got generated
It is assumed, that u-boot is already running on your target board
The next step is to think on how to get the kernel image in the memory!
Well, there are multiple possibilities and that depends on you target machine peripheral and secondary storage support
But to keep it simple let's test the binary with the help of Qemu
Now, if its Qemu we really don’t have the bootloader dependency, that cool isn’t it
Yeah, it saves lots of time, once we have the final image, we can boot it with the bootloader
So, let’s copy the needed files to the Images directory (Note: Assuming you have followed the directory structure as mentioned in Host Setup chapter)
user@Host:linux-5.18.3] cp arch/arm/boot/zImage ../../Images
user@Host:linux-5.18.3] cp arch/arm/boot/dts/vexpress-v2p-ca9.dtb ../../Images
user@Host:linux-5.18.3] cd ../../Images
user@Host:Images]
Let’s disable the sound driver messages
user@Host:Images] export QEMU_AUDIO_DRV=none
Let’s run the qemu command to boot the kernel image, as
user@Host:Images] qemu-system-arm -M vexpress-a9 -nographic -kernel zImage -dtb vexpress-v2p-ca9.dtb Booting Linux on physical CPU 0x0
Linux version 5.18.3 (adil@MYTSL01490) (arm-linux-gnueabi-gcc (Ubuntu 9.4.0-1ubuntu1~20.04.1) 9.4.0, GNU ld (GNU Binutils for Ubuntu) 2.34) #2 SMP Wed Jun 15 16:02:46 IST 2022
CPU: ARMv7 Processor 410fc090 revision 0 (ARMv7), cr=10c5 d
------- Some Lines Cut Here ----------
panic from mount_block_root+0x1ac/0x248
mount_block_root from mount_root+0x22c/0x254
mount_root from prepare_namespace+0x154/0x190
prepare_namespace from kernel_init+0x18/0x12c
kernel_init from ret_from_fork+0x14/0x2c
Exception stack(0x88825fb0 to 0x88825ff8)
5fa0:                                                                    00000000 00000000 00000000 00000000
5fc0: 00000000 00000000 00000000 00000000 00000000 00000000 00000000 00000000
5fe0: 00000000 00000000 00000000 00000000 00000013 00000000
---[ end Kernel panic - not syncing: VFS: Unable to mount root fs on unknown-block(0,0) ]-
You should see the kernel booting, but once it reaches the point to run init, it fails with a panic
And the reason behind this is missing Linux Root Filesystem (RootFS) data
Now, it becomes very important for us to provide the Root Filesystem Data while booting the kernel, else we will not be able to interact with our system
But what is the RootFS data?
how do we get it?
how do we know  what should be part of it?
How would we let our kernel know about it while booting?
Well, many questions to be answered right?
Not to worry, you will get them answered as you proceed
But to start with let’s take the simplest approach, and that is, get the ready one for the internet

3.5. Prebuilt Root Files System (RootFS) Data
As discussed, lets download a ready  made RootFS data from the Yocto Project site, so that, at least we have a running kernel to start with, But note don’t expect this work in all the situations
You may also use wget command to download that too! as shown
user@Host:Images] wget -P ../Sources http://downloads.yoctoproject.org/releases/yocto/yocto-4.1/machines/qemu/qemuarm/core-image-minimal-qemuarm.ext4
user@Host:Images]
The above file is the ext4 format
Now with these ready data let’s try to boot the kernel with different methods

3.6. SD / eMMC
We can use the downloaded ext4 image form Yocto site and can be emulated as a SD Card with -sd option
But there is catch, we cannot use this image as is, since the geometry (block count) doesn’t match as expected by the default configuration done by us!!, hence we need to align the block size
So, let’s do that
First let’s copy the rootfs data in Images directory
user@Host:Images] cp ../Sources/core-image-minimal-qemuarm.ext4 .
user@Host:Images]
Let's use the e2fsck command for block alignment
user@Host:Images] e2fsck core-image-minimal-qemuarm.ext4 # Even this might suffice if the downloaded file size is <= 8MB, else run the resize2fs command too!
e2fsck 1.45.5 (07-Jan-2020)
Pass 1: Checking inodes, blocks, and sizes
Pass 2: Checking directory structure
Pass 3: Checking directory connectivity
Pass 4: Checking reference counts
Pass 5: Checking group summary information
rootfs.ext4: 718/1112 files (0.4% non-contiguous), 6807/8192 blocks
user@Host:Images] resize2fs core-image-minimal-qemuarm.ext4 16M # Changing the block size to 16MB
resize2fs 1.45.5 (07-Jan-2020)
Resizing the filesystem on core-image-minimal-qemuarm.ext4 to 16384 (1k) blocks.
The filesystem on core-image-minimal-qemuarm.ext4 is now 16384 (1k) blocks long.
user@Host:Images]
Now it's time to run Qemu. But one question to be answered here is how will the kernel come to know about filesystem?
Well, this is where the kernel boot arguments come in picture.
The downloaded RootFS data will be treated as an SD card image, and we will tell the kernel to mount that as a multimedia block (mmc) device.
But as soon as we do this via bootargs, the default bootargs with console information will be lost, hence we need to set even that.
So, let's use some extra options to that we can try our modules easily
-sd - for SD card emulation
-append - for boot arguments
-net - for network connectivity
Let’s run the kernel now with above considerations.
user@Host:Images] sudo qemu-system-arm -M vexpress-a9 -nographic -kernel zImage -dtb vexpress-v2p-ca9.dtb -sd core-image-minimal-qemuarm.ext4 -append "console=ttyAMA0 root=/dev/mmcblk0 ip=192.168.7.100 " -net nic -net tap,ifname=tap0
W: /etc/qemu-ifup: no bridge for guest interface found
Booting Linux on physical CPU 0x0
Linux version 5.18.3 (user@Host) (arm-linux-gnueabi-gcc (Ubuntu 9.4.0-1ubuntu1~20.04.1)
----- Some Lines Cut Here -----
udevd[76]: starting version 3.2.5
random: crng init done
udevd[77]: starting eudev-3.2.5

Poky (Yocto Project Reference Distro) 2.5 qemuarm /dev/ttyAMA0

qemuarm login:
You should see the kernel boots perfectly fine and login prompt is available.
The default user is root, you may type that and ENTER as shown.
Poky (Yocto Project Reference Distro) 2.5 qemuarm /dev/ttyAMA0

qemuarm login: root
root@qemuarm:~# ls / # Passed RootFS Data
bin           dev           home          lost+found        mnt        run       sys       usr
boot         etc           lib               media                 proc       sbin      tmp     var
root@qemuarm:~# uname –a # System information
Linux qemuarm 5.18.3 #2 SMP Wed Jun 15 16:02:46 IST 2022 armv7l GNU/Linux
root@qemuarm:~#
Now on the host system, we need to set an IP address so that we can copy file via network. issue the below command
user@Host:Images] sudo ifconfig tap0 192.168.7.1
user@Host:Images]

Few points to be noted,
The above command should be issued after running qemu at mentioned above.
ifconfig command should be installed, it doesn't come default.
The IP address set should not fall in your network range, since we are considering static connection.
So, with this you have your Embedded Linux system running on you target board, you may try all those things you generally do with a Linux system, but note there could be certain limitations, since this is an embedded Linux and not general-purpose one isn’t it.


Out-Tree Modules

Completion requirements
While developing the kernel programs, if they are placed or found outside the kernel source tree, then those type of modules are called as Out Tree Kernel Module.

1. Introduction
Kernel code (Drivers / Modules) in the Linux kernel can either be built into the kernel or built as modules that stay on secondary storage and get loaded as needed. 

The out-tree modules must be built against the specific kernel source code, that your target device is using, and this is a challenge on its own.

More details can be found here

Now, let's proceed and further and create a directory named HelloWorld and keep our basic module there.
user@Host:~] cd
user@Host:~] cd KernelProgramming/Modules # Assuming workspace is created as prescribed! 
user@Host:Modules] mkdir HelloWorld
user@Host:Modules] cd HelloWorld
user@Host:HelloWorld] 
2. Basic Module
In general, when we start programming, the first code we write is "Hello World", isn't it? even here let's start with as simple hello world module and understand its components.

Consider the below code

hello_world.c

  1 #include <linux/module.h>
  2 #include <linux/kernel.h>
  3 #include <linux/version.h>
  4 
  5 static int hello_init(void) 
  6 {
  7     printk("Hello to Kernel World\n");
  8
  9     return 0;
 10 }
 11
 12 static void hello_exit(void)
 13 {
 14     printk("Bye bye\n");
 15 }
 16
 17 module_init(hello_init);
 18 module_exit(hello_exit);
 19
 20 MODULE_LICENSE("GPL");
 21 MODULE_AUTHOR("Adil"); // Change this to you name.
 22 MODULE_DESCRIPTION("Hello World Module"); // Give appropriate description.

Observe the following points.

Line 5: The first function intended to be called call when the module gets loaded. the name would generally contain init within to indicating the same.
Line 6 to 10: The block of init code. all that piece of code that has to run one time while loading the module / driver would fall here.
Line 12: The last function that would be called when the module gets unloaded. would contain exit prefix or suffix indicating the same.
Line 13 to 15: The block of exit code. all that piece of code that has to run one time while unloading the module / driver would fall here. 
Line 17: A macro letting the kernel know about init code.
Line 18: A macro letting the kernel know about exit code.
Line 20: This macro is mandatory without it would lead to compilation error, this lets the kernel know about the license version used.
Line 21: A macro to set the module author name.
Line 22: A macro to set the module description.
Now it's time to proceed further with compiling this module, please proceed to the next chapter.

3. Module Building
The previous chapter has a simple hello_world module. To compile or build this module we need to have a kernel source. In general, you would need a makefile that would invoke the kernel source top level Makefile to get this task done. You can refer a simple one as shown below.

Makefile 

  1 # You will have to set the below variable with the name of the file you intend to compile
  2 obj-m := <module name>.o
  3
  4 # You will have to set the below variable with Kernel source directory path  
  5 KSRC := <Kernel Source Path> 
  6 PWD := $(shell pwd)
  7
  8 # You will have to set the below variable with Target architecture name,
  9 # in case of ARM, you would set it as arm
 10 CPU := <CPU Name>
 11
 12 # You will have to set the below variable with compiler prefix, in case of ARM,
 13 # it could be arm-linux-gnueabi-
 14 TGT_TRIPLET := <GCC prefix>
 15
 16 all:
 17     $(MAKE) -C $(KSRC) M=$(PWD) ARCH=$(CPU) CROSS_COMPILE=$(TGT_TRIPLET) modules
 18
 19 clean:
 20     $(MAKE) -C $(KSRC) M=$(PWD) clean

Assuming that, both the module and Makefile are present in the same directory, and proper values in the above variable used in the above Makefile, for example for vexpress-a9, you may use the below values

Line 2: obj-m := hello_world.o
Line 5: Go to the Kernel Source directory and type pwd and copy the path and paste in place of <Kernel Source Path>. For example, in my system the kernel is found at the below path,
KSRC := /home/${USER}/EmbeddedLinux/Linux/linux-6.0.2
Line 10: CPU := arm
Line 14: TGT_TRIPLET := arm-linux-gnueabi-
You may compile the code by just typing make.

user@Host:HelloWorld] ls
Makefile          hello_world.c
user@Host:HelloWorld] make
make -C /home/${USER}/EmbeddedLinux/Linux/linux-6.0.2/ M=/home/${USER}/EmbeddedLinux/KernelProgramming/Modules/HelloWorld CROSS_COMPILE=arm-linux-gnueabi- ARCH=arm -j8
make[1]: Entering directory '/home/${USER}/EmbeddedLinux/Linux/linux-6.0.2'
    CC [M] /home/${USER}/EmbeddedLinux/KernelProgramming/Modules/HelloWorld/hello.o MODPOST /home/${USER}/EmbeddedLinux/KernelProgramming/Modules/HelloWorld/Module.symvers
    CC [M] /home/${USER}/EmbeddedLinux/KernelProgramming/Modules/HelloWorld/hello.mod.o
    LD [M] /home/${USER}/EmbeddedLinux/KernelProgramming/Modules/HelloWorld/hello.ko
make[1]: Leaving directory '/home/${USER}/EmbeddedLinux/Linux/linux-6.0.2'
user@Host:HelloWorld] ls
Makefile                   hello_world.ko          hello_world.mod.o
Module.symvers       hello_world.mod        hello_world.o
hello_world.c            hello_world.mod.c      modules.order
user@Host:HelloWorld]

Now, your module is built, you should find hello_world.ko which is nothing but the kernel object.
This file has to be copied and executed on the target.
4. Module Testing
Once the module is built, we need to test it on our target board. Assuming we are using Qemu based target, we need to first copy the module on target and the test it.

Now how do we copy the .ko file into target?

Well, there are few possibilities like

Copy in to SD Card and mount it on target.
You may use NFS to mount the directory you want on target.
You may use SCP to copy.
You may use TFTP to copy.
So, these are some options you have, lets proceed with TFTP method which supported out of the box with Busybox.

Assuming that you have installed tftp server in your system, you may check if the tftp server is working. You may issue the below command and validate it.
user@Host:HelloWorld] service tftpd-hpa status # Note: you may not get similar output in WSL
● tftpd-hpa.service - LSB: HPA's tftp server
     Loaded: loaded (/etc/init.d/tftpd-hpa; generated)
       Active: active (running) since Mon 2023-02-20 08:56:24 IST; 2h 38min ago
         Docs: man:systemd-sysv-generator(8)
         Tasks: 1 (limit: 18832)
    Memory: 528.0K
     CGroup: /system.slice/tftpd-hpa.service
                  └─2185 /usr/sbin/in.tftpd --listen --user tftp --address :69 --secure /srv/tftp

Feb 20 08:56:24 user systemd[1]: Starting LSB: HPA's tftp server...
Feb 20 08:56:24 user tftpd-hpa[2170]: * Starting HPA's tftpd in.tftpd
Feb 20 08:56:24 user tftpd-hpa[2170]: ...done.
Feb 20 08:56:24 user systemd[1]: Started LSB: HPA's tftp server.
user@Host:HelloWorld]

Next, step is to copy the .ko file into /srv/tftp directory
user@Host:HelloWorld] sudo cp hello_world.ko /srv/tftp
Next, switch to the running target and issue the following command to copy the kernel object.
root@qemuarm:~# tftp -g 192.168.7.1 -r hello_world.ko
root@qemuarm:~#
Once copied, it's time to load and test the module, issue the below command
root@qemuarm:~# insmod hello_world.ko
hello_world: loading out-of-tree module taints kernel.
Hello to Kernel World
root@qemuarm:~#
You should see the print message as soon as loaded. That's all your module is successfully loaded.
Once done with your testing or if you are planning to change the code, you may unload the module with the help of below command
root@qemuarm:~# rmmod hello_world
Bye bye
root@qemuarm:~#
That's all the module is unloaded from the kernel.
5. Module Parameters
In this chapter, let's understand on how to pass a user parameter to the kernel module.

user@Host:HelloWorld] cd ../
user@Host:KernelProgramming] mkdir ModuleParams
user@Host:KernelProgramming] cd ModuleParams
user@Host:ModuleParams] cp ../HelloWorld/Makefile .
user@Host:ModuleParams] 
Created a new directory and copied the make Makefile (make sure to change the module name) and create a new file with below name and code.

module_params.c

  1 #include <linux/module.h>
  2
  3 int no_of_devs = 1;
  4 module_param(no_of_devs, int, S_IRUGO);
  5
  6 static int init_my_module(void)
  7 {
  8     printk("Ho Hoo, Kernel Module got Inserted\n");
  9
 10     if (no_of_devs != 1)
 11     {
 12         printk("The passed module argument is %d\n", no_of_devs);
 13     }
 14
 15     return 0;
 16 }
 17
 18 static void cleanup_my_module(void)
 19 {
 20     printk("Kernel Module got Removed, Bye\n");
 21 }
 22
 23 module_init(init_my_module);
 24 module_exit(cleanup_my_module);
 25
 26 MODULE_LICENSE("GPL");
 27 MODULE_AUTHOR("Adil");
 28 MODULE_DESCRIPTION("Module Parameter Demo");

Observe the following points.

Line 3: Variable that is exposed to the user to set the value.
Line 4: Macro that registers the variable with certain properties like
no_of_devs, variable that holds the user parameter
int, type of the exposed variable
S_IRUGO, permissions given for different system users
Now, 

You may compile this code as you did in basic module.
You may try modinfo command to see its parameter information.
user@Host:ModuleParams] modinfo module_params.ko
filename:              /home/user/EmbeddedLinux/KernelProgramming/Modules/ModuleParams/module_params.ko
description:           Module Parameter Demo
author:                  Adil
license:                  GPL
depends:
name:                    module_params
vermagic:              6.2.0 SMP mod_unload ARMv7 p2v8
parm:                   no_of_devs:int
user@Host:ModuleParams]

Copy it to the target. 
Once done, you may load it as shown below.

root@qemuarm:~# insmod module_params.ko 
Ho Hoo, Kernel Module got Inserted
root@qemuarm:~#
Observe that, you got only one print on console since you have not set the parameter variable.
Now to test passing parameter passing, unload the module and load it agian as shown below.
root@qemuarm:~# rmmod module_params
Kernel Module got Removed, Bye
root@qemuarm:~# insmod module_params.ko no_of_devs=2 
Ho Hoo, Kernel Module got Inserted
The passed module argument is 2
root@qemuarm:~#
Now you can observe the second print which is due to the parameter we have passed while loading the module
6. Module Information
You may use the below commands to see if your module is loaded.

dmesg
root@qemuarm:~# dmesg
------------ Some Line Cut Above -----------
amba 1000f000.wdt: deferred probe pending
amba 10020000.clcd: deferred probe pending
amba 100e0000.memory-controller: deferred probe pending
amba 100e1000.memory-controller: deferred probe pending
amba 100e5000.watchdog: deferred probe pending
i2c 0-0039: deferred probe pending
hello_world: loading out-of-tree module taints kernel.
Hello to Kernel World
root@qemuarm:~#

dmesg prints the entire system log, once the module is loaded, the debug prints will be logged in the circular buffer that can be viewed later.

lsmod
root@qemuarm:~# lsmod # Note the message would vary based on the loading instance and system
Tainted: G
hello_world 16384 0 - Live 0x7f000000 (O)
root@qemuarm:~#

lsmod, lists all the dynamically loaded module

proc Entry 
root@qemuarm:~# cat /proc/modules
hello_world 16384 0 - Live 0x7f000000 (O)
root@qemuarm:~#

You will see a similar output that was obtained from lsmod

7. Module Dependency
In this chapter, let's understand module dependency.

user@Host:ModuleParams] cd ../
user@Host:KernelProgramming] mkdir ModuleDependency
user@Host:KernelProgramming] cd ModuleDependency
user@Host:ModuleDependency] cp ../HelloWorld/Makefile .
user@Host:ModuleDependency] 
Created a new directory and copied the make Makefile (make sure to change the module name) and create two new files with below name and code.

module1.c

  1 #include <linux/module.h>
  2
  3 int xvar = 100;
  4
  5 void say_hello(void)
  6 {
  7     printk("Hello from Module1\n");
  8 }
  9
 10 static int __init module1_init(void)
 11 {
 12     printk("Module1 Loaded\n");
 13
 14     return 0;
 15 }
 16
 17 static void __exit module1_exit(void)
 18 {
 19     printk("Module1 Unloaded\n");
 20 }
 21
 22 module_init(module1_init);
 23 module_exit(module1_exit);
 24
 25 EXPORT_SYMBOL_GPL(xvar);
 26 EXPORT_SYMBOL_GPL(say_hello);
 27
 28 MODULE_LICENSE("GPL");
 29 MODULE_AUTHOR("Adil S K");
 30 MODULE_DESCRIPTION("Module Dependency Demo");


Observe the following point from module 1
Line 3: variable xvar is defined but used in module 2 below at line 10.
Line 5: Function say_hello is defined, but it called in module 2 at line 11.
Line 25: Macro that exports xvar in global space so that, it can be accessed by other modules or drivers
Line 26: Macro that exports say_hello in global space so that, it can be accessed by other modules or drivers
module2.c

  1 #include <linux/module.h>
  2
  3 extern int xvar;
  4 extern void say_hello(void);
  5
  6 static int __init module2_init(void)
  7 {
  8     printk("Module2 Loaded\n");
  9
 10     printk("xvar value %d\n", xvar);
 11     say_hello();
 12
 13     return 0;
 14 }
 15
 16 static void __exit module2_exit(void)
 17 {
 18     printk("Module2 Unloaded\n");
 19 }
 20
 21 module_init(module2_init);
 22 module_exit(module2_exit);
 23
 24 MODULE_LICENSE("GPL");
 25 MODULE_AUTHOR("Adil S K");
 26 MODULE_DESCRIPTION("Module Dependency Demo");


Observe the following point from module 2
Line 3: xvar declaration
Line 4: say_hello declaration
Line 10: xvar printed which is defined at line 3 of module 1.
Line 11: say_hello is called which is defined in module 1 at line 5
Now, 

You may compile both the codes
You may try modinfo command on module2.ko to see module dependency
user@Host:ModuleDependency] modinfo module2.ko
filename:              /home/user/EmbeddedLinux/KernelProgramming/Modules/ModuleDependency/module2ko
description:           Module DependencyDemo
author:                  Adil
license:                  GPL
depends:              module1
name:                    module2
vermagic:              6.2.0 SMP mod_unload ARMv7 p2v8
user@Host:ModuleDependency]

Copy it to the target. 
Once done, you may load it as shown below.

root@qemuarm:~# insmod module1.ko 
Module1 Loaded
root@qemuarm:~# insmod module2.ko
Module2 Loaded
xvar value 100
Hello from Module1
root@qemuarm:~#

Once done, you may remove the modules.

It is expected that you explore the following points,
load module2 before module1
unload module1 before module2
Understand the load and unload sequence

1. Introduction
As discussed in Out-Tree chapter, Kernel code (Drivers / Modules) in the Linux kernel can either be built into the kernel or built as modules that stay on secondary storage and get loaded as needed.

Just like out-tree modules, the in-tree modules must be built against the specific kernel source code, that your target device is using, the only difference is that we have to place the code within the kernel source directory itself.

In this case we have 2 possibilities, 
Build as a module and load at run time, generally called as dynamic modules
Build as part of the kernel binary (image) itself, this is called as static module.

2. Dynamic Modules
As discussed, dynamic modules are those that can be loaded and unloaded at run time as we had seen in out-tree modules.

Here in, in-tree method we should make sure that the module is placed within the kernel source directory. Be wise in choosing the location of the module, it all depends on which part of kernel you are working in. Since we are writing a basic module, let's put it in the driver/char directory found in the top-level kernel source directory.

So, let's create a directory under the source tree as said below.
user@Host:~] cd
user@Host:~] cd KernelProgramming/Linux/linux-6.2 # Assuming workspace is created as prescribed! The kernel version depends on what you have downloaded.
user@Host:linux-6.2] cd drivers/char/
user@Host:char] mkdir dynamic_mod_test
user@Host:char] cd dynamic_mod_test
user@Host:dynamic_mod_test] 
Now it's time to add our module here. Instead of writing it again, let's copy it from the HelloWorld directory. The intension is to understand the concepts right!.
user@Host:dynamic_mod_test] cp ~/KernelProgramming/Modules/HelloWorld/hello_world.c .
user@Host:dynamic_mod_test] echo "obj-m += hello_world.o" > Makefile 
user@Host:dynamic_mod_test] ls
Makefile           hello_world.c
user@Host:dynamic_mod_test] 
So, we are ready with both the files. The next step is critical, we need the top level Makefile to consider our module to be built, hence we need to add an entry into it.

Note: this Makefile is the one, which you will find in the parent directory of dynamic_mod_test as shown below.
user@Host:dynamic_mod_test] ls ../
Kconfig                   dsp56k.c                    misc.o                          pc8736x_gpio.c             toshiba.c 
Makefile                dtlk.c                          modules.order            pcmcia                           tpm
adi.c                        hangcheck-timer.c    mspec.c                       powernv-op-panel.c     ttyprintk.c
agp                         hpet.c                        mwave                         ppdev.c                         uv_mmtimer.c
apm-emulation.c    hw_random               dynamic_mod_test    ps3flash.c                       virtio_console.c
 applicom.c              ipmi                          nsc_gpio.c                   random.c                       virtio_console.o
applicom.h              lp.c                            nvram.c                       random.o                       xilinx_hwicap
bsr.c                        mem.c                       nwbutton.c                  scx200_gpio.c                xillybus
built-in.a                 mem.o                       nwbutton.h                 sonypi.c
ds1620.c                 misc.c                         nwflash.c                    tlclk.c
user@Host:dynamic_mod_test] 

Observe the file and directory highlighted with red color. So, to summarize, the Makefile that should contain the entry would be the top level Makefile of every sub directory provided in the kernel source directory.

You may add the entry can be added as shown below.
user@Host:dynamic_mod_test] echo "obj-m += dynamic_mod_test/" >> ../Makefile 
user@Host:dynamic_mod_test] 
Note: the above command is critical, if anything goes wrong you may end up corrupting your kernel source structure. So be cautious while changing it. You may also use an editor to add an entry.

Module Build:

Once done with all the above considerations, it's time to build the kernel now. you may issue the below command.
user@Host:dynamic_mod_test] cd ../../../ # Moving to the top-level kernel directory.
user@Host:linux-6.2] make -j$(nproc) ARCH=arm CROSS_COMPILE=arm-linux-gnueabi-
    CALL           scripts/checksyscalls.sh
    CC [M]       drivers/char/dynamic_mod_test/hello_world.o
    MODPOST Module.symvers
    CC [M]       drivers/char/dynamic_mod_test/hello_world.mod.o
    Kernel:       arch/arm/boot/Image is ready
    Kernel:       arch/arm/boot/zImage is ready
    LD [M]       drivers/char/dynamic_mod_test/hello_world.ko
user@Host:linux-6.2]
Module Installation:

Once the kernel is built, we need to install the module in the standard path, so that, probe utilities can find then on the root file system.

You may install the module by following below steps.

First, make sure the SD Card is mounted (Assuming, ext4 image here as discussed here)
user@Host:linux-6.2] sudo mkdir /media/sd_card
user@Host:linux-6.2] sudo mount ../../Images/core-image-minimal-qemuarm.ext4 /media/sd_card
user@Host:linux-6.2] 
Then, install the module using the below step
user@Host:linux-6.2] make -j$(nproc) ARCH=arm CROSS_COMPILE=arm-linux-gnueabi- n=modules_install INSTALL_MOD_PATH=/media/sd_card
   INSTALL       /media/sd_card/lib/modules/6.2.0/kernel/drivers/char/dynamic_mod_test/hello_world.ko
   DEPMOD     /media/sd_card/lib/modules/6.2.0
user@Host:linux-6.2] sudo umount /media/sd_card
user@Host:linux-6.2] 
Move to the Images directory and boot the kernel as given in the below step.
user@Host:linux-6.2] cd ~/KernelProgramming/Images
user@Host:Images] sudo qemu-system-arm -M vexpress-a9 -nographic -kernel zImage -dtb vexpress-v2p-ca9.dtb -sd core-image-minimal-qemuarm.ext4 -append "console=ttyAMA0 root=/dev/mmcblk0 ip=192.168.7.100 " -net nic -net tap,ifname=tap0
W: /etc/qemu-ifup: no bridge for guest interface found
Booting Linux on physical CPU 0x0
Linux version 5.18.3 (user@Host) (arm-linux-gnueabi-gcc (Ubuntu 9.4.0-1ubuntu1~20.04.1)
----- Some Lines Cut Here -----
udevd[76]: starting version 3.2.5
random: crng init done
udevd[77]: starting eudev-3.2.5

Poky (Yocto Project Reference Distro) 2.5 qemuarm /dev/ttyAMA0

qemuarm login:
Login and follow the below steps.
Poky (Yocto Project Reference Distro) 2.5 qemuarm /dev/ttyAMA0

qemuarm login: root
root@qemuarm:~# find /lib/modules -name hello_world.ko # Just to find the installed module
/lib/modules/6.2.0/kernel/drivers/char/dynamic_mod_test/hello_world.ko
root@qemuarm:~# dmesg -c # Clear the log, just to retain our message.
root@qemuarm:~# modprobe hello_world.ko 
Hello to Kernel World
root@qemuarm:~#
Now, you try all the other commands like lsmod, rmmod etc., and test your module as needed.

3. Static Modules
In case of static module, we should make sure that the module is placed within the kernel source directory as we did in the dynamic module topic, the only difference is the entry in the Makefile.

So let's understand the procedure. Assuming you are in the home directory.

user@Host:~] cd
user@Host:~] cd KernelProgramming/Linux/linux-6.2 # Assuming workspace is created as prescribed! The kernel version depends on what you have downloaded.
user@Host:linux-6.2] cd drivers/char/
user@Host:char] mkdir static_mod_test
user@Host:char] cd static_mod_test
user@Host:static_mod_test] 
Now it's time to add our module here. Instead of writing it again, let's copy it from the HelloWorld directory.
user@Host:static_mod_test] cp ~/KernelProgramming/Modules/HelloWorld/hello_world.c .
user@Host:static_mod_test] echo "obj-y += hello_world.o" > Makefile 
user@Host:static_mod_test] ls
Makefile           hello_world.c
user@Host:static_mod_test] 
So, we are ready with both the files. The next step is critical, we need the top level Makefile to consider our module to be built, hence we need to add an entry into it.

Note: this Makefile is the one, which you will find in the parent directory of dynamic_mod_test as shown below.
user@Host:static_mod_test] ls ../
Kconfig                   dsp56k.c                    misc.o                          pc8736x_gpio.c             toshiba.c 
Makefile                dtlk.c                          modules.order            pcmcia                           toshiba.c
adi.c                        hangcheck-timer.c    mspec.c                       powernv-op-panel.c      tpm
agp                         hpet.c                        mwave                         ppdev.c                         ttyprintk.c
apm-emulation.c    hw_random               dynamic_mod_test      ps3flash.c                      uv_mmtimer.c
applicom.c              ipmi                           nsc_gpio.c                   random.c                       virtio_console.c
applicom.h              lp.c                            nvram.c                       random.o                       virtio_console.o
bsr.c                        mem.c                       nwbutton.c                  scx200_gpio.c                xilinx_hwicap
built-in.a                 mem.o                       nwbutton.h                 sonypi.c                         xillybus 
ds1620.c                 misc.c                         nwflash.c                    static_mod_test
user@Host:static_mod_test] 

Observe the file and directory highlighted with red color. So, to summarize, the Makefile that should contain the entry would be the top level Makefile of every sub directory provided in the kernel source directory.

You may add the entry can be added as shown below.
user@Host:static_mod_test] echo "obj-y += static_mod_test/" >> ../Makefile 
user@Host:static_mod_test] 
Note: the above command is critical, if anything goes wrong you may end up corrupting your kernel source structure. So be cautious while changing it. You may also use an editor to add an entry.

Module Build:

Once done with all the above considerations, it's time to build the kernel now. you may issue the below command.
user@Host:static_mod_test] cd ../../../ # Moving to the top-level kernel directory.
user@Host:linux-6.2] make -j$(nproc) ARCH=arm CROSS_COMPILE=arm-linux-gnueabi-
    CALL            scripts/checksyscalls.sh
    CC               drivers/char/static_mod_test/hello_world.o
    AR               drivers/char/static_mod_test/built-in.a
    AR               drivers/char/built-in.a
    AR               drivers/built-in.a
    AR               built-in.a
    AR               vmlinux.a
    LD               vmlinux.o
----- Some Lines Cut Here -----
    LD               vmlinux
    NM              System.map
    SORTTAB     vmlinux
    OBJCOPY     arch/arm/boot/Image
    Kernel:         arch/arm/boot/Image is ready
    GZIP            arch/arm/boot/compressed/piggy_data
    AS               arch/arm/boot/compressed/piggy.o
    LD               arch/arm/boot/compressed/vmlinux
    OBJCOPY    arch/arm/boot/zImage
    Kernel:        arch/arm/boot/zImage is ready
user@Host:linux-6.2]
In this case we don't have to do any installation as we did in dynamic module testing. Once the kernel is built, we need to consider the latest kernel image and boot it.
You may install the module by following below steps.

First, lets copy the kernel image into the Images directory.
user@Host:linux-6.2] cp arch/arm/boot/zImage ~/KernelProgramming/Images
user@Host:linux-6.2] 
Now it's time to boot the copied image
user@Host:linux-6.2] cd ~/KernelProgramming/Images
user@Host:Images] sudo qemu-system-arm -M vexpress-a9 -nographic -kernel zImage -dtb vexpress-v2p-ca9.dtb -sd core-image-minimal-qemuarm.ext4 -append "console=ttyAMA0 root=/dev/mmcblk0 ip=192.168.7.100 " -net nic -net tap,ifname=tap0
W: /etc/qemu-ifup: no bridge for guest interface found
Booting Linux on physical CPU 0x0
Linux version 5.18.3 (user@Host) (arm-linux-gnueabi-gcc (Ubuntu 9.4.0-1ubuntu1~20.04.1)
----- Some Lines Cut Here -----
jffs2: version 2.2. (NAND) © 2001-2006 Red Hat, Inc.
9p: Installing v9fs 9p2000 file system support
io scheduler mq-deadline registered
io scheduler kyber registered
Hello to Kernel Space
OF: graph: no port node found in /bus@40000000/motherboard-bus@40000000/iofpga@7,00000000/i2c@16000/dvi-transmitter@60
sii902x 0-0060: supply iovcc not found, using dummy regulator
sii902x 0-0060: supply cvcc12 not found, using dummy regulator
physmap-flash 40000000.flash: physmap platform flash device: [mem 0x40000000-0x43ffffff]
40000000.flash: Found 2 x16 devices at 0x0 in 32-bit bank. Manufacturer ID 0x000000 Chip ID 0x000000
Intel/Sharp Extended Query Table at 0x0031
----- Some Lines Cut Here -----
udevd[76]: starting version 3.2.5
random: crng init done
udevd[77]: starting eudev-3.2.5

Poky (Yocto Project Reference Distro) 2.5 qemuarm /dev/ttyAMA0

qemuarm login:
Now note the boot messages may vary based on the kernel version you work on, you should get the print you have put in your module in the boot messages, you scroll and find it.
You can stiil see that message in the kernel log message you may try the below step after login
Poky (Yocto Project Reference Distro) 2.5 qemuarm /dev/ttyAMA0

qemuarm login: root
root@qemuarm:~# dmesg | grep Hello # grep for the message you have put using printk
Hello to Kernel Space
root@qemuarm:~# 
That's all, you module is statically loaded. Some point to be kept in mind
You will not be able to unload it since its built along with the kernel image
if you want to change your code, you will have to perform all the step from building the kernel to redeploying it.

Configuration Menu Entry
Book
More
Completion requirements
It is sometimes needed that we allow the developers to enable or disable a specific kernel function as per the requirements and this is generally done while configuring the kernel. 

Now in order to achieve this, it is expected the kernel module or driver is in tree because the kernel build framework should know where the code for the feature is available isn't it, yes.

So, in this book lets understand how to add an entry in the kernel configuration framework, so that it allows the user to select / deselect the feature as needed.

1. Kconfig File
Any configurable entity that is permissible by the kernel configuration framework should have an entry in Kconfig file. This file has to be written using Kconfig language.
Almost every directory that has code would have a Kconfig file that would be provided for kernel configuration framework.

Now upon using the configuration targets, like for example, menuconfig, xconfig etc., the entries put in the Kconfig file will be provided to the user to select / deselect the feature.

The entry we add in the Kconfig file will have dependency on Makefiles too, so that we can enable the build framework to select / deselect the feature for the build.

Now, we have 3 possibilities, 
Exclude form build.
Build as builtin feature.
Build as a module.
The Kconfig language provides all these along with more other interesting function. In this book let's understanding how add entry in Kconfig file for our module.

In case you want to know more on the Kconfig Language you can find in the below link

Kconfig Language — The Linux Kernel documentation
2. Boolean Entry
In this section let's see how to add a boolean entry in the Kconfig file and how to add an entry in the Makefile to pick it for build as per our selection.

There are few assumptions here,

You already have tried the basic kernel module, if not start from here
You have the hello_world module which is in kernel source tree (or any module / driver you want to expose in the configuration screen). If not, please follow this chapter for start with and this chapter for the below steps.
Now let's proceed further to add an entry in configuration screen.

*/



