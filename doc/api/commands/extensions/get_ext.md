# `get_ext()` function

languages: **en**, [ru](/doc/ru/api/commands/extensions/get_ext.md)\
path: [/](/README.md)[doc/](/doc/index.md)[api/](/doc/api/index.md)[commands/](/doc/api/commands/index.md)[extensions/](/doc/api/commands/extensions/index.md)get_ext

## Description

Function for getting the extension from a file _name/path_

## Prototype

```c
const char *get_ext(const char *path);
```

Return value:

> Type: `const char *`
>
> A pointer to the position in the `path` string where the extension is located
>
> This is not a separate string, but a pointer to a position within the original string
>
> It will point to the first character after the dot
>
> If there is no extension, the value will be `NULL`

Parameter `path`:

> Type: `const char *`
>
> The file _name/path_ from which to extract the extension

## Examples

```c
get_ext("file.txt");
//            ^ (pointer)

get_ext(".hidden.md");
//               ^ (pointer)

get_ext("nothing"); // `NULL`
```