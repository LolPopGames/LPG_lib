#include <commands/extensions.h>
#include <asm_types.h>
#include <string.h>
#include <stdlib.h>

// returns pointer to the position where is extension
const char *get_ext(const char *path)
{
    char *path_p = (char *)path + strlen(path) -1;

    while (*path_p != '.') path_p--;
    return ++path_p;
}

// returns allocated string
char *add_ext(const char *path, const char *extension)
{
    char *result = malloc(
        strlen(path)*sizeof(char) + sizeof('.') + strlen(extension)*sizeof(char) + sizeof('\0')
    );

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
    char *result = malloc(
        strlen(path) - strlen(get_ext(path)) - sizeof('.') + sizeof('\0')
    );

    qword i=0;
    while (path[i] != '.')
    {
        result[i] = path[i];
        i++;
    }

    return result;
}