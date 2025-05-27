# `str_find()` function

languages: **en**, [ru](/doc/api/str/str_find.md)\
path: [/](/README.md)[doc/](/doc/index.md)[api/](/doc/api/index.md)[str/](/doc/api/str/index.md)str_find

## Description

Function for finding substring indices in strings

## Prototype

```c
sqword str_find(const char *str, const char *sub_str);
```

Return value:

> Type: `sqword` (aka `long long`)
>
> Index of the **first** matching substring
>
> If it’s not found, the value will be `-1`

Parameter `str`:

> Type: `const char *`
>
> The string in which to search for the substring

Parameter `sub_str`:

> Type: `const char *`
>
> The substring to find

## Examples

```c
ch_find("Hello, World!", "World"); // == 7
ch_find("Ahhh... Why?", "..."); // == 4
ch_find("a word", "not a word"); // == -1
```
