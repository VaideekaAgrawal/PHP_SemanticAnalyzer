/* A Bison parser, made by GNU Bison 3.5.1.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2020 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    IDENTIFIER = 258,
    STRING = 259,
    CHARACTER = 260,
    INTEGER = 261,
    REAL = 262,
    PhpStart = 263,
    PhpEnd = 264,
    IF = 265,
    ELSE = 266,
    ECHO_T = 267,
    WHILE = 268,
    FOR = 269,
    RETURN = 270,
    BREAK = 271,
    CONTINUE = 272,
    EQ = 273,
    NE = 274,
    GE = 275,
    LE = 276,
    POW = 277,
    INCREMENT = 278,
    DECREMENT = 279,
    SEMICOLON = 280,
    ASSIGNMENT_OP = 281,
    INVALID = 282,
    FUNCTION_TYPE = 283
  };
#endif
/* Tokens.  */
#define IDENTIFIER 258
#define STRING 259
#define CHARACTER 260
#define INTEGER 261
#define REAL 262
#define PhpStart 263
#define PhpEnd 264
#define IF 265
#define ELSE 266
#define ECHO_T 267
#define WHILE 268
#define FOR 269
#define RETURN 270
#define BREAK 271
#define CONTINUE 272
#define EQ 273
#define NE 274
#define GE 275
#define LE 276
#define POW 277
#define INCREMENT 278
#define DECREMENT 279
#define SEMICOLON 280
#define ASSIGNMENT_OP 281
#define INVALID 282
#define FUNCTION_TYPE 283

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 17 "yacc.y"

    char *str;
    int ival;

#line 118 "y.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
