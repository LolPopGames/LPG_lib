# Функция `remove_ext()`

<div style="display: flex; justify-content: space-between; margin-bottom: 25px">
  <a href="/doc/ru/api/commands/extensions/remove_ext.md">en</a>

  <p style="text-align: right;
            color: gray;
            font-size: 15px;
            font-family: 'Jetbrains Mono', SFMono-Regular, Consolas, 'Liberation Mono', Menlo, monospace, Arial">
      <a href="/README.md">/</a><a href="/doc/index.md">doc/</a><a href="/doc/ru/index.md">ru/</a><a href="/doc/ru/api/index.md">api/</a><a href="/doc/ru/api/commands/index.md">commands/</a><a href="/doc/ru/api/commands/extensions/index.md">extensions/</a><a herf="/doc/ru/api/commands/extensions/remove_ext.md">remove_ext</a>
  </p>
</div>

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