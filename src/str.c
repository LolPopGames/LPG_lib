// String module with additional features

#include <str.h>
#include <string.h>

// returns index of finded char
// if it is not, returns -1
sqword ch_find(const char *str, char ch)
{
    char *ch_p = strchr(str, ch);
    return (ch_p) ? ch_p-str : -1;
}

// returns index of finded string
// if it is not, returns -1
sqword str_find(const char *str, const char *sub_str)
{
    char *str_p = strstr(str, sub_str);
    return (str_p) ? str_p-str : -1;
}