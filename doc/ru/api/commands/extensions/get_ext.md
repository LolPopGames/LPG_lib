# Функция `get_ext()`

языки: [en](/doc/api/commands/extensions/get_ext.md), **ru**\
путь: [/](/README.md)[doc/](/doc/index.md)[ru/](/doc/ru/index.md)[api/](/doc/ru/api/index.md)[commands/](/doc/ru/api/commands/index.md)[extensions/](/doc/ru/api/commands/extensions/index.md)get_ext

## Описание

Функция для получения расширения из _имени/пути_ файла

## Прототип

```c
const char *get_ext(const char *path);
```

Возвращаемое значение:

> Тип данных: `const char *`
>
> Указатель на место в строке `path` где находиться расширение
>
> Это не отдельная строка, а именно указатель на место в строке
>
> Указывать оно будет на первый символ после точки
>
> Если расширения нет, то значение будет равно `NULL`

Параметр `path`:

> Тип данных: `const char *`
>
> _имя/путь_ файла откуда нужно взять расширение

## Примеры

```c
get_ext("file.txt");
//            ^ (pointer)

get_ext(".hidden.md");
//               ^ (pointer)

get_ext("nothing"); // `NULL`
```