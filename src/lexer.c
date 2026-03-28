#include "lexer.h"

#include <stdio.h>
#include <stdlib.h>

#include "strings.h"

Tok* lex(char** outdoc, size_t* outlen) {
    char* line = NULL;
    size_t len = 0;
    
    while (getline(&line, &len, stdin) != -1) {
        *outlen = stradd(outdoc, line);
    }
    
    free(line); 
  
    return NULL;
}