/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 1 "mini_l.y" /* yacc.c:339  */

   #include<stdlib.h>
   #include<stdio.h>
   #include<string.h>
   void yyerror(const char *msg);
   extern int currLine;
   int myError = 0;
   int otherError = 0;
   
   char *identToken;
   char funcmain[] = "main";
   int mainflag = 0; // 0 = notmain, 1 = main
   int numberToken;
   int productionID = 0;

   char list_of_function_names[100][100];
   int  count_names = 0;

//#define YYDEBUG 1
//yydebug=1;

#line 88 "y.tab.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "y.tab.h".  */
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
    BEGIN_PARAMS = 258,
    END_PARAMS = 259,
    BEGIN_LOCALS = 260,
    END_LOCALS = 261,
    BEGIN_BODY = 262,
    END_BODY = 263,
    FUNCTION = 264,
    RETURN = 265,
    MAIN = 266,
    L_SQUARE_BRACKET = 267,
    R_SQUARE_BRACKET = 268,
    INTEGER = 269,
    ARRAY = 270,
    OF = 271,
    IF = 272,
    THEN = 273,
    ENDIF = 274,
    ELSE = 275,
    WHILE = 276,
    DO = 277,
    BEGINLOOP = 278,
    ENDLOOP = 279,
    CONTINUE = 280,
    READ = 281,
    WRITE = 282,
    AND = 283,
    OR = 284,
    NOT = 285,
    TRUE = 286,
    FALSE = 287,
    SUB = 288,
    ADD = 289,
    MULT = 290,
    DIV = 291,
    MOD = 292,
    EQ = 293,
    NEQ = 294,
    LT = 295,
    GT = 296,
    LTE = 297,
    GTE = 298,
    SEMICOLON = 299,
    COLON = 300,
    COMMA = 301,
    L_PAREN = 302,
    R_PAREN = 303,
    ASSIGN = 304,
    NUMBER = 305,
    IDENT = 306
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 23 "mini_l.y" /* yacc.c:355  */

  char *op_val;
  int int_val;

#line 185 "y.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 202 "y.tab.c" /* yacc.c:358  */

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

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

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
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


#if ! defined yyoverflow || YYERROR_VERBOSE

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
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
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
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  8
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   145

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  52
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  22
/* YYNRULES -- Number of rules.  */
#define YYNRULES  63
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  133

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   306

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
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
      45,    46,    47,    48,    49,    50,    51
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    52,    52,    57,    58,    61,    70,    74,    86,    91,
      92,    96,   103,   110,   120,   122,   124,   126,   128,   130,
     132,   134,   138,   140,   144,   146,   155,   168,   175,   177,
     179,   184,   186,   188,   190,   192,   194,   196,   201,   202,
     206,   208,   212,   214,   218,   220,   224,   226,   228,   230,
     232,   234,   236,   238,   242,   244,   246,   248,   250,   252,
     255,   261,   268,   272
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "BEGIN_PARAMS", "END_PARAMS",
  "BEGIN_LOCALS", "END_LOCALS", "BEGIN_BODY", "END_BODY", "FUNCTION",
  "RETURN", "MAIN", "L_SQUARE_BRACKET", "R_SQUARE_BRACKET", "INTEGER",
  "ARRAY", "OF", "IF", "THEN", "ENDIF", "ELSE", "WHILE", "DO", "BEGINLOOP",
  "ENDLOOP", "CONTINUE", "READ", "WRITE", "AND", "OR", "NOT", "TRUE",
  "FALSE", "SUB", "ADD", "MULT", "DIV", "MOD", "EQ", "NEQ", "LT", "GT",
  "LTE", "GTE", "SEMICOLON", "COLON", "COMMA", "L_PAREN", "R_PAREN",
  "ASSIGN", "NUMBER", "IDENT", "$accept", "prog_start", "functions",
  "function", "end_body", "function_ident", "ident", "declarations",
  "declaration", "statement", "statements", "expression",
  "multiplicative_expression", "term", "expressions",
  "comma_sep_expressions", "bool_exp", "relation_and_exp", "relation_exp",
  "comp", "var", "vars", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306
};
# endif

#define YYPACT_NINF -46

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-46)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int8 yypact[] =
{
      15,   -16,    46,   -46,    15,     8,   -46,   -46,   -46,   -46,
      50,     5,    25,    68,    29,    -2,    69,     5,   -46,    64,
       5,   -46,    27,    81,    75,    84,    77,    85,    87,   -31,
      28,    28,    73,   -46,   -16,   -16,    86,    55,    97,    59,
     -46,   -40,   -31,   -46,    -8,   -46,    11,   -14,   -46,    82,
     -46,   -46,    28,    78,    91,    93,    95,   101,    85,    80,
     -46,   -46,   -31,    85,   -46,   -46,   -31,   -31,   -46,   -46,
      79,   -31,   -31,   -31,   -31,   -31,   -31,   -46,   -46,    28,
      78,    42,    83,   -46,   -46,   -46,   -46,   -46,   -46,   -31,
      85,    28,    28,    85,   104,   -16,   117,   -46,   -46,    89,
     -46,    88,    90,   -46,   -46,   -46,   -46,   -46,   -46,    92,
     -31,   -46,   -46,    31,   -46,   -46,   111,   118,   -46,   -46,
     -46,   -31,   -46,   -46,   -46,   -46,    85,   -46,    28,   -46,
     122,   -46,   -46
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       3,     0,     0,     2,     3,     0,     8,     7,     1,     4,
       0,     9,     0,     0,     0,     0,     0,     9,    11,     0,
       9,    10,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    20,     0,     0,    60,     0,     0,     0,
      12,     0,     0,    33,    60,    21,    24,    27,    31,     0,
      48,    50,     0,     0,     0,    42,    44,     0,     0,    62,
      18,    19,     0,    22,     6,     5,     0,     0,    34,    32,
       0,    38,     0,     0,     0,     0,     0,    49,    51,     0,
       0,     0,     0,    54,    55,    56,    57,    58,    59,     0,
       0,     0,     0,     0,     0,     0,     0,    23,    13,     0,
      35,    40,     0,    39,    26,    25,    28,    29,    30,     0,
       0,    52,    46,     0,    43,    45,     0,     0,    63,    61,
      36,     0,    37,    53,    47,    14,     0,    16,     0,    41,
       0,    17,    15
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -46,   -46,   138,   -46,   -46,   -46,    -1,    -3,   -46,   -46,
     -22,   -24,   -45,   -46,   -46,    22,   -25,    52,   -46,    65,
     -26,   -32
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     2,     3,     4,    65,     5,    44,    13,    14,    37,
      38,    53,    46,    47,   102,   103,    54,    55,    56,    89,
      48,    60
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
       7,    39,    41,    61,    62,    45,    57,    67,    59,    59,
      68,     6,    18,    19,    21,    69,    42,    23,    70,    43,
       6,    74,    75,    76,     1,    80,    36,    82,    81,   106,
     107,   108,    39,    36,    36,     6,    94,    39,    96,    71,
      36,    97,    98,    99,    72,    73,     8,   101,   104,   105,
     125,   126,    10,    11,   109,    81,    12,    36,    49,    50,
      51,    41,    36,   118,    39,   112,   114,    39,   113,    59,
      15,   116,    16,    17,    20,    52,    22,    24,    43,     6,
      83,    84,    85,    86,    87,    88,   124,    25,    26,    36,
     100,    27,    36,    28,    36,    29,    58,   101,    62,    63,
      39,    40,    30,   131,   130,    64,    31,    32,    66,    90,
      33,    34,    35,    77,    78,    41,    83,    84,    85,    86,
      87,    88,    91,    92,    93,    36,    95,   100,   117,    79,
     119,   111,    43,     6,   121,   127,     6,   120,   122,   128,
     123,   132,     9,   129,   115,   110
};

static const yytype_uint8 yycheck[] =
{
       1,    27,    33,    35,    12,    29,    31,    47,    34,    35,
      50,    51,    14,    15,    17,    41,    47,    20,    42,    50,
      51,    35,    36,    37,     9,    49,    27,    52,    52,    74,
      75,    76,    58,    34,    35,    51,    58,    63,    62,    47,
      41,    63,    66,    67,    33,    34,     0,    71,    72,    73,
      19,    20,    44,     3,    79,    79,    51,    58,    30,    31,
      32,    33,    63,    95,    90,    89,    91,    93,    90,    95,
      45,    93,     4,    44,     5,    47,    12,    50,    50,    51,
      38,    39,    40,    41,    42,    43,   110,     6,    13,    90,
      48,     7,    93,    16,    95,    10,    23,   121,    12,    44,
     126,    14,    17,   128,   126,     8,    21,    22,    49,    18,
      25,    26,    27,    31,    32,    33,    38,    39,    40,    41,
      42,    43,    29,    28,    23,   126,    46,    48,    24,    47,
      13,    48,    50,    51,    46,    24,    51,    48,    48,    21,
      48,    19,     4,   121,    92,    80
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     9,    53,    54,    55,    57,    51,    58,     0,    54,
      44,     3,    51,    59,    60,    45,     4,    44,    14,    15,
       5,    59,    12,    59,    50,     6,    13,     7,    16,    10,
      17,    21,    22,    25,    26,    27,    58,    61,    62,    72,
      14,    33,    47,    50,    58,    63,    64,    65,    72,    30,
      31,    32,    47,    63,    68,    69,    70,    68,    23,    72,
      73,    73,    12,    44,     8,    56,    49,    47,    50,    72,
      63,    47,    33,    34,    35,    36,    37,    31,    32,    47,
      63,    63,    68,    38,    39,    40,    41,    42,    43,    71,
      18,    29,    28,    23,    62,    46,    63,    62,    63,    63,
      48,    63,    66,    67,    63,    63,    64,    64,    64,    68,
      71,    48,    63,    62,    68,    69,    62,    24,    73,    13,
      48,    46,    48,    48,    63,    19,    20,    24,    21,    67,
      62,    68,    19
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    52,    53,    54,    54,    55,    56,    57,    58,    59,
      59,    60,    60,    61,    61,    61,    61,    61,    61,    61,
      61,    61,    62,    62,    63,    63,    63,    64,    64,    64,
      64,    65,    65,    65,    65,    65,    65,    65,    66,    66,
      67,    67,    68,    68,    69,    69,    70,    70,    70,    70,
      70,    70,    70,    70,    71,    71,    71,    71,    71,    71,
      72,    72,    73,    73
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     0,     2,    11,     1,     2,     1,     0,
       3,     3,     8,     3,     5,     7,     5,     6,     2,     2,
       1,     2,     2,     3,     1,     3,     3,     1,     3,     3,
       3,     1,     2,     1,     2,     3,     4,     4,     0,     1,
       1,     3,     1,     3,     1,     3,     3,     4,     1,     2,
       1,     2,     3,     4,     1,     1,     1,     1,     1,     1,
       1,     4,     1,     3
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
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

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



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
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
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
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              );
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
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
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


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            /* Fall through.  */
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
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
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        YYSTYPE *yyvs1 = yyvs;
        yytype_int16 *yyss1 = yyss;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yystacksize);

        yyss = yyss1;
        yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yytype_int16 *yyss1 = yyss;
        union yyalloc *yyptr =
          (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

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

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
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

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

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
| yyreduce -- Do a reduction.  |
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
        case 2:
#line 53 "mini_l.y" /* yacc.c:1646  */
    {}
#line 1377 "y.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 57 "mini_l.y" /* yacc.c:1646  */
    {}
#line 1383 "y.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 59 "mini_l.y" /* yacc.c:1646  */
    {}
#line 1389 "y.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 66 "mini_l.y" /* yacc.c:1646  */
    {

}
#line 1397 "y.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 70 "mini_l.y" /* yacc.c:1646  */
    {
   printf("endfunc\n\n");
}
#line 1405 "y.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 74 "mini_l.y" /* yacc.c:1646  */
    {

     char *token = identToken;
	 if (!strcmp(token,funcmain)) { printf("mainflag = 0"); } else { mainflag = 1; }
     printf("func %s\n", token);
     strcpy(list_of_function_names[count_names], token);
     count_names++;
}
#line 1418 "y.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 87 "mini_l.y" /* yacc.c:1646  */
    { (yyval.op_val) = (yyvsp[0].op_val); }
#line 1424 "y.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 91 "mini_l.y" /* yacc.c:1646  */
    {}
#line 1430 "y.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 93 "mini_l.y" /* yacc.c:1646  */
    {}
#line 1436 "y.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 97 "mini_l.y" /* yacc.c:1646  */
    {

       char *token = (yyvsp[-2].op_val);
       printf(". %s\n", token);

}
#line 1447 "y.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 104 "mini_l.y" /* yacc.c:1646  */
    {
			char *token = (yyvsp[-7].op_val);
       		printf(".[] %s, %s\n", token, (yyvsp[-3].op_val));
		}
#line 1456 "y.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 111 "mini_l.y" /* yacc.c:1646  */
    {
	char *dest = (yyvsp[-2].op_val);
	char *src  = (yyvsp[0].op_val);
	//printf(". __temp__%d\n", productionID);
	//printf(". __temp__%d, %s\n", productionID, src);
	printf("= %s, __temp__%d\n", dest, productionID-1);
	//productionID = productionID + 1;

}
#line 1470 "y.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 121 "mini_l.y" /* yacc.c:1646  */
    {}
#line 1476 "y.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 123 "mini_l.y" /* yacc.c:1646  */
    {}
#line 1482 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 125 "mini_l.y" /* yacc.c:1646  */
    {}
#line 1488 "y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 127 "mini_l.y" /* yacc.c:1646  */
    {}
#line 1494 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 129 "mini_l.y" /* yacc.c:1646  */
    {}
#line 1500 "y.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 131 "mini_l.y" /* yacc.c:1646  */
    {}
#line 1506 "y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 133 "mini_l.y" /* yacc.c:1646  */
    {}
#line 1512 "y.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 135 "mini_l.y" /* yacc.c:1646  */
    {}
#line 1518 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 139 "mini_l.y" /* yacc.c:1646  */
    {}
#line 1524 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 141 "mini_l.y" /* yacc.c:1646  */
    {}
#line 1530 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 145 "mini_l.y" /* yacc.c:1646  */
    {(yyval.op_val) = (yyvsp[0].op_val); }
#line 1536 "y.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 147 "mini_l.y" /* yacc.c:1646  */
    {     
	char *src1 =  (yyvsp[-2].op_val);
	char *src2 =  (yyvsp[0].op_val);
	char *dest = "_temp";
	printf(". __temp__%d\n", productionID);
	printf("+ %s, %s, %s\n", dest, src1, src2);
	(yyval.op_val) = dest;
}
#line 1549 "y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 156 "mini_l.y" /* yacc.c:1646  */
    {

  char *src1 =  (yyvsp[-2].op_val);
  char *src2 =  (yyvsp[0].op_val);
  char *dest = "_temp";
  printf("- %s, %s, %s\n", dest, src1, src2);
  (yyval.op_val) = dest;


}
#line 1564 "y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 169 "mini_l.y" /* yacc.c:1646  */
    { 
			printf(". __temp__%d\n", productionID);
			printf(". __temp__%d, %s\n", productionID, (yyvsp[0].op_val));
			productionID = productionID + 1;
			(yyval.op_val) = (yyvsp[0].op_val); 
		}
#line 1575 "y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 176 "mini_l.y" /* yacc.c:1646  */
    { (yyval.op_val) = "SLDKFJDSLKJ"; }
#line 1581 "y.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 178 "mini_l.y" /* yacc.c:1646  */
    { (yyval.op_val) = "SLDKFJDSLKJ"; }
#line 1587 "y.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 180 "mini_l.y" /* yacc.c:1646  */
    { (yyval.op_val) = "SLDKFJDSLKJ"; }
#line 1593 "y.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 185 "mini_l.y" /* yacc.c:1646  */
    { (yyval.op_val) = (yyvsp[0].op_val); }
#line 1599 "y.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 187 "mini_l.y" /* yacc.c:1646  */
    { (yyval.op_val) = "SLDKFJDSLKJ"; }
#line 1605 "y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 189 "mini_l.y" /* yacc.c:1646  */
    { (yyval.op_val) = (yyvsp[0].op_val); }
#line 1611 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 191 "mini_l.y" /* yacc.c:1646  */
    { (yyval.op_val) = "SLDKFJDSLKJ"; }
#line 1617 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 193 "mini_l.y" /* yacc.c:1646  */
    { (yyval.op_val) = "SLDKFJDSLKJ"; }
#line 1623 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 195 "mini_l.y" /* yacc.c:1646  */
    { (yyval.op_val) = "SLDKFJDSLKJ"; }
#line 1629 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 197 "mini_l.y" /* yacc.c:1646  */
    { (yyval.op_val) = "SLDKFJDSLKJ"; }
#line 1635 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 201 "mini_l.y" /* yacc.c:1646  */
    {}
#line 1641 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 203 "mini_l.y" /* yacc.c:1646  */
    {}
#line 1647 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 207 "mini_l.y" /* yacc.c:1646  */
    {}
#line 1653 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 209 "mini_l.y" /* yacc.c:1646  */
    {}
#line 1659 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 213 "mini_l.y" /* yacc.c:1646  */
    {}
#line 1665 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 215 "mini_l.y" /* yacc.c:1646  */
    {}
#line 1671 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 219 "mini_l.y" /* yacc.c:1646  */
    {}
#line 1677 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 221 "mini_l.y" /* yacc.c:1646  */
    {}
#line 1683 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 225 "mini_l.y" /* yacc.c:1646  */
    {}
#line 1689 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 227 "mini_l.y" /* yacc.c:1646  */
    {}
#line 1695 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 229 "mini_l.y" /* yacc.c:1646  */
    {}
#line 1701 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 231 "mini_l.y" /* yacc.c:1646  */
    {}
#line 1707 "y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 233 "mini_l.y" /* yacc.c:1646  */
    {}
#line 1713 "y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 235 "mini_l.y" /* yacc.c:1646  */
    {}
#line 1719 "y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 237 "mini_l.y" /* yacc.c:1646  */
    {}
#line 1725 "y.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 239 "mini_l.y" /* yacc.c:1646  */
    {}
#line 1731 "y.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 243 "mini_l.y" /* yacc.c:1646  */
    {}
#line 1737 "y.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 245 "mini_l.y" /* yacc.c:1646  */
    {}
#line 1743 "y.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 247 "mini_l.y" /* yacc.c:1646  */
    {}
#line 1749 "y.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 249 "mini_l.y" /* yacc.c:1646  */
    {}
#line 1755 "y.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 251 "mini_l.y" /* yacc.c:1646  */
    {}
#line 1761 "y.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 253 "mini_l.y" /* yacc.c:1646  */
    {}
#line 1767 "y.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 256 "mini_l.y" /* yacc.c:1646  */
    { 
    (yyval.op_val) = (yyvsp[0].op_val); 

}
#line 1776 "y.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 262 "mini_l.y" /* yacc.c:1646  */
    {
			//printf(". __temp__%d\n", productionID);
			//printf(". __temp__%d, %s\n", productionID, $3);
			//productionID = productionID + 1;
		}
#line 1786 "y.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 269 "mini_l.y" /* yacc.c:1646  */
    {
			printf("vars\n");
		}
#line 1794 "y.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 273 "mini_l.y" /* yacc.c:1646  */
    {}
#line 1800 "y.tab.c" /* yacc.c:1646  */
    break;


#line 1804 "y.tab.c" /* yacc.c:1646  */
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
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
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

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

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

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
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
                  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

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

#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

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
                  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
#line 276 "mini_l.y" /* yacc.c:1906  */


int main(int argc, char **argv)
{
   yyparse();
   /*int i =0;
   for(i =0; i < count_names; i++ ) {
     printf("%s\n", list_of_function_names[i]);
   }*/

   return 0;
}

void yyerror(const char *msg)
{
   if(myError == 0)
   {
      printf("** Line %d: %s\n", currLine, msg);
      otherError = 1;
   }
   else
   {
      if(otherError == 1)
      {
         printf("   (%s)\n", msg);
         otherError = 0;
      }
   }
   myError = 0;
}
