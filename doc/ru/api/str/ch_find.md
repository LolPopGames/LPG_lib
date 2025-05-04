# Функция `ch_find()`

<div style="display: flex; justify-content: space-between; margin-bottom: 25px">
  <a href="/doc/ru/api/str/ch_find.md">en</a>

  <p style="text-align: right;
            color: gray;
            font-size: 15px;
            font-family: 'Jetbrains Mono', SFMono-Regular, Consolas, 'Liberation Mono', Menlo, monospace, Arial">
      <a href="/README.md">/</a><a href="/doc/index.md">doc/</a><a href="/doc/ru/index.md">ru/</a><a href="/doc/ru/api/index.md">api/</a><a href="/doc/ru/api/str/index.md">str/</a><a herf="/doc/ru/api/str/ch_find.md">ch_find</a>
  </p>
</div>

## Описание

Функция для нахождения индексов символов строк

## Прототип

```c
sqword ch_find(const char *str, char ch);
```

Возвращаемое значение:

> Тип данных: `sqword` (aka `long long`)
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