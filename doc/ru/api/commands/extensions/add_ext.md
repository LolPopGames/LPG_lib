# Функция `add_ext()`

<div style="display: flex; justify-content: space-between; margin-bottom: 25px">
  <a href="/doc/ru/api/commands/extensions/add_ext.md">en</a>

  <p style="text-align: right;
            color: gray;
            font-size: 15px;
            font-family: 'Jetbrains Mono', SFMono-Regular, Consolas, 'Liberation Mono', Menlo, monospace, Arial">
      <a href="/README.md">/</a><a href="/doc/index.md">doc/</a><a href="/doc/ru/index.md">ru/</a><a href="/doc/ru/api/index.md">api/</a><a href="/doc/ru/api/commands/index.md">commands/</a><a href="/doc/ru/api/commands/extensions/index.md">extensions/</a><a herf="/doc/ru/api/commands/extensions/add_ext.md">add_ext</a>
  </p>
</div>

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