# Assembly types

languages: **en**, [ru](/doc/ru/api/asm_types.md)\
path: [/](/README.md)[doc/](/doc/index.md)[api/](/doc/api/index.md)asm_types

## Description

This is a simple header file
that defines basic types inspired by assembly language.

## Types

This header provides the following types:

+ Unsigned:
    + `byte` (1 byte)
    + `word` (2 bytes)
    + `dword` (4 bytes)
    + `qword` (8 bytes)
+ Signed:
    + `sbyte` (1 byte)
    + `sword` (2 bytes)
    + `sdword` (4 bytes)
    + `sqword` (8 bytes)

## How to enable

To include this header file,
use one of the following:

```c
// if this file is located in the `inc/` directory of your project
#include "inc/asm_types.h"

// if you're using the `-I` flag to include its directory
#include <asm_types.h>
```