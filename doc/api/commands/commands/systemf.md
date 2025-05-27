# `systemf()` function

languages: **en**, [ru](/doc/ru/api/commands/commands/systemf.md)\
path: [/](/README.md)[doc/](/doc/index.md)[api/](/doc/api/index.md)[commands/](/doc/api/commands/index.md)[commands/](/doc/api/commands/commands/index.md)systemf

## Description

_System Formatted_

A function based on the `system()` function,
essentially does the same thing,
but supports insertion of modifiers

## Prototype

```c
int systemf(const char *format, ...);
```

Return value:

> Type: `int`
>
> Exit code (copies from `system()` function)

Parameter `format`:

> Type: `const char *`
>
> Command to execute (like `system()`),
> but with modifier support

Various arguments `...`:

> Parameters that replace modifiers
>
> The data type of each parameter must
> match the type of the modifier

## Examples

```c
systemf("echo %s", "Hello, World!"); // stdout: Hello, World!
systemf("var=%d", 4); // $var == 4
systemf("echo I have %d friends and I like to %s", 2, "go out with them."); // stdout: I have 2 friends and I like to go out with them.
```