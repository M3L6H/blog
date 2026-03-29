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
    free(doc);
    
    char* myvec = NULL;
    MK_VEC(myvec);
    //PUSH_VEC(myvec, 'h');
    //PUSH_VEC(myvec, 'e');
    //PUSH_VEC(myvec, 'l');
    //PUSH_VEC(myvec, 'l');
    //PUSH_VEC(myvec, 'o');
    PUSH_VEC(myvec, '\0');
    
    size_t* d = (void*)myvec;
    printf("len: %zu ", *(--d));
    printf("cap: %zu\n", *(--d));
    printf("%s", myvec);
    printf("strlen: %zu\n", strlen(myvec));
    
    FREE_VEC(myvec);
 
    return EXIT_OK;
}