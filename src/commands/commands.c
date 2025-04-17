#include <commands/commands.h>
#include <asm_types.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>


int systemf(const char *format, ...)
{
    va_list args;
    va_start(args, format);
    
    // ------- counting memory length
    va_list args_;
    va_copy(args_, args);

    qword length = vsnprintf(NULL, 0, format, args_);

    va_end(args_);

    // ------- making command
    char *command = malloc(length * sizeof(char) + sizeof('\0'));
    if (!command)
    {
        va_end(args);
        return -1;
    }
    
    vsnprintf(command, ++length, format, args_);

    va_end(args);

    // ------- running command
    int result = system(command);

    free(command);

    return result;
}