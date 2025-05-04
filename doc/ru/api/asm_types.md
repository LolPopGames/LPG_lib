# Типы данных языка ассемблера

<div style="display: flex; justify-content: space-between; margin-bottom: 25px">
  <a href="/doc/api/asm_types.md">en</a>

  <p style="text-align: right;
            color: gray;
            font-size: 15px;
            font-family: 'Jetbrains Mono', SFMono-Regular, Consolas, 'Liberation Mono', Menlo, monospace, Arial">
      <a href="/README.md">/</a><a href="/doc/index.md">doc/</a><a href="/doc/ru/index.md">ru/</a><a href="/doc/ru/api/index.md">api/</a>asm_types
  </p>
</div>

## Описание

Это довольно простой заголовочный файл,
содержущий базовые типы из языка ассемблера

## Типы данных

Среди этих типов данных есть:

+ Беззнаковые:
    + `byte` (1 байт)
    + `word` (2 байта)
    + `dword` (4 байта)
    + `qword` (8 байт)
+ Знаковые:
    + `sbyte` (1 байт)
    + `sword` (2 байта)
    + `sdword` (4 байта)
    + `sqword` (8 байт)

## Как включить

Чтобы добавить этот заголовочный файл,
напишите в Вашем коде следующее:

```c
// если этот файл находится в Вашем проекте в директории `inc/`
#include "inc/asm_types.h"

// если директорию этого файла Вы добавляете через флаг `-I`
#include <asm_types.h>
```