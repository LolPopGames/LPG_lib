# `add_ext()` function

languages: **en**, [ru](/doc/ru/api/commands/extensions/add_ext.md)\
path: [/](/README.md)[doc/](/doc/index.md)[api/](/doc/api/index.md)[commands/](/doc/api/commands/index.md)[extensions/](/doc/api/commands/extensions/index.md)add_ext

## Description

Function for adding an extension to a file _name/path_

## Prototype

```c
char *add_ext(const char *path, const char *extension);
```

Return value:

> Type: `char *`
>
> A string allocated with dynamic memory
>
> Represents the file _name/path_ with the added extension
>
> Don't forget to free the memory using `free()`

Parameter `path`:

> Type: `const char *`
>
> The file _name/path_ from which the extension needs to be removed

## Examples

```c
add_ext("file", "txt"); // "file.txt"
add_ext("source", "c"); // "source.c"
add_ext("program", "elf"); // "program.elf"
```