# Коды выхода

<div style="display: flex; justify-content: space-between; margin-bottom: 25px">
  <a href="/doc/api/exit_codes.md">en</a>

  <p style="text-align: right;
            color: gray;
            font-size: 15px;
            font-family: 'Jetbrains Mono', SFMono-Regular, Consolas, 'Liberation Mono', Menlo, monospace, Arial">
      <a href="/README.md">/</a><a href="/doc/index.md">doc/</a><a href="/doc/ru/index.md">ru/</a><a href="/doc/ru/api/index.md">api/</a>exit_codes
  </p>
</div>

## Описание

Этот заголовочный файл сорержит коды выхода
из функций или других вещей

## Коды выхода

Среди кодов выхода есть:

+ `EC_SUCCESS` == `0` (Успех)
+ `EC_FAILURE` == `1` (Провал)
+
+ `EC_INVALID_ARGUMENT` == `2` (Неправильный аргумент)
+ 
+ `EC_FILE_NOT_FOUND` == `3` (Файл не найден)
+ `EC_CANNOT_OPEN_FILE` == `4` (Невозможно открыть файл)
+ `EC_CANNOT_READ_FILE` == `5` (Невозможно прочитать файл)
+ `EC_CANNOT_WRITE_FILE` == `6` (Невозможно писать в файле)
+ 
+ `EC_FAILED_MEMORY_ALLOCATION` == `7` (Провалено выделение динамической памяти)
+ `EC_NULL_POINTER_ERROR` == `8` (Ошибка нулевого указателя)
+ 
+ `EC_DIVISION_BY_ZERO` == `9` (Деление на ноль)
+ `EC_TIMEOUT` == `10` (Время истекло)
+ `EC_UNSUPPORTED` == `11` (Не поддерживается)
+ `EC_INTERNAL` == `12` (Ошибка в интервале времени)
+ `EC_IO_ERROR` == `13` (Ошибка ввода/вывода)
+ `EC_PERMISSION_DENIED` == `14` (Действие отменено)

## Как включить

Чтобы добавить этот заголовочный файл,
напишите в Вашем коде следующее:

```c
// если этот файл находится в Вашем проекте в директории `inc/`
#include "inc/exit_codes.h"

// если директорию этого файла Вы добавляете через флаг `-I`
#include <exit_codes.h>
```