# Как использовать

языки: [en](/doc/how_to_use.md), **ru**\
путь: [/](/README.md)[doc/](/doc/index.md)[ru/](/doc/ru/index.md)how_to_use

---

Все заголовочные файлы находятся в директории `inc/`

Вы можете импортировать отдельные модули (например, `asm_types.h`),
а можете подключить всю библиотеку

Для этого просто импортируйте заголовочный файл `lpg.h`

---

Далее Вам придётся [скомпилировать](/doc/ru/compilation.md) библиотеку

Вам нужно будет подключить библиотеку при линковке

Она будет лежать в директории `build/`, и называется `liblpg.a`

Вот как это сделать:

1. Пишем `gcc файл_1.c файл_2.o ...`
2. Далее напишите относительный путь до директории, где будет эта библиотека,
во флаге `-L` (например, `-LLPG_lib/build` либо `-L LPG_lib/build`)
3. И напишите название библиотеки во флаге `-l` без префикса `lib` и без расширения (в нашем случае `-llpg`)

## Примеры

```bash
$ gcc -Wall -Wextra -c main.c -o main.o
$ gcc main.o -L LPG_lib/build -llpg -o main 
```

```bash
$ gcc -c file1.c -o file1.o
$ gcc -c file2.c -o file2.o
$ gcc file1.o file2.o -L LPG_lib/build -llpg -o program
```

```bash
$ gcc main.c file1.c -L. -llpg -o test
```