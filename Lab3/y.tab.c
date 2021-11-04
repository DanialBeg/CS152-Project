/* A Bison parser, made by GNU Bison 3.7.6.  */

/* Bison implementation for Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30706

/* Bison version string.  */
#define YYBISON_VERSION "3.7.6"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "mini_l.y"

#define YY_NO_UNPUT
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int yyerror(char *s);
int yylex(void);
extern FILE* yyin;

#line 82 "y.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
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

#line 192 "y.tab.c"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_FUNCTION = 3,                   /* FUNCTION  */
  YYSYMBOL_IF = 4,                         /* IF  */
  YYSYMBOL_ENDIF = 5,                      /* ENDIF  */
  YYSYMBOL_ELSE = 6,                       /* ELSE  */
  YYSYMBOL_THEN = 7,                       /* THEN  */
  YYSYMBOL_RETURN = 8,                     /* RETURN  */
  YYSYMBOL_BEGIN_PARAMS = 9,               /* BEGIN_PARAMS  */
  YYSYMBOL_END_PARAMS = 10,                /* END_PARAMS  */
  YYSYMBOL_BEGIN_LOCALS = 11,              /* BEGIN_LOCALS  */
  YYSYMBOL_END_LOCALS = 12,                /* END_LOCALS  */
  YYSYMBOL_BEGIN_BODY = 13,                /* BEGIN_BODY  */
  YYSYMBOL_END_BODY = 14,                  /* END_BODY  */
  YYSYMBOL_SEMICOLON = 15,                 /* SEMICOLON  */
  YYSYMBOL_COLON = 16,                     /* COLON  */
  YYSYMBOL_COMMA = 17,                     /* COMMA  */
  YYSYMBOL_READ = 18,                      /* READ  */
  YYSYMBOL_WRITE = 19,                     /* WRITE  */
  YYSYMBOL_OF = 20,                        /* OF  */
  YYSYMBOL_INTEGER = 21,                   /* INTEGER  */
  YYSYMBOL_OR = 22,                        /* OR  */
  YYSYMBOL_TRUE = 23,                      /* TRUE  */
  YYSYMBOL_FALSE = 24,                     /* FALSE  */
  YYSYMBOL_DO = 25,                        /* DO  */
  YYSYMBOL_BEGINLOOP = 26,                 /* BEGINLOOP  */
  YYSYMBOL_ENDLOOP = 27,                   /* ENDLOOP  */
  YYSYMBOL_CONTINUE = 28,                  /* CONTINUE  */
  YYSYMBOL_WHILE = 29,                     /* WHILE  */
  YYSYMBOL_ARRAY = 30,                     /* ARRAY  */
  YYSYMBOL_UND = 31,                       /* UND  */
  YYSYMBOL_COMMENT = 32,                   /* COMMENT  */
  YYSYMBOL_IDENT = 33,                     /* IDENT  */
  YYSYMBOL_NUMBER = 34,                    /* NUMBER  */
  YYSYMBOL_ASSIGN = 35,                    /* ASSIGN  */
  YYSYMBOL_AND = 36,                       /* AND  */
  YYSYMBOL_NOT = 37,                       /* NOT  */
  YYSYMBOL_LT = 38,                        /* LT  */
  YYSYMBOL_GT = 39,                        /* GT  */
  YYSYMBOL_EQ = 40,                        /* EQ  */
  YYSYMBOL_NEQ = 41,                       /* NEQ  */
  YYSYMBOL_LTE = 42,                       /* LTE  */
  YYSYMBOL_GTE = 43,                       /* GTE  */
  YYSYMBOL_ADD = 44,                       /* ADD  */
  YYSYMBOL_SUB = 45,                       /* SUB  */
  YYSYMBOL_MULT = 46,                      /* MULT  */
  YYSYMBOL_DIV = 47,                       /* DIV  */
  YYSYMBOL_MOD = 48,                       /* MOD  */
  YYSYMBOL_UNMINUS = 49,                   /* UNMINUS  */
  YYSYMBOL_L_SQUARE_BRACKET = 50,          /* L_SQUARE_BRACKET  */
  YYSYMBOL_R_SQUARE_BRACKET = 51,          /* R_SQUARE_BRACKET  */
  YYSYMBOL_L_PAREN = 52,                   /* L_PAREN  */
  YYSYMBOL_R_PAREN = 53,                   /* R_PAREN  */
  YYSYMBOL_YYACCEPT = 54,                  /* $accept  */
  YYSYMBOL_prog_start = 55,                /* prog_start  */
  YYSYMBOL_functions = 56,                 /* functions  */
  YYSYMBOL_function = 57,                  /* function  */
  YYSYMBOL_ident = 58,                     /* ident  */
  YYSYMBOL_identifiers = 59,               /* identifiers  */
  YYSYMBOL_number = 60,                    /* number  */
  YYSYMBOL_declaration = 61,               /* declaration  */
  YYSYMBOL_declarations = 62,              /* declarations  */
  YYSYMBOL_statements = 63,                /* statements  */
  YYSYMBOL_statement = 64,                 /* statement  */
  YYSYMBOL_65_bool_exp = 65,               /* bool-exp  */
  YYSYMBOL_66_relation_and_exp = 66,       /* relation-and-exp  */
  YYSYMBOL_67_relation_exp = 67,           /* relation-exp  */
  YYSYMBOL_comp = 68,                      /* comp  */
  YYSYMBOL_expression = 69,                /* expression  */
  YYSYMBOL_expressions = 70,               /* expressions  */
  YYSYMBOL_71_multiplicative_expression = 71, /* multiplicative-expression  */
  YYSYMBOL_72_multiplicative_expressions = 72, /* multiplicative-expressions  */
  YYSYMBOL_term = 73,                      /* term  */
  YYSYMBOL_vars = 74,                      /* vars  */
  YYSYMBOL_var = 75                        /* var  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_uint8 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                            \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if !defined yyoverflow

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* !defined yyoverflow */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  7
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   171

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  54
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  22
/* YYNRULES -- Number of rules.  */
#define YYNRULES  70
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  142

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   308


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    35,    35,    38,    39,    42,    44,    46,    47,    48,
      51,    54,    55,    58,    59,    62,    63,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    77,    78,    81,    82,
      85,    86,    87,    88,    89,    90,    91,    92,    95,    96,
      97,    98,    99,   100,   103,   104,   105,   108,   109,   110,
     113,   114,   115,   116,   119,   120,   121,   122,   123,   125,
     126,   127,   128,   129,   130,   131,   132,   135,   136,   139,
     140
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "FUNCTION", "IF",
  "ENDIF", "ELSE", "THEN", "RETURN", "BEGIN_PARAMS", "END_PARAMS",
  "BEGIN_LOCALS", "END_LOCALS", "BEGIN_BODY", "END_BODY", "SEMICOLON",
  "COLON", "COMMA", "READ", "WRITE", "OF", "INTEGER", "OR", "TRUE",
  "FALSE", "DO", "BEGINLOOP", "ENDLOOP", "CONTINUE", "WHILE", "ARRAY",
  "UND", "COMMENT", "IDENT", "NUMBER", "ASSIGN", "AND", "NOT", "LT", "GT",
  "EQ", "NEQ", "LTE", "GTE", "ADD", "SUB", "MULT", "DIV", "MOD", "UNMINUS",
  "L_SQUARE_BRACKET", "R_SQUARE_BRACKET", "L_PAREN", "R_PAREN", "$accept",
  "prog_start", "functions", "function", "ident", "identifiers", "number",
  "declaration", "declarations", "statements", "statement", "bool-exp",
  "relation-and-exp", "relation-exp", "comp", "expression", "expressions",
  "multiplicative-expression", "multiplicative-expressions", "term",
  "vars", "var", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_int16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308
};
#endif

#define YYPACT_NINF (-40)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-15)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
       7,     5,    43,   -40,     7,   -40,    44,   -40,   -40,    55,
      11,    48,    54,    60,    62,     5,   -13,   -15,    66,   -40,
     -40,    29,   -40,    -7,    46,    76,   -40,    31,    82,    80,
      79,    68,     8,   -22,     5,     5,    85,   -40,     8,    56,
      99,   100,    88,   -40,   -40,   -40,   -40,    86,    21,     8,
     -25,   120,   108,   115,   101,     4,    38,   -40,   -22,   -40,
     -40,   135,   -40,    79,   127,   -22,   -40,    79,   -22,   -40,
     -40,     8,   101,   -22,   -40,   -40,   102,    94,    69,    79,
       8,     8,   -40,   -40,   -40,   -40,   -40,   -40,   -22,   -22,
     -22,   -22,   -22,   -22,   103,     5,   130,    79,   107,   -40,
     -40,   106,   -22,   109,   -40,   -40,   -40,   137,   110,    51,
     -40,   -40,   -40,   -40,   -40,   -40,    70,   -40,   -40,   -40,
     131,   134,   -40,   -40,   -40,   -40,   -22,   -40,   -40,    79,
     -22,   -22,   -22,     8,   -40,   -40,   159,   -40,   -40,   -40,
     -40,   -40
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       4,     0,     0,     2,     4,     6,     0,     1,     3,     0,
       9,     7,     0,     0,     0,     9,     0,    14,     0,     8,
      12,     0,    13,     9,     0,     0,    10,     0,     0,     0,
      15,     0,     0,     0,     0,     0,     0,    24,     0,    69,
       0,     0,     0,    11,    32,    33,    61,     0,     0,     0,
      69,     0,    26,    28,     0,    44,    50,    59,     0,    25,
      22,    67,    23,    15,     0,     0,     5,    15,     0,    34,
      35,     0,     0,     0,    66,    65,     0,     0,     0,    15,
       0,     0,    40,    41,    38,    39,    42,    43,     0,     0,
       0,    58,    58,    58,     0,     0,     0,    15,     0,    16,
      17,     0,     0,     0,    36,    62,    63,    47,     0,     0,
      27,    29,    30,    45,    46,    53,    54,    52,    51,    68,
       0,     0,    70,    37,    31,    64,    49,    60,    18,    15,
       0,     0,     0,     0,    20,    48,     0,    57,    56,    55,
      21,    19
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -40,   -40,   161,   -40,    -1,   151,   119,   -40,    -4,   -39,
     -40,   -34,    87,   -40,    97,     3,    45,    -6,    53,    57,
     -32,   -28
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
       0,     2,     3,     4,    50,    12,    27,    13,    14,    40,
      41,    51,    52,    53,    88,    54,   108,    55,   115,    56,
      60,    57
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
       6,    -9,    42,    62,    64,   -14,    61,    61,    20,    11,
       1,     5,    46,    22,    11,    76,    11,    21,     5,    25,
      75,   -14,    11,    48,    96,    65,     5,    78,    99,    39,
      58,    44,    45,    39,    39,    42,    59,   101,     5,    42,
     109,     5,    46,     7,     5,    47,   110,    39,    89,    90,
      72,    42,    77,    48,     5,    26,   128,   129,   121,     9,
      49,    94,    39,   119,    10,    15,    39,    61,    98,    42,
      16,   100,    18,    73,    77,    17,   103,    23,    39,    24,
      26,   107,    29,    32,    91,    92,    93,    33,    28,    43,
     136,   112,   113,   114,    39,    30,    39,    34,    35,   140,
      31,    42,     5,    46,    36,   124,    65,    37,    38,    69,
      70,    63,     5,    66,    48,    67,   130,   131,   132,     5,
      46,    58,   106,    68,   137,   138,   139,    79,    39,   107,
      80,    48,    82,    83,    84,    85,    86,    87,    71,    82,
      83,    84,    85,    86,    87,   117,   118,   105,   116,   116,
     116,    81,    95,    97,   126,   104,   105,   120,   122,   123,
     133,   134,   125,   127,   141,     8,    19,    74,   111,   102,
       0,   135
};

static const yytype_int16 yycheck[] =
{
       1,    16,    30,    35,    38,    12,    34,    35,    21,    10,
       3,    33,    34,    17,    15,    49,    17,    30,    33,    23,
      48,    10,    23,    45,    63,    50,    33,    52,    67,    30,
      52,    23,    24,    34,    35,    63,    33,    71,    33,    67,
      79,    33,    34,     0,    33,    37,    80,    48,    44,    45,
      47,    79,    49,    45,    33,    34,     5,     6,    97,    15,
      52,    58,    63,    95,     9,    17,    67,    95,    65,    97,
      16,    68,    10,    52,    71,    15,    73,    11,    79,    50,
      34,    78,    51,     4,    46,    47,    48,     8,    12,    21,
     129,    88,    89,    90,    95,    13,    97,    18,    19,   133,
      20,   129,    33,    34,    25,   102,    50,    28,    29,    23,
      24,    26,    33,    14,    45,    15,    46,    47,    48,    33,
      34,    52,    53,    35,   130,   131,   132,     7,   129,   126,
      22,    45,    38,    39,    40,    41,    42,    43,    52,    38,
      39,    40,    41,    42,    43,    92,    93,    53,    91,    92,
      93,    36,    17,    26,    17,    53,    53,    27,    51,    53,
      29,    27,    53,    53,     5,     4,    15,    48,    81,    72,
      -1,   126
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     3,    55,    56,    57,    33,    58,     0,    56,    15,
       9,    58,    59,    61,    62,    17,    16,    15,    10,    59,
      21,    30,    62,    11,    50,    62,    34,    60,    12,    51,
      13,    20,     4,     8,    18,    19,    25,    28,    29,    58,
      63,    64,    75,    21,    23,    24,    34,    37,    45,    52,
      58,    65,    66,    67,    69,    71,    73,    75,    52,    69,
      74,    75,    74,    26,    65,    50,    14,    15,    35,    23,
      24,    52,    69,    52,    60,    75,    65,    69,    52,     7,
      22,    36,    38,    39,    40,    41,    42,    43,    68,    44,
      45,    46,    47,    48,    69,    17,    63,    26,    69,    63,
      69,    65,    68,    69,    53,    53,    53,    69,    70,    63,
      65,    66,    69,    69,    69,    72,    73,    72,    72,    74,
      27,    63,    51,    53,    69,    53,    17,    53,     5,     6,
      46,    47,    48,    29,    27,    70,    63,    71,    71,    71,
      65,     5
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    54,    55,    56,    56,    57,    58,    59,    59,    59,
      60,    61,    61,    62,    62,    63,    63,    64,    64,    64,
      64,    64,    64,    64,    64,    64,    65,    65,    66,    66,
      67,    67,    67,    67,    67,    67,    67,    67,    68,    68,
      68,    68,    68,    68,    69,    69,    69,    70,    70,    70,
      71,    71,    71,    71,    72,    72,    72,    72,    72,    73,
      73,    73,    73,    73,    73,    73,    73,    74,    74,    75,
      75
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     0,    12,     1,     1,     3,     0,
       1,     8,     3,     3,     0,     0,     3,     3,     5,     7,
       5,     6,     2,     2,     1,     2,     1,     3,     1,     3,
       3,     4,     1,     1,     2,     2,     3,     4,     1,     1,
       1,     1,     1,     1,     1,     3,     3,     1,     3,     0,
       1,     3,     3,     3,     1,     3,     3,     3,     0,     1,
       4,     1,     3,     3,     4,     2,     2,     1,     3,     1,
       4
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
# ifndef YY_LOCATION_PRINT
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif


# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yykind < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yykind], *yyvaluep);
# endif
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;




/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    goto yyexhaustedlab;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;


/*-----------.
| yybackup.  |
`-----------*/
yybackup:
  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 2: /* prog_start: functions  */
#line 35 "mini_l.y"
                                        {printf("prog_start -> functions\n");}
#line 1359 "y.tab.c"
    break;

  case 3: /* functions: function functions  */
#line 38 "mini_l.y"
                                        {printf("functions -> function functions\n");}
#line 1365 "y.tab.c"
    break;

  case 4: /* functions: %empty  */
#line 39 "mini_l.y"
                                                {printf("functions -> epsilon\n");}
#line 1371 "y.tab.c"
    break;

  case 5: /* function: FUNCTION ident SEMICOLON BEGIN_PARAMS declarations END_PARAMS BEGIN_LOCALS declarations END_LOCALS BEGIN_BODY statements END_BODY  */
#line 42 "mini_l.y"
                                                                                                                                                        {printf("function -> FUNCTION IDENT SEMICOLON BEGIN_PARAMS declarations END_PARAMS BEGIN_LOCALS declarations END_LOCALS BEGIN_BODY statements END_BODY\n");}
#line 1377 "y.tab.c"
    break;

  case 6: /* ident: IDENT  */
#line 44 "mini_l.y"
              {printf("ident -> IDENT %s\n", (yyvsp[0].label));}
#line 1383 "y.tab.c"
    break;

  case 7: /* identifiers: ident  */
#line 46 "mini_l.y"
                        {printf("identifiers -> ident\n");}
#line 1389 "y.tab.c"
    break;

  case 8: /* identifiers: ident COMMA identifiers  */
#line 47 "mini_l.y"
                                                                {printf("identifiers -> ident COMMA identifiers\n");}
#line 1395 "y.tab.c"
    break;

  case 9: /* identifiers: %empty  */
#line 48 "mini_l.y"
                                                        {printf("prog_start -> epsilon\n");}
#line 1401 "y.tab.c"
    break;

  case 10: /* number: NUMBER  */
#line 51 "mini_l.y"
                                {}
#line 1407 "y.tab.c"
    break;

  case 11: /* declaration: identifiers COLON ARRAY L_SQUARE_BRACKET number R_SQUARE_BRACKET OF INTEGER  */
#line 54 "mini_l.y"
                                                                                                {printf("declaration -> identifiers COLON ARRAY L_SQUARE_BRACKET NUMBER R_SQUARE_BRACKET OF INTEGER\n");}
#line 1413 "y.tab.c"
    break;

  case 12: /* declaration: identifiers COLON INTEGER  */
#line 55 "mini_l.y"
                                                            {printf("declaration -> identifiers COLON INTEGER\n");}
#line 1419 "y.tab.c"
    break;

  case 13: /* declarations: declaration SEMICOLON declarations  */
#line 58 "mini_l.y"
                                                        {printf("declarations -> declaration SEMICOLON declarations\n");}
#line 1425 "y.tab.c"
    break;

  case 14: /* declarations: %empty  */
#line 59 "mini_l.y"
                                                        {printf("declarations -> epsilon\n");}
#line 1431 "y.tab.c"
    break;

  case 15: /* statements: %empty  */
#line 62 "mini_l.y"
                                        {printf("statements -> epsilon\n");}
#line 1437 "y.tab.c"
    break;

  case 16: /* statements: statement SEMICOLON statements  */
#line 63 "mini_l.y"
                                                                 {printf("statements -> statement SEMICOLON statements\n");}
#line 1443 "y.tab.c"
    break;

  case 17: /* statement: var ASSIGN expression  */
#line 66 "mini_l.y"
                                                {printf("statement -> var ASSIGN expression\n");}
#line 1449 "y.tab.c"
    break;

  case 18: /* statement: IF bool-exp THEN statements ENDIF  */
#line 67 "mini_l.y"
                                                                                {printf("statement -> IF bool_exp THEN statements ENDIF\n");}
#line 1455 "y.tab.c"
    break;

  case 19: /* statement: IF bool-exp THEN statements ELSE statements ENDIF  */
#line 68 "mini_l.y"
                                                                                                {printf("statement -> IF bool_exp THEN statements ELSE statements ENDIF\n");}
#line 1461 "y.tab.c"
    break;

  case 20: /* statement: WHILE bool-exp BEGINLOOP statements ENDLOOP  */
#line 69 "mini_l.y"
                                                                                {printf("statement -> WHILE bool_exp BEGINLOOP statements ENDLOOP\n");}
#line 1467 "y.tab.c"
    break;

  case 21: /* statement: DO BEGINLOOP statements ENDLOOP WHILE bool-exp  */
#line 70 "mini_l.y"
                                                                                        {printf("statement -> DO BEGINLOOP statements ENDLOOP WHILE bool_exp\n");}
#line 1473 "y.tab.c"
    break;

  case 22: /* statement: READ vars  */
#line 71 "mini_l.y"
                                                {printf("statement -> READ vars\n");}
#line 1479 "y.tab.c"
    break;

  case 23: /* statement: WRITE vars  */
#line 72 "mini_l.y"
                                                {printf("statement -> WRITE vars\n");}
#line 1485 "y.tab.c"
    break;

  case 24: /* statement: CONTINUE  */
#line 73 "mini_l.y"
                                                        {printf("statement -> CONTINUE\n");}
#line 1491 "y.tab.c"
    break;

  case 25: /* statement: RETURN expression  */
#line 74 "mini_l.y"
                                                                {printf("statement -> RETURN expression\n");}
#line 1497 "y.tab.c"
    break;

  case 26: /* bool-exp: relation-and-exp  */
#line 77 "mini_l.y"
                                                {printf("bool_exp -> relation_and_exp\n");}
#line 1503 "y.tab.c"
    break;

  case 27: /* bool-exp: relation-and-exp OR bool-exp  */
#line 78 "mini_l.y"
                                                                {printf("bool_exp -> relation_and_exp OR relation_and_exp\n");}
#line 1509 "y.tab.c"
    break;

  case 28: /* relation-and-exp: relation-exp  */
#line 81 "mini_l.y"
                                        {printf("relation_and_exp -> relation_exp\n");}
#line 1515 "y.tab.c"
    break;

  case 29: /* relation-and-exp: relation-exp AND relation-and-exp  */
#line 82 "mini_l.y"
                                                                                {printf("relation_and_exp -> relation_exp AND relation_exp\n");}
#line 1521 "y.tab.c"
    break;

  case 30: /* relation-exp: expression comp expression  */
#line 85 "mini_l.y"
                                                {printf("relation_exp -> expression comp expression\n");}
#line 1527 "y.tab.c"
    break;

  case 31: /* relation-exp: NOT expression comp expression  */
#line 86 "mini_l.y"
                                                                        {printf("relation_exp -> NOT expression comp expression\n");}
#line 1533 "y.tab.c"
    break;

  case 32: /* relation-exp: TRUE  */
#line 87 "mini_l.y"
                                                {printf("relation_exp -> TRUE\n");}
#line 1539 "y.tab.c"
    break;

  case 33: /* relation-exp: FALSE  */
#line 88 "mini_l.y"
                                                {printf("relation_exp -> FALSE\n");}
#line 1545 "y.tab.c"
    break;

  case 34: /* relation-exp: NOT TRUE  */
#line 89 "mini_l.y"
                                                {printf("relation_exp -> NOT TRUE\n");}
#line 1551 "y.tab.c"
    break;

  case 35: /* relation-exp: NOT FALSE  */
#line 90 "mini_l.y"
                                                {printf("relation_exp -> NOT TRUE\n");}
#line 1557 "y.tab.c"
    break;

  case 36: /* relation-exp: L_PAREN bool-exp R_PAREN  */
#line 91 "mini_l.y"
                                                                        {printf("relation_exp -> L_PAREN bool_exp R_PAREN");}
#line 1563 "y.tab.c"
    break;

  case 37: /* relation-exp: NOT L_PAREN bool-exp R_PAREN  */
#line 92 "mini_l.y"
                                                                        {printf("relation_exp -> NOT L_PAREN bool_exp R_PAREN");}
#line 1569 "y.tab.c"
    break;

  case 38: /* comp: EQ  */
#line 95 "mini_l.y"
                        {printf("comp -> EQ\n");}
#line 1575 "y.tab.c"
    break;

  case 39: /* comp: NEQ  */
#line 96 "mini_l.y"
                        {printf("comp -> NEQ\n");}
#line 1581 "y.tab.c"
    break;

  case 40: /* comp: LT  */
#line 97 "mini_l.y"
                        {printf("comp -> LT\n");}
#line 1587 "y.tab.c"
    break;

  case 41: /* comp: GT  */
#line 98 "mini_l.y"
                        {printf("comp -> GT\n");}
#line 1593 "y.tab.c"
    break;

  case 42: /* comp: LTE  */
#line 99 "mini_l.y"
                        {printf("comp -> LTE\n");}
#line 1599 "y.tab.c"
    break;

  case 43: /* comp: GTE  */
#line 100 "mini_l.y"
                        {printf("comp -> GTE\n");}
#line 1605 "y.tab.c"
    break;

  case 44: /* expression: multiplicative-expression  */
#line 103 "mini_l.y"
                                                        {printf("expression -> multiplicative_expression\n");}
#line 1611 "y.tab.c"
    break;

  case 45: /* expression: multiplicative-expression ADD expression  */
#line 104 "mini_l.y"
                                                                                {printf("expression -> multiplicative_expression ADD multiplicative_expression\n");}
#line 1617 "y.tab.c"
    break;

  case 46: /* expression: multiplicative-expression SUB expression  */
#line 105 "mini_l.y"
                                                                                {printf("expression -> multiplicative_expression SUB multiplicative_expression\n");}
#line 1623 "y.tab.c"
    break;

  case 47: /* expressions: expression  */
#line 108 "mini_l.y"
                                        {}
#line 1629 "y.tab.c"
    break;

  case 48: /* expressions: expression COMMA expressions  */
#line 109 "mini_l.y"
                                                                {}
#line 1635 "y.tab.c"
    break;

  case 49: /* expressions: %empty  */
#line 110 "mini_l.y"
                                                {printf("expressions -> epsilon\n");}
#line 1641 "y.tab.c"
    break;

  case 50: /* multiplicative-expression: term  */
#line 113 "mini_l.y"
                                                {printf("multiplicative_expression -> term\n");}
#line 1647 "y.tab.c"
    break;

  case 51: /* multiplicative-expression: term MOD multiplicative-expressions  */
#line 114 "mini_l.y"
                                                                                                        {printf("multiplicative_expression -> term MOD term\n");}
#line 1653 "y.tab.c"
    break;

  case 52: /* multiplicative-expression: term DIV multiplicative-expressions  */
#line 115 "mini_l.y"
                                                                                                        {printf("multiplicative_expression -> term DIV term\n");}
#line 1659 "y.tab.c"
    break;

  case 53: /* multiplicative-expression: term MULT multiplicative-expressions  */
#line 116 "mini_l.y"
                                                                                                        {printf("multiplicative_expression -> term MULT term\n");}
#line 1665 "y.tab.c"
    break;

  case 54: /* multiplicative-expressions: term  */
#line 119 "mini_l.y"
                                                {}
#line 1671 "y.tab.c"
    break;

  case 55: /* multiplicative-expressions: term MOD multiplicative-expression  */
#line 120 "mini_l.y"
                                                                                                        {printf("multiplicative_expression -> term MOD term\n");}
#line 1677 "y.tab.c"
    break;

  case 56: /* multiplicative-expressions: term DIV multiplicative-expression  */
#line 121 "mini_l.y"
                                                                                                        {printf("multiplicative_expression -> term DIV term\n");}
#line 1683 "y.tab.c"
    break;

  case 57: /* multiplicative-expressions: term MULT multiplicative-expression  */
#line 122 "mini_l.y"
                                                                                                        {printf("multiplicative_expression -> term MULT term\n");}
#line 1689 "y.tab.c"
    break;

  case 58: /* multiplicative-expressions: %empty  */
#line 123 "mini_l.y"
                                                                                {}
#line 1695 "y.tab.c"
    break;

  case 59: /* term: var  */
#line 125 "mini_l.y"
                {printf("term -> var\n");}
#line 1701 "y.tab.c"
    break;

  case 60: /* term: ident L_PAREN expressions R_PAREN  */
#line 126 "mini_l.y"
                                                        {printf("term -> ident L_PAREN expressions R_PAREN term\n");}
#line 1707 "y.tab.c"
    break;

  case 61: /* term: NUMBER  */
#line 127 "mini_l.y"
                                {printf("term -> NUMBER\n");}
#line 1713 "y.tab.c"
    break;

  case 62: /* term: L_PAREN expression R_PAREN  */
#line 128 "mini_l.y"
                                                {printf("term -> L_PAREN expression R_PAREN\n");}
#line 1719 "y.tab.c"
    break;

  case 63: /* term: ident L_PAREN R_PAREN  */
#line 129 "mini_l.y"
                                                {printf("term -> ident L_PAREN R_PAREN\n");}
#line 1725 "y.tab.c"
    break;

  case 64: /* term: SUB L_PAREN expression R_PAREN  */
#line 130 "mini_l.y"
                                                                        {printf("term -> SUB L_PAREN expression R_PAREN\n");}
#line 1731 "y.tab.c"
    break;

  case 65: /* term: SUB var  */
#line 131 "mini_l.y"
                                                        {printf("term -> UNMINUS var\n");}
#line 1737 "y.tab.c"
    break;

  case 66: /* term: SUB number  */
#line 132 "mini_l.y"
                                                        {printf("term -> UNMINUS number\n");}
#line 1743 "y.tab.c"
    break;

  case 67: /* vars: var  */
#line 135 "mini_l.y"
                        {printf("vars -> var\n");}
#line 1749 "y.tab.c"
    break;

  case 68: /* vars: var COMMA vars  */
#line 136 "mini_l.y"
                                        {printf("vars -> var COMMA vars\n");}
#line 1755 "y.tab.c"
    break;

  case 69: /* var: ident  */
#line 139 "mini_l.y"
                {printf("var -> ident\n");}
#line 1761 "y.tab.c"
    break;

  case 70: /* var: ident L_SQUARE_BRACKET expression R_SQUARE_BRACKET  */
#line 140 "mini_l.y"
                                                                        {printf("var -> ident L_SQUARE_BRACKET expression R_SQUARE_BRACKET\n");}
#line 1767 "y.tab.c"
    break;


#line 1771 "y.tab.c"

      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (YY_("syntax error"));
    }

  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;


#if !defined yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturn;
#endif


/*-------------------------------------------------------.
| yyreturn -- parsing is finished, clean up and return.  |
`-------------------------------------------------------*/
yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 142 "mini_l.y"


int yyerror(char *s)
{
  extern int line;
  printf("Error on line %d\n", line);
  return line;
}
