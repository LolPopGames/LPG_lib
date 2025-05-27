# Compilation

languages: **en**, [ru](/doc/ru/compilation.md)\
path: [/](/README.md)compilation

---

To compile the library, you need to use the `Makefile`.

It is located in the root directory of the project.

The `Makefile` supports the following commands:

+ `make` - simply compiles all files and links them into a <u>static</u> library. Creates the `build/` directory if it does not exist.
+ `make clean` - removes the `build/` directory; if it does not exist, the command does nothing.
+ `make debug` - does the same as make, but adds the `-g3` flag (debug flag) to all compiled files.