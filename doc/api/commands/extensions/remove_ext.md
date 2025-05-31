# `remove_ext()` Function

languages: **en**, [ru](/doc/ru/api/commands/extensions/remove_ext.md)\
path: [/](/README.md)[doc/](/doc/index.md)[api/](/doc/api/index.md)[commands/](/doc/api/commands/index.md)[extensions/](/doc/api/commands/extensions/index.md)remove_ext

## Description

Function for removing the extension from a file _name/path_

## Prototype

```c
char *remove_ext(const char *path);
```

Return value:

> Type: `char *`
>
> A string allocated with dynamic memory
>
> Represents the file _name/path_ with the extension removed
>
> If there was no extension, returns `NULL`
> 
> Or if the memory allocation fails
>
> Or if the `path` is `NULL`
>
> Don't forget to free the memory using `free()`

Parameter `path`:

> Type: `const char *`
>
> The file _name/path_ from which the extension should be removed

## Examples

```c
remove_ext("file.txt"); // "file"
remove_ext("source.c"); // "source"
remove_ext("just_a_file"); // `NULL`
```