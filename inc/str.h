// String additional funcs
#ifndef STR_H_
#define STR_H_

#include "asm_types.h"

// returns index of finded char
sqword ch_find(const char *str, char ch);

// returns index of finded string
sqword str_find(const char *str, const char *sub_str);

#endif