# Управление строками

<div style="display: flex; justify-content: space-between; margin-bottom: 25px">
  <a href="/doc/ru/api/str/.md">en</a>

  <p style="text-align: right;
            color: gray;
            font-size: 15px;
            font-family: 'Jetbrains Mono', SFMono-Regular, Consolas, 'Liberation Mono', Menlo, monospace, Arial">
      <a href="/README.md">/</a><a href="/doc/index.md">doc/</a><a href="/doc/ru/index.md">ru/</a><a href="/doc/ru/api/index.md">api/</a>str
  </p>
</div>

## Описание

Чтобы ещё удобнее работать со строками был придуман этот модуль,
он будет добавлять больше функций и конструкций для работы с ними

## Функции

Вы можете посмотреть следующии функции и конструкции:

+ [`ch_find()`](/doc/ru/api/str/ch_find.md)
+ [`str_find()`](/doc/ru/api/str/str_find.md)

## Как включить

Чтобы добавить этот заголовочный файл,
напишите в Вашем коде следующее:

```c
// если этот файл находится в Вашем проекте в директории `inc/`
#include "inc/str.h"

// если директорию этого файла Вы добавляете через флаг `-I`
#include <str.h>
```