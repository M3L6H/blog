#include "strings.h"

#include <stdlib.h>

#include "mem.h"

size_t stradd(char** outs, const char* s) {
    size_t a = strlen(*outs);
    if (!s) return a;
    size_t b = strlen(s);
    if (!b) return a;
    char* p = realloc(*outs, (1 + a + b) * sizeof(char));
    if (!p) return a;
    memcpy(p, *outs, a);
    memcpy(p + a, s, b + 1);
    free(*outs);
    *outs = p;
    return a + b;
}

size_t strlen(const char* s) {
    const char* p = s;
    while (*(p++)) {}
    return p - s;
}