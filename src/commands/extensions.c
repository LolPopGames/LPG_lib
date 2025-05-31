// This module is needed to manipulate with extensions

#include <commands/extensions.h>
#include <asm_types.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

// gets extension of the file name/path
// returns pointer to the position where is extension
// param `path` - file name/path
const char *get_ext(const char *path)
{
    if (!path) return NULL;

    char *path_p = (char *)path + strlen(path) -1;

    while (*path_p != '.' && path_p >= path) path_p--;
    return (path_p >= path) ? ++path_p : NULL;
}

// adds extension to a file name/path
// returns dynamic memory allocated string,
// returns `NULL` if allocation failed
// param `path` - file name/path,
// param `extension` - extension to add
char *add_ext(const char *path, const char *extension)
{
    if (!path || !extension) return NULL;

    char *result = malloc(
        strlen(path)*sizeof(char) + sizeof('.') + strlen(extension)*sizeof(char) + sizeof('\0')
    );
    if (!result) return NULL;

    char *result_p = result;

    strcpy(result_p, path);
    
    result_p += strlen(path);
    *result_p = '.';
    
    result_p++;
    strcpy(result_p, extension);

    return result;
}

// removes extension from a file name/path
// returns dynamic memory allocated string,
// returns `NULL` if allocation failed,
// or if the `path` has no extension
// param `path` - file name/path
char *remove_ext(const char *path)
{
    if (!path) return NULL;

    const char *path_p = get_ext(path);
    if (!path_p) return NULL;

    char *result = calloc(
        strlen(path) - strlen(path_p) - sizeof('.') + sizeof('\0'),
        sizeof(char)
    );
    if (!result) return NULL;

    path_p -= 2;

    qword i=path_p - path;
    while (true)
    {
        result[i] = path[i];
        if (!i) return result;
        i--;
    }
}