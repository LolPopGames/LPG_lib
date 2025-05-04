# Функция `str_find()`

<div style="display: flex; justify-content: space-between; margin-bottom: 25px">
  <a href="/doc/ru/api/str/str_find.md">en</a>

  <p style="text-align: right;
            color: gray;
            font-size: 15px;
            font-family: 'Jetbrains Mono', SFMono-Regular, Consolas, 'Liberation Mono', Menlo, monospace, Arial">
      <a href="/README.md">/</a><a href="/doc/index.md">doc/</a><a href="/doc/ru/index.md">ru/</a><a href="/doc/ru/api/index.md">api/</a><a href="/doc/ru/api/str/index.md">str/</a><a herf="/doc/ru/api/str/str_find.md">str_find</a>
  </p>
</div>

## Описание

Функция для нахождения индексов подстрок из строк

## Прототип

```c
sqword str_find(const char *str, const char *sub_str);
```

Возвращаемое значение:

> Тип данных: `sqword` (aka `long long`)
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