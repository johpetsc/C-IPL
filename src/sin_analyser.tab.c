/* A Bison parser, made by GNU Bison 3.5.1.  */

/* Bison implementation for Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.5.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 6 "src/sin_analyser.y"

    #include "../lib/data_structures.h"
    #include <stdio.h>
    #include <stdlib.h>
    #include <string.h>
    extern int yylex();
    extern int yylex_destroy();
    extern void yyerror(const char* error);
    extern int line;
    extern int col;
    extern int lex_errors;
    extern FILE *yyin;
    int scope = 0;
    int sin_errors = 0;

#line 86 "src/sin_analyser.tab.c"

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

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 1
#endif

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
#ifndef YY_YY_SRC_SIN_ANALYSER_TAB_H_INCLUDED
# define YY_YY_SRC_SIN_ANALYSER_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    INT = 258,
    FLOAT = 259,
    TYPE = 260,
    ID = 261,
    LIST = 262,
    IF = 263,
    ELSE = 264,
    FOR = 265,
    RETURN = 266,
    OUT = 267,
    IN = 268,
    SS_OP = 269,
    MD_OP = 270,
    LLOG_OP = 271,
    RLOG_OP = 272,
    REL_OP = 273,
    ASS_OP = 274,
    LIST_FUNC = 275,
    NIL = 276,
    LLIST_OP = 277,
    RLIST_OP = 278,
    LITERAL = 279,
    LB = 280,
    RB = 281,
    LP = 282,
    RP = 283,
    END = 284,
    SEPARATOR = 285
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 22 "src/sin_analyser.y"

    /*Token structure*/
    struct lexToken {
        char id[200];
        int line;
        int col;
    } lex;
    /*Tree node reference*/
    struct treeNode* treeNode;

#line 180 "src/sin_analyser.tab.c"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_SRC_SIN_ANALYSER_TAB_H_INCLUDED  */



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
typedef yytype_int16 yy_state_t;

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
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
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
#define YYFINAL  11
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   2154

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  31
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  32
/* YYNRULES -- Number of rules.  */
#define YYNRULES  72
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  321

#define YYUNDEFTOK  2
#define YYMAXUTOK   285


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

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
      25,    26,    27,    28,    29,    30
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    68,    68,    72,    78,    82,    84,    86,    90,    97,
     105,   111,   115,   120,   125,   129,   135,   141,   145,   151,
     155,   157,   159,   161,   163,   167,   169,   171,   175,   177,
     179,   181,   183,   185,   189,   191,   195,   201,   208,   212,
     220,   224,   231,   239,   247,   254,   262,   266,   273,   278,
     285,   291,   295,   300,   304,   310,   314,   320,   324,   330,
     335,   339,   341,   343,   345,   347,   349,   351,   355,   361,
     368,   372,   378
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 1
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "INT", "FLOAT", "TYPE", "ID", "LIST",
  "IF", "ELSE", "FOR", "RETURN", "OUT", "IN", "SS_OP", "MD_OP", "LLOG_OP",
  "RLOG_OP", "REL_OP", "ASS_OP", "LIST_FUNC", "NIL", "LLIST_OP",
  "RLIST_OP", "LITERAL", "LB", "RB", "LP", "RP", "END", "SEPARATOR",
  "$accept", "start", "program", "program_block", "func_dclr", "params",
  "declar", "func", "block", "statement", "flow_ctr", "expr", "list_op",
  "if_else", "for", "return", "ass_op", "list_con", "list_oper",
  "list_func", "operation", "input", "output", "log_op", "ulog_op",
  "rel_op", "ari_op", "md_op", "val", "func_call", "id", "func_params", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_int16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285
};
# endif

#define YYPACT_NINF (-150)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-73)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      13,    29,   223,    41,   592,   730,   811,    57,    16,   151,
      98,  -150,   838,   841,     3,   328,   540,   286,   118,   667,
     706,   737,   190,   736,   191,   158,   757,   796,   313,   347,
     240,    20,    21,   630,   199,   206,   563,    84,  1692,   630,
    1702,   736,   124,    10,  1174,  1201,  1228,    96,   100,  1255,
    1282,   208,   211,   239,   247,   337,   370,   379,   394,   139,
     248,   421,   171,  1712,  1722,  1732,  1672,   736,   775,  1309,
     124,  1336,   244,   406,   512,   285,   266,  1742,   449,   493,
     432,  1363,   225,   865,  1390,   294,  1417,  1444,  1471,   143,
      84,    84,   563,   630,   630,    14,  1498,   276,   288,   295,
     319,   349,   352,  1525,  1752,   476,   287,   330,  1762,  1772,
     481,   513,  1782,   919,   946,   868,  1633,   281,   534,   565,
     566,  1792,   350,   823,   329,   973,   736,   244,  1552,   356,
     736,  1579,   327,   573,  1682,   697,   686,  2060,  1932,   600,
     368,  2065,  2071,   124,    87,   149,   186,   705,  2076,  2082,
    2087,  1937,   372,   369,   388,   341,   412,  1658,   442,   124,
     443,   429,   458,   599,  1000,   769,    35,    44,   736,   850,
     617,   877,   904,   454,   485,  1814,  1820,  1798,   655,   427,
    1826,  1832,   124,     8,    93,   297,   177,  1838,  1844,  1850,
    1804,   528,   627,   552,  2093,   307,   533,   124,   368,   368,
     600,    26,    53,  1952,  1958,   489,    79,   544,   551,   682,
     605,  1969,  1658,  1975,   124,   175,   273,   396,   404,   430,
     506,   595,   661,   664,   138,   464,   748,   461,  1986,  1992,
    2003,  1896,   558,    45,   931,   124,   958,   244,  1606,   985,
    1012,  1039,  1856,   314,   635,   281,   427,   427,   655,    51,
    1658,   642,  2098,   153,  2126,  2104,  2109,  2115,  1027,   715,
     614,   285,   266,  1911,  2009,  1917,  1650,   731,   644,   649,
     401,   605,   605,   682,  1658,    64,   650,   653,  1054,   663,
     670,  1066,  1862,   121,   380,  1868,  1874,  1880,  1081,   829,
    2120,   856,   679,   680,   688,  2020,   869,   872,   517,   652,
    2026,  2037,   883,  2043,  1108,   699,  1633,   281,  1886,   896,
     899,   910,  2054,  1093,   696,  1633,   244,  1120,   700,  1633,
    1147
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     1,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -150,  -150,  -150,   741,  -150,  -150,     1,  -150,   -29,   -41,
    -114,   -33,  -140,  -107,   -88,   -81,     5,  -138,   -22,  -134,
     455,  -132,  -130,   482,   448,   224,   403,   309,   140,   303,
     -26,  -149
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     3,     4,     5,     6,    19,    43,     8,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,   114
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      73,     7,   169,    84,    16,     7,    80,    74,    17,   171,
      78,    78,    81,    74,     1,    20,   151,   217,     2,   218,
     164,    69,    71,   220,   245,   222,    68,   223,   172,    -7,
      -7,    18,   164,   -29,    -7,   173,   234,   -46,    96,   -29,
      84,    11,   112,    14,   151,   236,    99,    70,    72,   161,
     102,   164,   258,   100,   257,    84,   -17,   164,   -14,   105,
     110,   111,   235,    78,    78,    78,    78,    74,    74,   113,
     164,   237,   217,   277,   218,   123,   -14,    98,   220,   287,
     222,   -14,   223,   170,   278,   128,    13,    28,    29,   131,
     135,   190,   303,   -70,   -70,   -70,   125,   -70,    36,   -70,
     288,   191,   -70,   197,    15,    38,   -70,   -70,    40,   -51,
     217,    42,   218,   151,   151,   -46,   220,   151,   222,    85,
     223,   174,   -51,   -32,   216,    86,   304,   136,   137,   -32,
     138,   231,   129,   151,   217,   219,   218,   -50,   139,   238,
     220,   140,   222,    23,   223,   141,    28,    29,   142,   135,
     -50,   143,   190,   190,   270,    89,   151,    36,   215,    16,
      37,   -46,   -46,    17,    38,   -51,   -46,    40,   -46,   -50,
      42,   151,   151,   151,   151,   113,    77,   -51,   -15,   267,
     -12,   -50,   149,   265,   265,    91,   231,   -55,   151,   -55,
     219,   247,   169,   -55,   -55,   -55,    26,    84,   -29,   171,
     -55,   169,   -53,   -29,   198,   169,   -55,   113,   171,   151,
     149,    99,   171,   215,   -53,   101,    67,   289,   172,   190,
     190,   190,   190,   113,   231,   173,    75,   172,   219,     9,
      10,   172,   109,    76,   173,   161,   294,    87,   173,   292,
      88,   302,   280,   297,   265,   265,   265,   265,   231,   113,
     152,   215,   219,   104,   -70,   -70,   -70,   188,   -70,   -70,
     -70,    79,   -34,   -70,   -51,   313,   146,   -70,   -34,   -70,
     -35,   -51,   162,   170,   317,   215,   -35,   -51,   320,   194,
     149,   190,   170,   149,   175,   176,   170,   177,   153,   154,
     191,   155,    21,    22,   146,   178,   269,   229,   179,   149,
     163,   -44,   180,   -50,   116,   181,   156,   157,   182,   158,
     -50,   174,   159,   -53,    93,   246,   -50,   117,   242,   188,
     174,   318,   149,   -52,   174,   198,   -53,   -64,   -64,   -64,
     -52,   -64,   246,   192,   193,   -52,   -64,   149,   149,   149,
     256,   185,   -64,   -52,    91,   150,   -54,   118,   -54,   264,
     229,   148,   229,   -54,   149,   -16,   164,   -13,   127,   -54,
     -33,   -65,   -65,   -65,   195,   -65,   -33,   146,   -70,   -70,
     -65,   136,   137,   150,   138,   149,   -65,   119,   160,   148,
     120,   226,   139,   146,   130,   188,   188,   188,   286,   141,
     229,   -70,   142,   -28,   247,   143,   -54,   -64,   -54,   -28,
     108,   293,   -30,   243,   203,   204,   146,   263,   -30,   -54,
     229,   229,   229,   301,   229,   209,   -65,   -31,   210,   -32,
     189,   146,   211,   -31,   -32,   213,   187,   -34,   214,    85,
     175,   176,   -34,   177,   266,   -41,   226,   -53,   146,    90,
     -66,   178,   150,   150,   -53,   147,   150,   188,   180,   148,
     -53,   181,   148,   -35,   182,   -44,   233,   -61,   -35,   146,
     230,   -44,   150,   -61,   -61,   -61,   228,   -61,   148,   185,
     -67,   -62,   -61,   147,   226,   272,    95,   -55,   -61,   -55,
     -51,   189,   189,   240,   -55,   150,   -70,   -51,   187,   -55,
     145,   148,   -51,   107,   226,   259,   260,    82,   226,   -43,
     150,   150,   150,   150,    85,   -43,   148,   148,   255,   -52,
     -42,    90,   230,   230,   241,   230,   -52,   150,   145,   228,
     186,   228,   -52,   148,   144,    97,   -61,   -61,   -61,   -33,
     -61,   185,    94,   -50,   -33,   -61,    85,   106,   150,    95,
     -50,   -61,   -45,   147,   148,   -50,   147,   250,   189,   189,
     189,   189,   144,   230,   187,   187,   285,   -49,   251,   228,
     227,   252,   147,   -49,   160,   184,    28,    29,   -14,   135,
     -14,   261,   124,   230,   230,   230,   230,   230,   262,   228,
     228,   300,   186,   228,    38,   147,   276,    40,   -48,   -47,
      42,   145,    -2,     1,   -48,   -47,   -14,     2,   196,   183,
     147,   254,   -14,   136,   137,   225,   138,   145,   203,   204,
     189,   263,   221,   227,   232,   227,   187,   147,   -28,   209,
     291,   141,   -70,   -28,   142,   144,   211,   143,   -70,   213,
     145,   133,   214,    28,    29,   132,   134,   244,   147,   224,
      85,   144,    34,    35,    36,   253,   239,    37,   186,   284,
     -12,    38,    39,   227,    40,   296,   -12,    42,   175,   176,
     225,   177,   145,   282,   144,   -13,   272,   221,   -54,   268,
     -54,   -13,   295,   227,   299,   -54,   180,   227,   -63,   181,
     -54,   -69,   182,   145,   -30,   203,   204,   -31,   263,   -30,
     279,   306,   -31,   283,   224,    24,   144,    25,   225,   307,
     -64,   -64,   -64,   211,   -64,   221,   213,   309,   310,   214,
     186,   -70,   -70,   -70,   -64,   -70,   311,   144,   298,   199,
     -70,   -55,   225,   -55,   -70,   316,   -70,   -68,   319,   221,
      -4,    -4,   224,   -55,   -11,    -4,   -11,    27,   -12,    28,
      29,   132,    30,   -12,    31,    12,    32,    33,    34,    35,
      36,     0,     0,    37,   -44,   184,   224,    38,    39,   -44,
      40,    41,   314,    42,   -53,   -12,   271,   -12,     0,     0,
     -24,   -53,   -24,   -24,   -24,   -24,   -53,   -24,   -24,   -24,
     -24,   -24,   -24,   -24,     0,   -13,   -24,   -13,     0,   183,
     -24,   -24,   -14,   -24,   -24,   -24,   -24,   -24,   -14,   -24,
     -24,   -24,   -24,   -10,   -24,   -10,   -24,   -24,   -24,   -24,
     -24,    -6,    -6,   -24,     0,     0,    -6,   -24,   -24,   -14,
     -24,   -24,   -24,   -24,   -36,   -14,   -36,   -36,   -36,   -36,
       0,   -36,   126,   -36,   -36,   -36,   -36,   -36,    -3,    -3,
     -36,    -5,    -5,    -3,   -36,   -36,    -5,   -36,   -36,   -36,
     -36,   -23,   269,   -23,   -23,   -23,   -23,   -42,   -23,   -23,
     -23,   -23,   -23,   -23,   -23,    -9,    -9,   -23,    -8,    -8,
      -9,   -23,   -23,    -8,   -23,   -23,   -23,   -23,   -25,   -13,
     -25,   -25,   -25,   -25,   -13,   -25,   -25,   -25,   -25,   -25,
     -25,   -25,   -70,     0,   -25,   -43,     0,   -70,   -25,   -25,
     -43,   -25,   -25,   -25,   -25,   -26,   269,   -26,   -26,   -26,
     -26,   -45,   -26,   -26,   -26,   -26,   -26,   -26,   -26,   -49,
       0,   -26,   -48,     0,   -49,   -26,   -26,   -48,   -26,   -26,
     -26,   -26,   -38,   -47,   -38,   -38,   -38,   -38,   -47,   -38,
     -38,   -38,   -38,   -38,   -38,   -38,     0,   -72,   -38,   -72,
       0,     0,   -38,   -38,     0,   -38,   -38,   -38,   -38,   -40,
       0,   -40,   -40,   -40,   -40,     0,   -40,   -40,   -40,   -40,
     -40,   -40,   -40,     0,   121,   -40,   122,     0,     0,   -40,
     -40,     0,   -40,   -40,   -40,   -40,   -20,     0,   -20,   -20,
     -20,   -20,     0,   -20,   -20,   -20,   -20,   -20,   -20,   -20,
       0,   -71,   -20,   -71,     0,     0,   -20,   -20,     0,   -20,
     -20,   -20,   -20,   -27,     0,   -27,   -27,   -27,   -27,     0,
     -27,   -27,   -27,   -27,   -27,   -27,   -27,     0,   -70,   -27,
     -70,     0,     0,   -27,   -27,     0,   -27,   -27,   -27,   -27,
     -21,     0,   -21,   -21,   -21,   -21,     0,   -21,   -21,   -21,
     -21,   -21,   -21,   -21,     0,   290,   -21,   122,     0,     0,
     -21,   -21,     0,   -21,   -21,   -21,   -21,   -22,     0,   -22,
     -22,   -22,   -22,     0,   -22,   -22,   -22,   -22,   -22,   -22,
     -22,     0,   305,   -22,   122,     0,     0,   -22,   -22,     0,
     -22,   -22,   -22,   -22,   -36,     0,   -36,   -36,   -36,   -36,
       0,   -36,   315,   -36,   -36,   -36,   -36,   -36,     0,   308,
     -36,   122,     0,     0,   -36,   -36,     0,   -36,   -36,   -36,
     -36,   -37,     0,   -37,   -37,   -37,   -37,     0,   -37,   -37,
     -37,   -37,   -37,   -37,   -37,     0,   312,   -37,   122,     0,
       0,   -37,   -37,     0,   -37,   -37,   -37,   -37,   -39,     0,
     -39,   -39,   -39,   -39,     0,   -39,   -39,   -39,   -39,   -39,
     -39,   -39,     0,     0,   -39,     0,     0,     0,   -39,   -39,
       0,   -39,   -39,   -39,   -39,    27,     0,    28,    29,   132,
      30,     0,    31,     0,    32,    33,    34,    35,    36,     0,
       0,    37,     0,     0,     0,    38,    39,     0,    40,    41,
      83,    42,   -19,     0,   -19,   -19,   -19,   -19,     0,   -19,
       0,   -19,   -19,   -19,   -19,   -19,     0,     0,   -19,     0,
       0,     0,   -19,   -19,     0,   -19,   -19,   -19,   -19,   -23,
       0,   -23,   -23,   -23,   -23,     0,   -23,     0,   -23,   -23,
     -23,   -23,   -23,     0,     0,   -23,     0,     0,     0,   -23,
     -23,     0,   -23,   -23,   -23,   -23,   -25,     0,   -25,   -25,
     -25,   -25,     0,   -25,     0,   -25,   -25,   -25,   -25,   -25,
       0,     0,   -25,     0,     0,     0,   -25,   -25,     0,   -25,
     -25,   -25,   -25,   -26,     0,   -26,   -26,   -26,   -26,     0,
     -26,     0,   -26,   -26,   -26,   -26,   -26,     0,     0,   -26,
       0,     0,     0,   -26,   -26,     0,   -26,   -26,   -26,   -26,
     -38,     0,   -38,   -38,   -38,   -38,     0,   -38,     0,   -38,
     -38,   -38,   -38,   -38,     0,     0,   -38,     0,     0,     0,
     -38,   -38,     0,   -38,   -38,   -38,   -38,   -40,     0,   -40,
     -40,   -40,   -40,     0,   -40,     0,   -40,   -40,   -40,   -40,
     -40,     0,     0,   -40,     0,     0,     0,   -40,   -40,     0,
     -40,   -40,   -40,   -40,    27,     0,    28,    29,   132,    30,
       0,    31,     0,    32,    33,    34,    35,    36,     0,     0,
      37,     0,     0,     0,    38,    39,     0,    40,    41,   103,
      42,   -18,     0,   -18,   -18,   -18,   -18,     0,   -18,     0,
     -18,   -18,   -18,   -18,   -18,     0,     0,   -18,     0,     0,
       0,   -18,   -18,     0,   -18,   -18,   -18,   -18,   -20,     0,
     -20,   -20,   -20,   -20,     0,   -20,     0,   -20,   -20,   -20,
     -20,   -20,     0,     0,   -20,     0,     0,     0,   -20,   -20,
       0,   -20,   -20,   -20,   -20,   -27,     0,   -27,   -27,   -27,
     -27,     0,   -27,     0,   -27,   -27,   -27,   -27,   -27,     0,
       0,   -27,     0,     0,     0,   -27,   -27,     0,   -27,   -27,
     -27,   -27,   -21,     0,   -21,   -21,   -21,   -21,     0,   -21,
       0,   -21,   -21,   -21,   -21,   -21,     0,     0,   -21,     0,
       0,     0,   -21,   -21,     0,   -21,   -21,   -21,   -21,    27,
       0,    28,    29,   132,    30,     0,    31,     0,    32,    33,
      34,    35,    36,     0,     0,    37,     0,     0,     0,    38,
      39,     0,    40,    41,   115,    42,   -22,     0,   -22,   -22,
     -22,   -22,     0,   -22,     0,   -22,   -22,   -22,   -22,   -22,
       0,     0,   -22,     0,     0,     0,   -22,   -22,     0,   -22,
     -22,   -22,   -22,   -37,     0,   -37,   -37,   -37,   -37,     0,
     -37,     0,   -37,   -37,   -37,   -37,   -37,     0,     0,   -37,
       0,     0,     0,   -37,   -37,     0,   -37,   -37,   -37,   -37,
     -39,     0,   -39,   -39,   -39,   -39,     0,   -39,     0,   -39,
     -39,   -39,   -39,   -39,     0,     0,   -39,     0,     0,     0,
     -39,   -39,     0,   -39,   -39,   -39,   -39,    27,     0,    28,
      29,   132,    30,     0,    31,     0,    32,    33,    34,    35,
      36,     0,     0,    37,     0,     0,     0,    38,    39,     0,
      40,    41,   281,    42,   165,     0,    28,    29,   132,    30,
       0,   166,     0,   167,    33,    34,    35,    36,     0,     0,
      37,     0,     0,     0,    38,    39,     0,    40,   168,   202,
      42,   203,   204,   205,   206,     0,   -52,     0,   271,     0,
     207,   208,   209,   -52,     0,   210,     0,     0,   -52,   211,
     212,     0,   213,     0,     0,   214,   -61,   -61,   -61,     0,
     -61,    93,    94,     0,     0,   -61,   -70,   -70,   -70,    95,
     -70,   -61,   -70,     0,     0,   -70,   -66,   -66,   -66,   -70,
     -66,   -70,     0,     0,     0,   -66,   -67,   -67,   -67,     0,
     -67,   -66,     0,     0,     0,   -67,   -57,    92,   -57,     0,
     -57,   -67,     0,     0,     0,   -57,   -60,   -60,   -60,     0,
     -60,   -57,     0,     0,     0,   -60,   -62,   -62,   -62,     0,
     -62,   -60,     0,     0,     0,   -62,   -59,   -59,   -59,     0,
     -59,   -62,     0,     0,     0,   -59,   -63,   -63,   -63,     0,
     -63,   -59,     0,     0,     0,   -63,   -56,    92,   -56,     0,
     -56,   -63,     0,     0,     0,   -56,   -58,   -58,   -58,     0,
     -58,   -56,     0,     0,     0,   -58,   -69,   -69,   -69,     0,
     -69,   -58,     0,     0,     0,   -69,   -68,   -68,   -68,     0,
     -68,   -69,   -70,   -70,   -70,   -68,   -70,     0,   -61,   -61,
     -61,   -68,   -61,     0,     0,   -70,     0,   -70,   -64,   -64,
     -64,   249,   -64,   -61,   -65,   -65,   -65,     0,   -65,     0,
     -66,   -66,   -66,   -64,   -66,     0,   -67,   -67,   -67,   -65,
     -67,     0,   -57,   248,   -57,   -66,   -57,     0,   -60,   -60,
     -60,   -67,   -60,     0,   -62,   -62,   -62,   -57,   -62,     0,
     -59,   -59,   -59,   -60,   -59,     0,   -63,   -63,   -63,   -62,
     -63,     0,   -56,   248,   -56,   -59,   -56,     0,   -58,   -58,
     -58,   -63,   -58,     0,   -69,   -69,   -69,   -56,   -69,     0,
     -68,   -68,   -68,   -58,   -68,     0,     0,     0,     0,   -69,
     -61,   -61,   -61,     0,   -61,   -68,   274,     0,     0,   -61,
       0,     0,     0,   275,   -61,   -70,   -70,   -70,     0,   -70,
       0,   -61,   -61,   -61,   -70,   -61,     0,     0,   -70,   -70,
     -61,     0,     0,     0,   275,   -61,   -70,   -70,   -70,     0,
     -70,   -61,   -61,   -61,     0,   -61,     0,     0,     0,   -70,
     -70,     0,     0,     0,   201,   -61,   -64,   -64,   -64,     0,
     -64,     0,   -65,   -65,   -65,   -64,   -65,     0,     0,     0,
     -64,   -65,     0,   -66,   -66,   -66,   -65,   -66,     0,   -67,
     -67,   -67,   -66,   -67,     0,     0,     0,   -66,   -67,     0,
     -57,   273,   -57,   -67,   -57,     0,   -60,   -60,   -60,   -57,
     -60,     0,     0,     0,   -57,   -60,     0,   -62,   -62,   -62,
     -60,   -62,     0,   -59,   -59,   -59,   -62,   -59,     0,     0,
       0,   -62,   -59,     0,   -63,   -63,   -63,   -59,   -63,     0,
     -56,   273,   -56,   -63,   -56,     0,     0,     0,   -63,   -56,
       0,   -58,   -58,   -58,   -56,   -58,     0,   -69,   -69,   -69,
     -58,   -69,     0,     0,     0,   -58,   -69,     0,   -68,   -68,
     -68,   -69,   -68,     0,   -65,   -65,   -65,   -68,   -65,   -66,
     -66,   -66,   -68,   -66,     0,   -67,   -67,   -67,   -65,   -67,
     -57,   200,   -57,   -66,   -57,     0,   -60,   -60,   -60,   -67,
     -60,   -62,   -62,   -62,   -57,   -62,     0,   -59,   -59,   -59,
     -60,   -59,   -63,   -63,   -63,   -62,   -63,     0,   -56,   200,
     -56,   -59,   -56,   -58,   -58,   -58,   -63,   -58,     0,   -69,
     -69,   -69,   -56,   -69,   -68,   -68,   -68,   -58,   -68,     0,
     199,     0,   -54,   -69,   -54,     0,     0,     0,   -68,     0,
       0,     0,     0,     0,   -54
};

static const yytype_int16 yycheck[] =
{
      33,     0,   116,    44,     1,     4,    39,    33,     5,   116,
      36,    37,    41,    39,     1,    14,    42,   157,     5,   157,
       6,     1,     1,   157,    16,   157,    25,   157,   116,     0,
       1,    28,     6,    23,     5,   116,     1,    29,    67,    29,
      81,     0,    28,    27,    70,     1,    72,    27,    27,    75,
      76,     6,   201,    75,    28,    96,    27,     6,    29,    85,
      93,    94,    27,    89,    90,    91,    92,    93,    94,    95,
       6,    27,   212,    28,   212,   116,    23,    72,   212,    28,
     212,    28,   212,   116,   233,   126,    29,     3,     4,   130,
       6,   117,    28,    14,    15,    16,   122,    18,    14,    20,
     249,   127,    23,    16,     6,    21,    27,    28,    24,    16,
     250,    27,   250,   139,   140,    28,   250,   143,   250,    23,
     250,   116,    29,    23,   157,    29,   275,     3,     4,    29,
       6,   157,   127,   159,   274,   157,   274,    16,    14,   168,
     274,    17,   274,    25,   274,    21,     3,     4,    24,     6,
      29,    27,   178,   179,    16,    16,   182,    14,   157,     1,
      17,    23,    23,     5,    21,    16,    28,    24,    29,    16,
      27,   197,   198,   199,   200,   201,    36,    28,    27,   212,
      29,    28,    42,   209,   210,    14,   212,    16,   214,    18,
     212,    14,   306,    16,    23,    18,     6,   238,    23,   306,
      29,   315,    16,    28,    18,   319,    29,   233,   315,   235,
      70,   237,   319,   212,    28,    75,    25,   250,   306,   245,
     246,   247,   248,   249,   250,   306,    27,   315,   250,     6,
       7,   319,    92,    27,   315,   261,   262,    29,   319,   261,
      29,   274,   237,   269,   270,   271,   272,   273,   274,   275,
       6,   250,   274,    28,    14,    15,    16,   117,    18,    19,
      20,    37,    23,    23,    16,   306,    42,    27,    29,    29,
      23,    23,     6,   306,   315,   274,    29,    29,   319,   139,
     140,   307,   315,   143,     3,     4,   319,     6,     3,     4,
     316,     6,     6,     7,    70,    14,    23,   157,    17,   159,
       6,    28,    21,    16,    28,    24,    21,    22,    27,    24,
      23,   306,    27,    16,    19,    18,    29,    29,   178,   179,
     315,   316,   182,    16,   319,    18,    29,    14,    15,    16,
      16,    18,    18,     6,     7,    28,    23,   197,   198,   199,
     200,   117,    29,    29,    14,    42,    16,    28,    18,   209,
     210,    42,   212,    23,   214,    27,     6,    29,    29,    29,
      23,    14,    15,    16,   140,    18,    29,   143,    27,    28,
      23,     3,     4,    70,     6,   235,    29,    28,    75,    70,
      28,   157,    14,   159,    28,   245,   246,   247,   248,    21,
     250,    19,    24,    23,    14,    27,    16,    28,    18,    29,
      91,   261,    23,   179,     3,     4,   182,     6,    29,    29,
     270,   271,   272,   273,   274,    14,    28,    23,    17,    23,
     117,   197,    21,    29,    28,    24,   117,    23,    27,    23,
       3,     4,    28,     6,   210,    29,   212,    16,   214,    18,
      28,    14,   139,   140,    23,    42,   143,   307,    21,   140,
      29,    24,   143,    23,    27,    23,    27,    28,    28,   235,
     157,    29,   159,    14,    15,    16,   157,    18,   159,   245,
      28,    28,    23,    70,   250,    14,    27,    16,    29,    18,
      16,   178,   179,    29,    23,   182,    28,    23,   179,    28,
      42,   182,    28,    90,   270,     6,     7,    42,   274,    23,
     197,   198,   199,   200,    23,    29,   197,   198,   199,    16,
      29,    18,   209,   210,    29,   212,    23,   214,    70,   210,
     117,   212,    29,   214,    42,    70,    14,    15,    16,    23,
      18,   307,    20,    16,    28,    23,    23,    89,   235,    27,
      23,    29,    29,   140,   235,    28,   143,    19,   245,   246,
     247,   248,    70,   250,   245,   246,   247,    23,     6,   250,
     157,    28,   159,    29,   261,   117,     3,     4,    28,     6,
      30,    27,   117,   270,   271,   272,   273,   274,    27,   270,
     271,   272,   179,   274,    21,   182,    28,    24,    23,    23,
      27,   143,     0,     1,    29,    29,    23,     5,   143,   117,
     197,   198,    29,     3,     4,   157,     6,   159,     3,     4,
     307,     6,   157,   210,   159,   212,   307,   214,    23,    14,
       6,    21,    23,    28,    24,   143,    21,    27,    29,    24,
     182,     1,    27,     3,     4,     5,     6,   182,   235,   157,
      23,   159,    12,    13,    14,   197,    29,    17,   245,   246,
      23,    21,    22,   250,    24,     6,    29,    27,     3,     4,
     212,     6,   214,    28,   182,    23,    14,   212,    16,   214,
      18,    29,    28,   270,   271,    23,    21,   274,    28,    24,
      28,    28,    27,   235,    23,     3,     4,    23,     6,    28,
     235,    28,    28,   245,   212,    28,   214,    30,   250,    29,
      14,    15,    16,    21,    18,   250,    24,    28,    28,    27,
     307,    14,    15,    16,    28,    18,    28,   235,   270,    14,
      23,    16,   274,    18,    27,    29,    29,    28,    28,   274,
       0,     1,   250,    28,    28,     5,    30,     1,    23,     3,
       4,     5,     6,    28,     8,     4,    10,    11,    12,    13,
      14,    -1,    -1,    17,    23,   307,   274,    21,    22,    28,
      24,    25,   307,    27,    16,    28,    18,    30,    -1,    -1,
       1,    23,     3,     4,     5,     6,    28,     8,     9,    10,
      11,    12,    13,    14,    -1,    28,    17,    30,    -1,   307,
      21,    22,    23,    24,    25,    26,    27,     1,    29,     3,
       4,     5,     6,    28,     8,    30,    10,    11,    12,    13,
      14,     0,     1,    17,    -1,    -1,     5,    21,    22,    23,
      24,    25,    26,    27,     1,    29,     3,     4,     5,     6,
      -1,     8,     9,    10,    11,    12,    13,    14,     0,     1,
      17,     0,     1,     5,    21,    22,     5,    24,    25,    26,
      27,     1,    23,     3,     4,     5,     6,    28,     8,     9,
      10,    11,    12,    13,    14,     0,     1,    17,     0,     1,
       5,    21,    22,     5,    24,    25,    26,    27,     1,    23,
       3,     4,     5,     6,    28,     8,     9,    10,    11,    12,
      13,    14,    23,    -1,    17,    23,    -1,    28,    21,    22,
      28,    24,    25,    26,    27,     1,    23,     3,     4,     5,
       6,    28,     8,     9,    10,    11,    12,    13,    14,    23,
      -1,    17,    23,    -1,    28,    21,    22,    28,    24,    25,
      26,    27,     1,    23,     3,     4,     5,     6,    28,     8,
       9,    10,    11,    12,    13,    14,    -1,    28,    17,    30,
      -1,    -1,    21,    22,    -1,    24,    25,    26,    27,     1,
      -1,     3,     4,     5,     6,    -1,     8,     9,    10,    11,
      12,    13,    14,    -1,    28,    17,    30,    -1,    -1,    21,
      22,    -1,    24,    25,    26,    27,     1,    -1,     3,     4,
       5,     6,    -1,     8,     9,    10,    11,    12,    13,    14,
      -1,    28,    17,    30,    -1,    -1,    21,    22,    -1,    24,
      25,    26,    27,     1,    -1,     3,     4,     5,     6,    -1,
       8,     9,    10,    11,    12,    13,    14,    -1,    28,    17,
      30,    -1,    -1,    21,    22,    -1,    24,    25,    26,    27,
       1,    -1,     3,     4,     5,     6,    -1,     8,     9,    10,
      11,    12,    13,    14,    -1,    28,    17,    30,    -1,    -1,
      21,    22,    -1,    24,    25,    26,    27,     1,    -1,     3,
       4,     5,     6,    -1,     8,     9,    10,    11,    12,    13,
      14,    -1,    28,    17,    30,    -1,    -1,    21,    22,    -1,
      24,    25,    26,    27,     1,    -1,     3,     4,     5,     6,
      -1,     8,     9,    10,    11,    12,    13,    14,    -1,    28,
      17,    30,    -1,    -1,    21,    22,    -1,    24,    25,    26,
      27,     1,    -1,     3,     4,     5,     6,    -1,     8,     9,
      10,    11,    12,    13,    14,    -1,    28,    17,    30,    -1,
      -1,    21,    22,    -1,    24,    25,    26,    27,     1,    -1,
       3,     4,     5,     6,    -1,     8,     9,    10,    11,    12,
      13,    14,    -1,    -1,    17,    -1,    -1,    -1,    21,    22,
      -1,    24,    25,    26,    27,     1,    -1,     3,     4,     5,
       6,    -1,     8,    -1,    10,    11,    12,    13,    14,    -1,
      -1,    17,    -1,    -1,    -1,    21,    22,    -1,    24,    25,
      26,    27,     1,    -1,     3,     4,     5,     6,    -1,     8,
      -1,    10,    11,    12,    13,    14,    -1,    -1,    17,    -1,
      -1,    -1,    21,    22,    -1,    24,    25,    26,    27,     1,
      -1,     3,     4,     5,     6,    -1,     8,    -1,    10,    11,
      12,    13,    14,    -1,    -1,    17,    -1,    -1,    -1,    21,
      22,    -1,    24,    25,    26,    27,     1,    -1,     3,     4,
       5,     6,    -1,     8,    -1,    10,    11,    12,    13,    14,
      -1,    -1,    17,    -1,    -1,    -1,    21,    22,    -1,    24,
      25,    26,    27,     1,    -1,     3,     4,     5,     6,    -1,
       8,    -1,    10,    11,    12,    13,    14,    -1,    -1,    17,
      -1,    -1,    -1,    21,    22,    -1,    24,    25,    26,    27,
       1,    -1,     3,     4,     5,     6,    -1,     8,    -1,    10,
      11,    12,    13,    14,    -1,    -1,    17,    -1,    -1,    -1,
      21,    22,    -1,    24,    25,    26,    27,     1,    -1,     3,
       4,     5,     6,    -1,     8,    -1,    10,    11,    12,    13,
      14,    -1,    -1,    17,    -1,    -1,    -1,    21,    22,    -1,
      24,    25,    26,    27,     1,    -1,     3,     4,     5,     6,
      -1,     8,    -1,    10,    11,    12,    13,    14,    -1,    -1,
      17,    -1,    -1,    -1,    21,    22,    -1,    24,    25,    26,
      27,     1,    -1,     3,     4,     5,     6,    -1,     8,    -1,
      10,    11,    12,    13,    14,    -1,    -1,    17,    -1,    -1,
      -1,    21,    22,    -1,    24,    25,    26,    27,     1,    -1,
       3,     4,     5,     6,    -1,     8,    -1,    10,    11,    12,
      13,    14,    -1,    -1,    17,    -1,    -1,    -1,    21,    22,
      -1,    24,    25,    26,    27,     1,    -1,     3,     4,     5,
       6,    -1,     8,    -1,    10,    11,    12,    13,    14,    -1,
      -1,    17,    -1,    -1,    -1,    21,    22,    -1,    24,    25,
      26,    27,     1,    -1,     3,     4,     5,     6,    -1,     8,
      -1,    10,    11,    12,    13,    14,    -1,    -1,    17,    -1,
      -1,    -1,    21,    22,    -1,    24,    25,    26,    27,     1,
      -1,     3,     4,     5,     6,    -1,     8,    -1,    10,    11,
      12,    13,    14,    -1,    -1,    17,    -1,    -1,    -1,    21,
      22,    -1,    24,    25,    26,    27,     1,    -1,     3,     4,
       5,     6,    -1,     8,    -1,    10,    11,    12,    13,    14,
      -1,    -1,    17,    -1,    -1,    -1,    21,    22,    -1,    24,
      25,    26,    27,     1,    -1,     3,     4,     5,     6,    -1,
       8,    -1,    10,    11,    12,    13,    14,    -1,    -1,    17,
      -1,    -1,    -1,    21,    22,    -1,    24,    25,    26,    27,
       1,    -1,     3,     4,     5,     6,    -1,     8,    -1,    10,
      11,    12,    13,    14,    -1,    -1,    17,    -1,    -1,    -1,
      21,    22,    -1,    24,    25,    26,    27,     1,    -1,     3,
       4,     5,     6,    -1,     8,    -1,    10,    11,    12,    13,
      14,    -1,    -1,    17,    -1,    -1,    -1,    21,    22,    -1,
      24,    25,    26,    27,     1,    -1,     3,     4,     5,     6,
      -1,     8,    -1,    10,    11,    12,    13,    14,    -1,    -1,
      17,    -1,    -1,    -1,    21,    22,    -1,    24,    25,     1,
      27,     3,     4,     5,     6,    -1,    16,    -1,    18,    -1,
      12,    13,    14,    23,    -1,    17,    -1,    -1,    28,    21,
      22,    -1,    24,    -1,    -1,    27,    14,    15,    16,    -1,
      18,    19,    20,    -1,    -1,    23,    14,    15,    16,    27,
      18,    29,    20,    -1,    -1,    23,    14,    15,    16,    27,
      18,    29,    -1,    -1,    -1,    23,    14,    15,    16,    -1,
      18,    29,    -1,    -1,    -1,    23,    14,    15,    16,    -1,
      18,    29,    -1,    -1,    -1,    23,    14,    15,    16,    -1,
      18,    29,    -1,    -1,    -1,    23,    14,    15,    16,    -1,
      18,    29,    -1,    -1,    -1,    23,    14,    15,    16,    -1,
      18,    29,    -1,    -1,    -1,    23,    14,    15,    16,    -1,
      18,    29,    -1,    -1,    -1,    23,    14,    15,    16,    -1,
      18,    29,    -1,    -1,    -1,    23,    14,    15,    16,    -1,
      18,    29,    -1,    -1,    -1,    23,    14,    15,    16,    -1,
      18,    29,    -1,    -1,    -1,    23,    14,    15,    16,    -1,
      18,    29,    14,    15,    16,    23,    18,    -1,    14,    15,
      16,    29,    18,    -1,    -1,    27,    -1,    29,    14,    15,
      16,    27,    18,    29,    14,    15,    16,    -1,    18,    -1,
      14,    15,    16,    29,    18,    -1,    14,    15,    16,    29,
      18,    -1,    14,    15,    16,    29,    18,    -1,    14,    15,
      16,    29,    18,    -1,    14,    15,    16,    29,    18,    -1,
      14,    15,    16,    29,    18,    -1,    14,    15,    16,    29,
      18,    -1,    14,    15,    16,    29,    18,    -1,    14,    15,
      16,    29,    18,    -1,    14,    15,    16,    29,    18,    -1,
      14,    15,    16,    29,    18,    -1,    -1,    -1,    -1,    29,
      14,    15,    16,    -1,    18,    29,    20,    -1,    -1,    23,
      -1,    -1,    -1,    27,    28,    14,    15,    16,    -1,    18,
      -1,    14,    15,    16,    23,    18,    -1,    -1,    27,    28,
      23,    -1,    -1,    -1,    27,    28,    14,    15,    16,    -1,
      18,    14,    15,    16,    -1,    18,    -1,    -1,    -1,    27,
      28,    -1,    -1,    -1,    27,    28,    14,    15,    16,    -1,
      18,    -1,    14,    15,    16,    23,    18,    -1,    -1,    -1,
      28,    23,    -1,    14,    15,    16,    28,    18,    -1,    14,
      15,    16,    23,    18,    -1,    -1,    -1,    28,    23,    -1,
      14,    15,    16,    28,    18,    -1,    14,    15,    16,    23,
      18,    -1,    -1,    -1,    28,    23,    -1,    14,    15,    16,
      28,    18,    -1,    14,    15,    16,    23,    18,    -1,    -1,
      -1,    28,    23,    -1,    14,    15,    16,    28,    18,    -1,
      14,    15,    16,    23,    18,    -1,    -1,    -1,    28,    23,
      -1,    14,    15,    16,    28,    18,    -1,    14,    15,    16,
      23,    18,    -1,    -1,    -1,    28,    23,    -1,    14,    15,
      16,    28,    18,    -1,    14,    15,    16,    23,    18,    14,
      15,    16,    28,    18,    -1,    14,    15,    16,    28,    18,
      14,    15,    16,    28,    18,    -1,    14,    15,    16,    28,
      18,    14,    15,    16,    28,    18,    -1,    14,    15,    16,
      28,    18,    14,    15,    16,    28,    18,    -1,    14,    15,
      16,    28,    18,    14,    15,    16,    28,    18,    -1,    14,
      15,    16,    28,    18,    14,    15,    16,    28,    18,    -1,
      14,    -1,    16,    28,    18,    -1,    -1,    -1,    28,    -1,
      -1,    -1,    -1,    -1,    28
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     1,     5,    32,    33,    34,    35,    37,    38,     6,
       7,     0,    34,    29,    27,     6,     1,     5,    28,    36,
      37,     6,     7,    25,    28,    30,     6,     1,     3,     4,
       6,     8,    10,    11,    12,    13,    14,    17,    21,    22,
      24,    25,    27,    37,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    25,    37,     1,
      27,     1,    27,    42,    61,    27,    27,    59,    61,    56,
      42,    39,    51,    26,    40,    23,    29,    29,    29,    16,
      18,    14,    15,    19,    20,    27,    39,    51,    47,    61,
      49,    59,    61,    26,    28,    61,    55,    57,    58,    59,
      42,    42,    28,    61,    62,    26,    28,    29,    28,    28,
      28,    28,    30,    40,    51,    61,     9,    29,    40,    47,
      28,    40,     5,     1,     6,     6,     3,     4,     6,    14,
      17,    21,    24,    27,    54,    55,    56,    57,    58,    59,
      60,    61,     6,     3,     4,     6,    21,    22,    24,    27,
      60,    61,     6,     6,     6,     1,     8,    10,    25,    41,
      42,    44,    45,    46,    47,     3,     4,     6,    14,    17,
      21,    24,    27,    54,    55,    56,    57,    58,    59,    60,
      61,    61,     6,     7,    59,    56,    51,    16,    18,    14,
      15,    27,     1,     3,     4,     5,     6,    12,    13,    14,
      17,    21,    22,    24,    27,    37,    42,    43,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    51,    27,     1,    27,     1,    27,    39,    29,
      29,    29,    59,    56,    51,    16,    18,    14,    15,    27,
      19,     6,    28,    55,    57,    58,    59,    28,    62,     6,
       7,    27,    27,     6,    59,    61,    56,    42,    51,    23,
      16,    18,    14,    15,    20,    27,    28,    28,    62,    51,
      47,    26,    28,    55,    57,    58,    59,    28,    62,    42,
      28,     6,    49,    59,    61,    28,     6,    61,    55,    57,
      58,    59,    42,    28,    62,    28,    28,    29,    28,    28,
      28,    28,    28,    40,    51,     9,    29,    40,    47,    28,
      40
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    31,    32,    33,    33,    34,    34,    34,    35,    35,
      36,    36,    37,    37,    37,    38,    38,    38,    39,    39,
      40,    40,    40,    40,    40,    41,    41,    41,    42,    42,
      42,    42,    42,    42,    43,    43,    44,    44,    44,    45,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    53,
      54,    54,    55,    55,    56,    56,    57,    57,    58,    58,
      58,    59,    59,    59,    59,    59,    59,    59,    60,    60,
      61,    62,    62
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     1,     2,     1,     1,     7,     6,
       3,     1,     2,     3,     1,     2,     3,     1,     2,     1,
       2,     2,     3,     1,     1,     1,     1,     2,     1,     1,
       1,     1,     1,     1,     1,     1,     5,     7,     2,     9,
       2,     2,     3,     3,     2,     3,     1,     4,     4,     4,
       3,     1,     2,     1,     3,     1,     3,     1,     3,     2,
       1,     1,     1,     3,     1,     1,     1,     1,     4,     3,
       1,     3,     1
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

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


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YYUSE (yyoutput);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yytype], *yyvaluep);
# endif
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyo, yytype, yyvaluep);
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp, int yyrule)
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
                       yystos[+yyssp[yyi + 1 - yynrhs]],
                       &yyvsp[(yyi + 1) - (yynrhs)]
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
#   define yystrlen(S) (YY_CAST (YYPTRDIFF_T, strlen (S)))
#  else
/* Return the length of YYSTR.  */
static YYPTRDIFF_T
yystrlen (const char *yystr)
{
  YYPTRDIFF_T yylen;
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
static YYPTRDIFF_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYPTRDIFF_T yyn = 0;
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
            else
              goto append;

          append:
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

  if (yyres)
    return yystpcpy (yyres, yystr) - yyres;
  else
    return yystrlen (yystr);
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
yysyntax_error (YYPTRDIFF_T *yymsg_alloc, char **yymsg,
                yy_state_t *yyssp, int yytoken)
{
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat: reported tokens (one for the "unexpected",
     one per "expected"). */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Actual size of YYARG. */
  int yycount = 0;
  /* Cumulated lengths of YYARG.  */
  YYPTRDIFF_T yysize = 0;

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
      int yyn = yypact[+*yyssp];
      YYPTRDIFF_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
      yysize = yysize0;
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
                  YYPTRDIFF_T yysize1
                    = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
                    yysize = yysize1;
                  else
                    return 2;
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
    default: /* Avoid compiler warnings. */
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    /* Don't count the "%s"s in the final size, but reserve room for
       the terminator.  */
    YYPTRDIFF_T yysize1 = yysize + (yystrlen (yyformat) - 2 * yycount) + 1;
    if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
      yysize = yysize1;
    else
      return 2;
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
          ++yyp;
          ++yyformat;
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
    yy_state_fast_t yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss;
    yy_state_t *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYPTRDIFF_T yystacksize;

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
  YYPTRDIFF_T yymsg_alloc = sizeof yymsgbuf;
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
# undef YYSTACK_RELOCATE
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
  case 2:
#line 68 "src/sin_analyser.y"
            { syntaxTree = (yyval.treeNode); }
#line 1908 "src/sin_analyser.tab.c"
    break;

  case 3:
#line 72 "src/sin_analyser.y"
                          {
        (yyval.treeNode) = newNode("PROGRAM");
        (yyval.treeNode)->subtree1 = (yyvsp[-1].treeNode);
        (yyval.treeNode)->subtree2 = (yyvsp[0].treeNode);
    }
#line 1918 "src/sin_analyser.tab.c"
    break;

  case 4:
#line 78 "src/sin_analyser.y"
                  { (yyval.treeNode) = (yyvsp[0].treeNode); }
#line 1924 "src/sin_analyser.tab.c"
    break;

  case 5:
#line 82 "src/sin_analyser.y"
               { (yyval.treeNode) = (yyvsp[-1].treeNode); }
#line 1930 "src/sin_analyser.tab.c"
    break;

  case 6:
#line 84 "src/sin_analyser.y"
              { (yyval.treeNode) = (yyvsp[0].treeNode); }
#line 1936 "src/sin_analyser.tab.c"
    break;

  case 7:
#line 86 "src/sin_analyser.y"
          { }
#line 1942 "src/sin_analyser.tab.c"
    break;

  case 8:
#line 90 "src/sin_analyser.y"
                                  {
        (yyval.treeNode) = newNode("FUNCTION");
        (yyval.treeNode)->subtree1 = (yyvsp[-6].treeNode);
        (yyval.treeNode)->subtree2 = (yyvsp[-4].treeNode);
        (yyval.treeNode)->subtree3 = (yyvsp[-1].treeNode);
    }
#line 1953 "src/sin_analyser.tab.c"
    break;

  case 9:
#line 97 "src/sin_analyser.y"
                           {
        (yyval.treeNode) = newNode("FUNCTION");
        (yyval.treeNode)->subtree1 = (yyvsp[-5].treeNode);
        (yyval.treeNode)->subtree2 = (yyvsp[-1].treeNode);
    }
#line 1963 "src/sin_analyser.tab.c"
    break;

  case 10:
#line 105 "src/sin_analyser.y"
                            {
        (yyval.treeNode) = newNode("PARAMS");
        (yyval.treeNode)->subtree1 = (yyvsp[-2].treeNode);
        (yyval.treeNode)->subtree2 = (yyvsp[0].treeNode);
    }
#line 1973 "src/sin_analyser.tab.c"
    break;

  case 11:
#line 111 "src/sin_analyser.y"
           { (yyval.treeNode) = (yyvsp[0].treeNode); }
#line 1979 "src/sin_analyser.tab.c"
    break;

  case 12:
#line 115 "src/sin_analyser.y"
            {
        newSymbol(table, (yyvsp[0].lex).id, (yyvsp[-1].lex).id, "VAR      ", (yyvsp[0].lex).line, (yyvsp[0].lex).col, scope);      
        (yyval.treeNode) = newNode(strcat(strcat((yyvsp[-1].lex).id," var "), (yyvsp[0].lex).id));
    }
#line 1988 "src/sin_analyser.tab.c"
    break;

  case 13:
#line 120 "src/sin_analyser.y"
                 {
        newSymbol(table, (yyvsp[0].lex).id, (yyvsp[-2].lex).id, "LIST VAR ",(yyvsp[0].lex).line, (yyvsp[0].lex).col, scope);
        (yyval.treeNode) = newNode(strcat(strcat((yyvsp[-2].lex).id," list "), (yyvsp[0].lex).id));
    }
#line 1997 "src/sin_analyser.tab.c"
    break;

  case 14:
#line 125 "src/sin_analyser.y"
          { }
#line 2003 "src/sin_analyser.tab.c"
    break;

  case 15:
#line 129 "src/sin_analyser.y"
            {
        scope++;
        newSymbol(table, (yyvsp[0].lex).id, (yyvsp[-1].lex).id, "FUNC     ", (yyvsp[0].lex).line, (yyvsp[0].lex).col, scope);
        (yyval.treeNode) = newNode(strcat(strcat((yyvsp[-1].lex).id," function "), (yyvsp[0].lex).id));
    }
#line 2013 "src/sin_analyser.tab.c"
    break;

  case 16:
#line 135 "src/sin_analyser.y"
                 {
        scope++;
        newSymbol(table, (yyvsp[-1].lex).id, (yyvsp[-2].lex).id, "LIST FUNC", (yyvsp[-1].lex).line, (yyvsp[-1].lex).col, scope);
        (yyval.treeNode) = newNode(strcat(strcat((yyvsp[-2].lex).id," function list "), (yyvsp[0].lex).id));
    }
#line 2023 "src/sin_analyser.tab.c"
    break;

  case 17:
#line 141 "src/sin_analyser.y"
          { }
#line 2029 "src/sin_analyser.tab.c"
    break;

  case 18:
#line 145 "src/sin_analyser.y"
                    {
        (yyval.treeNode) = newNode("BLOCK");
        (yyval.treeNode)->subtree1 = (yyvsp[-1].treeNode);
        (yyval.treeNode)->subtree2 = (yyvsp[0].treeNode);
    }
#line 2039 "src/sin_analyser.tab.c"
    break;

  case 19:
#line 151 "src/sin_analyser.y"
              { (yyval.treeNode) = (yyvsp[0].treeNode); }
#line 2045 "src/sin_analyser.tab.c"
    break;

  case 20:
#line 155 "src/sin_analyser.y"
             { (yyval.treeNode) = (yyvsp[-1].treeNode); }
#line 2051 "src/sin_analyser.tab.c"
    break;

  case 21:
#line 157 "src/sin_analyser.y"
              { (yyval.treeNode) = (yyvsp[-1].treeNode); }
#line 2057 "src/sin_analyser.tab.c"
    break;

  case 22:
#line 159 "src/sin_analyser.y"
                { (yyval.treeNode) = (yyvsp[-1].treeNode); }
#line 2063 "src/sin_analyser.tab.c"
    break;

  case 23:
#line 161 "src/sin_analyser.y"
             { (yyval.treeNode) = (yyvsp[0].treeNode); }
#line 2069 "src/sin_analyser.tab.c"
    break;

  case 24:
#line 163 "src/sin_analyser.y"
           {  }
#line 2075 "src/sin_analyser.tab.c"
    break;

  case 25:
#line 167 "src/sin_analyser.y"
            { (yyval.treeNode) = (yyvsp[0].treeNode); }
#line 2081 "src/sin_analyser.tab.c"
    break;

  case 26:
#line 169 "src/sin_analyser.y"
        { (yyval.treeNode) = (yyvsp[0].treeNode); }
#line 2087 "src/sin_analyser.tab.c"
    break;

  case 27:
#line 171 "src/sin_analyser.y"
               { (yyval.treeNode) = (yyvsp[-1].treeNode); }
#line 2093 "src/sin_analyser.tab.c"
    break;

  case 28:
#line 175 "src/sin_analyser.y"
              { (yyval.treeNode) = (yyvsp[0].treeNode); }
#line 2099 "src/sin_analyser.tab.c"
    break;

  case 29:
#line 177 "src/sin_analyser.y"
           { (yyval.treeNode) = (yyvsp[0].treeNode); }
#line 2105 "src/sin_analyser.tab.c"
    break;

  case 30:
#line 179 "src/sin_analyser.y"
          { (yyval.treeNode) = (yyvsp[0].treeNode); }
#line 2111 "src/sin_analyser.tab.c"
    break;

  case 31:
#line 181 "src/sin_analyser.y"
           { (yyval.treeNode) = (yyvsp[0].treeNode); }
#line 2117 "src/sin_analyser.tab.c"
    break;

  case 32:
#line 183 "src/sin_analyser.y"
            { (yyval.treeNode) = (yyvsp[0].treeNode); }
#line 2123 "src/sin_analyser.tab.c"
    break;

  case 33:
#line 185 "src/sin_analyser.y"
              { (yyval.treeNode) = (yyvsp[0].treeNode); }
#line 2129 "src/sin_analyser.tab.c"
    break;

  case 34:
#line 189 "src/sin_analyser.y"
             { (yyval.treeNode) = (yyvsp[0].treeNode); }
#line 2135 "src/sin_analyser.tab.c"
    break;

  case 35:
#line 191 "src/sin_analyser.y"
              { (yyval.treeNode) = (yyvsp[0].treeNode); }
#line 2141 "src/sin_analyser.tab.c"
    break;

  case 36:
#line 195 "src/sin_analyser.y"
                                            {
        (yyval.treeNode) = newNode("IF");
        (yyval.treeNode)->subtree1 = (yyvsp[-2].treeNode);
        (yyval.treeNode)->subtree2 = (yyvsp[0].treeNode);
    }
#line 2151 "src/sin_analyser.tab.c"
    break;

  case 37:
#line 201 "src/sin_analyser.y"
                                                {
        (yyval.treeNode) = newNode("IF ELSE");
        (yyval.treeNode)->subtree1 = (yyvsp[-4].treeNode);
        (yyval.treeNode)->subtree2 = (yyvsp[-2].treeNode);
        (yyval.treeNode)->subtree3 = (yyvsp[0].treeNode);
    }
#line 2162 "src/sin_analyser.tab.c"
    break;

  case 38:
#line 208 "src/sin_analyser.y"
             { }
#line 2168 "src/sin_analyser.tab.c"
    break;

  case 39:
#line 212 "src/sin_analyser.y"
                                                        {
        (yyval.treeNode) = newNode("FOR");
        (yyval.treeNode)->subtree1 = (yyvsp[-6].treeNode);
        (yyval.treeNode)->subtree2 = (yyvsp[-4].treeNode);
        (yyval.treeNode)->subtree3 = (yyvsp[-2].treeNode);
        (yyval.treeNode)->subtree4 = (yyvsp[0].treeNode);
    }
#line 2180 "src/sin_analyser.tab.c"
    break;

  case 40:
#line 220 "src/sin_analyser.y"
               {  }
#line 2186 "src/sin_analyser.tab.c"
    break;

  case 41:
#line 224 "src/sin_analyser.y"
                {
        (yyval.treeNode) = newNode("RETURN");
        (yyval.treeNode)->subtree1 = (yyvsp[0].treeNode);
    }
#line 2195 "src/sin_analyser.tab.c"
    break;

  case 42:
#line 231 "src/sin_analyser.y"
                   {
        (yyval.treeNode) = newNode("ASSIGN");
        (yyval.treeNode)->subtree1 = (yyvsp[-2].treeNode);
        (yyval.treeNode)->subtree2 = (yyvsp[0].treeNode);
    }
#line 2205 "src/sin_analyser.tab.c"
    break;

  case 43:
#line 239 "src/sin_analyser.y"
                     {
        (yyval.treeNode) = newNode("LIST OP");
        (yyval.treeNode)->subtree1 = (yyvsp[-2].treeNode);
        (yyval.treeNode)->subtree2 = (yyvsp[0].treeNode);
    }
#line 2215 "src/sin_analyser.tab.c"
    break;

  case 44:
#line 247 "src/sin_analyser.y"
                  {
        (yyval.treeNode) = newNode("LIST OP");
        (yyval.treeNode)->subtree1 = (yyvsp[0].treeNode);
    }
#line 2224 "src/sin_analyser.tab.c"
    break;

  case 45:
#line 254 "src/sin_analyser.y"
                      {
        (yyval.treeNode) = newNode("LIST FUNC");
        (yyval.treeNode)->subtree1 = (yyvsp[-2].treeNode);
        (yyval.treeNode)->subtree2 = (yyvsp[0].treeNode);
    }
#line 2234 "src/sin_analyser.tab.c"
    break;

  case 46:
#line 262 "src/sin_analyser.y"
           { (yyval.treeNode) = (yyvsp[0].treeNode); }
#line 2240 "src/sin_analyser.tab.c"
    break;

  case 47:
#line 266 "src/sin_analyser.y"
                {
        (yyval.treeNode) = newNode("IN");
        (yyval.treeNode)->subtree1 = (yyvsp[-1].treeNode);
    }
#line 2249 "src/sin_analyser.tab.c"
    break;

  case 48:
#line 273 "src/sin_analyser.y"
                  {
        (yyval.treeNode) = newNode("OUT");
        (yyval.treeNode)->subtree1 = (yyvsp[-1].treeNode);
    }
#line 2258 "src/sin_analyser.tab.c"
    break;

  case 49:
#line 278 "src/sin_analyser.y"
                        { 
        (yyval.treeNode) = newNode("OUT");
        (yyval.treeNode)->subtree1 = (yyvsp[-1].treeNode); 
    }
#line 2267 "src/sin_analyser.tab.c"
    break;

  case 50:
#line 285 "src/sin_analyser.y"
                           {
        (yyval.treeNode) = newNode("LOG OP");
        (yyval.treeNode)->subtree1 = (yyvsp[-2].treeNode);
        (yyval.treeNode)->subtree2 = (yyvsp[0].treeNode);
    }
#line 2277 "src/sin_analyser.tab.c"
    break;

  case 51:
#line 291 "src/sin_analyser.y"
            { (yyval.treeNode) = (yyvsp[0].treeNode); }
#line 2283 "src/sin_analyser.tab.c"
    break;

  case 52:
#line 295 "src/sin_analyser.y"
                   {
        (yyval.treeNode) = newNode("LOG OP");
        (yyval.treeNode)->subtree1 = (yyvsp[0].treeNode);
    }
#line 2292 "src/sin_analyser.tab.c"
    break;

  case 53:
#line 300 "src/sin_analyser.y"
           { (yyval.treeNode) = (yyvsp[0].treeNode); }
#line 2298 "src/sin_analyser.tab.c"
    break;

  case 54:
#line 304 "src/sin_analyser.y"
                         {
        (yyval.treeNode) = newNode("REL OP");
        (yyval.treeNode)->subtree1 = (yyvsp[-2].treeNode);
        (yyval.treeNode)->subtree2 = (yyvsp[0].treeNode);
    }
#line 2308 "src/sin_analyser.tab.c"
    break;

  case 55:
#line 310 "src/sin_analyser.y"
           { (yyval.treeNode) = (yyvsp[0].treeNode); }
#line 2314 "src/sin_analyser.tab.c"
    break;

  case 56:
#line 314 "src/sin_analyser.y"
                       {
        (yyval.treeNode) = newNode("ARI SS OP");
        (yyval.treeNode)->subtree1 = (yyvsp[-2].treeNode);
        (yyval.treeNode)->subtree2 = (yyvsp[0].treeNode);
    }
#line 2324 "src/sin_analyser.tab.c"
    break;

  case 57:
#line 320 "src/sin_analyser.y"
          { (yyval.treeNode) = (yyvsp[0].treeNode); }
#line 2330 "src/sin_analyser.tab.c"
    break;

  case 58:
#line 324 "src/sin_analyser.y"
                    {
        (yyval.treeNode) = newNode("ARI MD OP");
        (yyval.treeNode)->subtree1 = (yyvsp[-2].treeNode);
        (yyval.treeNode)->subtree2 = (yyvsp[0].treeNode);
    }
#line 2340 "src/sin_analyser.tab.c"
    break;

  case 59:
#line 330 "src/sin_analyser.y"
              {
        (yyval.treeNode) = newNode("NEGATIVE");
        (yyval.treeNode)->subtree1 = (yyvsp[0].treeNode);
    }
#line 2349 "src/sin_analyser.tab.c"
    break;

  case 60:
#line 335 "src/sin_analyser.y"
        { (yyval.treeNode) = (yyvsp[0].treeNode); }
#line 2355 "src/sin_analyser.tab.c"
    break;

  case 61:
#line 339 "src/sin_analyser.y"
       { (yyval.treeNode) = (yyvsp[0].treeNode); }
#line 2361 "src/sin_analyser.tab.c"
    break;

  case 62:
#line 341 "src/sin_analyser.y"
              { (yyval.treeNode) = (yyvsp[0].treeNode); }
#line 2367 "src/sin_analyser.tab.c"
    break;

  case 63:
#line 343 "src/sin_analyser.y"
                    { (yyval.treeNode) = (yyvsp[-1].treeNode); }
#line 2373 "src/sin_analyser.tab.c"
    break;

  case 64:
#line 345 "src/sin_analyser.y"
        { (yyval.treeNode) = newNode((yyvsp[0].lex).id); }
#line 2379 "src/sin_analyser.tab.c"
    break;

  case 65:
#line 347 "src/sin_analyser.y"
          { (yyval.treeNode) = newNode((yyvsp[0].lex).id); }
#line 2385 "src/sin_analyser.tab.c"
    break;

  case 66:
#line 349 "src/sin_analyser.y"
        { (yyval.treeNode) = newNode("NIL"); }
#line 2391 "src/sin_analyser.tab.c"
    break;

  case 67:
#line 351 "src/sin_analyser.y"
            { (yyval.treeNode) = newNode((yyvsp[0].lex).id); }
#line 2397 "src/sin_analyser.tab.c"
    break;

  case 68:
#line 355 "src/sin_analyser.y"
                         {
        (yyval.treeNode) = newNode("CALL");
        (yyval.treeNode)->subtree1 = (yyvsp[-3].treeNode);
        (yyval.treeNode)->subtree2 = (yyvsp[-1].treeNode);
    }
#line 2407 "src/sin_analyser.tab.c"
    break;

  case 69:
#line 361 "src/sin_analyser.y"
             {
        (yyval.treeNode) = newNode("CALL");
        (yyval.treeNode)->subtree2 = (yyvsp[-2].treeNode);
    }
#line 2416 "src/sin_analyser.tab.c"
    break;

  case 70:
#line 368 "src/sin_analyser.y"
       { (yyval.treeNode) = newNode((yyvsp[0].lex).id); }
#line 2422 "src/sin_analyser.tab.c"
    break;

  case 71:
#line 372 "src/sin_analyser.y"
                            {
        (yyval.treeNode) = newNode("PARAMS");
        (yyval.treeNode)->subtree1 = (yyvsp[-2].treeNode);
        (yyval.treeNode)->subtree2 = (yyvsp[0].treeNode);
    }
#line 2432 "src/sin_analyser.tab.c"
    break;

  case 72:
#line 378 "src/sin_analyser.y"
       { (yyval.treeNode) = (yyvsp[0].treeNode); }
#line 2438 "src/sin_analyser.tab.c"
    break;


#line 2442 "src/sin_analyser.tab.c"

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
            yymsg = YY_CAST (char *, YYSTACK_ALLOC (YY_CAST (YYSIZE_T, yymsg_alloc)));
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


/*-----------------------------------------------------.
| yyreturn -- parsing is finished, return the result.  |
`-----------------------------------------------------*/
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
                  yystos[+*yyssp], yyvsp);
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
#line 381 "src/sin_analyser.y"


int main(int argc, char **argv){
    printf("────────────────────────────────────────\n");
    printf("Syntax analysis in file '%s'", argv[1]);
    printf("\n────────────────────────────────────────");

    yyin = fopen(argv[1], "r");

    yyparse();

    printf("\n");
    printf("Syntax analysis finished with %d syntax errors and %d lexical errors.\n", sin_errors, lex_errors);
    
    if(!sin_errors){
        showTree(syntaxTree, 0);
    }

    showTable(table);
    destroyTree();

    fclose(yyin);
    yylex_destroy();

    return 0;
}

void yyerror(const char* error) {
    printf("\n%s [%d, %d]\n", error, line, col);
    sin_errors++;
}
