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
#line 1 "main.y" /* yacc.c:339  */

    #include "common.h"
    #include <iostream>
    using namespace std;
    extern Node * root;
    int yylex();
    extern int yyparse();
    int yyerror(char const * );
    extern block b[100];
    extern curblock cb;
    extern int blockindex;
    extern int forflag;
    extern vector<string> forvariable[100];

#line 81 "main.tab.cc" /* yacc.c:339  */

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
   by #include "main.tab.hh".  */
#ifndef YY_YY_MAIN_TAB_HH_INCLUDED
# define YY_YY_MAIN_TAB_HH_INCLUDED
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
    Printf = 258,
    Scanf = 259,
    If = 260,
    Else = 261,
    While = 262,
    For = 263,
    Return = 264,
    Id = 265,
    Idadd = 266,
    Integer = 267,
    Int = 268,
    Char = 269,
    Semicolon = 270,
    True = 271,
    False = 272,
    Comma = 273,
    ModEqual = 274,
    Assign = 275,
    AddEqual = 276,
    SubEqual = 277,
    MulEqual = 278,
    DivEqual = 279,
    Or = 280,
    And = 281,
    OrBit = 282,
    AndBit = 283,
    Equal = 284,
    NotEqual = 285,
    Big = 286,
    BigEqual = 287,
    Small = 288,
    SmallEqual = 289,
    Add = 290,
    Sub = 291,
    Mul = 292,
    Div = 293,
    Mod = 294,
    Not = 295,
    AddAdd = 296,
    SubSub = 297,
    LParen = 298,
    RParen = 299,
    LBrace = 300,
    RBrace = 301,
    Void = 302,
    Main = 303,
    Const = 304,
    Quote = 305,
    String = 306,
    Cmtbegin1 = 307,
    CmtElement1 = 308,
    Cmtend1 = 309,
    Cmtbegin2 = 310,
    CmtElement2 = 311,
    Cmtend2 = 312,
    UMINUS = 313,
    IntegerDec = 314,
    IntegerOct = 315,
    IntegerHex = 316,
    Cha = 317,
    STR = 318,
    Lower_than_else = 319
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_MAIN_TAB_HH_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 197 "main.tab.cc" /* yacc.c:358  */

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
#define YYFINAL  52
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   481

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  65
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  30
/* YYNRULES -- Number of rules.  */
#define YYNRULES  87
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  169

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   319

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
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    65,    65,    72,    73,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    93,   100,   110,   119,   129,
     132,   139,   146,   154,   155,   161,   167,   174,   175,   181,
     187,   191,   192,   193,   196,   197,   203,   208,   214,   215,
     221,   227,   234,   243,   244,   250,   256,   262,   272,   273,
     279,   284,   293,   301,   304,   307,   310,   313,   316,   319,
     326,   333,   340,   347,   354,   361,   368,   375,   382,   388,
     394,   400,   407,   414,   421,   428,   435,   442,   449,   456,
     463,   470,   476,   485,   490,   495,   500,   505
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "Printf", "Scanf", "If", "Else", "While",
  "For", "Return", "Id", "Idadd", "Integer", "Int", "Char", "Semicolon",
  "True", "False", "Comma", "ModEqual", "Assign", "AddEqual", "SubEqual",
  "MulEqual", "DivEqual", "Or", "And", "OrBit", "AndBit", "Equal",
  "NotEqual", "Big", "BigEqual", "Small", "SmallEqual", "Add", "Sub",
  "Mul", "Div", "Mod", "Not", "AddAdd", "SubSub", "LParen", "RParen",
  "LBrace", "RBrace", "Void", "Main", "Const", "Quote", "String",
  "Cmtbegin1", "CmtElement1", "Cmtend1", "Cmtbegin2", "CmtElement2",
  "Cmtend2", "UMINUS", "IntegerDec", "IntegerOct", "IntegerHex", "Cha",
  "STR", "Lower_than_else", "$accept", "Program", "Statements",
  "Statement", "If_Else", "Whilee", "Forr", "For_Statement",
  "For_Expression", "For_Instruction", "For_Declarations",
  "For_Declaration", "For_Assignments", "For_Assignment", "Bool_Statement",
  "Bool_Expression", "Declarations", "Declaration", "Assignments",
  "Assignment", "Instruction", "PrintfArgs", "PrintfArg", "printf",
  "ScanfArgs", "ScanfArg", "scanf", "return", "Expression", "Type", YY_NULLPTR
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
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319
};
# endif

#define YYPACT_NINF -44

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-44)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     153,   -22,   -19,   -15,   -15,   -13,   201,    14,   -44,   -44,
     201,   213,   153,    -9,    36,   -44,   -44,   -44,   -44,   -44,
     -44,    46,   153,   -44,   -44,   -44,   -44,   -12,   -44,   -44,
     -44,   -44,   -44,   282,    60,   240,    30,   208,   153,   153,
      22,   153,   -44,   307,   201,   -27,   201,   -27,    92,    44,
     -44,   -44,   -44,   -44,   -44,    74,   -44,   201,   201,   201,
     201,   201,   201,   201,   201,   201,   201,   201,   201,   201,
     201,   201,   201,   201,   201,   201,   -44,   -44,    68,     1,
     -44,    71,   329,    72,   -44,   -44,    47,   377,    86,   -44,
      73,    50,   208,     7,   -44,    88,   -44,   -44,   377,   353,
     -44,    59,    14,   -44,   377,   377,   377,   377,   394,   410,
     425,   439,    41,    41,     6,     6,     6,     6,   -29,   -29,
     -27,   -27,   -27,   201,   -44,    60,    94,    93,    96,   -44,
     153,   201,   -44,    95,   -44,   101,    98,     8,   -44,   -44,
     153,   377,   -44,   -44,   -11,   -44,   -44,   -44,    -7,   -44,
     -44,   377,   201,   -44,   201,   -44,    88,   170,    94,    97,
      96,    99,   377,   377,   -44,   -44,   -44,   -44,   -44
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     0,     0,     0,    53,    83,    84,
       0,     0,     0,     0,     0,    58,    54,    55,    56,    57,
      87,     0,     2,     3,     8,     9,    10,     0,    38,     5,
      12,    13,    14,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    53,     0,     0,    70,     0,    82,     0,     0,
      85,    86,     1,     4,    42,     0,     6,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    68,    69,    37,     0,
      34,    58,     0,     0,    31,    32,     0,    33,    15,    17,
       0,     0,     0,     0,    27,     0,    18,    52,    40,     0,
      11,     0,     0,    39,    63,    64,    65,    66,    76,    75,
      72,    71,    73,    74,    77,    79,    78,    80,    59,    60,
      61,    62,    67,     0,    41,     0,     0,     0,     0,    30,
       0,     0,    19,     0,    22,     0,    26,     0,    23,    81,
       0,    36,    35,    45,     0,    43,    46,    50,     0,    48,
      16,    29,     0,    28,     0,    21,     0,     7,     0,     0,
       0,     0,    20,    25,    24,    44,    47,    49,    51
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -44,   -44,   -10,   -21,   -44,   -44,   -44,   -44,   -44,   -44,
     -44,   -43,   -44,   -20,   112,    27,   -44,    -5,   -44,    66,
     -44,   -44,   -36,   -44,   -44,   -37,   -44,   -44,    -6,    84
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    21,    22,    23,    24,    25,    26,    41,    91,    92,
     137,   138,    93,    94,    38,    86,    79,    80,    27,    28,
      29,   144,   145,    30,   148,   149,    31,    32,    33,    34
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      43,    53,    48,    54,    45,    47,    55,   158,    73,    74,
      75,   160,    76,    77,    76,    77,   124,    88,    89,   125,
      96,    35,   134,   155,    36,   135,   156,    53,    37,    82,
      40,    87,    90,   159,    44,     8,     9,   161,    98,    49,
      99,    71,    72,    73,    74,    75,    52,    76,    77,    50,
      51,   104,   105,   106,   107,   108,   109,   110,   111,   112,
     113,   114,   115,   116,   117,   118,   119,   120,   121,   122,
      78,    14,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    83,    76,    77,   102,    20,    87,   101,   123,   126,
     128,   129,   130,   131,   132,     1,     2,     3,   136,     4,
       5,     6,     7,   140,   143,     8,     9,   147,   146,   150,
     152,    90,   166,   164,   168,   153,    39,   141,   154,   133,
     142,   103,   165,   167,    95,   151,     0,     0,    10,     0,
     157,     0,    11,     0,     0,     0,    53,    12,   100,    13,
       0,    14,     0,    15,     0,     0,   162,     0,   163,     0,
       0,    16,    17,    18,    19,    20,     1,     2,     3,     0,
       4,     5,     6,     7,     0,     0,     8,     9,     0,     0,
       0,     0,     0,     1,     2,     3,     0,     4,     5,     6,
       7,     0,     0,     8,     9,     0,     0,     0,     0,    10,
       0,     0,     0,    11,     0,     0,     0,     0,    12,     0,
      13,     0,    14,     0,    15,     0,     0,     0,     0,     0,
       0,    42,    16,    17,    18,    19,    20,    13,    42,    14,
       0,    15,     0,    42,    84,    85,     0,     0,     0,    16,
      17,    18,    19,    20,     0,     0,     0,    10,     0,     0,
       0,    11,     0,     0,    10,     0,     0,     0,    11,    10,
      42,     0,    15,    11,     0,     0,    46,     0,     0,    15,
      16,    17,    18,    19,    15,     0,     0,    16,    17,    18,
      19,     0,    16,    17,    18,    19,    10,     0,     0,     0,
      11,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    81,     0,     0,     0,     0,     0,    56,     0,    16,
      17,    18,    19,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    97,    76,    77,     0,     0,     0,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,     0,    76,    77,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,     0,
      76,    77,     0,   127,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,     0,    76,    77,     0,   139,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,     0,    76,    77,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,     0,    76,    77,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
       0,    76,    77,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,     0,    76,    77,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,     0,
      76,    77
};

static const yytype_int16 yycheck[] =
{
       6,    22,    12,    15,    10,    11,    18,    18,    37,    38,
      39,    18,    41,    42,    41,    42,    15,    38,    39,    18,
      41,    43,    15,    15,    43,    18,    18,    48,    43,    35,
      43,    37,    10,    44,    20,    13,    14,    44,    44,    48,
      46,    35,    36,    37,    38,    39,     0,    41,    42,    13,
      14,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      10,    49,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    51,    41,    42,    10,    63,    92,    43,    20,    18,
      18,    44,     6,    20,    44,     3,     4,     5,    10,     7,
       8,     9,    10,    44,    10,    13,    14,    11,    15,   130,
      15,    10,    15,   156,    15,   135,     4,   123,    20,    92,
     125,    55,   158,   160,    40,   131,    -1,    -1,    36,    -1,
     140,    -1,    40,    -1,    -1,    -1,   157,    45,    46,    47,
      -1,    49,    -1,    51,    -1,    -1,   152,    -1,   154,    -1,
      -1,    59,    60,    61,    62,    63,     3,     4,     5,    -1,
       7,     8,     9,    10,    -1,    -1,    13,    14,    -1,    -1,
      -1,    -1,    -1,     3,     4,     5,    -1,     7,     8,     9,
      10,    -1,    -1,    13,    14,    -1,    -1,    -1,    -1,    36,
      -1,    -1,    -1,    40,    -1,    -1,    -1,    -1,    45,    -1,
      47,    -1,    49,    -1,    51,    -1,    -1,    -1,    -1,    -1,
      -1,    10,    59,    60,    61,    62,    63,    47,    10,    49,
      -1,    51,    -1,    10,    16,    17,    -1,    -1,    -1,    59,
      60,    61,    62,    63,    -1,    -1,    -1,    36,    -1,    -1,
      -1,    40,    -1,    -1,    36,    -1,    -1,    -1,    40,    36,
      10,    -1,    51,    40,    -1,    -1,    43,    -1,    -1,    51,
      59,    60,    61,    62,    51,    -1,    -1,    59,    60,    61,
      62,    -1,    59,    60,    61,    62,    36,    -1,    -1,    -1,
      40,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    51,    -1,    -1,    -1,    -1,    -1,    15,    -1,    59,
      60,    61,    62,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    15,    41,    42,    -1,    -1,    -1,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    -1,    41,    42,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    -1,
      41,    42,    -1,    44,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    -1,    41,    42,    -1,    44,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    -1,    41,    42,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    -1,    41,    42,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      -1,    41,    42,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    -1,    41,    42,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    -1,
      41,    42
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     4,     5,     7,     8,     9,    10,    13,    14,
      36,    40,    45,    47,    49,    51,    59,    60,    61,    62,
      63,    66,    67,    68,    69,    70,    71,    83,    84,    85,
      88,    91,    92,    93,    94,    43,    43,    43,    79,    79,
      43,    72,    10,    93,    20,    93,    43,    93,    67,    48,
      13,    14,     0,    68,    15,    18,    15,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    41,    42,    10,    81,
      82,    51,    93,    51,    16,    17,    80,    93,    68,    68,
      10,    73,    74,    77,    78,    94,    68,    15,    93,    93,
      46,    43,    10,    84,    93,    93,    93,    93,    93,    93,
      93,    93,    93,    93,    93,    93,    93,    93,    93,    93,
      93,    93,    93,    20,    15,    18,    18,    44,    18,    44,
       6,    20,    44,    80,    15,    18,    10,    75,    76,    44,
      44,    93,    82,    10,    86,    87,    15,    11,    89,    90,
      68,    93,    15,    78,    20,    15,    18,    67,    18,    44,
      18,    44,    93,    93,    76,    87,    15,    90,    15
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    65,    66,    67,    67,    68,    68,    68,    68,    68,
      68,    68,    68,    68,    68,    69,    69,    70,    71,    72,
      73,    74,    74,    75,    75,    76,    76,    77,    77,    78,
      79,    80,    80,    80,    81,    81,    82,    82,    83,    83,
      84,    85,    85,    86,    86,    87,    88,    88,    89,    89,
      90,    91,    92,    93,    93,    93,    93,    93,    93,    93,
      93,    93,    93,    93,    93,    93,    93,    93,    93,    93,
      93,    93,    93,    93,    93,    93,    93,    93,    93,    93,
      93,    93,    93,    94,    94,    94,    94,    94
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     2,     1,     2,     5,     1,     1,
       1,     3,     1,     1,     1,     3,     5,     3,     3,     3,
       4,     3,     2,     1,     3,     3,     1,     1,     3,     3,
       3,     1,     1,     1,     1,     3,     3,     1,     1,     3,
       3,     3,     2,     1,     3,     1,     5,     7,     1,     3,
       1,     7,     3,     1,     1,     1,     1,     1,     1,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     2,     2,
       2,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     4,     2,     1,     1,     2,     2,     1
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
#line 65 "main.y" /* yacc.c:1646  */
    {
		root = new Node(Node_Program);
		root->addchild((yyvsp[0]));
	}
#line 1463 "main.tab.cc" /* yacc.c:1646  */
    break;

  case 3:
#line 72 "main.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 1469 "main.tab.cc" /* yacc.c:1646  */
    break;

  case 4:
#line 73 "main.y" /* yacc.c:1646  */
    {
		(yyval) = (yyvsp[-1]);
		(yyval)->addsibling((yyvsp[0]));
	}
#line 1478 "main.tab.cc" /* yacc.c:1646  */
    break;

  case 5:
#line 80 "main.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]);}
#line 1484 "main.tab.cc" /* yacc.c:1646  */
    break;

  case 6:
#line 81 "main.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-1]); }
#line 1490 "main.tab.cc" /* yacc.c:1646  */
    break;

  case 7:
#line 82 "main.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 1496 "main.tab.cc" /* yacc.c:1646  */
    break;

  case 8:
#line 83 "main.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 1502 "main.tab.cc" /* yacc.c:1646  */
    break;

  case 9:
#line 84 "main.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 1508 "main.tab.cc" /* yacc.c:1646  */
    break;

  case 10:
#line 85 "main.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 1514 "main.tab.cc" /* yacc.c:1646  */
    break;

  case 11:
#line 86 "main.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-1]); }
#line 1520 "main.tab.cc" /* yacc.c:1646  */
    break;

  case 12:
#line 87 "main.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 1526 "main.tab.cc" /* yacc.c:1646  */
    break;

  case 13:
#line 88 "main.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 1532 "main.tab.cc" /* yacc.c:1646  */
    break;

  case 14:
#line 89 "main.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 1538 "main.tab.cc" /* yacc.c:1646  */
    break;

  case 15:
#line 93 "main.y" /* yacc.c:1646  */
    {
		Node *node = new Node(Node_Stmt);
		node->stmttype = Stmt_If;
		(yyvsp[-1])->addsibling((yyvsp[0]));
		node->addchild((yyvsp[-1]));
		(yyval) = node;
	}
#line 1550 "main.tab.cc" /* yacc.c:1646  */
    break;

  case 16:
#line 100 "main.y" /* yacc.c:1646  */
    {
		Node *node = new Node(Node_Stmt);
		node->stmttype = Stmt_If;
		(yyvsp[-3])->addsibling((yyvsp[-2]));
		(yyvsp[-3])->addsibling((yyvsp[0]));
		node->addchild((yyvsp[-3]));
		(yyval) = node;
	}
#line 1563 "main.tab.cc" /* yacc.c:1646  */
    break;

  case 17:
#line 110 "main.y" /* yacc.c:1646  */
    {
        Node *node = new Node(Node_Stmt);
        node->stmttype = Stmt_While;
        (yyvsp[-1])->addsibling((yyvsp[0]));
        node->addchild((yyvsp[-1]));
        (yyval) = node;
    }
#line 1575 "main.tab.cc" /* yacc.c:1646  */
    break;

  case 18:
#line 119 "main.y" /* yacc.c:1646  */
    {
		Node *node = new Node(Node_Stmt);
        node->stmttype = Stmt_For;
        (yyvsp[-1])->addsibling((yyvsp[0]));
        node->addchild((yyvsp[-1]));
        forflag--;
        (yyval) = node;
	}
#line 1588 "main.tab.cc" /* yacc.c:1646  */
    break;

  case 19:
#line 129 "main.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-1]); }
#line 1594 "main.tab.cc" /* yacc.c:1646  */
    break;

  case 20:
#line 132 "main.y" /* yacc.c:1646  */
    {
		(yyvsp[-3])->addsibling((yyvsp[-2]));
		(yyvsp[-3])->addsibling((yyvsp[0]));
		(yyval) = (yyvsp[-3]);
	}
#line 1604 "main.tab.cc" /* yacc.c:1646  */
    break;

  case 21:
#line 139 "main.y" /* yacc.c:1646  */
    {
    	Node *node = new Node(Node_Stmt);
        node->stmttype = Stmt_Declare;
        (yyvsp[-2])->addsibling((yyvsp[-1]));
        node->addchild((yyvsp[-2]));
        (yyval) = node;
    }
#line 1616 "main.tab.cc" /* yacc.c:1646  */
    break;

  case 22:
#line 146 "main.y" /* yacc.c:1646  */
    {
        Node *node = new Node(Node_Stmt);
        node->stmttype = Stmt_Assign;
        node->addchild((yyvsp[-1]));
        (yyval) = node;
    }
#line 1627 "main.tab.cc" /* yacc.c:1646  */
    break;

  case 23:
#line 154 "main.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 1633 "main.tab.cc" /* yacc.c:1646  */
    break;

  case 24:
#line 155 "main.y" /* yacc.c:1646  */
    {
		(yyvsp[-2])->addsibling((yyvsp[0]));
		(yyval) = (yyvsp[-2]);
	}
#line 1642 "main.tab.cc" /* yacc.c:1646  */
    break;

  case 25:
#line 161 "main.y" /* yacc.c:1646  */
    {
		forvariable[forflag].push_back((yyvsp[-2])->str_val);
    	cb.id.push_back((yyvsp[-2])->str_val);
		(yyvsp[-2])->addchild((yyvsp[0]));
		(yyval) = (yyvsp[-2]);
	}
#line 1653 "main.tab.cc" /* yacc.c:1646  */
    break;

  case 26:
#line 167 "main.y" /* yacc.c:1646  */
    {
		forvariable[forflag].push_back((yyvsp[0])->str_val);
    	cb.id.push_back((yyvsp[0])->str_val);
		(yyval) = (yyvsp[0]);
	}
#line 1663 "main.tab.cc" /* yacc.c:1646  */
    break;

  case 27:
#line 174 "main.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 1669 "main.tab.cc" /* yacc.c:1646  */
    break;

  case 28:
#line 175 "main.y" /* yacc.c:1646  */
    {
		(yyvsp[-2])->addsibling((yyvsp[0]));
		(yyval) = (yyvsp[-2]);
	}
#line 1678 "main.tab.cc" /* yacc.c:1646  */
    break;

  case 29:
#line 181 "main.y" /* yacc.c:1646  */
    {
		(yyvsp[-2])->addchild((yyvsp[0]));
		(yyval) = (yyvsp[-2]);
	}
#line 1687 "main.tab.cc" /* yacc.c:1646  */
    break;

  case 30:
#line 187 "main.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-1]); }
#line 1693 "main.tab.cc" /* yacc.c:1646  */
    break;

  case 31:
#line 191 "main.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 1699 "main.tab.cc" /* yacc.c:1646  */
    break;

  case 32:
#line 192 "main.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 1705 "main.tab.cc" /* yacc.c:1646  */
    break;

  case 33:
#line 193 "main.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 1711 "main.tab.cc" /* yacc.c:1646  */
    break;

  case 34:
#line 196 "main.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 1717 "main.tab.cc" /* yacc.c:1646  */
    break;

  case 35:
#line 197 "main.y" /* yacc.c:1646  */
    {
		(yyvsp[-2])->addsibling((yyvsp[0]));
		(yyval) = (yyvsp[-2]);
	}
#line 1726 "main.tab.cc" /* yacc.c:1646  */
    break;

  case 36:
#line 203 "main.y" /* yacc.c:1646  */
    {
    	cb.id.push_back((yyvsp[-2])->str_val);
		(yyvsp[-2])->addchild((yyvsp[0]));
		(yyval) = (yyvsp[-2]);
	}
#line 1736 "main.tab.cc" /* yacc.c:1646  */
    break;

  case 37:
#line 208 "main.y" /* yacc.c:1646  */
    {
    	cb.id.push_back((yyvsp[0])->str_val);
		(yyval) = (yyvsp[0]);
	}
#line 1745 "main.tab.cc" /* yacc.c:1646  */
    break;

  case 38:
#line 214 "main.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 1751 "main.tab.cc" /* yacc.c:1646  */
    break;

  case 39:
#line 215 "main.y" /* yacc.c:1646  */
    {
		(yyvsp[-2])->addsibling((yyvsp[0]));
		(yyval) = (yyvsp[-2]);
	}
#line 1760 "main.tab.cc" /* yacc.c:1646  */
    break;

  case 40:
#line 221 "main.y" /* yacc.c:1646  */
    {
		(yyvsp[-2])->addchild((yyvsp[0]));
		(yyval) = (yyvsp[-2]);
	}
#line 1769 "main.tab.cc" /* yacc.c:1646  */
    break;

  case 41:
#line 227 "main.y" /* yacc.c:1646  */
    {
    	Node *node = new Node(Node_Stmt);
        node->stmttype = Stmt_Declare;
        (yyvsp[-2])->addsibling((yyvsp[-1]));
        node->addchild((yyvsp[-2]));
        (yyval) = node;
    }
#line 1781 "main.tab.cc" /* yacc.c:1646  */
    break;

  case 42:
#line 234 "main.y" /* yacc.c:1646  */
    {
        Node *node = new Node(Node_Stmt);
        node->stmttype = Stmt_Assign;
        node->addchild((yyvsp[-1]));
        (yyval) = node;
    }
#line 1792 "main.tab.cc" /* yacc.c:1646  */
    break;

  case 43:
#line 243 "main.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 1798 "main.tab.cc" /* yacc.c:1646  */
    break;

  case 44:
#line 244 "main.y" /* yacc.c:1646  */
    {
		(yyvsp[-2])->addsibling((yyvsp[0]));
		(yyval) = (yyvsp[-2]);
	}
#line 1807 "main.tab.cc" /* yacc.c:1646  */
    break;

  case 45:
#line 250 "main.y" /* yacc.c:1646  */
    {
		(yyval) = (yyvsp[0]);
	}
#line 1815 "main.tab.cc" /* yacc.c:1646  */
    break;

  case 46:
#line 256 "main.y" /* yacc.c:1646  */
    {
        Node *node = new Node(Node_Stmt);
        node->stmttype = Stmt_Printf;
        node->addchild((yyvsp[-2]));
        (yyval) = node;
    }
#line 1826 "main.tab.cc" /* yacc.c:1646  */
    break;

  case 47:
#line 262 "main.y" /* yacc.c:1646  */
    {
    	Node *node = new Node(Node_Stmt);
        node->stmttype = Stmt_Printf;
        (yyvsp[-4])->addchild((yyvsp[-2]));
        node->addchild((yyvsp[-4]));
        (yyval) = node;
    }
#line 1838 "main.tab.cc" /* yacc.c:1646  */
    break;

  case 48:
#line 272 "main.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 1844 "main.tab.cc" /* yacc.c:1646  */
    break;

  case 49:
#line 273 "main.y" /* yacc.c:1646  */
    {
		(yyvsp[-2])->addsibling((yyvsp[0]));
		(yyval) = (yyvsp[-2]);
	}
#line 1853 "main.tab.cc" /* yacc.c:1646  */
    break;

  case 50:
#line 279 "main.y" /* yacc.c:1646  */
    {
		(yyval) = (yyvsp[0]);
	}
#line 1861 "main.tab.cc" /* yacc.c:1646  */
    break;

  case 51:
#line 284 "main.y" /* yacc.c:1646  */
    {
        Node *node = new Node(Node_Stmt);
        node->stmttype = Stmt_Scanf;
        node->addchild((yyvsp[-2]));
        (yyval) = node;
    }
#line 1872 "main.tab.cc" /* yacc.c:1646  */
    break;

  case 52:
#line 293 "main.y" /* yacc.c:1646  */
    {
		Node *node = new Node(Node_Stmt);
		node->stmttype = Stmt_Return;
		node->addchild((yyvsp[-1]));
		(yyval) = node;
	}
#line 1883 "main.tab.cc" /* yacc.c:1646  */
    break;

  case 53:
#line 301 "main.y" /* yacc.c:1646  */
    {
		(yyval) = (yyvsp[0]);
	}
#line 1891 "main.tab.cc" /* yacc.c:1646  */
    break;

  case 54:
#line 304 "main.y" /* yacc.c:1646  */
    {
		(yyval) = (yyvsp[0]);
	}
#line 1899 "main.tab.cc" /* yacc.c:1646  */
    break;

  case 55:
#line 307 "main.y" /* yacc.c:1646  */
    {
		(yyval) = (yyvsp[0]);
	}
#line 1907 "main.tab.cc" /* yacc.c:1646  */
    break;

  case 56:
#line 310 "main.y" /* yacc.c:1646  */
    {
		(yyval) = (yyvsp[0]);
	}
#line 1915 "main.tab.cc" /* yacc.c:1646  */
    break;

  case 57:
#line 313 "main.y" /* yacc.c:1646  */
    {
		(yyval) = (yyvsp[0]);
	}
#line 1923 "main.tab.cc" /* yacc.c:1646  */
    break;

  case 58:
#line 316 "main.y" /* yacc.c:1646  */
    {
		(yyval) = (yyvsp[0]);
	}
#line 1931 "main.tab.cc" /* yacc.c:1646  */
    break;

  case 59:
#line 319 "main.y" /* yacc.c:1646  */
    {
		Node *node = new Node(Node_Operator);
		node->optype = Op_Add;
		node->createleftchild((yyvsp[-2]));
		node->createrightchild((yyvsp[0]));
		(yyval) = node;
	}
#line 1943 "main.tab.cc" /* yacc.c:1646  */
    break;

  case 60:
#line 326 "main.y" /* yacc.c:1646  */
    {
		Node *node = new Node(Node_Operator);
		node->optype = Op_Sub;
		node->createleftchild((yyvsp[-2]));
		node->createrightchild((yyvsp[0]));
		(yyval) = node;
	}
#line 1955 "main.tab.cc" /* yacc.c:1646  */
    break;

  case 61:
#line 333 "main.y" /* yacc.c:1646  */
    {
		Node *node = new Node(Node_Operator);
		node->optype = Op_Mul;
		node->createleftchild((yyvsp[-2]));
		node->createrightchild((yyvsp[0]));
		(yyval) = node;
	}
#line 1967 "main.tab.cc" /* yacc.c:1646  */
    break;

  case 62:
#line 340 "main.y" /* yacc.c:1646  */
    {
		Node *node = new Node(Node_Operator);
		node->optype = Op_Div;
		node->createleftchild((yyvsp[-2]));
		node->createrightchild((yyvsp[0]));
		(yyval) = node;
	}
#line 1979 "main.tab.cc" /* yacc.c:1646  */
    break;

  case 63:
#line 347 "main.y" /* yacc.c:1646  */
    {
		Node *node = new Node(Node_Operator);
		node->optype = Op_AddEqual;
		node->createleftchild((yyvsp[-2]));
		node->createrightchild((yyvsp[0]));
		(yyval) = node;
	}
#line 1991 "main.tab.cc" /* yacc.c:1646  */
    break;

  case 64:
#line 354 "main.y" /* yacc.c:1646  */
    {
		Node *node = new Node(Node_Operator);
		node->optype = Op_SubEqual;
		node->createleftchild((yyvsp[-2]));
		node->createrightchild((yyvsp[0]));
		(yyval) = node;
	}
#line 2003 "main.tab.cc" /* yacc.c:1646  */
    break;

  case 65:
#line 361 "main.y" /* yacc.c:1646  */
    {
		Node *node = new Node(Node_Operator);
		node->optype = Op_MulEqual;
		node->createleftchild((yyvsp[-2]));
		node->createrightchild((yyvsp[0]));
		(yyval) = node;
	}
#line 2015 "main.tab.cc" /* yacc.c:1646  */
    break;

  case 66:
#line 368 "main.y" /* yacc.c:1646  */
    {
		Node *node = new Node(Node_Operator);
		node->optype = Op_DivEqual;
		node->createleftchild((yyvsp[-2]));
		node->createrightchild((yyvsp[0]));
		(yyval) = node;
	}
#line 2027 "main.tab.cc" /* yacc.c:1646  */
    break;

  case 67:
#line 375 "main.y" /* yacc.c:1646  */
    {
		Node *node = new Node(Node_Operator);
		node->optype = Op_Mod;
		node->createleftchild((yyvsp[-2]));
		node->createrightchild((yyvsp[0]));
		(yyval) = node;
	}
#line 2039 "main.tab.cc" /* yacc.c:1646  */
    break;

  case 68:
#line 382 "main.y" /* yacc.c:1646  */
    {
		Node *node = new Node(Node_Operator);
		node->optype = Op_AddAdd;
		node->addchild((yyvsp[-1]));
		(yyval) = node;
	}
#line 2050 "main.tab.cc" /* yacc.c:1646  */
    break;

  case 69:
#line 388 "main.y" /* yacc.c:1646  */
    {
		Node *node = new Node(Node_Operator);
		node->optype = Op_SubSub;
		node->addchild((yyvsp[-1]));
		(yyval) = node;
	}
#line 2061 "main.tab.cc" /* yacc.c:1646  */
    break;

  case 70:
#line 394 "main.y" /* yacc.c:1646  */
    {
		Node *node = new Node(Node_Operator);
		node->optype = Op_UMINUS;
		node->addchild((yyvsp[0]));
		(yyval) = node;
	}
#line 2072 "main.tab.cc" /* yacc.c:1646  */
    break;

  case 71:
#line 400 "main.y" /* yacc.c:1646  */
    {
		Node *node = new Node(Node_Operator);
		node->optype = Op_AndBit;
		node->createleftchild((yyvsp[-2]));
		node->createrightchild((yyvsp[0]));
		(yyval) = node;
	}
#line 2084 "main.tab.cc" /* yacc.c:1646  */
    break;

  case 72:
#line 407 "main.y" /* yacc.c:1646  */
    {
		Node *node = new Node(Node_Operator);
		node->optype = Op_OrBit;
		node->createleftchild((yyvsp[-2]));
		node->createrightchild((yyvsp[0]));
		(yyval) = node;
	}
#line 2096 "main.tab.cc" /* yacc.c:1646  */
    break;

  case 73:
#line 414 "main.y" /* yacc.c:1646  */
    {
        Node *node = new Node(Node_Operator);
        node->optype = Op_Equal;
        node->createleftchild((yyvsp[-2]));
		node->createrightchild((yyvsp[0]));
        (yyval) = node;
    }
#line 2108 "main.tab.cc" /* yacc.c:1646  */
    break;

  case 74:
#line 421 "main.y" /* yacc.c:1646  */
    {
        Node *node = new Node(Node_Operator);
        node->optype = Op_NotEqual;
        node->createleftchild((yyvsp[-2]));
		node->createrightchild((yyvsp[0]));
        (yyval) = node;
    }
#line 2120 "main.tab.cc" /* yacc.c:1646  */
    break;

  case 75:
#line 428 "main.y" /* yacc.c:1646  */
    {
    	Node *node = new Node(Node_Operator);
        node->optype = Op_And;
        node->createleftchild((yyvsp[-2]));
		node->createrightchild((yyvsp[0]));
        (yyval) = node;
    }
#line 2132 "main.tab.cc" /* yacc.c:1646  */
    break;

  case 76:
#line 435 "main.y" /* yacc.c:1646  */
    {
    	Node *node = new Node(Node_Operator);
        node->optype = Op_Or;
        node->createleftchild((yyvsp[-2]));
		node->createrightchild((yyvsp[0]));
        (yyval) = node;
    }
#line 2144 "main.tab.cc" /* yacc.c:1646  */
    break;

  case 77:
#line 442 "main.y" /* yacc.c:1646  */
    {
		Node *node = new Node(Node_Operator);
		node->optype = Op_Big;
		node->createleftchild((yyvsp[-2]));
		node->createrightchild((yyvsp[0]));
		(yyval) = node;
	}
#line 2156 "main.tab.cc" /* yacc.c:1646  */
    break;

  case 78:
#line 449 "main.y" /* yacc.c:1646  */
    {
		Node *node = new Node(Node_Operator);
		node->optype = Op_Small;
		node->createleftchild((yyvsp[-2]));
		node->createrightchild((yyvsp[0]));
		(yyval) = node;
	}
#line 2168 "main.tab.cc" /* yacc.c:1646  */
    break;

  case 79:
#line 456 "main.y" /* yacc.c:1646  */
    {
		Node *node = new Node(Node_Operator);
		node->optype = Op_BigEqual;
		node->createleftchild((yyvsp[-2]));
		node->createrightchild((yyvsp[0]));
		(yyval) = node;
	}
#line 2180 "main.tab.cc" /* yacc.c:1646  */
    break;

  case 80:
#line 463 "main.y" /* yacc.c:1646  */
    {
		Node *node = new Node(Node_Operator);
		node->optype = Op_SmallEqual;
		node->createleftchild((yyvsp[-2]));
		node->createrightchild((yyvsp[0]));
		(yyval) = node;
	}
#line 2192 "main.tab.cc" /* yacc.c:1646  */
    break;

  case 81:
#line 470 "main.y" /* yacc.c:1646  */
    {
        Node *node = new Node(Node_Operator);
        node->optype = Op_Not;
        node->addchild((yyvsp[-1]));
        (yyval) = node;        
    }
#line 2203 "main.tab.cc" /* yacc.c:1646  */
    break;

  case 82:
#line 476 "main.y" /* yacc.c:1646  */
    {
		Node *node = new Node(Node_Operator);
		node->optype = Op_Not;
		node->addchild((yyvsp[0]));
		(yyval) = node;
	}
#line 2214 "main.tab.cc" /* yacc.c:1646  */
    break;

  case 83:
#line 485 "main.y" /* yacc.c:1646  */
    {
		Node *node = new Node(Node_Type);
		node->tytype = Type_Int;
		(yyval) = node;
	}
#line 2224 "main.tab.cc" /* yacc.c:1646  */
    break;

  case 84:
#line 490 "main.y" /* yacc.c:1646  */
    {
		Node *node = new Node(Node_Type);
		node->tytype = Type_Char;
		(yyval) = node;
	}
#line 2234 "main.tab.cc" /* yacc.c:1646  */
    break;

  case 85:
#line 495 "main.y" /* yacc.c:1646  */
    {
		Node *node = new Node(Node_Type);
		node->tytype = Type_ConstInt;
		(yyval) = node;
	}
#line 2244 "main.tab.cc" /* yacc.c:1646  */
    break;

  case 86:
#line 500 "main.y" /* yacc.c:1646  */
    {
		Node *node = new Node(Node_Type);
		node->tytype = Type_ConstChar;
		(yyval) = node;
	}
#line 2254 "main.tab.cc" /* yacc.c:1646  */
    break;

  case 87:
#line 505 "main.y" /* yacc.c:1646  */
    {
		Node *node = new Node(Node_Type);
		node->tytype = Type_String;
		(yyval) = node;
	}
#line 2264 "main.tab.cc" /* yacc.c:1646  */
    break;


#line 2268 "main.tab.cc" /* yacc.c:1646  */
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
#line 513 "main.y" /* yacc.c:1906  */

