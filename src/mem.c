#include "mem.h"

void memcpy(void* dest, const void* src, long unsigned int n) {
    char* destination = (char*)dest;
    const char* source = (const char*)src;

    for (size_t i = 0; i < n; i++) {
        destination[i] = source[i];
    }
}