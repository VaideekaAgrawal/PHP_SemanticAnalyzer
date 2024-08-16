%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "y.tab.h" // Include the parser header file
%}

%%

"<?php"          { return PhpStart; }
"?>"             { return PhpEnd; }
"if"             { return IF; }
"else"           { return ELSE; }
"echo"           { return ECHO_T; }
"while"          { return WHILE; }
"for"            { return FOR; }
"return"         { return RETURN; }
"break"          { return BREAK; }
"continue"       { return CONTINUE; }

[A-Za-z_][A-Za-z0-9_]*  { yylval.str = strdup(yytext); return IDENTIFIER; }
[0-9]+                   { yylval.ival = atoi(yytext); return INTEGER; }
[0-9]+"."[0-9]*          { yylval.str = strdup(yytext); return REAL; }
'[^']'                   { yylval.str = strdup(yytext); return CHARACTER; }
\"[^\"]*\"               { yylval.str = strdup(yytext); return STRING; }
"=="                      { return EQ; }
"!="                      { return NE; }
">="                      { return GE; }
"<="                      { return LE; }
"\*\*"                    { return POW; }
"++"                      { return INCREMENT; }
"--"                      { return DECREMENT; }
";"                       { return SEMICOLON; }
"="                       { return ASSIGNMENT_OP; }
[ \t\n]                  ;  // skip whitespace

.                         { fprintf(stderr, "Invalid character: %s\n", yytext); return INVALID; }

%%

int yywrap(void) {
    return 1;
}

