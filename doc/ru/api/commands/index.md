# Команды и терминалы

языки: [en](/doc/api/commands/index.md), **ru**\
путь: [/](/README.md)[doc/](/doc/index.md)[ru/](/doc/ru/index.md)[api/](/doc/ru/api/index.md)commands

## Описание

Данные модули сделаны для удобной работы с
коммандами, терминалами, файловой системой и подобными вещами

## Модули

Вы можете посмотреть следующие модули:

+ [команды](/doc/ru/api/commands/commands/index.md)
+ [расширения файлов](/doc/ru/api/commands/extensions/index.md)

## Как включить

Чтобы добавить эти заголовочные файлы,
напишите в Вашем коде следующее:

```c
// если эти файлы находится в Вашем проекте в директории `inc/`
#include "inc/commands/commands.h"
#include "inc/commands/extensions.h"

// если директории этих файлов Вы добавляете через флаг `-I`
#include <commands/commands.h>
#include <commands/extensions.h>
```