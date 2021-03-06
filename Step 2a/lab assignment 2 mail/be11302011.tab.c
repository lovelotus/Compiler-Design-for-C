
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.
   
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
#define YYBISON_VERSION "2.4.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Copy the first part of user declarations.  */

/* Line 189 of yacc.c  */
#line 1 "be11302011.y"

	#include<stdio.h>
	extern line_num;


/* Line 189 of yacc.c  */
#line 79 "be11302011.tab.c"

/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     AUTO = 258,
     BREAK = 259,
     CASE = 260,
     CHAR = 261,
     CONST = 262,
     CONTINUE = 263,
     DEFAULT = 264,
     WHILE = 265,
     DO = 266,
     DOUBLE = 267,
     ELSE = 268,
     ENUM = 269,
     EXTERN = 270,
     FLOAT = 271,
     FOR = 272,
     GOTO = 273,
     IF = 274,
     INT = 275,
     LONG = 276,
     REGISTER = 277,
     RETURN = 278,
     SHORT = 279,
     SIGNED = 280,
     SIZEOF = 281,
     STATIC = 282,
     STRUCT = 283,
     SWITCH = 284,
     TYPEDEF = 285,
     UNION = 286,
     UNSIGNED = 287,
     VOID = 288,
     VOLATILE = 289,
     OPERATOR_PLUS = 290,
     OPERATOR_MINUS = 291,
     OPERATOR_INCREMENTOR = 292,
     OPERATOR_DECREMENTOR = 293,
     OPERATOR_ADDER = 294,
     OPERATOR_SUBTRACTOR = 295,
     OPERATOR_MULTIPLIER = 296,
     OPERATOR_DIVIDER = 297,
     OPERATOR_MULTIPLY = 298,
     OPERATOR_DIVIDE = 299,
     OPERATOR_ASSIGNMENT = 300,
     OPERATOR_SLASH = 301,
     OPERATOR_MODULUS = 302,
     OPERATOR_LESS_THAN = 303,
     OPERATOR_GREATER_THAN = 304,
     OPERATOR_NOT = 305,
     OPERATOR_BITWISE_AND = 306,
     OPERATOR_BITWISE_OR = 307,
     OPERATOR_AND = 308,
     OPERATOR_OR = 309,
     OPERATOR_BITWISE_XOR = 310,
     OPERATOR_TILDE = 311,
     OPERATOR_EQUALITY_CHECKER = 312,
     OPERATOR_AND_ASSIGNMENT = 313,
     OPERATOR_OR_ASSIGNMENT = 314,
     OPERATOR_LESS_OR_EQUAL = 315,
     OPERATOR_GREATER_OR_EQUAL = 316,
     OPERATOR_NOT_EQUAL = 317,
     OPERATOR_LINK = 318,
     OPERATOR_BITWISE_XOR_ASSIGNMENT = 319,
     OPERATOR_RIGHT_SHIFT = 320,
     OPERATOR_LEFT_SHIFT = 321,
     OPERATOR_LEFT_ASSIGNMENT = 322,
     OPERATOR_RIGHT_ASSIGNMENT = 323,
     THREE_DOTS = 324,
     OPERATOR_MOD_ASSIGNMENT = 325,
     DOT = 326,
     SQUARE_BRACKET_BEG = 327,
     SQUARE_BRACKET_END = 328,
     CURLY_BRACKET_BEG = 329,
     CURLY_BRACKET_END = 330,
     PARANTHESIS_BEG = 331,
     PARANTHESIS_END = 332,
     COMMA = 333,
     COLON = 334,
     SEMICOLON = 335,
     SHARP = 336,
     DOUBLE_QUOTES = 337,
     TERNARY = 338,
     NUMBER = 339,
     REAL_NUMBER = 340,
     EXP_NUMBER = 341,
     CHAR_CONSTANT = 342,
     STRING_CONSTANT = 343,
     IDENTIFIER = 344
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 210 "be11302011.tab.c"

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
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
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
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
}
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
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
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
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
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

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  43
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1851

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  90
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  65
/* YYNRULES -- Number of rules.  */
#define YYNRULES  221
/* YYNRULES -- Number of states.  */
#define YYNSTATES  375

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   344

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
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
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,     8,    10,    12,    17,    21,    25,
      28,    32,    35,    37,    40,    43,    45,    48,    50,    53,
      55,    57,    59,    61,    63,    65,    67,    69,    71,    73,
      75,    77,    79,    81,    83,    85,    87,    89,    91,    97,
     102,   105,   107,   109,   111,   114,   116,   120,   122,   126,
     130,   133,   135,   138,   140,   142,   146,   148,   152,   155,
     161,   166,   169,   171,   175,   177,   181,   184,   186,   188,
     192,   197,   201,   206,   211,   215,   218,   220,   224,   227,
     229,   232,   234,   238,   240,   244,   247,   250,   252,   254,
     258,   260,   264,   269,   271,   275,   278,   280,   282,   285,
     287,   291,   296,   300,   304,   307,   312,   316,   320,   323,
     325,   327,   329,   331,   333,   335,   339,   344,   348,   351,
     353,   358,   362,   366,   369,   371,   374,   380,   388,   394,
     400,   408,   418,   427,   436,   444,   453,   461,   469,   476,
     480,   483,   486,   490,   493,   495,   499,   501,   505,   507,
     509,   511,   513,   515,   517,   519,   521,   523,   525,   527,
     529,   535,   537,   539,   543,   545,   549,   551,   555,   557,
     561,   563,   567,   569,   573,   577,   579,   583,   587,   591,
     595,   597,   601,   605,   607,   611,   615,   617,   621,   625,
     629,   631,   636,   638,   641,   644,   647,   650,   655,   657,
     659,   661,   663,   665,   667,   669,   674,   679,   683,   687,
     691,   694,   697,   699,   701,   703,   707,   709,   713,   715,
     717,   719
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
      91,     0,    -1,    92,    -1,    91,    92,    -1,    93,    -1,
      94,    -1,    96,   112,    95,   128,    -1,   112,    95,   128,
      -1,    96,   112,   128,    -1,   112,   128,    -1,    96,   103,
      80,    -1,    96,    80,    -1,    94,    -1,    95,    94,    -1,
      97,    96,    -1,    97,    -1,    98,    96,    -1,    98,    -1,
      99,    96,    -1,    99,    -1,     3,    -1,    22,    -1,    27,
      -1,    15,    -1,    30,    -1,    33,    -1,     6,    -1,    24,
      -1,    20,    -1,    21,    -1,    16,    -1,    12,    -1,    25,
      -1,    32,    -1,   100,    -1,   109,    -1,     7,    -1,    34,
      -1,   101,    89,    74,   102,    75,    -1,   101,    74,   102,
      75,    -1,   101,    89,    -1,    28,    -1,    31,    -1,   105,
      -1,   102,   105,    -1,   104,    -1,   103,    78,   104,    -1,
     112,    -1,   112,    45,   120,    -1,   106,   107,    80,    -1,
      98,   106,    -1,    98,    -1,    99,   106,    -1,    99,    -1,
     108,    -1,   107,    78,   108,    -1,   112,    -1,   112,    79,
     137,    -1,    79,   137,    -1,    14,    89,    74,   110,    75,
      -1,    14,    74,   110,    75,    -1,    14,    89,    -1,   111,
      -1,   110,    78,   111,    -1,    89,    -1,    89,    45,   137,
      -1,   114,   113,    -1,   113,    -1,    89,    -1,    76,   112,
      77,    -1,   113,    72,   137,    73,    -1,   113,    72,    73,
      -1,   113,    76,   116,    77,    -1,   113,    76,   119,    77,
      -1,   113,    76,    77,    -1,    43,   115,    -1,    43,    -1,
      43,   115,   114,    -1,    43,   114,    -1,    99,    -1,   115,
      99,    -1,   117,    -1,   117,    78,    69,    -1,   118,    -1,
     117,    78,   118,    -1,    96,   112,    -1,    96,   123,    -1,
      96,    -1,    89,    -1,   119,    78,    89,    -1,   134,    -1,
      74,   121,    75,    -1,    74,   121,    78,    75,    -1,   120,
      -1,   121,    78,   120,    -1,   106,   123,    -1,   106,    -1,
     114,    -1,   114,   124,    -1,   124,    -1,    76,   123,    77,
      -1,   124,    72,   137,    73,    -1,    72,   137,    73,    -1,
     124,    72,    73,    -1,    72,    73,    -1,   124,    76,   116,
      77,    -1,    76,   116,    77,    -1,   124,    76,    77,    -1,
      76,    77,    -1,   126,    -1,   127,    -1,   128,    -1,   130,
      -1,   131,    -1,   132,    -1,    89,    79,   125,    -1,     5,
     137,    79,   125,    -1,     9,    79,   125,    -1,   133,    80,
      -1,    80,    -1,    74,    95,   129,    75,    -1,    74,    95,
      75,    -1,    74,   129,    75,    -1,    74,    75,    -1,   125,
      -1,   129,   125,    -1,    19,    76,   133,    77,   125,    -1,
      19,    76,   133,    77,   125,    13,   125,    -1,    29,    76,
     133,    77,   125,    -1,    10,    76,   133,    77,   125,    -1,
      11,   125,    10,    76,   133,    77,    80,    -1,    17,    76,
     133,    80,   133,    80,   133,    77,   125,    -1,    17,    76,
     133,    80,   133,    80,    77,   125,    -1,    17,    76,   133,
      80,    80,   133,    77,   125,    -1,    17,    76,   133,    80,
      80,    77,   125,    -1,    17,    76,    80,   133,    80,   133,
      77,   125,    -1,    17,    76,    80,   133,    80,    77,   125,
      -1,    17,    76,    80,    80,   133,    77,   125,    -1,    17,
      76,    80,    80,    77,   125,    -1,    18,    89,    80,    -1,
       8,    80,    -1,     4,    80,    -1,    23,   133,    80,    -1,
      23,    80,    -1,   134,    -1,   133,    78,   134,    -1,   136,
      -1,   149,   135,   134,    -1,    45,    -1,    41,    -1,    42,
      -1,    70,    -1,    39,    -1,    40,    -1,    67,    -1,    68,
      -1,    58,    -1,    64,    -1,    59,    -1,   138,    -1,   138,
      83,   133,    79,   136,    -1,   136,    -1,   139,    -1,   138,
      54,   139,    -1,   140,    -1,   139,    53,   140,    -1,   141,
      -1,   140,    52,   141,    -1,   142,    -1,   141,    55,   142,
      -1,   143,    -1,   142,    51,   143,    -1,   144,    -1,   143,
      57,   144,    -1,   143,    62,   144,    -1,   145,    -1,   144,
      48,   145,    -1,   144,    49,   145,    -1,   144,    60,   145,
      -1,   144,    61,   145,    -1,   146,    -1,   145,    66,   146,
      -1,   145,    65,   146,    -1,   147,    -1,   146,    35,   147,
      -1,   146,    36,   147,    -1,   148,    -1,   147,    43,   148,
      -1,   147,    44,   148,    -1,   147,    47,   148,    -1,   149,
      -1,    76,   122,    77,   148,    -1,   151,    -1,    37,   149,
      -1,    38,   149,    -1,   150,   148,    -1,    26,   149,    -1,
      26,    76,   122,    77,    -1,    51,    -1,    43,    -1,    35,
      -1,    36,    -1,    56,    -1,    50,    -1,   152,    -1,   151,
      72,   133,    73,    -1,   151,    76,   153,    77,    -1,   151,
      76,    77,    -1,   151,    71,    89,    -1,   151,    63,    89,
      -1,   151,    37,    -1,   151,    38,    -1,    89,    -1,   154,
      -1,    88,    -1,    76,   133,    77,    -1,   134,    -1,   153,
      78,   134,    -1,    84,    -1,    87,    -1,    85,    -1,    86,
      -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    21,    21,    22,    25,    26,    29,    30,    31,    32,
      35,    36,    39,    40,    43,    44,    45,    46,    47,    48,
      51,    52,    53,    54,    55,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    71,    72,    75,    76,
      77,    80,    81,    84,    85,    88,    89,    92,    93,    96,
      99,   100,   101,   102,   105,   106,   108,   109,   110,   113,
     114,   115,   118,   119,   122,   123,   126,   127,   130,   131,
     132,   133,   134,   135,   136,   139,   140,   141,   142,   145,
     146,   149,   150,   153,   154,   157,   158,   159,   162,   163,
     166,   167,   168,   171,   172,   175,   176,   179,   180,   181,
     184,   185,   186,   187,   188,   189,   190,   191,   192,   196,
     197,   198,   199,   200,   201,   204,   205,   206,   209,   210,
     213,   214,   215,   216,   219,   220,   223,   224,   225,   228,
     229,   230,   231,   232,   233,   234,   235,   236,   237,   240,
     241,   242,   243,   244,   247,   248,   251,   252,   255,   256,
     257,   258,   259,   260,   261,   262,   263,   264,   265,   268,
     269,   272,   275,   276,   279,   280,   283,   284,   287,   288,
     291,   292,   294,   295,   296,   299,   300,   301,   302,   303,
     306,   307,   308,   311,   312,   313,   316,   317,   318,   319,
     322,   323,   326,   327,   328,   329,   330,   331,   334,   335,
     336,   337,   338,   339,   342,   343,   344,   345,   346,   347,
     348,   349,   352,   353,   354,   355,   358,   359,   362,   363,
     364,   365
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "AUTO", "BREAK", "CASE", "CHAR", "CONST",
  "CONTINUE", "DEFAULT", "WHILE", "DO", "DOUBLE", "ELSE", "ENUM", "EXTERN",
  "FLOAT", "FOR", "GOTO", "IF", "INT", "LONG", "REGISTER", "RETURN",
  "SHORT", "SIGNED", "SIZEOF", "STATIC", "STRUCT", "SWITCH", "TYPEDEF",
  "UNION", "UNSIGNED", "VOID", "VOLATILE", "OPERATOR_PLUS",
  "OPERATOR_MINUS", "OPERATOR_INCREMENTOR", "OPERATOR_DECREMENTOR",
  "OPERATOR_ADDER", "OPERATOR_SUBTRACTOR", "OPERATOR_MULTIPLIER",
  "OPERATOR_DIVIDER", "OPERATOR_MULTIPLY", "OPERATOR_DIVIDE",
  "OPERATOR_ASSIGNMENT", "OPERATOR_SLASH", "OPERATOR_MODULUS",
  "OPERATOR_LESS_THAN", "OPERATOR_GREATER_THAN", "OPERATOR_NOT",
  "OPERATOR_BITWISE_AND", "OPERATOR_BITWISE_OR", "OPERATOR_AND",
  "OPERATOR_OR", "OPERATOR_BITWISE_XOR", "OPERATOR_TILDE",
  "OPERATOR_EQUALITY_CHECKER", "OPERATOR_AND_ASSIGNMENT",
  "OPERATOR_OR_ASSIGNMENT", "OPERATOR_LESS_OR_EQUAL",
  "OPERATOR_GREATER_OR_EQUAL", "OPERATOR_NOT_EQUAL", "OPERATOR_LINK",
  "OPERATOR_BITWISE_XOR_ASSIGNMENT", "OPERATOR_RIGHT_SHIFT",
  "OPERATOR_LEFT_SHIFT", "OPERATOR_LEFT_ASSIGNMENT",
  "OPERATOR_RIGHT_ASSIGNMENT", "THREE_DOTS", "OPERATOR_MOD_ASSIGNMENT",
  "DOT", "SQUARE_BRACKET_BEG", "SQUARE_BRACKET_END", "CURLY_BRACKET_BEG",
  "CURLY_BRACKET_END", "PARANTHESIS_BEG", "PARANTHESIS_END", "COMMA",
  "COLON", "SEMICOLON", "SHARP", "DOUBLE_QUOTES", "TERNARY", "NUMBER",
  "REAL_NUMBER", "EXP_NUMBER", "CHAR_CONSTANT", "STRING_CONSTANT",
  "IDENTIFIER", "$accept", "translation_unit", "external_declaration",
  "function_definition", "declaration", "declaration_list",
  "declaration_specifiers", "storage_class_specifier", "type_specifier",
  "type_qualifier", "struct_or_union_specifier", "struct_or_union",
  "struct_declaration_list", "init_declarator_list", "init_declarator",
  "struct_declaration", "specifier_qualifier_list",
  "struct_declarator_list", "struct_declarator", "enum_specifier",
  "enumerator_list", "enumerator", "declarator", "direct_declarator",
  "pointer", "type_qualifier_list", "parameter_type_list",
  "parameter_list", "parameter_declaration", "identifier_list",
  "initializer", "initializer_list", "type_name", "abstract_declarator",
  "direct_abstract_declarator", "statement", "labeled_statement",
  "expression_statement", "compound_statement", "statement_list",
  "selection_statement", "iteration_statement", "jump_statement",
  "expression", "assignment_expression", "assignment_operator",
  "conditional_expression", "constant_expression", "logical_OR_expression",
  "logical_AND_expression", "inclusive_OR_expression",
  "exclusive_OR_expression", "AND_expression", "equality_expression",
  "relational_expression", "shift_expression", "additive_expression",
  "multiplicative_expression", "cast_expression", "unary_expression",
  "unary_operator", "postfix_expression", "primary_expression",
  "argument_expression_list", "constant", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    90,    91,    91,    92,    92,    93,    93,    93,    93,
      94,    94,    95,    95,    96,    96,    96,    96,    96,    96,
      97,    97,    97,    97,    97,    98,    98,    98,    98,    98,
      98,    98,    98,    98,    98,    98,    99,    99,   100,   100,
     100,   101,   101,   102,   102,   103,   103,   104,   104,   105,
     106,   106,   106,   106,   107,   107,   108,   108,   108,   109,
     109,   109,   110,   110,   111,   111,   112,   112,   113,   113,
     113,   113,   113,   113,   113,   114,   114,   114,   114,   115,
     115,   116,   116,   117,   117,   118,   118,   118,   119,   119,
     120,   120,   120,   121,   121,   122,   122,   123,   123,   123,
     124,   124,   124,   124,   124,   124,   124,   124,   124,   125,
     125,   125,   125,   125,   125,   126,   126,   126,   127,   127,
     128,   128,   128,   128,   129,   129,   130,   130,   130,   131,
     131,   131,   131,   131,   131,   131,   131,   131,   131,   132,
     132,   132,   132,   132,   133,   133,   134,   134,   135,   135,
     135,   135,   135,   135,   135,   135,   135,   135,   135,   136,
     136,   137,   138,   138,   139,   139,   140,   140,   141,   141,
     142,   142,   143,   143,   143,   144,   144,   144,   144,   144,
     145,   145,   145,   146,   146,   146,   147,   147,   147,   147,
     148,   148,   149,   149,   149,   149,   149,   149,   150,   150,
     150,   150,   150,   150,   151,   151,   151,   151,   151,   151,
     151,   151,   152,   152,   152,   152,   153,   153,   154,   154,
     154,   154
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     1,     1,     4,     3,     3,     2,
       3,     2,     1,     2,     2,     1,     2,     1,     2,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     5,     4,
       2,     1,     1,     1,     2,     1,     3,     1,     3,     3,
       2,     1,     2,     1,     1,     3,     1,     3,     2,     5,
       4,     2,     1,     3,     1,     3,     2,     1,     1,     3,
       4,     3,     4,     4,     3,     2,     1,     3,     2,     1,
       2,     1,     3,     1,     3,     2,     2,     1,     1,     3,
       1,     3,     4,     1,     3,     2,     1,     1,     2,     1,
       3,     4,     3,     3,     2,     4,     3,     3,     2,     1,
       1,     1,     1,     1,     1,     3,     4,     3,     2,     1,
       4,     3,     3,     2,     1,     2,     5,     7,     5,     5,
       7,     9,     8,     8,     7,     8,     7,     7,     6,     3,
       2,     2,     3,     2,     1,     3,     1,     3,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       5,     1,     1,     3,     1,     3,     1,     3,     1,     3,
       1,     3,     1,     3,     3,     1,     3,     3,     3,     3,
       1,     3,     3,     1,     3,     3,     1,     3,     3,     3,
       1,     4,     1,     2,     2,     2,     2,     4,     1,     1,
       1,     1,     1,     1,     1,     4,     4,     3,     3,     3,
       2,     2,     1,     1,     1,     3,     1,     3,     1,     1,
       1,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    20,    26,    36,    31,     0,    23,    30,    28,    29,
      21,    27,    32,    22,    41,    24,    42,    33,    25,    37,
      76,     0,    68,     0,     2,     4,     5,     0,    15,    17,
      19,    34,     0,    35,     0,    67,     0,     0,    61,    79,
      78,    75,     0,     1,     3,    11,     0,    45,    47,    14,
      16,    18,     0,    40,     0,    12,     0,     0,     9,     0,
       0,    66,    64,     0,    62,     0,    80,    77,    69,     0,
      10,     0,     0,     8,    51,    53,     0,    43,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   200,   201,     0,     0,   199,   203,   198,   202,
     123,     0,   119,   218,   220,   221,   219,   214,   212,     0,
     124,   109,   110,   111,     0,   112,   113,   114,     0,   144,
     146,   159,   162,   164,   166,   168,   170,   172,   175,   180,
     183,   186,   190,     0,   192,   204,   213,    13,     7,    47,
      71,   212,   161,     0,   190,    74,    88,    87,     0,    81,
      83,     0,     0,    60,     0,     0,    46,     0,    48,    90,
       6,    50,    52,    39,    44,     0,     0,    54,    56,     0,
     141,     0,   140,     0,     0,     0,     0,     0,     0,   143,
       0,     0,   196,     0,     0,   193,   194,    96,     0,     0,
       0,   121,     0,   122,   125,     0,   118,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   152,   153,   149,   150,
     148,   156,   158,   157,   154,   155,   151,     0,   195,   210,
     211,     0,     0,     0,     0,    70,     0,     0,    85,    97,
      86,    99,    72,     0,    73,     0,    65,    63,    59,    93,
       0,    58,     0,    49,     0,    38,     0,   117,     0,     0,
       0,     0,   139,     0,   142,     0,     0,     0,    97,    95,
       0,   215,   115,   120,   145,   163,     0,   165,   167,   169,
     171,   173,   174,   176,   177,   178,   179,   182,   181,   184,
     185,   187,   188,   189,   147,   209,   208,     0,   207,   216,
       0,   104,     0,   108,     0,     0,    98,     0,     0,    82,
      84,    89,    91,     0,    55,    57,   116,     0,     0,     0,
       0,     0,     0,   197,     0,   191,     0,   205,   206,     0,
     102,   106,   100,   103,     0,   107,     0,    92,    94,   129,
       0,     0,     0,     0,     0,     0,   126,   128,   160,   217,
     101,   105,     0,   138,     0,     0,     0,     0,     0,     0,
       0,   130,   137,   136,     0,   134,     0,     0,     0,   127,
     135,   133,   132,     0,   131
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    23,    24,    25,    55,    56,    57,    28,    29,    30,
      31,    32,    76,    46,    47,    77,    78,   166,   167,    33,
      63,    64,    34,    35,    36,    41,   304,   149,   150,   151,
     158,   250,   188,   305,   241,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   227,   120,   143,   121,   122,
     123,   124,   125,   126,   127,   128,   129,   130,   131,   132,
     133,   134,   135,   300,   136
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -213
static const yytype_int16 yypact[] =
{
     585,  -213,  -213,  -213,  -213,   -48,  -213,  -213,  -213,  -213,
    -213,  -213,  -213,  -213,  -213,  -213,  -213,  -213,  -213,  -213,
      90,   -18,  -213,   303,  -213,  -213,  -213,   -25,  1817,  1817,
    1817,  -213,    -9,  -213,  1069,    49,    -7,   -76,   -50,  -213,
    -213,    90,    -4,  -213,  -213,  -213,   -17,  -213,  1037,  -213,
    -213,  -213,   499,   -40,   379,  -213,  1069,   -25,  -213,  1126,
     342,    49,    40,   -43,  -213,   -76,  -213,  -213,  -213,   -18,
    -213,  1181,  1069,  -213,   499,   499,   746,  -213,   -27,   499,
      22,  1653,    48,    66,    74,   799,    81,    99,    87,  1203,
    1675,   147,  -213,  -213,  1730,  1730,  -213,  -213,  -213,  -213,
    -213,   883,  -213,  -213,  -213,  -213,  -213,  -213,   149,   466,
    -213,  -213,  -213,  -213,   627,  -213,  -213,  -213,    84,  -213,
    -213,   -44,   178,   181,   183,   195,    77,   129,   115,   179,
      88,  -213,  1737,  1653,   103,  -213,  -213,  -213,  -213,   207,
    -213,  -213,  -213,   197,  -213,  -213,  -213,     7,   184,   202,
    -213,   139,  1653,  -213,   -76,    26,  -213,  1181,  -213,  -213,
    -213,  -213,  -213,  -213,  -213,  1653,    89,  -213,   194,   924,
    -213,   203,  -213,   799,  1653,   279,  1258,   212,  1653,  -213,
      92,   883,  -213,  1653,  1653,  -213,  -213,   -34,   219,   141,
     799,  -213,   713,  -213,  -213,  1653,  -213,  1653,  1653,  1653,
    1653,  1653,  1653,  1653,  1653,  1653,  1653,  1653,  1653,  1653,
    1653,  1653,  1653,  1653,  1653,  1653,  -213,  -213,  -213,  -213,
    -213,  -213,  -213,  -213,  -213,  -213,  -213,  1653,  -213,  -213,
    -213,   209,   210,  1653,  1280,  -213,  1335,   553,  -213,   -32,
    -213,    71,  -213,  1101,  -213,   211,  -213,  -213,  -213,  -213,
      36,  -213,   -27,  -213,  1653,  -213,   799,  -213,   143,   221,
    1362,   106,  -213,   148,  -213,   225,   158,   970,    76,  -213,
    1653,  -213,  -213,  -213,  -213,   178,   166,   181,   183,   195,
      77,   129,   129,   115,   115,   115,   115,   179,   179,    88,
      88,  -213,  -213,  -213,  -213,  -213,  -213,    27,  -213,  -213,
     177,  -213,   231,  -213,   228,   230,    71,  1417,  1002,  -213,
    -213,  -213,  -213,  1104,  -213,  -213,  -213,   799,  1653,  1444,
     107,  1499,   799,  -213,   799,  -213,  1653,  -213,  -213,  1653,
    -213,  -213,  -213,  -213,   238,  -213,   236,  -213,  -213,  -213,
     182,   799,   188,  1521,  1576,   133,   301,  -213,  -213,  -213,
    -213,  -213,   241,  -213,   799,   799,   191,   799,   201,  1598,
     799,  -213,  -213,  -213,   799,  -213,   799,   799,   208,  -213,
    -213,  -213,  -213,   799,  -213
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -213,  -213,   293,  -213,    14,    18,     0,  -213,    43,     2,
    -213,  -213,   243,  -213,   257,   -70,   -55,  -213,    80,  -213,
     264,   185,   -10,   -29,    -5,  -213,   -59,  -213,    95,  -213,
    -153,  -213,   159,  -139,  -212,   -83,  -213,  -213,    64,   232,
    -213,  -213,  -213,   -68,   -66,  -213,   -14,   -78,  -213,   145,
     144,   150,   146,   142,    53,   -52,    78,    83,  -121,    -6,
    -213,  -213,  -213,  -213,  -213
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint16 yytable[] =
{
      27,   148,   175,   171,   249,   159,   164,    61,   240,    20,
     197,    42,   228,    62,    26,    40,    20,    48,    20,   161,
     162,   180,    39,    27,    65,    20,    37,   306,    49,    50,
      51,   194,   153,   189,    79,   154,    67,    26,   236,   198,
     236,    38,   267,    66,   237,   142,   187,   139,   269,    21,
      20,    21,   165,   144,    75,    45,   306,    22,    21,   139,
     147,    69,    22,    70,    22,    52,    72,   142,   168,    21,
     137,    22,   109,    68,   246,   144,    75,    75,    75,   236,
      53,    75,    22,   237,   182,   152,   137,   251,   185,   186,
     257,   159,   291,   292,   293,    74,    22,     3,    58,   164,
     327,   248,   170,    75,   154,   195,   258,   272,   261,   194,
     263,   312,    73,   189,   313,   266,   189,    74,    74,    74,
     138,    59,    74,   137,    19,    60,   187,   144,   172,   274,
     276,   213,   214,    20,   203,   215,   160,   238,   142,   204,
     229,   230,   239,   307,    74,   173,   144,   308,   236,   325,
     174,   142,   267,   283,   284,   285,   286,   176,   302,   144,
     338,   294,   195,   178,   196,   297,   231,   252,   299,   253,
     195,    75,   264,   316,   232,   233,   315,   205,   206,   234,
     209,   210,   268,    75,   195,   195,   321,   343,   177,   207,
     208,   144,   320,   144,   144,   144,   144,   144,   144,   144,
     144,   144,   144,   144,   144,   144,   144,   144,   144,   144,
      61,   195,    74,   359,   211,   212,   244,   245,   271,   195,
     317,   195,   142,   183,    74,   322,   195,    42,   190,   334,
     144,   199,   239,   200,   339,   324,   195,   147,   201,   346,
     142,   347,   168,   147,   195,   326,   202,   159,   144,   336,
     340,   342,    71,   345,   328,   329,   281,   282,   353,   352,
     195,   242,   268,   349,   144,   354,   195,   147,   364,   195,
     235,   362,   363,   254,   365,   356,   358,   369,   366,   195,
     243,   370,   256,   371,   372,   373,   195,   287,   288,   259,
     374,   368,   262,   142,   289,   290,   270,   318,   295,   296,
     311,   144,   323,    43,   330,   331,     1,   332,   147,     2,
       3,   350,   348,   351,   360,     4,    44,     5,     6,     7,
     144,   361,   169,     8,     9,    10,   156,    11,    12,   155,
      13,    14,   314,    15,    16,    17,    18,    19,   310,   247,
     265,   192,   275,   277,   280,     1,    20,   279,     2,     3,
     278,     0,     0,     0,     4,     0,     5,     6,     7,     0,
       0,     0,     8,     9,    10,     0,    11,    12,     0,    13,
      14,     0,    15,    16,    17,    18,    19,     0,     0,    21,
       0,     0,     1,    80,    81,     2,     3,    82,    83,    84,
      85,     4,    22,     5,     6,     7,    86,    87,    88,     8,
       9,    10,    89,    11,    12,    90,    13,    14,    91,    15,
      16,    17,    18,    19,    92,    93,    94,    95,     0,   145,
       0,     0,    96,     0,     0,     0,     0,     0,     0,    97,
      98,   146,     0,     0,     0,    99,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    54,   100,   101,     0,     0,     0,   102,
       0,     0,     0,   103,   104,   105,   106,   107,   108,     1,
      80,    81,     2,     3,    82,    83,    84,    85,     4,     0,
       5,     6,     7,    86,    87,    88,     8,     9,    10,    89,
      11,    12,    90,    13,    14,    91,    15,    16,    17,    18,
      19,    92,    93,    94,    95,     2,     3,     0,     0,    96,
       0,     4,     0,     5,     0,     7,    97,    98,     0,     8,
       9,     0,    99,    11,    12,     0,     0,    14,     0,     0,
      16,    17,    18,    19,     0,     0,     0,     0,     0,     0,
      54,   191,   101,     0,     0,     0,   102,     0,     0,     0,
     103,   104,   105,   106,   107,   108,     1,     0,     0,     2,
       3,     0,     0,     0,     0,     4,     0,     5,     6,     7,
       0,     0,     0,     8,     9,    10,     0,    11,    12,     0,
      13,    14,     0,    15,    16,    17,    18,    19,     1,     0,
       0,     2,     3,     0,     0,     0,    20,     4,     0,     5,
       6,     7,     0,     0,     0,     8,     9,    10,     0,    11,
      12,     0,    13,    14,     0,    15,    16,    17,    18,    19,
       0,     0,     0,     0,     0,   236,     0,     0,    20,   237,
     303,    80,    81,     0,     0,    82,    83,    84,    85,     0,
       0,     0,    22,     0,    86,    87,    88,     0,     0,     0,
      89,     0,     0,    90,     0,     0,    91,     0,     0,     0,
       0,    21,    92,    93,    94,    95,     0,     0,     0,     0,
      96,     0,     0,     0,    22,     0,     0,    97,    98,     0,
       0,     0,     0,    99,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    54,   193,   101,     0,     0,     0,   102,     0,     0,
       0,   103,   104,   105,   106,   107,   108,    80,    81,     0,
       0,    82,    83,    84,    85,     0,     0,     0,     0,     0,
      86,    87,    88,     0,     0,     0,    89,     0,     0,    90,
       0,     0,    91,     0,     0,     0,     0,     0,    92,    93,
      94,    95,     2,     3,     0,     0,    96,     0,     4,     0,
       5,     0,     7,    97,    98,     0,     8,     9,     0,    99,
      11,    12,     0,     0,    14,     0,     0,    16,    17,    18,
      19,     0,     0,     0,     0,     0,     0,    54,   273,   101,
       0,     0,     0,   102,     0,     0,     0,   103,   104,   105,
     106,   107,   108,    80,    81,     0,     0,    82,    83,    84,
      85,     0,     0,     0,     0,     0,    86,    87,    88,     0,
       0,   163,    89,     0,     0,    90,     0,     0,    91,     0,
       0,     0,     0,     0,    92,    93,    94,    95,     0,     0,
       0,     0,    96,     0,     0,     0,     0,     0,     0,    97,
      98,     0,     0,     0,     0,    99,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    54,     0,   101,     0,     0,     0,   102,
       0,     0,     0,   103,   104,   105,   106,   107,   108,     2,
       3,     0,     0,     0,     0,     4,     0,     5,     0,     7,
       0,     0,     0,     8,     9,     0,     0,    11,    12,    90,
       0,    14,     0,     0,    16,    17,    18,    19,    92,    93,
      94,    95,     0,     0,     0,     0,    96,     0,     0,     0,
       2,     3,     0,    97,    98,     0,     4,     0,     5,    99,
       7,     0,     0,     0,     8,     9,     0,     0,    11,    12,
       0,     0,    14,     0,     0,    16,    17,    18,    19,   101,
       0,     0,     0,     0,     0,     0,     0,   103,   104,   105,
     106,   107,   141,     1,     0,     0,     2,     3,     0,     0,
       0,     0,     4,     0,     5,     6,     7,     0,     0,     0,
       8,     9,    10,     0,    11,    12,     0,    13,    14,   255,
      15,    16,    17,    18,    19,     1,     0,     0,     2,     3,
       0,     0,     0,    20,     4,     0,     5,     6,     7,     0,
       0,     0,     8,     9,    10,     0,    11,    12,     0,    13,
      14,     0,    15,    16,    17,    18,    19,     0,     0,     0,
       1,     0,   236,     2,     3,     0,   267,   303,     0,     4,
       0,     5,     6,     7,     0,     0,     0,     8,     9,    10,
       0,    11,    12,     0,    13,    14,     0,    15,    16,    17,
      18,    19,     1,     0,     0,     2,     3,     0,     0,   335,
       0,     4,    71,     5,     6,     7,     0,     0,     0,     8,
       9,    10,     0,    11,    12,     0,    13,    14,     0,    15,
      16,    17,    18,    19,     1,     0,     0,     2,     3,     0,
       0,    54,     0,     4,     0,     5,     6,     7,     0,     0,
       0,     8,     9,    10,     0,    11,    12,     0,    13,    14,
      90,    15,    16,    17,    18,    19,     0,     0,     0,    92,
      93,    94,    95,    54,     0,     0,     0,    96,     0,     0,
       0,     0,    90,     0,    97,    98,     0,     0,     0,     0,
      99,    92,    93,    94,    95,     0,     0,     0,     0,    96,
     309,     0,     0,     0,     0,     0,    97,    98,   157,   337,
     101,     0,    99,     0,     0,     0,     0,     0,   103,   104,
     105,   106,   107,   141,     0,     0,     0,     0,     0,   140,
       0,     0,   101,     0,     0,     0,     0,    90,     0,     0,
     103,   104,   105,   106,   107,   141,    92,    93,    94,    95,
       0,     0,     0,     0,    96,     0,     0,     0,     0,    90,
       0,    97,    98,     0,     0,     0,     0,    99,    92,    93,
      94,    95,     0,     0,     0,     0,    96,     0,     0,     0,
       0,     0,     0,    97,    98,   157,     0,   101,     0,    99,
       0,     0,     0,     0,     0,   103,   104,   105,   106,   107,
     141,     0,     0,     0,     0,     0,     0,     0,     0,   101,
       0,     0,     0,   179,    90,     0,     0,   103,   104,   105,
     106,   107,   141,    92,    93,    94,    95,     0,     0,     0,
       0,    96,     0,     0,     0,     0,    90,     0,    97,    98,
       0,     0,     0,     0,    99,    92,    93,    94,    95,     0,
       0,     0,     0,    96,     0,     0,     0,     0,     0,     0,
      97,    98,     0,     0,   101,     0,    99,     0,   260,     0,
       0,     0,   103,   104,   105,   106,   107,   141,     0,     0,
       0,     0,     0,     0,     0,     0,   101,   298,     0,     0,
       0,    90,     0,     0,   103,   104,   105,   106,   107,   141,
      92,    93,    94,    95,     0,     0,     0,     0,    96,     0,
       0,     0,     0,     0,     0,    97,    98,     0,    90,     0,
       0,    99,     0,     0,     0,     0,     0,    92,    93,    94,
      95,     0,     0,     0,     0,    96,     0,     0,   301,     0,
       0,   101,    97,    98,     0,     0,     0,     0,    99,   103,
     104,   105,   106,   107,   141,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   101,     0,
       0,     0,   319,    90,     0,     0,   103,   104,   105,   106,
     107,   141,    92,    93,    94,    95,     0,     0,     0,     0,
      96,     0,     0,     0,     0,     0,     0,    97,    98,     0,
      90,     0,     0,    99,     0,     0,     0,     0,     0,    92,
      93,    94,    95,     0,     0,     0,     0,    96,     0,     0,
     333,     0,     0,   101,    97,    98,     0,     0,     0,     0,
      99,   103,   104,   105,   106,   107,   141,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     101,   341,     0,     0,     0,    90,     0,     0,   103,   104,
     105,   106,   107,   141,    92,    93,    94,    95,     0,     0,
       0,     0,    96,     0,     0,     0,     0,    90,     0,    97,
      98,     0,     0,     0,     0,    99,    92,    93,    94,    95,
       0,     0,     0,     0,    96,     0,     0,     0,     0,     0,
       0,    97,    98,     0,     0,   101,     0,    99,     0,   344,
       0,     0,     0,   103,   104,   105,   106,   107,   141,     0,
       0,     0,     0,     0,     0,     0,     0,   101,   355,     0,
       0,     0,    90,     0,     0,   103,   104,   105,   106,   107,
     141,    92,    93,    94,    95,     0,     0,     0,     0,    96,
       0,     0,     0,     0,    90,     0,    97,    98,     0,     0,
       0,     0,    99,    92,    93,    94,    95,     0,     0,     0,
       0,    96,     0,     0,     0,     0,     0,     0,    97,    98,
       0,     0,   101,   357,    99,     0,     0,     0,     0,     0,
     103,   104,   105,   106,   107,   141,     0,     0,     0,     0,
       0,     0,     0,     0,   101,   367,     0,     0,     0,    90,
       0,     0,   103,   104,   105,   106,   107,   141,    92,    93,
      94,    95,     0,     0,     0,     0,    96,     0,     0,     0,
       0,    90,     0,    97,    98,     0,     0,     0,     0,    99,
      92,    93,    94,    95,     0,     0,     0,     0,    96,     0,
       0,     0,     0,     0,     0,    97,    98,     0,     0,   101,
       0,    99,     0,     0,     0,     0,     0,   103,   104,   105,
     106,   107,   141,     0,     0,     0,     0,     0,     0,     0,
       0,   181,     0,     0,     0,     0,    90,     0,     0,   103,
     104,   105,   106,   107,   141,    92,    93,    94,    95,     0,
       0,     0,     0,    96,     0,     0,   216,   217,   218,   219,
      97,    98,   220,     0,     0,     0,    99,     0,     0,     0,
       0,     0,     0,     0,     0,   221,   222,     0,     0,     0,
       0,   223,     0,     0,   224,   225,   184,   226,     0,     0,
       0,     0,     0,     0,   103,   104,   105,   106,   107,   141,
       1,     0,     0,     2,     3,     0,     0,     0,     0,     4,
       0,     5,     6,     7,     0,     0,     0,     8,     9,    10,
       0,    11,    12,     0,    13,    14,     0,    15,    16,    17,
      18,    19
};

static const yytype_int16 yycheck[] =
{
       0,    60,    85,    81,   157,    71,    76,    36,   147,    43,
      54,    21,   133,    89,     0,    20,    43,    27,    43,    74,
      75,    89,    20,    23,    74,    43,    74,   239,    28,    29,
      30,   114,    75,   101,    74,    78,    41,    23,    72,    83,
      72,    89,    76,    41,    76,    59,   101,    57,   187,    76,
      43,    76,    79,    59,    52,    80,   268,    89,    76,    69,
      60,    78,    89,    80,    89,    74,    48,    81,    78,    76,
      56,    89,    54,    77,   152,    81,    74,    75,    76,    72,
      89,    79,    89,    76,    90,    45,    72,   165,    94,    95,
     173,   157,   213,   214,   215,    52,    89,     7,    34,   169,
      73,    75,    80,   101,    78,    78,   174,   190,   176,   192,
     178,    75,    48,   181,    78,   183,   184,    74,    75,    76,
      56,    72,    79,   109,    34,    76,   181,   133,    80,   195,
     198,    43,    44,    43,    57,    47,    72,   147,   152,    62,
      37,    38,   147,    72,   101,    79,   152,    76,    72,   270,
      76,   165,    76,   205,   206,   207,   208,    76,   236,   165,
     313,   227,    78,    76,    80,   233,    63,    78,   234,    80,
      78,   169,    80,   256,    71,    72,   254,    48,    49,    76,
      65,    66,   187,   181,    78,    78,    80,    80,    89,    60,
      61,   197,   260,   199,   200,   201,   202,   203,   204,   205,
     206,   207,   208,   209,   210,   211,   212,   213,   214,   215,
     239,    78,   169,    80,    35,    36,    77,    78,    77,    78,
      77,    78,   236,    76,   181,    77,    78,   237,    79,   307,
     236,    53,   237,    52,   317,    77,    78,   237,    55,   322,
     254,   324,   252,   243,    78,    79,    51,   313,   254,   308,
     318,   319,    45,   321,    77,    78,   203,   204,   341,    77,
      78,    77,   267,   329,   270,    77,    78,   267,    77,    78,
      73,   354,   355,    79,   357,   343,   344,   360,    77,    78,
      78,   364,    79,   366,   367,    77,    78,   209,   210,    10,
     373,   359,    80,   307,   211,   212,    77,    76,    89,    89,
      89,   307,    77,     0,    73,    77,     3,    77,   308,     6,
       7,    73,   326,    77,    13,    12,    23,    14,    15,    16,
     326,    80,    79,    20,    21,    22,    69,    24,    25,    65,
      27,    28,   252,    30,    31,    32,    33,    34,   243,   154,
     181,   109,   197,   199,   202,     3,    43,   201,     6,     7,
     200,    -1,    -1,    -1,    12,    -1,    14,    15,    16,    -1,
      -1,    -1,    20,    21,    22,    -1,    24,    25,    -1,    27,
      28,    -1,    30,    31,    32,    33,    34,    -1,    -1,    76,
      -1,    -1,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    89,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    -1,    77,
      -1,    -1,    43,    -1,    -1,    -1,    -1,    -1,    -1,    50,
      51,    89,    -1,    -1,    -1,    56,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    74,    75,    76,    -1,    -1,    -1,    80,
      -1,    -1,    -1,    84,    85,    86,    87,    88,    89,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    -1,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,     6,     7,    -1,    -1,    43,
      -1,    12,    -1,    14,    -1,    16,    50,    51,    -1,    20,
      21,    -1,    56,    24,    25,    -1,    -1,    28,    -1,    -1,
      31,    32,    33,    34,    -1,    -1,    -1,    -1,    -1,    -1,
      74,    75,    76,    -1,    -1,    -1,    80,    -1,    -1,    -1,
      84,    85,    86,    87,    88,    89,     3,    -1,    -1,     6,
       7,    -1,    -1,    -1,    -1,    12,    -1,    14,    15,    16,
      -1,    -1,    -1,    20,    21,    22,    -1,    24,    25,    -1,
      27,    28,    -1,    30,    31,    32,    33,    34,     3,    -1,
      -1,     6,     7,    -1,    -1,    -1,    43,    12,    -1,    14,
      15,    16,    -1,    -1,    -1,    20,    21,    22,    -1,    24,
      25,    -1,    27,    28,    -1,    30,    31,    32,    33,    34,
      -1,    -1,    -1,    -1,    -1,    72,    -1,    -1,    43,    76,
      77,     4,     5,    -1,    -1,     8,     9,    10,    11,    -1,
      -1,    -1,    89,    -1,    17,    18,    19,    -1,    -1,    -1,
      23,    -1,    -1,    26,    -1,    -1,    29,    -1,    -1,    -1,
      -1,    76,    35,    36,    37,    38,    -1,    -1,    -1,    -1,
      43,    -1,    -1,    -1,    89,    -1,    -1,    50,    51,    -1,
      -1,    -1,    -1,    56,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    74,    75,    76,    -1,    -1,    -1,    80,    -1,    -1,
      -1,    84,    85,    86,    87,    88,    89,     4,     5,    -1,
      -1,     8,     9,    10,    11,    -1,    -1,    -1,    -1,    -1,
      17,    18,    19,    -1,    -1,    -1,    23,    -1,    -1,    26,
      -1,    -1,    29,    -1,    -1,    -1,    -1,    -1,    35,    36,
      37,    38,     6,     7,    -1,    -1,    43,    -1,    12,    -1,
      14,    -1,    16,    50,    51,    -1,    20,    21,    -1,    56,
      24,    25,    -1,    -1,    28,    -1,    -1,    31,    32,    33,
      34,    -1,    -1,    -1,    -1,    -1,    -1,    74,    75,    76,
      -1,    -1,    -1,    80,    -1,    -1,    -1,    84,    85,    86,
      87,    88,    89,     4,     5,    -1,    -1,     8,     9,    10,
      11,    -1,    -1,    -1,    -1,    -1,    17,    18,    19,    -1,
      -1,    75,    23,    -1,    -1,    26,    -1,    -1,    29,    -1,
      -1,    -1,    -1,    -1,    35,    36,    37,    38,    -1,    -1,
      -1,    -1,    43,    -1,    -1,    -1,    -1,    -1,    -1,    50,
      51,    -1,    -1,    -1,    -1,    56,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    74,    -1,    76,    -1,    -1,    -1,    80,
      -1,    -1,    -1,    84,    85,    86,    87,    88,    89,     6,
       7,    -1,    -1,    -1,    -1,    12,    -1,    14,    -1,    16,
      -1,    -1,    -1,    20,    21,    -1,    -1,    24,    25,    26,
      -1,    28,    -1,    -1,    31,    32,    33,    34,    35,    36,
      37,    38,    -1,    -1,    -1,    -1,    43,    -1,    -1,    -1,
       6,     7,    -1,    50,    51,    -1,    12,    -1,    14,    56,
      16,    -1,    -1,    -1,    20,    21,    -1,    -1,    24,    25,
      -1,    -1,    28,    -1,    -1,    31,    32,    33,    34,    76,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    84,    85,    86,
      87,    88,    89,     3,    -1,    -1,     6,     7,    -1,    -1,
      -1,    -1,    12,    -1,    14,    15,    16,    -1,    -1,    -1,
      20,    21,    22,    -1,    24,    25,    -1,    27,    28,    75,
      30,    31,    32,    33,    34,     3,    -1,    -1,     6,     7,
      -1,    -1,    -1,    43,    12,    -1,    14,    15,    16,    -1,
      -1,    -1,    20,    21,    22,    -1,    24,    25,    -1,    27,
      28,    -1,    30,    31,    32,    33,    34,    -1,    -1,    -1,
       3,    -1,    72,     6,     7,    -1,    76,    77,    -1,    12,
      -1,    14,    15,    16,    -1,    -1,    -1,    20,    21,    22,
      -1,    24,    25,    -1,    27,    28,    -1,    30,    31,    32,
      33,    34,     3,    -1,    -1,     6,     7,    -1,    -1,    77,
      -1,    12,    45,    14,    15,    16,    -1,    -1,    -1,    20,
      21,    22,    -1,    24,    25,    -1,    27,    28,    -1,    30,
      31,    32,    33,    34,     3,    -1,    -1,     6,     7,    -1,
      -1,    74,    -1,    12,    -1,    14,    15,    16,    -1,    -1,
      -1,    20,    21,    22,    -1,    24,    25,    -1,    27,    28,
      26,    30,    31,    32,    33,    34,    -1,    -1,    -1,    35,
      36,    37,    38,    74,    -1,    -1,    -1,    43,    -1,    -1,
      -1,    -1,    26,    -1,    50,    51,    -1,    -1,    -1,    -1,
      56,    35,    36,    37,    38,    -1,    -1,    -1,    -1,    43,
      69,    -1,    -1,    -1,    -1,    -1,    50,    51,    74,    75,
      76,    -1,    56,    -1,    -1,    -1,    -1,    -1,    84,    85,
      86,    87,    88,    89,    -1,    -1,    -1,    -1,    -1,    73,
      -1,    -1,    76,    -1,    -1,    -1,    -1,    26,    -1,    -1,
      84,    85,    86,    87,    88,    89,    35,    36,    37,    38,
      -1,    -1,    -1,    -1,    43,    -1,    -1,    -1,    -1,    26,
      -1,    50,    51,    -1,    -1,    -1,    -1,    56,    35,    36,
      37,    38,    -1,    -1,    -1,    -1,    43,    -1,    -1,    -1,
      -1,    -1,    -1,    50,    51,    74,    -1,    76,    -1,    56,
      -1,    -1,    -1,    -1,    -1,    84,    85,    86,    87,    88,
      89,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    76,
      -1,    -1,    -1,    80,    26,    -1,    -1,    84,    85,    86,
      87,    88,    89,    35,    36,    37,    38,    -1,    -1,    -1,
      -1,    43,    -1,    -1,    -1,    -1,    26,    -1,    50,    51,
      -1,    -1,    -1,    -1,    56,    35,    36,    37,    38,    -1,
      -1,    -1,    -1,    43,    -1,    -1,    -1,    -1,    -1,    -1,
      50,    51,    -1,    -1,    76,    -1,    56,    -1,    80,    -1,
      -1,    -1,    84,    85,    86,    87,    88,    89,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    76,    77,    -1,    -1,
      -1,    26,    -1,    -1,    84,    85,    86,    87,    88,    89,
      35,    36,    37,    38,    -1,    -1,    -1,    -1,    43,    -1,
      -1,    -1,    -1,    -1,    -1,    50,    51,    -1,    26,    -1,
      -1,    56,    -1,    -1,    -1,    -1,    -1,    35,    36,    37,
      38,    -1,    -1,    -1,    -1,    43,    -1,    -1,    73,    -1,
      -1,    76,    50,    51,    -1,    -1,    -1,    -1,    56,    84,
      85,    86,    87,    88,    89,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    76,    -1,
      -1,    -1,    80,    26,    -1,    -1,    84,    85,    86,    87,
      88,    89,    35,    36,    37,    38,    -1,    -1,    -1,    -1,
      43,    -1,    -1,    -1,    -1,    -1,    -1,    50,    51,    -1,
      26,    -1,    -1,    56,    -1,    -1,    -1,    -1,    -1,    35,
      36,    37,    38,    -1,    -1,    -1,    -1,    43,    -1,    -1,
      73,    -1,    -1,    76,    50,    51,    -1,    -1,    -1,    -1,
      56,    84,    85,    86,    87,    88,    89,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      76,    77,    -1,    -1,    -1,    26,    -1,    -1,    84,    85,
      86,    87,    88,    89,    35,    36,    37,    38,    -1,    -1,
      -1,    -1,    43,    -1,    -1,    -1,    -1,    26,    -1,    50,
      51,    -1,    -1,    -1,    -1,    56,    35,    36,    37,    38,
      -1,    -1,    -1,    -1,    43,    -1,    -1,    -1,    -1,    -1,
      -1,    50,    51,    -1,    -1,    76,    -1,    56,    -1,    80,
      -1,    -1,    -1,    84,    85,    86,    87,    88,    89,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    76,    77,    -1,
      -1,    -1,    26,    -1,    -1,    84,    85,    86,    87,    88,
      89,    35,    36,    37,    38,    -1,    -1,    -1,    -1,    43,
      -1,    -1,    -1,    -1,    26,    -1,    50,    51,    -1,    -1,
      -1,    -1,    56,    35,    36,    37,    38,    -1,    -1,    -1,
      -1,    43,    -1,    -1,    -1,    -1,    -1,    -1,    50,    51,
      -1,    -1,    76,    77,    56,    -1,    -1,    -1,    -1,    -1,
      84,    85,    86,    87,    88,    89,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    76,    77,    -1,    -1,    -1,    26,
      -1,    -1,    84,    85,    86,    87,    88,    89,    35,    36,
      37,    38,    -1,    -1,    -1,    -1,    43,    -1,    -1,    -1,
      -1,    26,    -1,    50,    51,    -1,    -1,    -1,    -1,    56,
      35,    36,    37,    38,    -1,    -1,    -1,    -1,    43,    -1,
      -1,    -1,    -1,    -1,    -1,    50,    51,    -1,    -1,    76,
      -1,    56,    -1,    -1,    -1,    -1,    -1,    84,    85,    86,
      87,    88,    89,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    76,    -1,    -1,    -1,    -1,    26,    -1,    -1,    84,
      85,    86,    87,    88,    89,    35,    36,    37,    38,    -1,
      -1,    -1,    -1,    43,    -1,    -1,    39,    40,    41,    42,
      50,    51,    45,    -1,    -1,    -1,    56,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    58,    59,    -1,    -1,    -1,
      -1,    64,    -1,    -1,    67,    68,    76,    70,    -1,    -1,
      -1,    -1,    -1,    -1,    84,    85,    86,    87,    88,    89,
       3,    -1,    -1,     6,     7,    -1,    -1,    -1,    -1,    12,
      -1,    14,    15,    16,    -1,    -1,    -1,    20,    21,    22,
      -1,    24,    25,    -1,    27,    28,    -1,    30,    31,    32,
      33,    34
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     6,     7,    12,    14,    15,    16,    20,    21,
      22,    24,    25,    27,    28,    30,    31,    32,    33,    34,
      43,    76,    89,    91,    92,    93,    94,    96,    97,    98,
      99,   100,   101,   109,   112,   113,   114,    74,    89,    99,
     114,   115,   112,     0,    92,    80,   103,   104,   112,    96,
      96,    96,    74,    89,    74,    94,    95,    96,   128,    72,
      76,   113,    89,   110,   111,    74,    99,   114,    77,    78,
      80,    45,    95,   128,    98,    99,   102,   105,   106,    74,
       4,     5,     8,     9,    10,    11,    17,    18,    19,    23,
      26,    29,    35,    36,    37,    38,    43,    50,    51,    56,
      75,    76,    80,    84,    85,    86,    87,    88,    89,    95,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     136,   138,   139,   140,   141,   142,   143,   144,   145,   146,
     147,   148,   149,   150,   151,   152,   154,    94,   128,   112,
      73,    89,   136,   137,   149,    77,    89,    96,   116,   117,
     118,   119,    45,    75,    78,   110,   104,    74,   120,   134,
     128,   106,   106,    75,   105,    79,   107,   108,   112,   102,
      80,   137,    80,    79,    76,   125,    76,    89,    76,    80,
     133,    76,   149,    76,    76,   149,   149,   106,   122,   133,
      79,    75,   129,    75,   125,    78,    80,    54,    83,    53,
      52,    55,    51,    57,    62,    48,    49,    60,    61,    65,
      66,    35,    36,    43,    44,    47,    39,    40,    41,    42,
      45,    58,    59,    64,    67,    68,    70,   135,   148,    37,
      38,    63,    71,    72,    76,    73,    72,    76,   112,   114,
     123,   124,    77,    78,    77,    78,   137,   111,    75,   120,
     121,   137,    78,    80,    79,    75,    79,   125,   133,    10,
      80,   133,    80,   133,    80,   122,   133,    76,   114,   123,
      77,    77,   125,    75,   134,   139,   133,   140,   141,   142,
     143,   144,   144,   145,   145,   145,   145,   146,   146,   147,
     147,   148,   148,   148,   134,    89,    89,   133,    77,   134,
     153,    73,   137,    77,   116,   123,   124,    72,    76,    69,
     118,    89,    75,    78,   108,   137,   125,    77,    76,    80,
     133,    80,    77,    77,    77,   148,    79,    73,    77,    78,
      73,    77,    77,    73,   137,    77,   116,    75,   120,   125,
     133,    77,   133,    80,    80,   133,   125,   125,   136,   134,
      73,    77,    77,   125,    77,    77,   133,    77,   133,    80,
      13,    80,   125,   125,    77,   125,    77,    77,   133,   125,
     125,   125,   125,    77,   125
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

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
#ifndef	YYINITDEPTH
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
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

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}

/* Prevent warnings from -Wmissing-prototypes.  */
#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */


/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*-------------------------.
| yyparse or yypush_parse.  |
`-------------------------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{


    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

       Refer to the stacks thru separate pointers, to allow yyoverflow
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
  int yytoken;
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

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */
  yyssp = yyss;
  yyvsp = yyvs;

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
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
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
      if (yyn == 0 || yyn == YYTABLE_NINF)
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
  *++yyvsp = yylval;

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
     `$$ = $1'.

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

/* Line 1455 of yacc.c  */
#line 21 "be11302011.y"
    {printf("\tReduced : translation_unit -> external_declaration\n");;}
    break;

  case 3:

/* Line 1455 of yacc.c  */
#line 22 "be11302011.y"
    {printf("\tReduced : translation_unit -> translation_unit external_declaration\n");;}
    break;

  case 4:

/* Line 1455 of yacc.c  */
#line 25 "be11302011.y"
    {printf("\tReduced : external_declaration -> function_definition\n");;}
    break;

  case 5:

/* Line 1455 of yacc.c  */
#line 26 "be11302011.y"
    {printf("\tReduced : external_declaration -> declaration\n");;}
    break;

  case 6:

/* Line 1455 of yacc.c  */
#line 29 "be11302011.y"
    {printf("\tReduced : function_definition -> declaration_specifiers declarator declaration_list compound_statement\n");;}
    break;

  case 7:

/* Line 1455 of yacc.c  */
#line 30 "be11302011.y"
    {printf("\tReduced : function_definition -> declarator declaration_list compound_statement\n");;}
    break;

  case 8:

/* Line 1455 of yacc.c  */
#line 31 "be11302011.y"
    {printf("\tReduced : function_definition -> declaration_specifiers declarator compound_statement\n");;}
    break;

  case 9:

/* Line 1455 of yacc.c  */
#line 32 "be11302011.y"
    {printf("\tReduced : function_definition -> declarator compound_statement\n");;}
    break;

  case 10:

/* Line 1455 of yacc.c  */
#line 35 "be11302011.y"
    {printf("\tReduced : declaration -> declaration_specifiers init_declarator_list SEMICOLON\n");;}
    break;

  case 11:

/* Line 1455 of yacc.c  */
#line 36 "be11302011.y"
    {printf("\tReduced : declaration -> declaration_specifiers SEMICOLON\n");;}
    break;

  case 12:

/* Line 1455 of yacc.c  */
#line 39 "be11302011.y"
    {printf("\tReduced : declaration_list -> declaration\n");;}
    break;

  case 13:

/* Line 1455 of yacc.c  */
#line 40 "be11302011.y"
    {printf("\tReduced : declaration_list -> declaration_list declaration\n");;}
    break;

  case 14:

/* Line 1455 of yacc.c  */
#line 43 "be11302011.y"
    {printf("\tReduced : declaration_specifiers -> storage_class_specifier declaration_specifiers\n");;}
    break;

  case 15:

/* Line 1455 of yacc.c  */
#line 44 "be11302011.y"
    {printf("\tReduced : declaration_specifiers -> storage_class_specifier\n");;}
    break;

  case 16:

/* Line 1455 of yacc.c  */
#line 45 "be11302011.y"
    {printf("\tReduced : declaration_specifiers -> type_specifier declaration_specifiers\n");;}
    break;

  case 17:

/* Line 1455 of yacc.c  */
#line 46 "be11302011.y"
    {printf("\tReduced : declaration_specifiers -> type_specifier\n");;}
    break;

  case 18:

/* Line 1455 of yacc.c  */
#line 47 "be11302011.y"
    {printf("\tReduced : declaration_specifiers -> type_qualifier declaration_specifiers\n");;}
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 48 "be11302011.y"
    {printf("\tReduced : declaration_specifiers -> type_qualifier\n");;}
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 51 "be11302011.y"
    {printf("\tReduced : storage_class_specifier -> AUTO \n");;}
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 52 "be11302011.y"
    {printf("\tReduced : storage_class_specifier -> REGISTER\n");;}
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 53 "be11302011.y"
    {printf("\tReduced : storage_class_specifier -> STATIC\n");;}
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 54 "be11302011.y"
    {printf("\tReduced : storage_class_specifier -> EXTERN\n");;}
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 55 "be11302011.y"
    {printf("\tReduced : storage_class_specifier -> TYPEDEF\n");;}
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 58 "be11302011.y"
    {printf("\tReduced : type_specifier -> VOID\n");;}
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 59 "be11302011.y"
    {printf("\tReduced : type_specifier -> CHAR\n");;}
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 60 "be11302011.y"
    {printf("\tReduced : type_specifier -> SHORT\n");;}
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 61 "be11302011.y"
    {printf("\tReduced : type_specifier -> INT\n");;}
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 62 "be11302011.y"
    {printf("\tReduced : type_specifier -> LONG\n");;}
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 63 "be11302011.y"
    {printf("\tReduced : type_specifier -> FLOAT\n");;}
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 64 "be11302011.y"
    {printf("\tReduced : type_specifier -> DOUBLE\n");;}
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 65 "be11302011.y"
    {printf("\tReduced : type_specifier -> SIGNED\n");;}
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 66 "be11302011.y"
    {printf("\tReduced : type_specifier -> UNSIGNED\n");;}
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 67 "be11302011.y"
    {printf("\tReduced : type_specifier -> struct_or_union_specifier\n");;}
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 68 "be11302011.y"
    {printf("\tReduced : type_specifier -> enum_specifier\n");;}
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 71 "be11302011.y"
    {printf("\tReduced : type_qualifier -> CONST\n");;}
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 72 "be11302011.y"
    {printf("\tReduced : type_qualifier -> VOLATILE\n");;}
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 75 "be11302011.y"
    {printf("\tReduced : struct_or_union_specifier -> struct_or_union IDENTIFIER CURLY_BRACKET_BEG struct_declaration_list CURLY_BRACKET_END\n");;}
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 76 "be11302011.y"
    {printf("\tReduced : struct_or_union_specifier -> struct_or_union CURLY_BRACKET_BEG struct_declaration_list CURLY_BRACKET_END\n");;}
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 77 "be11302011.y"
    {printf("\tReduced : struct_or_union_specifier -> struct_or_union IDENTIFIER\n");;}
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 80 "be11302011.y"
    {printf("\tReduced : struct_or_union -> STRUCT\n");;}
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 81 "be11302011.y"
    {printf("\tReduced : struct_or_union -> UNION\n");;}
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 84 "be11302011.y"
    {printf("\tReduced : struct_declaration_list -> struct_declaration\n");;}
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 85 "be11302011.y"
    {printf("\tReduced : struct_declaration_list -> struct_declaration_list struct_declaration\n");;}
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 88 "be11302011.y"
    {printf("\tReduced : init_declarator_list -> init_declarator\n");;}
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 89 "be11302011.y"
    {printf("\tReduced : init_declarator_list -> init_declarator_list COMMA init_declarator\n");;}
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 92 "be11302011.y"
    {printf("\tReduced : init_declarator -> declarator\n");;}
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 93 "be11302011.y"
    {printf("\tReduced : init_declarator -> declarator OPERATOR_ASSIGNMENT initializer\n");;}
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 96 "be11302011.y"
    {printf("\tReduced : struct_declaration -> specifier_qualifier_list struct_declarator_list SEMICOLON\n");;}
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 99 "be11302011.y"
    {printf("\tReduced : specifier_qualifier_list -> type_specifier specifier_qualifier_list\n");;}
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 100 "be11302011.y"
    {printf("\tReduced : specifier_qualifier_list -> type_specifier\n");;}
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 101 "be11302011.y"
    {printf("\tReduced : specifier_qualifier_list -> type_qualifier specifier_qualifier_list\n");;}
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 102 "be11302011.y"
    {printf("\tReduced : specifier_qualifier_list -> type_qualifier\n");;}
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 105 "be11302011.y"
    {printf("\tReduced : struct_declarator_list -> struct_declarator\n");;}
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 106 "be11302011.y"
    {printf("\tReduced : struct_declarator_list -> struct_declarator_list COMMA struct_declarator\n");;}
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 108 "be11302011.y"
    {printf("\tReduced : struct_declarator -> declarator\n");;}
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 109 "be11302011.y"
    {printf("\tReduced : struct_declarator -> declarator COLON constant_expression\n");;}
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 110 "be11302011.y"
    {printf("\tReduced : struct_declarator -> COLON constant_expression\n");;}
    break;

  case 59:

/* Line 1455 of yacc.c  */
#line 113 "be11302011.y"
    {printf("\tReduced : enum_specifier -> ENUM IDENTIFIER CURLY_BRACKET_BEG enumerator_list CURLY_BRACKET_END\n");;}
    break;

  case 60:

/* Line 1455 of yacc.c  */
#line 114 "be11302011.y"
    {printf("\tReduced : enum_specifier -> ENUM CURLY_BRACKET_BEG enumerator_list CURLY_BRACKET_END\n");;}
    break;

  case 61:

/* Line 1455 of yacc.c  */
#line 115 "be11302011.y"
    {printf("\tReduced : enum_specifier -> ENUM IDENTIFIER\n");;}
    break;

  case 62:

/* Line 1455 of yacc.c  */
#line 118 "be11302011.y"
    {printf("\tReduced : enumerator_list -> enumerator\n");;}
    break;

  case 63:

/* Line 1455 of yacc.c  */
#line 119 "be11302011.y"
    {printf("\tReduced : enumerator_list -> enumerator_list COMMA enumerator\n");;}
    break;

  case 64:

/* Line 1455 of yacc.c  */
#line 122 "be11302011.y"
    {printf("\tReduced : enumerator -> IDENTIFIER\n");;}
    break;

  case 65:

/* Line 1455 of yacc.c  */
#line 123 "be11302011.y"
    {printf("\tReduced : enumerator -> IDENTIFIER OPERATOR_ASSIGNMENT constant_expression\n");;}
    break;

  case 66:

/* Line 1455 of yacc.c  */
#line 126 "be11302011.y"
    {printf("\tReduced : declarator -> pointer direct_declarator\n");;}
    break;

  case 67:

/* Line 1455 of yacc.c  */
#line 127 "be11302011.y"
    {printf("\tReduced : declarator -> direct_declarator\n");;}
    break;

  case 68:

/* Line 1455 of yacc.c  */
#line 130 "be11302011.y"
    {printf("\tReduced : direct_declarator -> IDENTIFIER\n");;}
    break;

  case 69:

/* Line 1455 of yacc.c  */
#line 131 "be11302011.y"
    {printf("\tReduced : direct_declarator -> PARANTHESIS_BEG declarator PARANTHESIS_END\n");;}
    break;

  case 70:

/* Line 1455 of yacc.c  */
#line 132 "be11302011.y"
    {printf("\tReduced : direct_declarator -> direct_declarator SQUARE_BRACKET_BEG constant_expression SQUARE_BRACKET_END\n");;}
    break;

  case 71:

/* Line 1455 of yacc.c  */
#line 133 "be11302011.y"
    {printf("\tReduced : direct_declarator -> direct_declarator SQUARE_BRACKET_BEG SQUARE_BRACKET_END\n");;}
    break;

  case 72:

/* Line 1455 of yacc.c  */
#line 134 "be11302011.y"
    {printf("\tReduced : direct_declarator -> direct_declarator PARANTHESIS_BEG parameter_type_list PARANTHESIS_END\n");;}
    break;

  case 73:

/* Line 1455 of yacc.c  */
#line 135 "be11302011.y"
    {printf("\tReduced : direct_declarator -> direct_declarator PARANTHESIS_BEG identifier_list PARANTHESIS_END\n");;}
    break;

  case 74:

/* Line 1455 of yacc.c  */
#line 136 "be11302011.y"
    {printf("\tReduced : direct_declarator -> direct_declarator PARANTHESIS_BEG PARANTHESIS_END\n");;}
    break;

  case 75:

/* Line 1455 of yacc.c  */
#line 139 "be11302011.y"
    {printf("\tReduced : pointer -> OPERATOR_MULTIPLY type_qualifier_list\n");;}
    break;

  case 76:

/* Line 1455 of yacc.c  */
#line 140 "be11302011.y"
    {printf("\tReduced : pointer -> OPERATOR_MULTIPLY\n");;}
    break;

  case 77:

/* Line 1455 of yacc.c  */
#line 141 "be11302011.y"
    {printf("\tReduced : pointer -> OPERATOR_MULTIPLY type_qualifier_list pointer\n");;}
    break;

  case 78:

/* Line 1455 of yacc.c  */
#line 142 "be11302011.y"
    {printf("\tReduced : pointer -> OPERATOR_MULTIPLY pointer\n");;}
    break;

  case 79:

/* Line 1455 of yacc.c  */
#line 145 "be11302011.y"
    {printf("\tReduced : type_qualifier_list -> type_qualifier\n");;}
    break;

  case 80:

/* Line 1455 of yacc.c  */
#line 146 "be11302011.y"
    {printf("\tReduced : type_qualifier_list -> type_qualifier_list type_qualifier\n");;}
    break;

  case 81:

/* Line 1455 of yacc.c  */
#line 149 "be11302011.y"
    {printf("\tReduced : parameter_type_list -> parameter_list\n");;}
    break;

  case 82:

/* Line 1455 of yacc.c  */
#line 150 "be11302011.y"
    {printf("\tReduced : parameter_type_list -> parameter_list COMMA THREE_DOTS\n");;}
    break;

  case 83:

/* Line 1455 of yacc.c  */
#line 153 "be11302011.y"
    {printf("\tReduced : parameter_list -> parameter_declaration\n");;}
    break;

  case 84:

/* Line 1455 of yacc.c  */
#line 154 "be11302011.y"
    {printf("\tReduced : parameter_list -> parameter_list COMMA parameter_declaration\n");;}
    break;

  case 85:

/* Line 1455 of yacc.c  */
#line 157 "be11302011.y"
    {printf("\tReduced : parameter_declaration -> declaration_specifiers declarator\n");;}
    break;

  case 86:

/* Line 1455 of yacc.c  */
#line 158 "be11302011.y"
    {printf("\tReduced : parameter_declaration -> declaration_specifiers abstract_declarator\n");;}
    break;

  case 87:

/* Line 1455 of yacc.c  */
#line 159 "be11302011.y"
    {printf("\tReduced : parameter_declaration -> declaration_specifiers\n");;}
    break;

  case 88:

/* Line 1455 of yacc.c  */
#line 162 "be11302011.y"
    {printf("\tReduced : identifier_list -> IDENTIFIER\n");;}
    break;

  case 89:

/* Line 1455 of yacc.c  */
#line 163 "be11302011.y"
    {printf("\tReduced : identifier_list -> identifier_list COMMA IDENTIFIER\n");;}
    break;

  case 90:

/* Line 1455 of yacc.c  */
#line 166 "be11302011.y"
    {printf("\tReduced : initializer -> assignment_expression\n");;}
    break;

  case 91:

/* Line 1455 of yacc.c  */
#line 167 "be11302011.y"
    {printf("\tReduced : initializer -> CURLY_BRACKET_BEG initializer_list CURLY_BRACKET_END\n");;}
    break;

  case 92:

/* Line 1455 of yacc.c  */
#line 168 "be11302011.y"
    {printf("\tReduced : initializer -> CURLY_BRACKET_BEG initializer_list COMMA CURLY_BRACKET_END\n");;}
    break;

  case 93:

/* Line 1455 of yacc.c  */
#line 171 "be11302011.y"
    {printf("\tReduced : initializer_list -> initializer\n");;}
    break;

  case 94:

/* Line 1455 of yacc.c  */
#line 172 "be11302011.y"
    {printf("\tReduced : initializer_list -> initializer_list COMMA initializer\n");;}
    break;

  case 95:

/* Line 1455 of yacc.c  */
#line 175 "be11302011.y"
    {printf("\tReduced : type_name -> specifier_qualifier_list abstract_declarator\n");;}
    break;

  case 96:

/* Line 1455 of yacc.c  */
#line 176 "be11302011.y"
    {printf("\tReduced : type_name -> specifier_qualifier_list\n");;}
    break;

  case 97:

/* Line 1455 of yacc.c  */
#line 179 "be11302011.y"
    {printf("\tReduced : abstract_declarator ->  pointer\n");;}
    break;

  case 98:

/* Line 1455 of yacc.c  */
#line 180 "be11302011.y"
    {printf("\tReduced : abstract_declarator ->  pointer direct_abstract_declarator\n");;}
    break;

  case 99:

/* Line 1455 of yacc.c  */
#line 181 "be11302011.y"
    {printf("\tReduced : abstract_declarator -> direct_abstract_declarator\n");;}
    break;

  case 100:

/* Line 1455 of yacc.c  */
#line 184 "be11302011.y"
    {printf("\tReduced : direct_abstract_declarator -> PARANTHESIS_BEG abstract_declarator PARANTHESIS_END\n");;}
    break;

  case 101:

/* Line 1455 of yacc.c  */
#line 185 "be11302011.y"
    {printf("\tReduced : direct_abstract_declarator -> direct_abstract_declarator SQUARE_BRACKET_BEG constant_expression SQUARE_BRACKET_END\n");;}
    break;

  case 102:

/* Line 1455 of yacc.c  */
#line 186 "be11302011.y"
    {printf("\tReduced : direct_abstract_declarator -> SQUARE_BRACKET_BEG constant_expression SQUARE_BRACKET_END\n");;}
    break;

  case 103:

/* Line 1455 of yacc.c  */
#line 187 "be11302011.y"
    {printf("\tReduced : direct_abstract_declarator -> direct_abstract_declarator SQUARE_BRACKET_BEG SQUARE_BRACKET_END\n");;}
    break;

  case 104:

/* Line 1455 of yacc.c  */
#line 188 "be11302011.y"
    {printf("\tReduced : direct_abstract_declarator -> SQUARE_BRACKET_BEG SQUARE_BRACKET_END\n");;}
    break;

  case 105:

/* Line 1455 of yacc.c  */
#line 189 "be11302011.y"
    {printf("\tReduced : direct_abstract_declarator -> direct_abstract_declarator PARANTHESIS_BEG parameter_type_list PARANTHESIS_END\n");;}
    break;

  case 106:

/* Line 1455 of yacc.c  */
#line 190 "be11302011.y"
    {printf("\tReduced : direct_abstract_declarator -> PARANTHESIS_BEG parameter_type_list PARANTHESIS_END\n");;}
    break;

  case 107:

/* Line 1455 of yacc.c  */
#line 191 "be11302011.y"
    {printf("\tReduced : direct_abstract_declarator -> direct_abstract_declarator PARANTHESIS_BEG PARANTHESIS_END\n");;}
    break;

  case 108:

/* Line 1455 of yacc.c  */
#line 192 "be11302011.y"
    {printf("\tReduced : direct_abstract_declarator -> PARANTHESIS_BEG PARANTHESIS_END\n");;}
    break;

  case 109:

/* Line 1455 of yacc.c  */
#line 196 "be11302011.y"
    {printf("\tReduced : statement -> labeled_statement\n");;}
    break;

  case 110:

/* Line 1455 of yacc.c  */
#line 197 "be11302011.y"
    {printf("\tReduced : statement -> expression_statement\n");;}
    break;

  case 111:

/* Line 1455 of yacc.c  */
#line 198 "be11302011.y"
    {printf("\tReduced : statement -> compound_statement\n");;}
    break;

  case 112:

/* Line 1455 of yacc.c  */
#line 199 "be11302011.y"
    {printf("\tReduced : statement -> selection_statement\n");;}
    break;

  case 113:

/* Line 1455 of yacc.c  */
#line 200 "be11302011.y"
    {printf("\tReduced : statement -> iteration_statement\n");;}
    break;

  case 114:

/* Line 1455 of yacc.c  */
#line 201 "be11302011.y"
    {printf("\tReduced : statement -> jump_statement\n");;}
    break;

  case 115:

/* Line 1455 of yacc.c  */
#line 204 "be11302011.y"
    {printf("\tReduced : labeled_statement -> IDENTIFIER COLON statement\n");;}
    break;

  case 116:

/* Line 1455 of yacc.c  */
#line 205 "be11302011.y"
    {printf("\tReduced : labeled_statement -> CASE constant_expression COLON statement\n");;}
    break;

  case 117:

/* Line 1455 of yacc.c  */
#line 206 "be11302011.y"
    {printf("\tReduced : labeled_statement -> DEFAULT COLON statement\n");;}
    break;

  case 118:

/* Line 1455 of yacc.c  */
#line 209 "be11302011.y"
    {printf("\tReduced : expression_statement -> expression SEMICOLON\n");;}
    break;

  case 119:

/* Line 1455 of yacc.c  */
#line 210 "be11302011.y"
    {printf("\tReduced : expression_statement -> SEMICOLON\n");;}
    break;

  case 120:

/* Line 1455 of yacc.c  */
#line 213 "be11302011.y"
    {printf("\tReduced : compound_statement -> CURLY_BRACKET_BEG declaration_list statement_list CURLY_BRACKET_END\n");;}
    break;

  case 121:

/* Line 1455 of yacc.c  */
#line 214 "be11302011.y"
    {printf("\tReduced : compound_statement -> CURLY_BRACKET_BEG declaration_list CURLY_BRACKET_END\n");;}
    break;

  case 122:

/* Line 1455 of yacc.c  */
#line 215 "be11302011.y"
    {printf("\tReduced : compound_statement -> CURLY_BRACKET_BEG statement_list CURLY_BRACKET_END\n");;}
    break;

  case 123:

/* Line 1455 of yacc.c  */
#line 216 "be11302011.y"
    {printf("\tReduced : compound_statement -> CURLY_BRACKET_BEG CURLY_BRACKET_END\n");;}
    break;

  case 124:

/* Line 1455 of yacc.c  */
#line 219 "be11302011.y"
    {printf("\tReduced : statement_list -> statement\n");;}
    break;

  case 125:

/* Line 1455 of yacc.c  */
#line 220 "be11302011.y"
    {printf("\tReduced : statement_list -> statement_list statement\n");;}
    break;

  case 126:

/* Line 1455 of yacc.c  */
#line 223 "be11302011.y"
    {printf("\tReduced : selection_statement -> IF PARANTHESIS_BEG expression PARANTHESIS_END statement\n");;}
    break;

  case 127:

/* Line 1455 of yacc.c  */
#line 224 "be11302011.y"
    {printf("\tReduced : selection_statement -> IF PARANTHESIS_BEG expression PARANTHESIS_END statement ELSE statement\n");;}
    break;

  case 128:

/* Line 1455 of yacc.c  */
#line 225 "be11302011.y"
    {printf("\tReduced : selection_statement -> SWITCH PARANTHESIS_BEG expression PARANTHESIS_END statement\n");;}
    break;

  case 129:

/* Line 1455 of yacc.c  */
#line 228 "be11302011.y"
    {printf("\tReduced : iteration_statement -> WHILE PARANTHESIS_BEG expression PARANTHESIS_END statement\n");;}
    break;

  case 130:

/* Line 1455 of yacc.c  */
#line 229 "be11302011.y"
    {printf("\tReduced : iteration_statement -> DO statement WHILE PARANTHESIS_BEG expression PARANTHESIS_END SEMICOLON\n");;}
    break;

  case 131:

/* Line 1455 of yacc.c  */
#line 230 "be11302011.y"
    {printf("\tReduced : iteration_statement -> FOR PARANTHESIS_BEG expression SEMICOLON expression SEMICOLON expression PARANTHESIS_END statement\n");;}
    break;

  case 132:

/* Line 1455 of yacc.c  */
#line 231 "be11302011.y"
    {printf("\tReduced : iteration_statement -> FOR PARANTHESIS_BEG expression SEMICOLON expression SEMICOLON PARANTHESIS_END statement\n");;}
    break;

  case 133:

/* Line 1455 of yacc.c  */
#line 232 "be11302011.y"
    {printf("\tReduced : iteration_statement -> FOR PARANTHESIS_BEG expression SEMICOLON SEMICOLON expression PARANTHESIS_END statement\n");;}
    break;

  case 134:

/* Line 1455 of yacc.c  */
#line 233 "be11302011.y"
    {printf("\tReduced : iteration_statement -> FOR PARANTHESIS_BEG expression SEMICOLON SEMICOLON PARANTHESIS_END statement\n");;}
    break;

  case 135:

/* Line 1455 of yacc.c  */
#line 234 "be11302011.y"
    {printf("\tReduced : iteration_statement -> FOR PARANTHESIS_BEG SEMICOLON expression SEMICOLON expression PARANTHESIS_END statement\n");;}
    break;

  case 136:

/* Line 1455 of yacc.c  */
#line 235 "be11302011.y"
    {printf("\tReduced : iteration_statement -> FOR PARANTHESIS_BEG SEMICOLON expression SEMICOLON PARANTHESIS_END statement\n");;}
    break;

  case 137:

/* Line 1455 of yacc.c  */
#line 236 "be11302011.y"
    {printf("\tReduced : iteration_statement -> FOR PARANTHESIS_BEG SEMICOLON SEMICOLON expression PARANTHESIS_END statement\n");;}
    break;

  case 138:

/* Line 1455 of yacc.c  */
#line 237 "be11302011.y"
    {printf("\tReduced : iteration_statement -> FOR PARANTHESIS_BEG SEMICOLON SEMICOLON PARANTHESIS_END statement\n");;}
    break;

  case 139:

/* Line 1455 of yacc.c  */
#line 240 "be11302011.y"
    {printf("\tReduced : jump_statement -> GOTO IDENTIFIER SEMICOLON\n");;}
    break;

  case 140:

/* Line 1455 of yacc.c  */
#line 241 "be11302011.y"
    {printf("\tReduced : jump_statement -> CONTINUE SEMICOLON\n");;}
    break;

  case 141:

/* Line 1455 of yacc.c  */
#line 242 "be11302011.y"
    {printf("\tReduced : jump_statement -> BREAK SEMICOLON\n");;}
    break;

  case 142:

/* Line 1455 of yacc.c  */
#line 243 "be11302011.y"
    {printf("\tReduced : jump_statement -> RETURN expression SEMICOLON\n");;}
    break;

  case 143:

/* Line 1455 of yacc.c  */
#line 244 "be11302011.y"
    {printf("\tReduced : jump_statement -> RETURN SEMICOLON\n");;}
    break;

  case 144:

/* Line 1455 of yacc.c  */
#line 247 "be11302011.y"
    {printf("\tReduced : expression -> assignment_expression\n");;}
    break;

  case 145:

/* Line 1455 of yacc.c  */
#line 248 "be11302011.y"
    {printf("\tReduced : expression -> expression COMMA assignment_expression\n");;}
    break;

  case 146:

/* Line 1455 of yacc.c  */
#line 251 "be11302011.y"
    {printf("\tReduced : assignment_expression -> conditional_expression\n");;}
    break;

  case 147:

/* Line 1455 of yacc.c  */
#line 252 "be11302011.y"
    {printf("\tReduced : assignment_expression -> unary_expression assignment_operator assignment_expression\n");;}
    break;

  case 148:

/* Line 1455 of yacc.c  */
#line 255 "be11302011.y"
    {printf("\tReduced : assignment_operator -> OPERATOR_ASSIGNMENT\n");;}
    break;

  case 149:

/* Line 1455 of yacc.c  */
#line 256 "be11302011.y"
    {printf("\tReduced : assignment_operator -> OPERATOR_MULTIPLIER\n");;}
    break;

  case 150:

/* Line 1455 of yacc.c  */
#line 257 "be11302011.y"
    {printf("\tReduced : assignment_operator -> OPERATOR_DIVIDER\n");;}
    break;

  case 151:

/* Line 1455 of yacc.c  */
#line 258 "be11302011.y"
    {printf("\tReduced : assignment_operator -> OPERATOR_MOD_ASSIGNMENT\n");;}
    break;

  case 152:

/* Line 1455 of yacc.c  */
#line 259 "be11302011.y"
    {printf("\tReduced : assignment_operator -> OPERATOR_ADDER\n");;}
    break;

  case 153:

/* Line 1455 of yacc.c  */
#line 260 "be11302011.y"
    {printf("\tReduced : assignment_operator -> OPERATOR_SUBTRACTOR\n");;}
    break;

  case 154:

/* Line 1455 of yacc.c  */
#line 261 "be11302011.y"
    {printf("\tReduced : assignment_operator -> OPERATOR_LEFT_ASSIGNMENT\n");;}
    break;

  case 155:

/* Line 1455 of yacc.c  */
#line 262 "be11302011.y"
    {printf("\tReduced : assignment_operator -> OPERATOR_RIGHT_ASSIGNMENT\n");;}
    break;

  case 156:

/* Line 1455 of yacc.c  */
#line 263 "be11302011.y"
    {printf("\tReduced : assignment_operator -> OPERATOR_AND_ASSIGNMENT\n");;}
    break;

  case 157:

/* Line 1455 of yacc.c  */
#line 264 "be11302011.y"
    {printf("\tReduced : assignment_operator -> OPERATOR_BITWISE_XOR_ASSIGNMENT\n");;}
    break;

  case 158:

/* Line 1455 of yacc.c  */
#line 265 "be11302011.y"
    {printf("\tReduced : assignment_operator -> OPERATOR_OR_ASSIGNMENT\n");;}
    break;

  case 159:

/* Line 1455 of yacc.c  */
#line 268 "be11302011.y"
    {printf("\tReduced : conditional_expression -> logical_OR_expression\n");;}
    break;

  case 160:

/* Line 1455 of yacc.c  */
#line 269 "be11302011.y"
    {printf("\tReduced : conditional_expression -> logical_OR_expression TERNARY expression COLON conditional_expression\n");;}
    break;

  case 161:

/* Line 1455 of yacc.c  */
#line 272 "be11302011.y"
    {printf("\tReduced : constant_expression -> conditional_expression\n");;}
    break;

  case 162:

/* Line 1455 of yacc.c  */
#line 275 "be11302011.y"
    {printf("\tReduced : logical_OR_expression -> logical_AND_expression\n");;}
    break;

  case 163:

/* Line 1455 of yacc.c  */
#line 276 "be11302011.y"
    {printf("\tReduced : logical_OR_expression -> logical_OR_expression OPERATOR_OR logical_AND_expression\n");;}
    break;

  case 164:

/* Line 1455 of yacc.c  */
#line 279 "be11302011.y"
    {printf("\tReduced : logical_AND_expression -> inclusive_OR_expression\n");;}
    break;

  case 165:

/* Line 1455 of yacc.c  */
#line 280 "be11302011.y"
    {printf("\tReduced : logical_AND_expression -> logical_AND_expression OPERATOR_AND inclusive_OR_expression\n");;}
    break;

  case 166:

/* Line 1455 of yacc.c  */
#line 283 "be11302011.y"
    {printf("\tReduced : inclusive_OR_expression -> exclusive_OR_expression\n");;}
    break;

  case 167:

/* Line 1455 of yacc.c  */
#line 284 "be11302011.y"
    {printf("\tReduced : inclusive_OR_expression -> inclusive_OR_expression OPERATOR_BITWISE_OR exclusive_OR_expression\n");;}
    break;

  case 168:

/* Line 1455 of yacc.c  */
#line 287 "be11302011.y"
    {printf("\tReduced : exclusive_OR_expression -> AND_expression\n");;}
    break;

  case 169:

/* Line 1455 of yacc.c  */
#line 288 "be11302011.y"
    {printf("\tReduced : exclusive_OR_expression -> exclusive_OR_expression OPERATOR_BITWISE_XOR AND_expression\n");;}
    break;

  case 170:

/* Line 1455 of yacc.c  */
#line 291 "be11302011.y"
    {printf("\tReduced : AND_expression -> equality_expression\n");;}
    break;

  case 171:

/* Line 1455 of yacc.c  */
#line 292 "be11302011.y"
    {printf("\tReduced : AND_expression -> AND_expression OPERATOR_BITWISE_AND equality_expression\n");;}
    break;

  case 172:

/* Line 1455 of yacc.c  */
#line 294 "be11302011.y"
    {printf("\tReduced : equality_expression -> relational_expression\n");;}
    break;

  case 173:

/* Line 1455 of yacc.c  */
#line 295 "be11302011.y"
    {printf("\tReduced : equality_expression -> equality_expression OPERATOR_EQUALITY_CHECKER relational_expression\n");;}
    break;

  case 174:

/* Line 1455 of yacc.c  */
#line 296 "be11302011.y"
    {printf("\tReduced : equality_expression -> equality_expression OPERATOR_NOT_EQUAL relational_expression\n");;}
    break;

  case 175:

/* Line 1455 of yacc.c  */
#line 299 "be11302011.y"
    {printf("\tReduced : relational_expression -> shift_expression\n");;}
    break;

  case 176:

/* Line 1455 of yacc.c  */
#line 300 "be11302011.y"
    {printf("\tReduced : relational_expression -> relational_expression OPERATOR_LESS_THAN shift_expression\n");;}
    break;

  case 177:

/* Line 1455 of yacc.c  */
#line 301 "be11302011.y"
    {printf("\tReduced : relational_expression -> relational_expression OPERATOR_GREATER_THAN shift_expression\n");;}
    break;

  case 178:

/* Line 1455 of yacc.c  */
#line 302 "be11302011.y"
    {printf("\tReduced : relational_expression -> relational_expression OPERATOR_LESS_OR_EQUAL shift_expression\n");;}
    break;

  case 179:

/* Line 1455 of yacc.c  */
#line 303 "be11302011.y"
    {printf("\tReduced : relational_expression -> relational_expression OPERATOR_GREATER_OR_EQUAL shift_expression\n");;}
    break;

  case 180:

/* Line 1455 of yacc.c  */
#line 306 "be11302011.y"
    {printf("\tReduced : shift_expression -> additive_expression\n");;}
    break;

  case 181:

/* Line 1455 of yacc.c  */
#line 307 "be11302011.y"
    {printf("\tReduced : shift_expression -> shift_expression OPERATOR_LEFT_SHIFT additive_expression\n");;}
    break;

  case 182:

/* Line 1455 of yacc.c  */
#line 308 "be11302011.y"
    {printf("\tReduced : shift_expression -> shift_expression OPERATOR_RIGHT_SHIFT additive_expression\n");;}
    break;

  case 183:

/* Line 1455 of yacc.c  */
#line 311 "be11302011.y"
    {printf("\tReduced : additive_expression -> multiplicative_expression\n");;}
    break;

  case 184:

/* Line 1455 of yacc.c  */
#line 312 "be11302011.y"
    {printf("\tReduced : additive_expression -> additive_expression OPERATOR_PLUS multiplicative_expression\n");;}
    break;

  case 185:

/* Line 1455 of yacc.c  */
#line 313 "be11302011.y"
    {printf("\tReduced : additive_expression -> additive_expression OPERATOR_MINUS multiplicative_expression\n");;}
    break;

  case 186:

/* Line 1455 of yacc.c  */
#line 316 "be11302011.y"
    {printf("\tReduced : multiplicative_expression -> cast_expression\n");;}
    break;

  case 187:

/* Line 1455 of yacc.c  */
#line 317 "be11302011.y"
    {printf("\tReduced : multiplicative_expression -> multiplicative_expression OPERATOR_MULTIPLY cast_expression\n");;}
    break;

  case 188:

/* Line 1455 of yacc.c  */
#line 318 "be11302011.y"
    {printf("\tReduced : multiplicative_expression -> multiplicative_expression OPERATOR_DIVIDE cast_expression\n");;}
    break;

  case 189:

/* Line 1455 of yacc.c  */
#line 319 "be11302011.y"
    {printf("\tReduced : multiplicative_expression -> multiplicative_expression OPERATOR_MODULUS cast_expression\n");;}
    break;

  case 190:

/* Line 1455 of yacc.c  */
#line 322 "be11302011.y"
    {printf("\tReduced : cast_expression -> unary_expression\n");;}
    break;

  case 191:

/* Line 1455 of yacc.c  */
#line 323 "be11302011.y"
    {printf("\tReduced : cast_expression -> PARANTHESIS_BEG type_name PARANTHESIS_END cast_expression\n");;}
    break;

  case 192:

/* Line 1455 of yacc.c  */
#line 326 "be11302011.y"
    {printf("\tReduced : unary_expression -> postfix_expression\n");;}
    break;

  case 193:

/* Line 1455 of yacc.c  */
#line 327 "be11302011.y"
    {printf("\tReduced : unary_expression -> OPERATOR_INCREMENTOR unary_expression\n");;}
    break;

  case 194:

/* Line 1455 of yacc.c  */
#line 328 "be11302011.y"
    {printf("\tReduced : unary_expression -> OPERATOR_DECREMENTOR unary_expression\n");;}
    break;

  case 195:

/* Line 1455 of yacc.c  */
#line 329 "be11302011.y"
    {printf("\tReduced : unary_expression -> unary_operator cast_expression\n");;}
    break;

  case 196:

/* Line 1455 of yacc.c  */
#line 330 "be11302011.y"
    {printf("\tReduced : unary_expression -> SIZEOF unary_expression\n");;}
    break;

  case 197:

/* Line 1455 of yacc.c  */
#line 331 "be11302011.y"
    {printf("\tReduced : unary_expression -> SIZEOF PARANTHESIS_BEG type_name PARANTHESIS_END\n");;}
    break;

  case 198:

/* Line 1455 of yacc.c  */
#line 334 "be11302011.y"
    {printf("\tReduced : unary_operator -> OPERATR_BITWISE_AND\n");;}
    break;

  case 199:

/* Line 1455 of yacc.c  */
#line 335 "be11302011.y"
    {printf("\tReduced : unary_operator -> OPERATOR_MULTIPLY\n");;}
    break;

  case 200:

/* Line 1455 of yacc.c  */
#line 336 "be11302011.y"
    {printf("\tReduced : unary_operator -> OPERATOR_PLUS\n");;}
    break;

  case 201:

/* Line 1455 of yacc.c  */
#line 337 "be11302011.y"
    {printf("\tReduced : unary_operator -> OPERATOR_MINUS\n");;}
    break;

  case 202:

/* Line 1455 of yacc.c  */
#line 338 "be11302011.y"
    {printf("\tReduced : unary_operator -> OPERATOR_TILDE\n");;}
    break;

  case 203:

/* Line 1455 of yacc.c  */
#line 339 "be11302011.y"
    {printf("\tReduced : unary_operator -> OPERATOR_NOT\n");;}
    break;

  case 204:

/* Line 1455 of yacc.c  */
#line 342 "be11302011.y"
    {printf("\tReduced : postfix_expression -> primary_expression\n");;}
    break;

  case 205:

/* Line 1455 of yacc.c  */
#line 343 "be11302011.y"
    {printf("\tReduced : postfix_expression -> postfix_expression SQUARE_BRACKET_BEG expression SQUARE_BRACKET_END\n");;}
    break;

  case 206:

/* Line 1455 of yacc.c  */
#line 344 "be11302011.y"
    {printf("\tReduced : postfix_expression -> postfix_expression PARANTHESIS_BEG argument_expression_list PARANTHESIS_END\n");;}
    break;

  case 207:

/* Line 1455 of yacc.c  */
#line 345 "be11302011.y"
    {printf("\tReduced : postfix_expression -> postfix_expression PARANTHESIS_BEG PARANTHESIS_END\n");;}
    break;

  case 208:

/* Line 1455 of yacc.c  */
#line 346 "be11302011.y"
    {printf("\tReduced : postfix_expression -> postfix_expression DOT IDENTIFIER\n");;}
    break;

  case 209:

/* Line 1455 of yacc.c  */
#line 347 "be11302011.y"
    {printf("\tReduced : postfix_expression -> postfix_expression OPERATOR_LINK IDENTIFIER\n");;}
    break;

  case 210:

/* Line 1455 of yacc.c  */
#line 348 "be11302011.y"
    {printf("\tReduced : postfix_expression -> postfix_expression OPERATOR_INCREMENTOR\n");;}
    break;

  case 211:

/* Line 1455 of yacc.c  */
#line 349 "be11302011.y"
    {printf("\tReduced : postfix_expression -> postfix_expression OPERATOR_DECREMENTOR\n");;}
    break;

  case 212:

/* Line 1455 of yacc.c  */
#line 352 "be11302011.y"
    {printf("\tReduced : primary_expression -> IDENTIFIER\n");;}
    break;

  case 213:

/* Line 1455 of yacc.c  */
#line 353 "be11302011.y"
    {printf("\tReduced : primary_expression -> constant\n");;}
    break;

  case 214:

/* Line 1455 of yacc.c  */
#line 354 "be11302011.y"
    {printf("\tReduced : primary_expression -> STRING_constANT\n");;}
    break;

  case 215:

/* Line 1455 of yacc.c  */
#line 355 "be11302011.y"
    {printf("\tReduced : primary_expression -> PARANTHESIS_BEG expression PARANTHESIS_END\n");;}
    break;

  case 216:

/* Line 1455 of yacc.c  */
#line 358 "be11302011.y"
    {printf("\tReduced : argument_expression_list -> assignment_expression\n");;}
    break;

  case 217:

/* Line 1455 of yacc.c  */
#line 359 "be11302011.y"
    {printf("\tReduced : argument_expression_list -> argument_expression_list COMMA assignment_expression\n");;}
    break;

  case 218:

/* Line 1455 of yacc.c  */
#line 362 "be11302011.y"
    {printf("\tReduced : constant -> NUMBER\n");;}
    break;

  case 219:

/* Line 1455 of yacc.c  */
#line 363 "be11302011.y"
    {printf("\tReduced : constant -> CHAR_CONSTANT\n");;}
    break;

  case 220:

/* Line 1455 of yacc.c  */
#line 364 "be11302011.y"
    {printf("\tReduced : constant -> REAL_NUMBER\n");;}
    break;

  case 221:

/* Line 1455 of yacc.c  */
#line 365 "be11302011.y"
    {printf("\tReduced : constant -> EXP_NUMBER\n");;}
    break;



/* Line 1455 of yacc.c  */
#line 3639 "be11302011.tab.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
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

  /* Do not reclaim the symbols of the rule which action triggered
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
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
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

  *++yyvsp = yylval;


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

#if !defined(yyoverflow) || YYERROR_VERBOSE
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
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
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
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}



/* Line 1675 of yacc.c  */
#line 368 "be11302011.y"


#include "lex.yy.c"
int yyerror()
{
    printf("\nERROR:");
	printf("\t(LINE NO. %d) of the input file\n",line_num);
	printf("\tThe further execution of program is being terminated!!!\n");
}

int main(int argc,char *argv[])
{
        if(argc<2)
        {
                printf("Correct format is <.exe><input file-name>\n");
                return -1;
        }
        yyin = fopen(argv[1],"r");
        yyparse();
        fclose(yyin);
        return 0;
}

