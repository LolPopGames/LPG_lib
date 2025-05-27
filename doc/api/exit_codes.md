# Exit codes

languages: **en**, [ru](/doc/ru/api/exit_codes.md)\
path: [/](/README.md)[doc/](/doc/index.md)[api/](/doc/api/index.md)exit_codes

## Description

This header file contains exit codes
used by functions and other components

## Exit codes

Following exit codes are:

+ `EC_SUCCESS` == `0` (Succes)
+ `EC_FAILURE` == `1` (Failure)
+
+ `EC_INVALID_ARGUMENT` == `2` (Invalid argument)
+ 
+ `EC_FILE_NOT_FOUND` == `3` (File not found)
+ `EC_CANNOT_OPEN_FILE` == `4` (Cannot open file)
+ `EC_CANNOT_READ_FILE` == `5` (Cannot read file)
+ `EC_CANNOT_WRITE_FILE` == `6` (Cannot write to file)
+ 
+ `EC_FAILED_MEMORY_ALLOCATION` == `7` (Failed dynamic memory allocation)
+ `EC_NULL_POINTER_ERROR` == `8` (Null pointer error)
+ 
+ `EC_DIVISION_BY_ZERO` == `9` (Division by zero)
+ `EC_TIMEOUT` == `10` (Timeout)
+ `EC_UNSUPPORTED` == `11` (Unsupported)
+ `EC_INTERNAL` == `12` (Time internal error)
+ `EC_IO_ERROR` == `13` (Input/output error)
+ `EC_PERMISSION_DENIED` == `14` (Permission denied)

## How to enable

To include this header file,
use one of the following:

```c
// if this file is located in the `inc/` directory of your project
#include "inc/exit_codes.h"

// if you're using the `-I` flag to include its directory
#include <exit_codes.h>
```