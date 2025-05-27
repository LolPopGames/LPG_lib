# Compiler defines

languages: **en**, [ru](/doc/ru/sc_defines/compilers.md)\
path: [/](/README.md)[doc/](/doc/index.md)[api/](/doc/api/index.md)[sc_defines/](/doc/api/sc_defines/index.md)compilers

---

There are many different compilers,
and each one has its own define to identify it

For example:

> The **MinGW** compiler has defines like `__MINGW32__` and `__MINGW64__`
>
> The **Clang** compiler has defines like `__clang__`, `__clang_major__`, `__clang_minor__`, and `__clang_patchlevel__`

As you can imagine, some of these defines may be missing
in certain specialized builds

That's why we often have to check for the presence of _any_ known variant

This header file is made to unify all compiler-related defines
into a consistent and standardized format

## Format

Defines follow this format:
1. All uppercase letters
2. No underscores
3. No spaces

---

Some compilers are more specific,
while others are more general.

For example, **MinGW**:

Every **MinGW** is **GCC**,
but not every **GCC** is **MinGW**.

Because of this, the list is organized by levels:
Level 1 contains the most specific compilers,
and the last level includes the most general.

## Supported compilers

+ Level 1:
    + `MINGW` - Minimalist GNU for Windows
    + `MSVC` - Microsoft Visual C++
    + `ICC` - Intel C Compiler
    + `TCC` - Tiny C Compiler
    + `DMC` - Digital Mars Compiler
    + `BORLANDC` - Borland C++
    + `WATCOMC` - Watcom Compiler
    + `CGC` - Code Gear Compiler
    + `XLC` - IBM XL Compiler
    + `GHS` - Green Hills Software
    + `ARMCC` - ARM C Compiler
    + `ARMCC6` - ARM C Compiler version 6
    + `SUNCC` - Sun C Compiler
    + `CRAYC` - Cray Compiler
+ Level 2:
    + `CLANG` - Clang
+ Level 3:
    + `GCC` - GNU Compiler Collection

## How to enable

To include this header file, 
use one of the following:

```c
// if this file is located in the `inc/` directory of your project
#include "inc/sc_defines/compilers.h"

// if you're using the `-I` flag to include its directory
#include <sc_defines/compilers.h>
```