// String module with additional features

#ifndef STR_H_
#define STR_H_

#include "asm_types.h"

// finds index of a char in the strings
// returns index of the first matching char,
// if it's not found, the value will be `-1`
// param `str` - main string
// param `ch` - character to find
sqword ch_find(const char *str, char ch);

// finds index of a char in the strings
// returns index of the first matching substring,
// if it’s not found, the value will be `-1`
// param `str` - main string
// param `sub_str` - substring to find
sqword str_find(const char *str, const char *sub_str);

#endif /* STR_H_ */