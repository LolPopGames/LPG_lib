# Функция `ch_find()`

языки: [en](/doc/api/str/ch_find.md), **ru**\
путь: [/](/README.md)[doc/](/doc/index.md)[ru/](/doc/ru/index.md)[api/](/doc/ru/api/index.md)[str/](/doc/ru/api/str/index.md)ch_find

## Описание

Функция для нахождения индексов символов строк

## Прототип

```c
sqword ch_find(const char *str, char ch);
```

Возвращаемое значение:

> Тип данных: [`sqword`](/doc/ru/api/asm_types.md) (aka `long long`)
>
> Индекс **первого** нужного символа
>
> Если его нету, то значение будет равно `-1`

Параметр `str`:

> Тип данных: `const char *`
>
> Строка, в которой нужно найти символ

Параметр `ch`:

> Тип данных: `char`
>
> Символ, который нужно найти

## Примеры

```c
ch_find("Hello, World!", 'W'); // == 7
ch_find("Ahhh...", 'h'); // == 1
ch_find("a word", '!'); // == -1
```