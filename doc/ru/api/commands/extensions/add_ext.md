# Функция `add_ext()`

языки: [en](/doc/api/commands/extensions/add_ext.md), **ru**\
путь: [/](/README.md)[doc/](/doc/index.md)[ru/](/doc/ru/index.md)[api/](/doc/ru/api/index.md)[commands/](/doc/ru/api/commands/index.md)[extensions/](/doc/ru/api/commands/extensions/index.md)add_ext

## Описание

Функция для добавления расширения к _имени/пути_ файла

## Прототип

```c
char *add_ext(const char *path, const char *extension);
```

Возвращаемое значение:

> Тип данных: `char *`
>
> Выделенная динамической памятью строка
>
> Является _именем/путём_ файла с добавленным расширением
>
> Не забудьте освободить память с помощью `free()`

Параметр `path`:

> Тип данных: `const char *`
>
> _имя/путь_ файла откуда нужно удалить расширение

## Примеры

```c
add_ext("file", "txt"); // "file.txt"
add_ext("source", "c"); // "source.c"
add_ext("program", "elf"); // "program.elf"
```