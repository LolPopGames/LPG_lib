# System defines

languages: **en**, [ru](/doc/ru/sc_defines/systems.md)\
path: [/](/README.md)[doc/](/doc/index.md)[api/](/doc/api/index.md)[sc_defines/](/doc/api/sc_defines/index.md)systems

---

There are many different systems,
and each one has its own define to identify it

For example:

> Windows has `_WIN32` and `_WIN64`
>
> Linux has `__linux__`, `__gnu_linux__`, `__linux`, and `linux`

As you can imagine, some of these defines may be missing
in certain specialized builds

That's why we often have to check for the presence of _any_ known variant

This header file is made to unify all system-related defines
into a consistent and standardized format

## Format

Defines follow this format:
1. All uppercase letters
2. Full system name (not abbreviated)
3. No underscores
4. No spaces

---

Some systems are more specific,
while others are more general.

For example, **Android**:

Every **Android** is **Linux**,
but not every **Linux** is **Android**.

Because of this, the list is organized by levels:
Level 1 contains the most specific systems,
and the last level includes the most general.

## Supported systems

+ Level 1:
    + `WINDOWS` - Windows
    + `MACOS` - MacOS
    + `ANDROID` - Android
    + `FREEBSD` - FreeBSD
    + `NETBSD` - NetBSD
    + `OPENBSD` - OpenBSD
    + `SOLARIS` - Solaris (Sun OS)
    + `HAIKU` - Haiku
    + `CYGWIN` - CYGWIN
+ Level 2:
    + `LINUX` - Linux
    + `APPLE` - Apple
+ Level 3:
    + `UNIX` - Unix

## How to enable

To include this header file, 
use one of the following:

```c
// if this file is located in the `inc/` directory of your project
#include "inc/sc_defines/systems.h"

// if you're using the `-I` flag to include its directory
#include <sc_defines/systems.h>
```