# Компиляция

языки: [en](/doc/compilation.md), **ru**\
путь: [/](/README.md)[doc/](/doc/index.md)[ru/](/doc/ru/index.md)compilation

---

Чтобы скомпилировать библиотеку, Вам требуется использовать `Makefile`

Он лежит в корне проекта

Можно использовать следующие команды:

+ `make` - просто компилирует все файлы и собирает их в <u>статическую</u> библиотеку. Создаёт директорию `build/` если её нет
+ `make clean` - удаляет директорию `build/`, если её небыло, то ничего не делает
+ `make debug` - делает всё тоже самое, что и `make`, но ко всем компилируемым файлам добавляет флаг `-g3` (флаг отладки)