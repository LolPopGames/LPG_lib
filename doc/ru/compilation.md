# Компиляция

<div style="display: flex; justify-content: space-between; margin-bottom: 25px">
  <a href="/doc/index.md">en</a>
  <p style="text-align: right; color: gray; font-size: 15px; font-family: 'Jetbrains Mono', Arial"><a href="/README.md">/</a><a href="/doc/index.md">doc/</a><a href="/doc/ru/index.md">ru/</a>compilation</p>
</div>

Чтобы скомпилировать библиотеку, Вам требуется использовать `Makefile`

Он лежит в корне проекта

Можно использовать следующие комнды:

+ `make` - просто компилирует все файлы и собирает их в <u>статическую</u> библиотеку. Создаёт директорию `build/` если её нет
+ `make clean` - удаляет директорию `build/`, если её небыло, то ничего не делает
+ `make debug` - делает всё тоже самое, что и `make`, но ко всем компилируемым файлам добавляет флаг `-g3` (флаг отладки)