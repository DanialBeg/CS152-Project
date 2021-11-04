/* A Bison parser, made by GNU Bison 3.7.6.  */

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
    FUNCTION = 258,                /* FUNCTION  */
    IF = 259,                      /* IF  */
    ENDIF = 260,                   /* ENDIF  */
    ELSE = 261,                    /* ELSE  */
    THEN = 262,                    /* THEN  */
    RETURN = 263,                  /* RETURN  */
    BEGIN_PARAMS = 264,            /* BEGIN_PARAMS  */
    END_PARAMS = 265,              /* END_PARAMS  */
    BEGIN_LOCALS = 266,            /* BEGIN_LOCALS  */
    END_LOCALS = 267,              /* END_LOCALS  */
    BEGIN_BODY = 268,              /* BEGIN_BODY  */
    END_BODY = 269,                /* END_BODY  */
    SEMICOLON = 270,               /* SEMICOLON  */
    COLON = 271,                   /* COLON  */
    COMMA = 272,                   /* COMMA  */
    READ = 273,                    /* READ  */
    WRITE = 274,                   /* WRITE  */
    OF = 275,                      /* OF  */
    INTEGER = 276,                 /* INTEGER  */
    OR = 277,                      /* OR  */
    TRUE = 278,                    /* TRUE  */
    FALSE = 279,                   /* FALSE  */
    DO = 280,                      /* DO  */
    BEGINLOOP = 281,               /* BEGINLOOP  */
    ENDLOOP = 282,                 /* ENDLOOP  */
    CONTINUE = 283,                /* CONTINUE  */
    WHILE = 284,                   /* WHILE  */
    ARRAY = 285,                   /* ARRAY  */
    UND = 286,                     /* UND  */
    COMMENT = 287,                 /* COMMENT  */
    IDENT = 288,                   /* IDENT  */
    NUMBER = 289,                  /* NUMBER  */
    ASSIGN = 290,                  /* ASSIGN  */
    AND = 291,                     /* AND  */
    NOT = 292,                     /* NOT  */
    LT = 293,                      /* LT  */
    GT = 294,                      /* GT  */
    EQ = 295,                      /* EQ  */
    NEQ = 296,                     /* NEQ  */
    LTE = 297,                     /* LTE  */
    GTE = 298,                     /* GTE  */
    ADD = 299,                     /* ADD  */
    SUB = 300,                     /* SUB  */
    MULT = 301,                    /* MULT  */
    DIV = 302,                     /* DIV  */
    MOD = 303,                     /* MOD  */
    UNMINUS = 304,                 /* UNMINUS  */
    L_SQUARE_BRACKET = 305,        /* L_SQUARE_BRACKET  */
    R_SQUARE_BRACKET = 306,        /* R_SQUARE_BRACKET  */
    L_PAREN = 307,                 /* L_PAREN  */
    R_PAREN = 308                  /* R_PAREN  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 12 "mini_l.y"

	int ival;
	char* label;
	int n;
	int a;

#line 124 "y.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
