/* A Bison parser, made by GNU Bison 2.5.  */

/* Bison implementation for Yacc-like parsers in C
   
      Copyright (C) 1984, 1989-1990, 2000-2011 Free Software Foundation, Inc.
   
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
#define YYBISON_VERSION "2.5"

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

/* Line 268 of yacc.c  */
#line 1 "parser.y"

  #include <stdio.h>
  #include "globals.h"


/* Line 268 of yacc.c  */
#line 77 "parser.c"

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
     T_CONST = 258,
     T_IDENT = 259,
     T_SNLNOT = 260,
     T_LPAREN = 261,
     T_RPAREN = 262,
     T_ASSIGN = 263,
     T_SEMI = 264,
     T_PERIOD = 265,
     T_COLON = 266,
     T_COMMA = 267,
     T_VAR = 268,
     T_INTEGER = 269,
     T_NOT = 270,
     T_BOOLEAN = 271,
     T_IF = 272,
     T_THEN = 273,
     T_ELSE = 274,
     T_WHILE = 275,
     T_DO = 276,
     T_PROGRAM = 277,
     T_BEGIN = 278,
     T_END = 279,
     T_WRITE = 280,
     T_WRITELN = 281,
     T_PP = 282,
     T_MM = 283,
     T_FALSE = 284,
     T_TRUE = 285,
     T_OR = 286,
     T_AND = 287,
     T_GT = 288,
     T_GE = 289,
     T_LE = 290,
     T_LT = 291,
     T_NE = 292,
     T_EQ = 293,
     T_MINUS = 294,
     T_PLUS = 295,
     T_MOD = 296,
     T_DIV = 297,
     T_TIMES = 298,
     T_UMINUS = 299,
     T_UPLUS = 300
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 343 of yacc.c  */
#line 163 "parser.c"

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
# if defined YYENABLE_NLS && YYENABLE_NLS
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
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
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
#   if ! defined malloc && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
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

# define YYCOPY_NEEDED 1

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

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
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
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  4
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   230

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  46
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  24
/* YYNRULES -- Number of rules.  */
#define YYNRULES  62
/* YYNRULES -- Number of states.  */
#define YYNSTATES  110

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   300

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
      45
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint8 yyprhs[] =
{
       0,     0,     3,    10,    13,    14,    16,    20,    25,    30,
      32,    35,    37,    41,    43,    45,    47,    49,    51,    53,
      55,    57,    59,    64,    71,    76,    80,    82,    87,    91,
      92,    96,    98,   100,   102,   104,   106,   108,   112,   116,
     120,   124,   128,   132,   136,   138,   140,   142,   144,   147,
     150,   153,   156,   159,   162,   165,   168,   172,   176,   180,
     184,   188,   192
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      47,     0,    -1,    22,     4,     9,    48,    62,    10,    -1,
      13,    51,    -1,    -1,     4,    -1,     4,    12,    49,    -1,
      49,    11,    14,     9,    -1,    49,    11,    16,     9,    -1,
      50,    -1,    50,    51,    -1,    53,    -1,    53,     9,    52,
      -1,    54,    -1,    55,    -1,    56,    -1,    57,    -1,    58,
      -1,    59,    -1,    60,    -1,    62,    -1,    61,    -1,    17,
      63,    18,    53,    -1,    17,    63,    18,    53,    19,    53,
      -1,    20,    63,    21,    53,    -1,     4,     8,    63,    -1,
      63,    -1,    25,     6,    63,     7,    -1,    26,     6,     7,
      -1,    -1,    23,    52,    24,    -1,    65,    -1,    67,    -1,
      66,    -1,    68,    -1,    69,    -1,    64,    -1,     6,    63,
       7,    -1,    63,    36,    63,    -1,    63,    35,    63,    -1,
      63,    38,    63,    -1,    63,    37,    63,    -1,    63,    34,
      63,    -1,    63,    33,    63,    -1,     3,    -1,    30,    -1,
      29,    -1,     4,    -1,    40,    63,    -1,    39,    63,    -1,
      15,    63,    -1,    63,     5,    -1,    27,     4,    -1,    28,
       4,    -1,     4,    27,    -1,     4,    28,    -1,    63,    40,
      63,    -1,    63,    39,    63,    -1,    63,    43,    63,    -1,
      63,    42,    63,    -1,    63,    41,    63,    -1,    63,    32,
      63,    -1,    63,    31,    63,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    49,    49,    53,    54,    58,    59,    63,    64,    68,
      69,    73,    74,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    90,    94,    98,   102,   106,   110,   114,   118,
     122,   126,   127,   128,   129,   130,   131,   132,   136,   137,
     138,   139,   140,   141,   145,   149,   150,   154,   158,   159,
     160,   161,   162,   163,   164,   165,   169,   170,   171,   172,
     173,   174,   175
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "T_CONST", "T_IDENT", "T_SNLNOT",
  "T_LPAREN", "T_RPAREN", "T_ASSIGN", "T_SEMI", "T_PERIOD", "T_COLON",
  "T_COMMA", "T_VAR", "T_INTEGER", "T_NOT", "T_BOOLEAN", "T_IF", "T_THEN",
  "T_ELSE", "T_WHILE", "T_DO", "T_PROGRAM", "T_BEGIN", "T_END", "T_WRITE",
  "T_WRITELN", "T_PP", "T_MM", "T_FALSE", "T_TRUE", "T_OR", "T_AND",
  "T_GT", "T_GE", "T_LE", "T_LT", "T_NE", "T_EQ", "T_MINUS", "T_PLUS",
  "T_MOD", "T_DIV", "T_TIMES", "T_UMINUS", "T_UPLUS", "$accept", "prog",
  "decls", "ident_list", "decl", "decl_list", "stmt_list", "stmt",
  "if_stmt", "if_else_stmt", "while_stmt", "assign_stmt", "unary_stmt",
  "write_stmt", "writeln_stmt", "empty_stmt", "cmpd_stmt", "expr",
  "rel_expr", "int_const_expr", "bool_const_expr", "variable_expr",
  "unary_expr", "binary_expr", 0
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
     295,   296,   297,   298,   299,   300
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    46,    47,    48,    48,    49,    49,    50,    50,    51,
      51,    52,    52,    53,    53,    53,    53,    53,    53,    53,
      53,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    63,    63,    63,    63,    63,    63,    64,    64,
      64,    64,    64,    64,    65,    66,    66,    67,    68,    68,
      68,    68,    68,    68,    68,    68,    69,    69,    69,    69,
      69,    69,    69
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     6,     2,     0,     1,     3,     4,     4,     1,
       2,     1,     3,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     4,     6,     4,     3,     1,     4,     3,     0,
       3,     1,     1,     1,     1,     1,     1,     3,     3,     3,
       3,     3,     3,     3,     1,     1,     1,     1,     2,     2,
       2,     2,     2,     2,     2,     2,     3,     3,     3,     3,
       3,     3,     3
};

/* YYDEFACT[STATE-NAME] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     1,     4,     0,     0,     5,     0,
       9,     3,    29,     0,     0,     0,    10,    44,    47,     0,
       0,     0,     0,     0,     0,     0,     0,    46,    45,     0,
       0,     0,    11,    13,    14,    15,    16,    17,    18,    19,
      21,    20,    26,    36,    31,    33,    32,    34,    35,     2,
       6,     0,     0,     0,    54,    55,    47,     0,    50,     0,
       0,     0,     0,    52,    53,    49,    48,    30,    29,    51,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     7,     8,    25,    37,    29,    29,     0,
      28,    12,    62,    61,    43,    42,    39,    38,    41,    40,
      57,    56,    60,    59,    58,    22,    24,    27,    29,    23
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     2,     7,     9,    10,    11,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -84
static const yytype_int16 yypact[] =
{
       2,     5,    35,    24,   -84,    23,    37,    14,    27,    32,
      37,   -84,   175,    34,    37,    -8,   -84,   -84,    -1,   179,
     179,   179,   179,    39,    40,    43,    44,   -84,   -84,   179,
     179,    25,    41,   -84,   -84,   -84,   -84,   -84,   -84,   -84,
     -84,   -84,   134,   -84,   -84,   -84,   -84,   -84,   -84,   -84,
     -84,    80,    82,   179,   -84,   -84,     4,    33,   -84,    72,
      95,   179,    85,   -84,   -84,   -84,   -84,   -84,   175,   -84,
     179,   179,   179,   179,   179,   179,   179,   179,   179,   179,
     179,   179,   179,   -84,   -84,   134,   -84,   175,   175,   112,
     -84,   -84,   -20,    45,   187,   187,   187,   187,   187,   187,
     -13,   -13,   -84,   -84,   -84,    74,   -84,   -84,   175,   -84
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -84,   -84,   -84,    81,   -84,    84,    28,   -83,   -84,   -84,
     -84,   -84,   -84,   -84,   -84,   -84,    90,   -19,   -84,   -84,
     -84,   -84,   -84,   -84
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_int8 yytable[] =
{
      57,    58,    59,    60,   105,   106,    51,    53,    52,     3,
      65,    66,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,     1,   109,    54,    55,    80,    81,
      82,    54,    55,     5,    85,     4,     6,    12,    69,    14,
      86,     8,    89,    15,    49,    61,    62,    63,    64,    67,
      68,    92,    93,    94,    95,    96,    97,    98,    99,   100,
     101,   102,   103,   104,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    69,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      87,    84,    90,   108,    16,    50,    91,    13,     0,     0,
      69,     0,     0,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    88,    69,     0,   107,
       0,     0,     0,     0,     0,     0,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    69,
       0,     0,     0,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    17,    18,
       0,    19,    17,    56,     0,    19,     0,     0,     0,     0,
      20,     0,    21,     0,    20,    22,     0,     0,    12,     0,
      23,    24,    25,    26,    27,    28,    25,    26,    27,    28,
       0,     0,     0,     0,    29,    30,     0,     0,    29,    30,
      -1,    -1,    -1,    -1,    -1,    -1,    78,    79,    80,    81,
      82
};

#define yypact_value_is_default(yystate) \
  ((yystate) == (-84))

#define yytable_value_is_error(yytable_value) \
  ((yytable_value) == (-1))

static const yytype_int8 yycheck[] =
{
      19,    20,    21,    22,    87,    88,    14,     8,    16,     4,
      29,    30,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    22,   108,    27,    28,    41,    42,
      43,    27,    28,     9,    53,     0,    13,    23,     5,    12,
       7,     4,    61,    11,    10,     6,     6,     4,     4,    24,
       9,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,     5,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,     9,
      18,     9,     7,    19,    10,    14,    68,     7,    -1,    -1,
       5,    -1,    -1,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    21,     5,    -1,     7,
      -1,    -1,    -1,    -1,    -1,    -1,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,     5,
      -1,    -1,    -1,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,     3,     4,
      -1,     6,     3,     4,    -1,     6,    -1,    -1,    -1,    -1,
      15,    -1,    17,    -1,    15,    20,    -1,    -1,    23,    -1,
      25,    26,    27,    28,    29,    30,    27,    28,    29,    30,
      -1,    -1,    -1,    -1,    39,    40,    -1,    -1,    39,    40,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    22,    47,     4,     0,     9,    13,    48,     4,    49,
      50,    51,    23,    62,    12,    11,    51,     3,     4,     6,
      15,    17,    20,    25,    26,    27,    28,    29,    30,    39,
      40,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    10,
      49,    14,    16,     8,    27,    28,     4,    63,    63,    63,
      63,     6,     6,     4,     4,    63,    63,    24,     9,     5,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,     9,     9,    63,     7,    18,    21,    63,
       7,    52,    63,    63,    63,    63,    63,    63,    63,    63,
      63,    63,    63,    63,    63,    53,    53,     7,    19,    53
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
   Once GCC version 2 has supplanted version 1, this can go.  However,
   YYFAIL appears to be in use.  Nevertheless, it is formally deprecated
   in Bison 2.4.2's NEWS entry, where a plan to phase it out is
   discussed.  */

#define YYFAIL		goto yyerrlab
#if defined YYFAIL
  /* This is here to suppress warnings from the GCC cpp's
     -Wunused-macros.  Normally we don't worry about that warning, but
     some users do, and we want to make it easy for users to remove
     YYFAIL uses, which will produce warnings from Bison 2.5.  */
#endif

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
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


/* This macro is provided for backward compatibility. */

#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
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
  YYSIZE_T yysize0 = yytnamerr (0, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  YYSIZE_T yysize1;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = 0;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - Assume YYFAIL is not used.  It's too flawed to consider.  See
       <http://lists.gnu.org/archive/html/bison-patches/2009-12/msg00024.html>
       for details.  YYERROR is fine as it does not invoke this
       function.
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
                yysize1 = yysize + yytnamerr (0, yytname[yyx]);
                if (! (yysize <= yysize1
                       && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                  return 2;
                yysize = yysize1;
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

  yysize1 = yysize + yystrlen (yyformat);
  if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
    return 2;
  yysize = yysize1;

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


/*----------.
| yyparse.  |
`----------*/

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
  if (yypact_value_is_default (yyn))
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

/* Line 1806 of yacc.c  */
#line 49 "parser.y"
    { parse_tree = prog_new((yyvsp[(2) - (6)].symbol), (yyvsp[(4) - (6)].decl_list), stmt_new(S_CMPD, (yyvsp[(5) - (6)].cmpd_stmt))); }
    break;

  case 3:

/* Line 1806 of yacc.c  */
#line 53 "parser.y"
    { (yyval.decl_list) = (yyvsp[(2) - (2)].decl_list); }
    break;

  case 4:

/* Line 1806 of yacc.c  */
#line 54 "parser.y"
    { (yyval.decl_list) = NULL; }
    break;

  case 5:

/* Line 1806 of yacc.c  */
#line 58 "parser.y"
    { (yyval.symbol_list) = symbol_list_new((yyvsp[(1) - (1)].symbol), NULL); }
    break;

  case 6:

/* Line 1806 of yacc.c  */
#line 59 "parser.y"
    { (yyval.symbol_list) = symbol_list_new((yyvsp[(1) - (3)].symbol), (yyvsp[(3) - (3)].symbol_list)); }
    break;

  case 7:

/* Line 1806 of yacc.c  */
#line 63 "parser.y"
    { (yyval.decl) = decl_new((yyvsp[(1) - (4)].symbol_list), TY_INTEGER); }
    break;

  case 8:

/* Line 1806 of yacc.c  */
#line 64 "parser.y"
    { (yyval.decl) = decl_new((yyvsp[(1) - (4)].symbol_list), TY_BOOLEAN); }
    break;

  case 9:

/* Line 1806 of yacc.c  */
#line 68 "parser.y"
    { (yyval.decl_list) = decl_list_new((yyvsp[(1) - (1)].decl), NULL); }
    break;

  case 10:

/* Line 1806 of yacc.c  */
#line 69 "parser.y"
    { (yyval.decl_list) = decl_list_new((yyvsp[(1) - (2)].decl), (yyvsp[(2) - (2)].decl_list)); }
    break;

  case 11:

/* Line 1806 of yacc.c  */
#line 73 "parser.y"
    { (yyval.stmt_list) = stmt_list_new((yyvsp[(1) - (1)].stmt), NULL); }
    break;

  case 12:

/* Line 1806 of yacc.c  */
#line 74 "parser.y"
    { (yyval.stmt_list) = stmt_list_new((yyvsp[(1) - (3)].stmt), (yyvsp[(3) - (3)].stmt_list)); }
    break;

  case 13:

/* Line 1806 of yacc.c  */
#line 78 "parser.y"
    { (yyval.stmt) = stmt_new(S_IF, (yyvsp[(1) - (1)].if_stmt)); }
    break;

  case 14:

/* Line 1806 of yacc.c  */
#line 79 "parser.y"
    { (yyval.stmt) = stmt_new(S_IF_ELSE, (yyvsp[(1) - (1)].if_else_stmt)); }
    break;

  case 15:

/* Line 1806 of yacc.c  */
#line 80 "parser.y"
    { (yyval.stmt) = stmt_new(S_WHILE, (yyvsp[(1) - (1)].while_stmt)); }
    break;

  case 16:

/* Line 1806 of yacc.c  */
#line 81 "parser.y"
    { (yyval.stmt) = stmt_new(S_ASSIGN, (yyvsp[(1) - (1)].assign_stmt)); }
    break;

  case 17:

/* Line 1806 of yacc.c  */
#line 82 "parser.y"
    { (yyval.stmt) = stmt_new(S_UNARY, (yyvsp[(1) - (1)].unary_stmt)); }
    break;

  case 18:

/* Line 1806 of yacc.c  */
#line 83 "parser.y"
    { (yyval.stmt) = stmt_new(S_WRITE, (yyvsp[(1) - (1)].write_stmt)); }
    break;

  case 19:

/* Line 1806 of yacc.c  */
#line 84 "parser.y"
    { (yyval.stmt) = stmt_new(S_WRITELN, (yyvsp[(1) - (1)].writeln_stmt)); }
    break;

  case 20:

/* Line 1806 of yacc.c  */
#line 85 "parser.y"
    { (yyval.stmt) = stmt_new(S_CMPD, (yyvsp[(1) - (1)].cmpd_stmt)); }
    break;

  case 21:

/* Line 1806 of yacc.c  */
#line 86 "parser.y"
    { (yyval.stmt) = stmt_new(S_EMPTY, (yyvsp[(1) - (1)].empty_stmt)); }
    break;

  case 22:

/* Line 1806 of yacc.c  */
#line 90 "parser.y"
    { (yyval.if_stmt) = if_stmt_new((yyvsp[(2) - (4)].expr), (yyvsp[(4) - (4)].stmt)); }
    break;

  case 23:

/* Line 1806 of yacc.c  */
#line 94 "parser.y"
    { (yyval.if_else_stmt) = if_else_stmt_new((yyvsp[(2) - (6)].expr), (yyvsp[(4) - (6)].stmt), (yyvsp[(6) - (6)].stmt)); }
    break;

  case 24:

/* Line 1806 of yacc.c  */
#line 98 "parser.y"
    { (yyval.while_stmt) = while_stmt_new((yyvsp[(2) - (4)].expr), (yyvsp[(4) - (4)].stmt)); }
    break;

  case 25:

/* Line 1806 of yacc.c  */
#line 102 "parser.y"
    { (yyval.assign_stmt) = assign_stmt_new((yyvsp[(1) - (3)].symbol), (yyvsp[(3) - (3)].expr)); }
    break;

  case 26:

/* Line 1806 of yacc.c  */
#line 106 "parser.y"
    { (yyval.unary_stmt) = unary_stmt_new((yyvsp[(1) - (1)].expr)); }
    break;

  case 27:

/* Line 1806 of yacc.c  */
#line 110 "parser.y"
    { (yyval.write_stmt) = write_stmt_new((yyvsp[(3) - (4)].expr)); }
    break;

  case 28:

/* Line 1806 of yacc.c  */
#line 114 "parser.y"
    { (yyval.writeln_stmt) = writeln_stmt_new(); }
    break;

  case 29:

/* Line 1806 of yacc.c  */
#line 118 "parser.y"
    { (yyval.empty_stmt) = empty_stmt_new(); }
    break;

  case 30:

/* Line 1806 of yacc.c  */
#line 122 "parser.y"
    { (yyval.cmpd_stmt) = cmpd_stmt_new((yyvsp[(2) - (3)].stmt_list)); }
    break;

  case 31:

/* Line 1806 of yacc.c  */
#line 126 "parser.y"
    { (yyval.expr) = expr_new(E_INT_CONST, (yyvsp[(1) - (1)].int_const_expr)); }
    break;

  case 32:

/* Line 1806 of yacc.c  */
#line 127 "parser.y"
    { (yyval.expr) = expr_new(E_VARIABLE, (yyvsp[(1) - (1)].variable_expr)); }
    break;

  case 33:

/* Line 1806 of yacc.c  */
#line 128 "parser.y"
    { (yyval.expr) = expr_new(E_BOOL_CONST, (yyvsp[(1) - (1)].bool_const_expr)); }
    break;

  case 34:

/* Line 1806 of yacc.c  */
#line 129 "parser.y"
    { (yyval.expr) = ((yyvsp[(1) - (1)].unary_expr)->op == U_PLUS) ? (yyvsp[(1) - (1)].unary_expr) ->orand : expr_new(E_UNARY, (yyvsp[(1) - (1)].unary_expr)); }
    break;

  case 35:

/* Line 1806 of yacc.c  */
#line 130 "parser.y"
    { (yyval.expr) = expr_new(E_BINARY, (yyvsp[(1) - (1)].binary_expr)); }
    break;

  case 36:

/* Line 1806 of yacc.c  */
#line 131 "parser.y"
    { (yyval.expr) = expr_new(E_BINARY, (yyvsp[(1) - (1)].binary_expr)); }
    break;

  case 37:

/* Line 1806 of yacc.c  */
#line 132 "parser.y"
    { (yyval.expr) = (yyvsp[(2) - (3)].expr); }
    break;

  case 38:

/* Line 1806 of yacc.c  */
#line 136 "parser.y"
    { (yyval.binary_expr) = binary_expr_new(B_LT, (yyvsp[(1) - (3)].expr), (yyvsp[(3) - (3)].expr)); }
    break;

  case 39:

/* Line 1806 of yacc.c  */
#line 137 "parser.y"
    { (yyval.binary_expr) = binary_expr_new(B_LE, (yyvsp[(1) - (3)].expr), (yyvsp[(3) - (3)].expr)); }
    break;

  case 40:

/* Line 1806 of yacc.c  */
#line 138 "parser.y"
    { (yyval.binary_expr) = binary_expr_new(B_EQ, (yyvsp[(1) - (3)].expr), (yyvsp[(3) - (3)].expr)); }
    break;

  case 41:

/* Line 1806 of yacc.c  */
#line 139 "parser.y"
    { (yyval.binary_expr) = binary_expr_new(B_NE, (yyvsp[(1) - (3)].expr), (yyvsp[(3) - (3)].expr)); }
    break;

  case 42:

/* Line 1806 of yacc.c  */
#line 140 "parser.y"
    { (yyval.binary_expr) = binary_expr_new(B_GE, (yyvsp[(1) - (3)].expr), (yyvsp[(3) - (3)].expr)); }
    break;

  case 43:

/* Line 1806 of yacc.c  */
#line 141 "parser.y"
    { (yyval.binary_expr) = binary_expr_new(B_GT, (yyvsp[(1) - (3)].expr), (yyvsp[(3) - (3)].expr)); }
    break;

  case 44:

/* Line 1806 of yacc.c  */
#line 145 "parser.y"
    { (yyval.int_const_expr) = int_const_expr_new((yyvsp[(1) - (1)].int_const)); }
    break;

  case 45:

/* Line 1806 of yacc.c  */
#line 149 "parser.y"
    { (yyval.bool_const_expr) = bool_const_expr_new(1); }
    break;

  case 46:

/* Line 1806 of yacc.c  */
#line 150 "parser.y"
    { (yyval.bool_const_expr) = bool_const_expr_new(0); }
    break;

  case 47:

/* Line 1806 of yacc.c  */
#line 154 "parser.y"
    { (yyval.variable_expr) = variable_expr_new((yyvsp[(1) - (1)].symbol)); }
    break;

  case 48:

/* Line 1806 of yacc.c  */
#line 158 "parser.y"
    { (yyval.unary_expr) = unary_expr_new(U_PLUS, (yyvsp[(2) - (2)].expr)); }
    break;

  case 49:

/* Line 1806 of yacc.c  */
#line 159 "parser.y"
    { (yyval.unary_expr) = unary_expr_new(U_MINUS, (yyvsp[(2) - (2)].expr)); }
    break;

  case 50:

/* Line 1806 of yacc.c  */
#line 160 "parser.y"
    { (yyval.unary_expr) = unary_expr_new(U_NOT, (yyvsp[(2) - (2)].expr)); }
    break;

  case 51:

/* Line 1806 of yacc.c  */
#line 161 "parser.y"
    { (yyval.unary_expr) = unary_expr_new(U_NOT, (yyvsp[(1) - (2)].expr)); }
    break;

  case 52:

/* Line 1806 of yacc.c  */
#line 162 "parser.y"
    { (yyval.unary_expr) = unary_expr_new(U_INCRE, expr_new(E_VARIABLE, variable_expr_new((yyvsp[(2) - (2)].symbol)))); }
    break;

  case 53:

/* Line 1806 of yacc.c  */
#line 163 "parser.y"
    { (yyval.unary_expr) = unary_expr_new(U_DECRE, expr_new(E_VARIABLE, variable_expr_new((yyvsp[(2) - (2)].symbol)))); }
    break;

  case 54:

/* Line 1806 of yacc.c  */
#line 164 "parser.y"
    { (yyval.unary_expr) = unary_expr_new(U_INCRE, expr_new(E_VARIABLE, variable_expr_new((yyvsp[(1) - (2)].symbol)))); }
    break;

  case 55:

/* Line 1806 of yacc.c  */
#line 165 "parser.y"
    { (yyval.unary_expr) = unary_expr_new(U_DECRE, expr_new(E_VARIABLE, variable_expr_new((yyvsp[(1) - (2)].symbol)))); }
    break;

  case 56:

/* Line 1806 of yacc.c  */
#line 169 "parser.y"
    { (yyval.binary_expr) = binary_expr_new(B_PLUS, (yyvsp[(1) - (3)].expr), (yyvsp[(3) - (3)].expr)); }
    break;

  case 57:

/* Line 1806 of yacc.c  */
#line 170 "parser.y"
    { (yyval.binary_expr) = binary_expr_new(B_MINUS, (yyvsp[(1) - (3)].expr), (yyvsp[(3) - (3)].expr)); }
    break;

  case 58:

/* Line 1806 of yacc.c  */
#line 171 "parser.y"
    { (yyval.binary_expr) = binary_expr_new(B_TIMES, (yyvsp[(1) - (3)].expr), (yyvsp[(3) - (3)].expr)); }
    break;

  case 59:

/* Line 1806 of yacc.c  */
#line 172 "parser.y"
    { (yyval.binary_expr) = binary_expr_new(B_DIV, (yyvsp[(1) - (3)].expr), (yyvsp[(3) - (3)].expr)); }
    break;

  case 60:

/* Line 1806 of yacc.c  */
#line 173 "parser.y"
    { (yyval.binary_expr) = binary_expr_new(B_MOD, (yyvsp[(1) - (3)].expr), (yyvsp[(3) - (3)].expr)); }
    break;

  case 61:

/* Line 1806 of yacc.c  */
#line 174 "parser.y"
    { (yyval.binary_expr) = binary_expr_new(B_AND, (yyvsp[(1) - (3)].expr), (yyvsp[(3) - (3)].expr)); }
    break;

  case 62:

/* Line 1806 of yacc.c  */
#line 175 "parser.y"
    { (yyval.binary_expr) = binary_expr_new(B_OR, (yyvsp[(1) - (3)].expr), (yyvsp[(3) - (3)].expr)); }
    break;



/* Line 1806 of yacc.c  */
#line 1941 "parser.c"
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
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
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



/* Line 2067 of yacc.c  */
#line 178 "parser.y"


