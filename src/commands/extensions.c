// This module is needed to manipulate with extensions

#include <commands/extensions.h>
#include <asm_types.h>
#include <string.h>
#include <stdlib.h>

// returns pointer to the position where is extension
const char *get_ext(const char *path)
{
    if (!path) return NULL;

    char *path_p = (char *)path + strlen(path) -1;

    while (*path_p != '.' && path_p >= path) path_p--;
    return (path_p >= path) ? ++path_p : NULL;
}

// returns allocated string
char *add_ext(const char *path, const char *extension)
{
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

// returns allocated string
char *remove_ext(const char *path)
{
    char *path_p = get_ext(path);
    if (!path_p) return NULL;

    char *result = malloc(
        strlen(path) - strlen(path_p) - sizeof('.') + sizeof('\0')
    );
    if (!result) return NULL;

    path_p -= 2;

    qword i=path_p - path;
    while (i)
    {
        result[i] = path[i];
        i--;
    }

    return result;
}