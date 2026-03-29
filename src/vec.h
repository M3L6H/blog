#include <stddef.h>
#include <stdlib.h>

#ifndef VEC_H
#define VEC_H

#define MK_VEC(v) do {\
    void* p = malloc(2 * sizeof(size_t) + sizeof(*v));\
    size_t* d = (size_t*)p;\
    *(d++) = 1;\
    *(d++) = 0;\
    v = (void*)d;\
} while (0)

#endif