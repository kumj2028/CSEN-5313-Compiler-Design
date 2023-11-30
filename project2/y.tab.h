/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
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
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    PROGRAM = 258,                 /* PROGRAM  */
    BEGINPROGRAM = 259,            /* BEGINPROGRAM  */
    ENDPROGRAM = 260,              /* ENDPROGRAM  */
    INTEGER = 261,                 /* INTEGER  */
    ARRAY = 262,                   /* ARRAY  */
    OF = 263,                      /* OF  */
    IF = 264,                      /* IF  */
    THEN = 265,                    /* THEN  */
    ENDIF = 266,                   /* ENDIF  */
    ELSE = 267,                    /* ELSE  */
    WHILE = 268,                   /* WHILE  */
    LOOP = 269,                    /* LOOP  */
    ENDLOOP = 270,                 /* ENDLOOP  */
    READ = 271,                    /* READ  */
    WRITE = 272,                   /* WRITE  */
    TRUE = 273,                    /* TRUE  */
    FALSE = 274,                   /* FALSE  */
    ASSIGN = 275,                  /* ASSIGN  */
    SEMICOLON = 276,               /* SEMICOLON  */
    COLON = 277,                   /* COLON  */
    COMMA = 278,                   /* COMMA  */
    LPAREN = 279,                  /* LPAREN  */
    RPAREN = 280,                  /* RPAREN  */
    L_SQUARE_BRACKET = 281,        /* L_SQUARE_BRACKET  */
    R_SQUARE_BRACKET = 282,        /* R_SQUARE_BRACKET  */
    MULT = 283,                    /* MULT  */
    DIV = 284,                     /* DIV  */
    MOD = 285,                     /* MOD  */
    ADD = 286,                     /* ADD  */
    SUB = 287,                     /* SUB  */
    LT = 288,                      /* LT  */
    LTE = 289,                     /* LTE  */
    GT = 290,                      /* GT  */
    GTE = 291,                     /* GTE  */
    EQ = 292,                      /* EQ  */
    NEQ = 293,                     /* NEQ  */
    NOT = 294,                     /* NOT  */
    AND = 295,                     /* AND  */
    OR = 296,                      /* OR  */
    NUMBER = 297,                  /* NUMBER  */
    IDENT = 298                    /* IDENT  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 11 "mini_l.y"

	char * identVal;
	int numVal;

#line 112 "y.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
