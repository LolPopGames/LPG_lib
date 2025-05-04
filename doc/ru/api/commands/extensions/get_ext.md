# Функция `get_ext()`

<div style="display: flex; justify-content: space-between; margin-bottom: 25px">
  <a href="/doc/ru/api/commands/extensions/get_ext.md">en</a>

  <p style="text-align: right;
            color: gray;
            font-size: 15px;
            font-family: 'Jetbrains Mono', SFMono-Regular, Consolas, 'Liberation Mono', Menlo, monospace, Arial">
      <a href="/README.md">/</a><a href="/doc/index.md">doc/</a><a href="/doc/ru/index.md">ru/</a><a href="/doc/ru/api/index.md">api/</a><a href="/doc/ru/api/commands/index.md">commands/</a><a href="/doc/ru/api/commands/extensions/index.md">extensions/</a><a herf="/doc/ru/api/commands/extensions/get_ext.md">get_ext</a>
  </p>
</div>

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