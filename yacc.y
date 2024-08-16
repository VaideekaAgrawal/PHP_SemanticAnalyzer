%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "symbolTable.h" // Include the symbol table header file

extern int currscope;
extern int yylineno;

int yylex();
void yyerror(const char *s) {
    fprintf(stderr, "Semantic error: %s at line %d\n", s, yylineno);
}

%}

%union {
    char *str;
    int ival;
}

%token <str> IDENTIFIER STRING CHARACTER
%token <ival> INTEGER REAL
%token PhpStart PhpEnd IF ELSE ECHO_T WHILE FOR RETURN BREAK CONTINUE EQ NE GE LE POW INCREMENT DECREMENT SEMICOLON ASSIGNMENT_OP INVALID
%token FUNCTION_TYPE

%%

program: PhpStart statements PhpEnd
       ;

statements: statement
          | statements statement
          ;

statement: assignment SEMICOLON { printf("Generating three-address code for assignment statement\n"); }
         | control { printf("Generating three-address code for control statement\n"); }
         | ECHO_T expression SEMICOLON { printf("Generating three-address code for echo statement\n"); }
         | FUNCTION_TYPE IDENTIFIER SEMICOLON { printf("Generating three-address code for function declaration\n"); }
         ;

assignment: IDENTIFIER ASSIGNMENT_OP expression { printf("Assigning value to identifier: %s\n", $1); }
          ;

control: IF '(' expression ')' PhpStart statements PhpEnd { printf("Generating three-address code for if statement\n"); }
       | IF '(' expression ')' PhpStart statements PhpEnd ELSE PhpStart statements PhpEnd { printf("Generating three-address code for if-else statement\n"); }
       | WHILE '(' expression ')' PhpStart statements PhpEnd { printf("Generating three-address code for while loop\n"); }
       | FOR '(' assignment SEMICOLON expression SEMICOLON assignment ')' PhpStart statements PhpEnd { printf("Generating three-address code for for loop\n"); }
       | RETURN expression SEMICOLON { printf("Generating three-address code for return statement\n"); }
       | BREAK SEMICOLON { printf("Generating three-address code for break statement\n"); }
       | CONTINUE SEMICOLON { printf("Generating three-address code for continue statement\n"); }
       ;

expression: IDENTIFIER { printf("Using identifier: %s\n", $1); }
           | INTEGER { printf("Using integer constant: %d\n", $1); }
           | REAL { printf("Using real constant: %d\n", $1); } // Corrected format specifier
           | expression '+' expression
           | expression '-' expression
           | expression '*' expression
           | expression '/' expression
           | '(' expression ')'
           ;

%%

int main() {
    yyparse();
    return 0;
}

