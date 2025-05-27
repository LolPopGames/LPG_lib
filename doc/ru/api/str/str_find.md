# Функция `str_find()`

языки: [en](/doc/api/str/str_find.md), **ru**\
путь: [/](/README.md)[doc/](/doc/index.md)[ru/](/doc/ru/index.md)[api/](/doc/ru/api/index.md)[str/](/doc/ru/api/str/index.md)str_find

## Описание

Функция для нахождения индексов подстрок из строк

## Прототип

```c
sqword str_find(const char *str, const char *sub_str);
```

Возвращаемое значение:

> Тип данных: [`sqword`](/doc/ru/api/asm_types.md) (aka `long long`)
>
> Индекс **первой** нужной строки
>
> Если её нету, то значение будет равно `-1`

Параметр `str`:

> Тип данных: `const char *`
>
> Строка, в которой нужно найти подстроку

Параметр `sub_str`:

> Тип данных: `const char *`
>
> Подстрока, которую нужно найти

## Примеры

```c
ch_find("Hello, World!", "World"); // == 7
ch_find("Ahhh... Why?", "..."); // == 4
ch_find("a word", "not a word"); // == -1
```