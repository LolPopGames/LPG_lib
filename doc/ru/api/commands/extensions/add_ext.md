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
> Если выделение памяти будет провалено, вернётся `NULL`
>
> Либо если `path` или `extension` будут равняться `NULL`
>
> Не забудьте освободить память с помощью `free()`

Параметр `path`:

> Тип данных: `const char *`
>
> _Имя/путь_ файла куда нужно добавить расширение

Параметр `extension`:

> Тип данных: `const char *`
>
> Расширение, которое надо добавить

## Примеры

```c
add_ext("file", "txt"); // "file.txt"
add_ext("source", "c"); // "source.c"
add_ext("program", "elf"); // "program.elf"
```