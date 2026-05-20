#include "lexer.h"

#include <stdio.h>
#include <stdlib.h>

#include "strings.h"
#include "vec.h"

Tok* lex(char** outdoc, size_t* outlen) {
    char* line = NULL;
    size_t len = 0;
    Tok* tokens = NULL;
    MK_VEC(tokens);
    size_t a = 0;
    
    while (getline(&line, &len, stdin) != -1) {
        *outlen = stradd(outdoc, line);
        size_t llen = strlen(line);
        for (size_t i = 0; i < llen; ++i) {
            size_t b = *outlen - llen + i;
            int tok = gettok(*outdoc, a, b, llen);
            if (tok) {
                PUSH_VEC(tokens, (Tok){tok, a, b});
                a = b + 1;
            } 
        }
    }
    
    free(line); 
  
    return tokens;
}

int gettok(const char* outdoc, const size_t a, const size_t b, const size_t llen) {
    char nextch = b + 1 >= llen ? '\0' : outdoc[b + 1];
 
    if (outdoc[a] == '\n') return TOK_NL;
    if (outdoc[a] == ' ') {
        if (nextch != ' ') {
            return TOK_SP;
        }
        return 0;
    }
    
    if (isnotwd(nextch)) {
        return TOK_WD;
    }
    
    return 0;
}

int isnotwd(const char c) {
    return c == ' ' || c == '\n' || c == '\0';
}