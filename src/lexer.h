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
#define TOK_ITL 20
#define TOK_BLD 21
#define TOK_STK 22
#define TOK_COD 23
#define TOK_SUP 24
#define TOK_SUB 25
#define TOK_LTX 26
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