# How to use

languages: **en**, [ru](/doc/ru/how_to_use.md)\
path: [/](/README.md)how_to_use

---

All header files are located in the `inc/` directory.

You can import individual modules (e.g., `asm_types.h`)
or include the entire library.

To do this, simply include the header file `lpg.h`.

---

After that, you need to [compile](/doc/compilation.md) the library.

You also need to include the library during the linking stage.

It will be located in the `build/` directory, and its name is `liblpg.a`.

Here’s how to do it:

1. Write `gcc file_1.c file_2.o ...`
2. Then specify the relative path to the directory containing the library using the `-L` flag
(e.g., `-LLPG_lib/build` or `-L LPG_lib/build`)
1. Specify the library name using the `-l` flag without the `lib` prefix and file extension
(in our case, it is `-llpg`)

## Examples

```bash
$ gcc -Wall -Wextra -c main.c -o main.o
$ gcc main.o -L LPG_lib/build -llpg -o main 
```

```bash
$ gcc -c file1.c -o file1.o
$ gcc -c file2.c -o file2.o
$ gcc file1.o file2.o -L LPG_lib/build -llpg -o program
```

```bash
$ gcc main.c file1.c -L. -llpg -o test
```

> Note: the library must be added after the _source/object_ files