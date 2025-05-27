# Функция `systemf()`

языки: [en](/doc/api/commands/commands/systemf.md), **ru**\
путь: [/](/README.md)[doc/](/doc/index.md)[ru/](/doc/ru/index.md)[api/](/doc/ru/api/index.md)[commands/](/doc/ru/api/commands/index.md)[commands/](/doc/ru/api/commands/commands/index.md)systemf

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
> Код выхода (копируется из функции `system()`)

Параметр `format`:

> Тип данных: `const char *`
>
> команда для выполнения (как в `system()`),
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