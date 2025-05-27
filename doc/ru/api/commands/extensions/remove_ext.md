# Функция `remove_ext()`

языки: [en](/doc/api/commands/extensions/remove_ext.md), **ru**\
путь: [/](/README.md)[doc/](/doc/index.md)[ru/](/doc/ru/index.md)[api/](/doc/ru/api/index.md)[commands/](/doc/ru/api/commands/index.md)[extensions/](/doc/ru/api/commands/extensions/index.md)remove_ext

## Описание

Функция для удаления расширения из _имени/пути_ файла

## Прототип

```c
char *remove_ext(const char *path);
```

Возвращаемое значение:

> Тип данных: `char *`
>
> Выделенная динамической памятью строка
>
> Является _именем/путём_ файла с удалённым расширением
>
> Если расширения и небыло, то возвращает `NULL`
>
> Не забудьте освободить память с помощью `free()`

Параметр `path`:

> Тип данных: `const char *`
>
> _имя/путь_ файла куда нужно добавить расширение

## Примеры

```c
remove_ext("file.txt"); // "file"
remove_ext("source.c"); // "source"
remove_ext("just_a_file"); // `NULL`
```