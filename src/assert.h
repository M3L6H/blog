#include <stdio.h>
#include <stdlib.h>

#ifndef NDEBUG
    #define ASSERT(condition, message) \
        do { \
            if (!(condition)) { \
                fprintf(stderr, message); \
                abort(); \
            } \
        } while (0)
#else
    #define ASSERT(condition, message) ((void)0)
#endif