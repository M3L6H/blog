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
#define TOK_LCB 40
#define TOK_RCB 41
#define TOK_LP 42
#define TOK_RP 43
#define TOK_LSB 44
#define TOK_RSB 45

typedef struct {
  unsigned int t;
  size_t a;
  size_t b;
} Tok;

Tok* lex(char** outdoc, size_t* outlen);

#endif