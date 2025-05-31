// String module with additional features

#include <str.h>
#include <string.h>

// finds index of a char in the strings
// returns index of the first matching char,
// if it's not found, the value will be `-1`
// param `str` - main string
// param `ch` - character to find
sqword ch_find(const char *str, char ch)
{
    char *ch_p = strchr(str, ch);
    return (ch_p) ? ch_p-str : -1;
}

// finds index of a char in the strings
// returns index of the first matching substring,
// if it’s not found, the value will be `-1`
// param `str` - main string
// param `sub_str` - substring to find
sqword str_find(const char *str, const char *sub_str)
{
    char *str_p = strstr(str, sub_str);
    return (str_p) ? str_p-str : -1;
}