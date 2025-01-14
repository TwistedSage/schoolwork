%{
  #include <stdio.h>
  #include "globals.h"
%}

%type <stmt_list>       stmt_list
%type <stmt>            stmt
%type <if_stmt>         if_stmt
%type <if_else_stmt>    if_else_stmt
%type <while_stmt>      while_stmt
%type <for_stmt>        for_stmt
%type <assign_stmt>     assign_stmt
%type <write_stmt>      write_stmt
%type <writeln_stmt>    writeln_stmt
%type <empty_stmt>      empty_stmt
%type <cmpd_stmt>       cmpd_stmt
%type <expr>            expr
%type <int_const_expr>  int_const_expr
%type <variable_expr>   variable_expr
%type <binary_expr>     binary_expr

%token <int_const> T_CONST
%token <symbol> T_IDENT
%token T_LPAREN T_RPAREN T_ASSIGN T_SEMI
%token T_IF T_THEN T_ELSE T_WHILE T_FOR T_TO T_DO
%token T_BEGIN T_END
%token T_WRITE T_WRITELN 
%left T_PLUS T_MINUS
%left T_TIMES T_DIV

%start prog

%%

prog :
  stmt_list { parse_tree = prog_new($1); }
;

stmt_list :
  stmt { $$ = stmt_list_new($1, NULL); }
| stmt T_SEMI stmt_list { $$ = stmt_list_new($1, $3); }
;

stmt :
  if_stmt      { $$ = stmt_new(S_IF, $1); }
| if_else_stmt { $$ = stmt_new(S_IF_ELSE, $1); }
| while_stmt   { $$ = stmt_new(S_WHILE, $1); }
| for_stmt     { $$ = stmt_new(S_FOR, $1); }
| assign_stmt  { $$ = stmt_new(S_ASSIGN, $1); }
| write_stmt   { $$ = stmt_new(S_WRITE, $1); }
| writeln_stmt { $$ = stmt_new(S_WRITELN, $1); }
| cmpd_stmt    { $$ = stmt_new(S_CMPD, $1); }
| empty_stmt   { $$ = stmt_new(S_EMPTY, $1); }
;

if_stmt :
  T_IF expr T_THEN stmt { $$ = if_stmt_new($2, $4); }
;

if_else_stmt :
  T_IF expr T_THEN stmt T_ELSE stmt { $$ = if_else_stmt_new($2, $4, $6); }
;

while_stmt :
  T_WHILE expr T_DO stmt { $$ = while_stmt_new($2, $4); }
;

for_stmt :
  T_FOR T_IDENT T_ASSIGN expr T_TO expr T_DO stmt { $$ = for_stmt_new($2, $4, $6, $8); }
;

assign_stmt :
  T_IDENT T_ASSIGN expr { $$ = assign_stmt_new($1, $3); }
;

write_stmt :
  T_WRITE T_LPAREN expr T_RPAREN { $$ = write_stmt_new($3); }
;

writeln_stmt :
  T_WRITELN T_LPAREN T_RPAREN { $$ = writeln_stmt_new(); }
;

empty_stmt :
  { $$ = empty_stmt_new(); }
;

cmpd_stmt :
  T_BEGIN stmt_list T_END { $$ = cmpd_stmt_new($2); }
;

expr :
  int_const_expr { $$ = expr_new(E_INT_CONST, $1); }
| variable_expr{ $$ = expr_new(E_VARIABLE, $1); }
| T_LPAREN expr T_RPAREN { $$ = $2; }
| binary_expr { $$ = expr_new(E_BINARY, $1); }
;

int_const_expr :
  T_CONST { $$ = int_const_expr_new($1); }
;

variable_expr :
  T_IDENT { $$ = variable_expr_new($1);
}

binary_expr :
  expr T_PLUS  expr { $$ = binary_expr_new(B_PLUS, $1, $3); }
| expr T_MINUS expr { $$ = binary_expr_new(B_MINUS, $1, $3); }
| expr T_TIMES expr { $$ = binary_expr_new(B_TIMES, $1, $3); }
| expr T_DIV expr { $$ = binary_expr_new(B_DIV, $1, $3); }
;

%%
