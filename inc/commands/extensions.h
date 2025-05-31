// This module is needed to manipulate with extensions

#ifndef EXTENSIONS_H_
#define EXTENSIONS_H_

// gets extension of the file name/path
// returns pointer to the position where is extension
// param `path` - file name/path
const char *get_ext(const char *path);

// adds extension to a file name/path
// returns dynamic memory allocated string,
// returns `NULL` if allocation failed
// param `path` - file name/path,
// param `extension` - extension to add
char *add_ext(const char *path, const char *extension);

// removes extension from a file name/path
// returns dynamic memory allocated string,
// returns `NULL` if allocation failed,
// or if the `path` has no extension
// param `path` - file name/path
char *remove_ext(const char *path);

#endif /* EXTENSIONS_H_ */