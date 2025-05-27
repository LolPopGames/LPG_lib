# `ch_find()` function

languages: **en**, [ru](/doc/ru/api/str/ch_find.md)\
path: [/](/README.md)[doc/](/doc/index.md)[api/](/doc/api/index.md)[str/](/doc/api/str/index.md)ch_find

## Description

Function for finding character indices in strings

## Prototype

```c
sqword ch_find(const char *str, char ch);
```

Return value:

> Type: [`sqword`](/doc/api/asm_types.md) (aka `long long`)
>
> Index of the **first** matching character
>
> If it’s not found, the value will be `-1`

Parameter `str`:

> Type: `const char *`
>
> The string in which to search for the character

Parameter `ch`:

> Type: `char`
>
> The character to find

## Examples

```c
ch_find("Hello, World!", 'W'); // == 7
ch_find("Ahhh...", 'h'); // == 1
ch_find("a word", '!'); // == -1
```