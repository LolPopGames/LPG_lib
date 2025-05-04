# Комманды и терминалы

<div style="display: flex; justify-content: space-between; margin-bottom: 25px">
  <a href="/doc/ru/api/commands/.md">en</a>

  <p style="text-align: right;
            color: gray;
            font-size: 15px;
            font-family: 'Jetbrains Mono', SFMono-Regular, Consolas, 'Liberation Mono', Menlo, monospace, Arial">
      <a href="/README.md">/</a><a href="/doc/index.md">doc/</a><a href="/doc/ru/index.md">ru/</a><a href="/doc/ru/api/index.md">api/</a>commands
  </p>
</div>

## Описание

Данные модули сделаны для удобной работы с
коммандами, терминалами, файловой системой и подобными вещами

## Модули

Вы можете посмотреть следующие модули:

+ [комманды](/doc/ru/api/commands/commands/index.md)
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