/** @file parser.c
 * The parser for the stack compiler.
 */

#include <stdio.h>
#include "globals.h"

/**
 * Buffers the current token.
 */
int lookahead;

/**
  *keeps track of labels.
  */
static int while_label = 0;
static int if_label = 0;

/**
 * Checks for a particular token. If it's not there, it's an
 * error. If it is, the token is discarded.
 * @param token The token to match.
 */
void match(int token) 
{
  if (lookahead == token) {
    lookahead = scan();
  }
  else {
    error("syntax error: expected %s but found %s", token_names[token], token_names[lookahead]);
  }
}

/**
 * Discards the current token.
 */
void discard() 
{
  lookahead = scan();
}

// Forward declarations.
void parse_expr();
void parse_if_stmt();
void parse_while_stmt();
    
/**
 * Parses a factor.
 * Production: factor &rarr; LPAREN expr RPAREN | IDENT | CONST
 */
void parse_factor() 
{
  switch (lookahead) {
  case T_LPAREN:
    discard();
    parse_expr();
    match(T_RPAREN);
    break;
  case T_CONST:
    emit(O_PUSH, token_value.const_value);
    discard();
    break;
  case T_IDENT:
    emit(O_RVALUE, token_value.symbol_value);
    discard();
    break;
  }
}

/**
 * Parses a term.
 * Production: term &rarr; factor ( ( TIMES | DIV ) factor ) *.
 */
void parse_term() 
{
  parse_factor();
  while (1) {
    switch (lookahead) {
    case T_TIMES:
      discard();
      parse_factor();
      emit(O_MUL, 0);
      break;
    case T_DIV:
      discard();
      parse_factor();
      emit(O_DIV, 0);
      break;
    default:
      return;
    }
  }
}

/**
 * Parses an expression.
 * Production: expr &rarr; term ( ( PLUS | MINUS ) term ) *.
 */
void parse_expr() 
{
  parse_term();
  while (1) {
    switch (lookahead) {
    case T_PLUS:
      discard();
      parse_term();
      emit(O_ADD, 0);
      break;
    case T_MINUS:
      discard();
      parse_term();
      emit(O_SUB, 0);
      break;
    default:
      return;
    }
  }
}

/**
 * Parses an assignment statment.
 * Production: assign_stmt &rarr; IDENT ASSIGN expr
 */
void parse_assign_stmt() 
{
  emit(O_LVALUE, token_value.symbol_value);
  discard();
  match(T_ASSIGN);
  parse_expr();
  emit(O_ASSIGN, 0);
}

/**
 * Parses a write statement.
 * Production: write_stmt &rarr; WRITE LPAREN expr RPAREN
 */
void parse_write_stmt() 
{
  discard();
  match(T_LPAREN);
  parse_expr();
  match(T_RPAREN);
  emit(O_WRITE, 0);
}

/**
 * Parses a writeln statement.
 * Production: write_stmt &rarr; WRITELN LPAREN RPAREN
 */
void parse_writeln_stmt() 
{
  discard();
  match(T_LPAREN);
  match(T_RPAREN);
  emit(O_WRITELN, 0);
}

/**
 * Parses a statement.
 * Production: stmt &rarr; assign_stmt | write_stmt | writeln_stmt |
 * if_stmt | while_stmt
 */
void parse_stmt() 
{
  switch (lookahead) {
  case T_IDENT:
    parse_assign_stmt();
    break;
  case T_WRITE:
    parse_write_stmt();
    break;
  case T_WRITELN:
    parse_writeln_stmt();
    break;
  case T_IF:
    parse_if_stmt();
    break;
  case T_WHILE:
    parse_while_stmt();
    break;
  default:
    error("syntax error: expected %s or %s or %s or %s or %s but found %s", 
	  token_names[T_IDENT], token_names[T_WRITE], token_names[T_WRITELN], token_names[T_IF], token_names[T_WHILE], token_names[lookahead]);
  }
}

/**
  * Parses an if statement.
  * Production: if_stmt &rarr; IF expr THEN stmt
  * Label namer based on concepts by Dr. Sullivan, Artem Puzikov,
  * and Jesse Goble
  */
void parse_if_stmt()
{
  char label[10];
  sprintf(label, "if%d", if_label);
  if_label++;
  
  discard();
  parse_expr();
  emit(O_GOFALSE, label);
  match(T_THEN);
  parse_stmt();
  emit(O_LABEL, label);
}

/**
  * Parses a while statement.
  * Production: while_stmt &rarr; WHILE expr DO stmt
  * Label namer based on concepts by Dr. Sullivan, Artem Puzikov,
  * and Jesse Goble
  */
void parse_while_stmt()
{

  char label1[10];
  char label2[10];
  sprintf(label1, "wh%d", while_label);
  while_label++;
  sprintf(label2, "wh%d", while_label);
  while_label++;
  
  emit(O_LABEL, label1);
  discard();
  parse_expr();
  emit(O_GOFALSE, label2);
  match(T_DO);
  parse_stmt();
  emit(O_GOTO, label1);
  emit(O_LABEL, label2);
  
}


/**
 * Parses a list of statements.
 * Production: stmt_list &rarr; stmt ( SEMI stmt ) *
 */
void parse_stmt_list() 
{
  parse_stmt();
  while (lookahead == T_SEMI) {
    discard();
    parse_stmt();
  }
}

/**
 * Parses the input stream and produces stack output.
 * Production: prog &rarr; stmt_list EOF
 */
void parse_prog() 
{
  lookahead = scan();
  parse_stmt_list(); 
  match(T_EOF);
}
