# Макросы для систем

<div style="display: flex; justify-content: space-between; margin-bottom: 25px">
  <a href="/doc/sc_defines/systems.md">en</a>

  <p style="text-align: right;
            color: gray;
            font-size: 15px;
            font-family: 'Jetbrains Mono', SFMono-Regular, Consolas, 'Liberation Mono', Menlo, monospace, Arial">
      <a href="/README.md">/</a><a href="/doc/index.md">doc/</a><a href="/doc/ru/index.md">ru/</a><a href="/doc/ru/api/index.md">api/</a><a href="/doc/ru/api/sc_defines/index.md">sc_defines/</a>systems
  </p>
</div>

Существует множество разных систем,
и для каждой есть свой макрос чтобы определить её

Например:

> В Windows есть `_WIN32` и `_WIN64`
>
> В Linux есть `__linux__`, `__gnu_linux__`, `__linux` и `linux`

Как Вы понимаете, в разных специфичных сборках каких-нибудь
макросов может и не быть

Поэтому приходятся проверять на наличие одного из _всех_ вариантов

Для этого и создан этот заголовочный файл,
он будет приводить в один единый вид макросы для каждой системы

## Формат

Макросы пишуться по формату:
1. Всё заглавными буквами
2. Полное название системы (не сокращённое)
3. Без нижних подчеркиваний
4. Без пробелов

---

Есть более специализированные системы,
а есть более обобщённые

Например, **Android**

Каждый **Android** - это **Linux**,
но не каждый **Linux** - это **Android**

Поэтому в перечислении всё будет делиться на уровни,
где в 1-ом самые специализированные системы,
а в последнем самые глобальные

## Поддерживаемые системы

+ Уровень 1:
    + `WINDOWS` - Windows
    + `MACOS` - MacOS
    + `ANDROID` - Android
    + `FREEBSD` - FreeBSD
    + `NETBSD` - NetBSD
    + `OPENBSD` - OpenBSD
    + `SOLARIS` - Solaris (Sun OS)
    + `HAIKU` - Haiku
    + `CYGWIN` - CYGWIN
+ Уровень 2:
    + `LINUX` - Linux
    + `APPLE` - Apple
+ Уровень 3:
    + `UNIX` - Unix

## Использование

Чтобы добавить этот заголовочный файл,
напишите в Вашем коде следующее:

```c
// если этот файл находится в Вашем проекте в директории `inc/`
#include "inc/sc_defines/systems.h"

// если директорию этого файла Вы добавляете через флаг `-I`
#include <sc_defines/systems.h>
```