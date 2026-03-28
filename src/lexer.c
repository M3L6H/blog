#include "lexer.h"

#include <stdio.h>
#include <stdlib.h>

Tok* lex() {
    char* doc = NULL;
    size_t len = 0;
    
    while (getline(&doc, &len, stdin) != -1) {
        printf("%s\n", doc);
    }
    
    free(doc)
  
    return NULL;
}