#include <stdio.h>
#include <stdlib.h>

#include "lexer.h"
#include "strings.h"
#include "vec.h"

#define EXIT_ERR 1
#define EXIT_OK 0
#define USAGE "cat file.md | cblog"

int main(int argc, char* argv[]) {
    if (argc != 1) {
        printf("Usage: %s", USAGE);
        return EXIT_ERR;
    }

    char* doc = mkstr("");
    size_t len = 0;
    
    lex(&doc, &len);
    
    printf("%s\n", doc);
    printf("len: %zu\n", len);
    
    free(doc);
    
    char* myvec = NULL;
    MK_VEC(myvec);
    
    size_t* d = (void*)myvec;
    printf("len: %zu", *(--d));
    printf("cap: %zu", *(--d));
 
    return EXIT_OK;
}