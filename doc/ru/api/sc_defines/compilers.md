# Макросы для компиляторов

<div style="display: flex; justify-content: space-between; margin-bottom: 25px">
  <a href="/doc/sc_defines/compilers.md">en</a>

  <p style="text-align: right;
            color: gray;
            font-size: 15px;
            font-family: 'Jetbrains Mono', SFMono-Regular, Consolas, 'Liberation Mono', Menlo, monospace, Arial">
      <a href="/README.md">/</a><a href="/doc/index.md">doc/</a><a href="/doc/ru/index.md">ru/</a><a href="/doc/ru/api/index.md">api/</a><a href="/doc/ru/api/sc_defines/index.md">sc_defines/</a>compilers
  </p>
</div>

Существует множество разных компиляторов,
и для каждого есть свой макрос чтобы определить его

Например:

> Для компилятора **MinGW** есть макросы `__MINGW32__` и `__MINGW64__`
>
> Для компилятора **Clang** есть макросы `__clang__`, `__clang_major__`, `__clang_minor__` и `__clang_patchlevel__`

Как Вы понимаете, в разных специфичных сборках каких-нибудь
макросов может и не быть

Поэтому приходятся проверять на наличие одного из _всех_ вариантов

Для этого и создан этот заголовочный файл,
он будет приводить в один единый вид макросы для каждого компилятора

## Формат

Макросы пишуться по формату:
1. Всё заглавными буквами
2. Без нижних подчеркиваний
3. Без пробелов

---

Есть более специализированные компиляторы,
а есть более обобщённые

Например, **MinGW**

Какждый **MinGW** - это **GCC**,
но не каждый **GCC** - это **MinGW**

Поэтому в перечислении всё будет делиться на уровни,
где в 1-ом самые специализированные компиляторы,
а в последнем самые глобальные

## Поддерживаемые компиляторы

+ Уровень 1:
    + `MINGW` - Minimalist GNU for Windows
    + `MSVC` - Microsoft Visual C++
    + `ICC` - Intel C Compiler
    + `TCC` - Tiny C Compiler
    + `DMC` - Digital Mars Compiler
    + `BORLANDC` - Borland C++
    + `WATCOMC` - Watcom Compiler
    + `CGC` - Code Gear Compiler
    + `XLC` - IBM XL Compiler
    + `GHS` - Green Hills Software
    + `ARMCC` - ARM C Compiler
    + `ARMCC6` - ARM C Compiler version 6
    + `SUNCC` - Sun C Compiler
    + `CRAYC` - Cray Compiler
+ Уровень 2:
    + `CLANG` - Clang
+ Уровень 3:
    + `GCC` - GNU Compiler Collection

## Использование

Чтобы добавить этот заголовочный файл,
напишите в Вашем коде следующее:

```c
// если этот файл находится в Вашем проекте в директории `inc/`
#include "inc/sc_defines/compilers.h"

// если директорию этого файла Вы добавляете через флаг `-I`
#include <sc_defines/compilers.h>
```