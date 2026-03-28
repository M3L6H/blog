#include <stddef.h>

#ifndef LEXER_H
#define LEXER_H

typedef struct {
  unsigned int t;
  size_t a;
  size_t b;
} Tok;

Tok* lex(char** outdoc, size_t* outlen);

#endif