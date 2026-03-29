#include <stddef.h>
#include <stdlib.h>

#ifndef VEC_H
#define VEC_H

#define FREE_VEC(v) do {\
    size_t* d = (void*)v;\
    free(d - 2);\
} while (0)

#define MK_VEC(v) do {\
    void* p = malloc(2 * sizeof(size_t) + sizeof(*v));\
    size_t* d = p;\
    *(d++) = 1;\
    *(d++) = 0;\
    v = (void*)d;\
} while (0)

#define PUSH_VEC(v, e) do {\
    size_t* d = (void*)v;\
    size_t len = *(--d);\
    size_t cap = *(--d);\
    if (len >= cap) {\
        size_t newcap = 2 * cap;\
        void* p = realloc((void*)d, 2 * sizeof(size_t) + newcap * sizeof(*v));\
        if (!p) break;\
        d = p;\
        *(d++) = newcap;\
    }\
    ++(*(d++));\
    v = (void*) d;\
    v[len] = e;\
} while (0)

#endif