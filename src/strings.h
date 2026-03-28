#include <stddef.h>

#ifndef STRINGS_H
#define STRINGS_H

char* mkstr(const char* s);
size_t stradd(char** outs, const char* s);
size_t strlen(const char* s);

#endif