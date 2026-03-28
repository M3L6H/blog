#include "lexer.h"

#include <stdio.h>
#include <stdlib.h>

#include "strings.h"

Tok* lex(char** outdoc) {
    char* line = NULL;
    size_t len = 0;
    
    while (getline(&line, &len, stdin) != -1) {
        printf("%s", line);
    }
    
    printf("%d vs %d\n", strlen(line), len);
    len = stradd(&line, "blah");
    printf("%d vs %d\n", strlen(line), len);
    printf("%s", line);
    
    free(line); 
  
    return NULL;
}