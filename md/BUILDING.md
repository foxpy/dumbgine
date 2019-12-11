# Building

Compilation guide

## Supported platforms

dumbgine is intended to run on Windows and GNU/Linux operating systems.
I have set myself a requirement to support Windows 10 Versions 1607
(Anniversary Update) and newer.

With GNU/Linux it becomes slightly complicated since there is no universal
way to version GNU/Linux distros. I also don't want to claim support for
fixed versions of Ubuntu, Devian, Red Hat, whatever. Supporting just
ArchLinux doesn't sound good, too. Since I can't claim which distros are
supported and which are not let's just say dumbgine should work in any
adequate modern GNU/Linux distro. e. g.:
ArchLinux - good;
Debian 9/10 - good;
Ubuntu 18/19 - good;
Alpine 3 - not even sure.. good if it works;
Slackware 4.0 - not a chance. :D

No MacOS support intended, but if it compiles in GNU/Linux it should compile
in MacOS, too, I guess? I honestly don't have hardware and will to
support MacOS.

## Supported hardware

###### CPU
amd64 (also known as Intel 64 or x86\_64) is our primary target
microprocessor architecture. However, it is also nice to support
other architectures. The code should build as well on i686 (also known
as x86 or IA-32), armv7 and aarch64 (also known as ARM64).
###### GPU
Any GPU with OpenGL 3.0 or higher support should be supported.
There are no strict VRAM requirements since these should depend
on games but let's say it is 256 MB.
###### RAM
The same story as with GPU VRAM. Let's say it is 256 MB.
###### Miscellaneous
Monitor, mouse, keyboard, 1 MB free hard disk space (at the time of
writing this document, dumbgine weights literally nothing and is capable
of exactly the same functionality :D ).

## External dependencies

At the time of writing this document there are no external dependencies
for dumbgine. Future expected dependencies are `libzip` and `glfw`
or `freeglut`.

## Compilation guide

### Linux

```bash
git clone https://github.com/foxpy/dumbgine.git
cd dumbgine
mkdir -p build && cd build
cmake ..
cmake --build .
# engine executable should be named `dumbgine`
# and locate in current working directory
```

### Windows

```powershell
git clone https://github.com/foxpy/dumbgine.git
```
or download ZIP file from GitHub and unpack it manually.
Open folder in Visual Studio 2019 (currently the only tested version),
wait until it finishes Cmake configuration and run target `dumbgine.exe`
