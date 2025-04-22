#include <str.h>
#include <string.h>

// returns index of finded char
sqword ch_find(const char *str, char ch)
{
    char *ch_p = strchr(str, ch);
    return ch_p - str;
}