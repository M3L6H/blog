#ifndef LEXER_H
#define LEXER_H

typedef struct {
  unsigned int t;
  unsigned int a;
  unsigned int b;
} Tok;

Tok* lex();

#endif