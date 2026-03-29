#include "vec.h"

size_t veccap(const void* v) {
    const size_t* d = v;
    return *(d - 2);
}

size_t veclen(const void* v) {
    const size_t* d = v;
    return *(d - 1);
}