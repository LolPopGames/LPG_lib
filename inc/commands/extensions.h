#ifndef EXTENSIONS_H_
#define EXTENSIONS_H_

// returns pointer to the position where is extension
const char *get_ext(const char *path);

// returns allocated string
char *add_ext(const char *path, const char *extension);

// returns allocated string
char *remove_ext(const char *path);

#endif