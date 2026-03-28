#include <stdio.h>
#include <stdlib.h>

#include "lexer.h"

#define EXIT_ERR 1
#define EXIT_OK 0
#define USAGE "cat file.md | cblog"

int main(int argc, char* argv[]) {
    if (argc != 1) {
        printf("Usage: %s", USAGE);
        return EXIT_ERR;
    }
    
    char* doc = NULL;
    size_t len = 0;
    
    while (getline(&doc, &len, stdin) != -1) {}
    
    lex(doc);
    
    free(doc);
 
    return EXIT_OK;
}