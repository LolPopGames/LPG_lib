# Функция `systemf()`

<div style="display: flex; justify-content: space-between; margin-bottom: 25px">
  <a href="/doc/ru/api/commands/commands/systemf.md">en</a>

  <p style="text-align: right;
            color: gray;
            font-size: 15px;
            font-family: 'Jetbrains Mono', SFMono-Regular, Consolas, 'Liberation Mono', Menlo, monospace, Arial">
      <a href="/README.md">/</a><a href="/doc/index.md">doc/</a><a href="/doc/ru/index.md">ru/</a><a href="/doc/ru/api/index.md">api/</a><a href="/doc/ru/api/commands/index.md">commands/</a><a href="/doc/ru/api/commands/commands/index.md">commands/</a><a herf="/doc/ru/api/commands/commands/systemf.md">systemf</a>
  </p>
</div>

## Описание

_System Formatted_

Функция, основанная на функции `system()`,
по сути делает тоже самое,
однако поддерижвает вставку модификаторов

## Прототип

```c
int systemf(const char *format, ...);
```

Возвращаемое значение:

> Тип данных: `int`
>
> Код выхода (копируется из команды `system()`)

Параметр `format`:

> Тип данных: `const char *`
>
> Комманда для выполнения (как в `system()`),
> но с поддержкой модификаторов

Переменные аргументы `...`:
> Параметры, заменяющие модификаторы
>
> Тип данных каждого параметра должен
> соответствовать типу модификатора

## Примеры

```c
systemf("echo %s", "Hello, World!"); // stdout: Hello, World!
systemf("var=%d", 4); // $var == 4
systemf("echo I have %d friends and I like to %s", 2, "go out with them."); // stdout: I have 2 friends and I like to go out with them.
```