/* A Bison parser, made by GNU Bison 3.7.5.  */

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_YY_PHASE2_TAB_H_INCLUDED
# define YY_YY_PHASE2_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
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
    BEGIN_PARAMS = 258,            /* BEGIN_PARAMS  */
    END_PARAMS = 259,              /* END_PARAMS  */
    BEGIN_LOCALS = 260,            /* BEGIN_LOCALS  */
    END_LOCALS = 261,              /* END_LOCALS  */
    BEGIN_BODY = 262,              /* BEGIN_BODY  */
    END_BODY = 263,                /* END_BODY  */
    FUNCTION = 264,                /* FUNCTION  */
    RETURN = 265,                  /* RETURN  */
    MAIN = 266,                    /* MAIN  */
    L_SQUARE_BRACKET = 267,        /* L_SQUARE_BRACKET  */
    R_SQUARE_BRACKET = 268,        /* R_SQUARE_BRACKET  */
    INTEGER = 269,                 /* INTEGER  */
    ARRAY = 270,                   /* ARRAY  */
    OF = 271,                      /* OF  */
    IF = 272,                      /* IF  */
    THEN = 273,                    /* THEN  */
    ENDIF = 274,                   /* ENDIF  */
    ELSE = 275,                    /* ELSE  */
    WHILE = 276,                   /* WHILE  */
    DO = 277,                      /* DO  */
    BEGINLOOP = 278,               /* BEGINLOOP  */
    ENDLOOP = 279,                 /* ENDLOOP  */
    CONTINUE = 280,                /* CONTINUE  */
    READ = 281,                    /* READ  */
    WRITE = 282,                   /* WRITE  */
    AND = 283,                     /* AND  */
    OR = 284,                      /* OR  */
    NOT = 285,                     /* NOT  */
    TRUE = 286,                    /* TRUE  */
    FALSE = 287,                   /* FALSE  */
    SUB = 288,                     /* SUB  */
    ADD = 289,                     /* ADD  */
    MULT = 290,                    /* MULT  */
    DIV = 291,                     /* DIV  */
    MOD = 292,                     /* MOD  */
    EQ = 293,                      /* EQ  */
    NEQ = 294,                     /* NEQ  */
    LT = 295,                      /* LT  */
    GT = 296,                      /* GT  */
    LTE = 297,                     /* LTE  */
    GTE = 298,                     /* GTE  */
    SEMICOLON = 299,               /* SEMICOLON  */
    COLON = 300,                   /* COLON  */
    COMMA = 301,                   /* COMMA  */
    L_PAREN = 302,                 /* L_PAREN  */
    R_PAREN = 303,                 /* R_PAREN  */
    ASSIGN = 304,                  /* ASSIGN  */
    NUMBER = 305,                  /* NUMBER  */
    IDENT = 306                    /* IDENT  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 20 "phase2.y"

  char *op_val;

#line 119 "phase2.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_PHASE2_TAB_H_INCLUDED  */
