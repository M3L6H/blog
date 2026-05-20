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
    
    Tok* tokens = lex(&doc, &len);
    free(doc);
    
    printf("cap: %zu ", veccap(tokens);
    printf("len: %zu ", veclen(tokens));
    
    for (int i = 0; i < veclen(tokens); ++i) {
        printf("tok: %zu\n", tokens[i]->t);
    }

    FREE_VEC(tokens);
 
    return EXIT_OK;
}