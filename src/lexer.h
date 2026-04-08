#include <stddef.h>

#ifndef LEXER_H
#define LEXER_H

#define TOK_NL 0
#define TOK_SP 1
#define TOK_WD 2
#define TOK_H1 10
#define TOK_H2 11
#define TOK_H3 12
#define TOK_H4 13
#define TOK_H5 14
#define TOK_H6 15

typedef struct {
  unsigned int t;
  size_t a;
  size_t b;
} Tok;

Tok* lex(char** outdoc, size_t* outlen);

#endif