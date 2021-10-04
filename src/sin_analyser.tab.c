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
    extern void changeScope(int op);
    extern FILE *yyin;
    int stack[100];
    int scope_pos = 0;
    int scope = 0;
    int params = 0;
    int args_ret = 0;
    int args = 0;
    int main_found = 0;
    int sin_errors = 0;
    int sem_errors = 0;

#line 94 "src/sin_analyser.tab.c"

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
#line 30 "src/sin_analyser.y"

    /*Token structure*/
    struct lexToken {
        char id[200];
        int line;
        int col;
    } lex;
    /*Tree node reference*/
    struct treeNode* treeNode;

#line 188 "src/sin_analyser.tab.c"

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
#define YYLAST   2775

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  31
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  37
/* YYNRULES -- Number of rules.  */
#define YYNRULES  73
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  372

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
       0,    76,    76,    80,    86,    88,    92,    94,    98,   100,
      98,   144,   146,   144,   190,   197,   204,   213,   224,   234,
     246,   253,   255,   259,   261,   263,   263,   270,   274,   276,
     278,   282,   284,   286,   288,   290,   292,   296,   298,   302,
     308,   317,   327,   335,   378,   397,   410,   429,   433,   440,
     445,   452,   462,   466,   494,   498,   530,   534,   562,   566,
     594,   605,   609,   611,   613,   615,   617,   619,   621,   625,
     638,   652,   662,   669
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
  "$accept", "start", "program", "program_block", "func_dclr", "$@1",
  "$@2", "$@3", "$@4", "params", "declar", "func", "block", "statement",
  "$@5", "flow_ctr", "expr", "list_op", "if_else", "for", "return",
  "ass_op", "list_con", "list_oper", "list_func", "operation", "input",
  "output", "ulog_op", "log_op", "rel_op", "ari_op", "md_op", "val",
  "func_call", "id", "func_params", YY_NULLPTR
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

#define YYPACT_NINF (-205)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-74)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      27,    56,    24,     3,    82,    96,   204,   -19,    12,   224,
      46,  -205,   211,   235,    -1,   259,    55,    67,   376,   203,
     283,    49,   284,   126,    55,   107,   117,   295,   330,   134,
     812,   812,  1811,    57,  1105,  1037,   118,   141,   604,   150,
     157,   375,   159,  1138,   604,  1262,  1456,    19,    77,  1836,
    1861,  1886,   332,   558,  1911,  1936,   164,   176,   637,   683,
     880,   896,   911,  1014,  1077,   156,  1087,   245,  1394,  2388,
    2398,  1002,  1961,   186,    19,   219,  1104,  2408,   353,   236,
    2418,   409,  1221,   812,   184,   270,  1986,   604,   604,  2011,
    2036,  2061,   159,   159,   159,   375,   604,   393,  2428,   506,
     342,   234,   263,   266,   331,   274,   305,   326,  2086,  2438,
    1274,  1425,  2494,   372,  2448,  2458,  1429,  2468,  2261,  2211,
     143,  1462,  2214,  2239,  2111,   536,  1536,   335,  2236,   219,
    2136,   343,  2236,  2161,   438,  1176,  2664,  2669,  1338,   416,
     400,  2675,  2680,    19,   363,    39,    63,   306,  2686,  2691,
    2697,  2702,   737,   852,   481,   834,   367,   370,   465,   501,
     945,  2261,   979,    19,   711,   726,   791,   853,   956,   983,
    1010,  1251,  1284,   120,   621,   206,  1205,  1370,  2300,  2311,
     377,   387,   475,   398,  2286,   420,    19,   452,   470,   495,
    2261,  2261,   382,   482,  1456,  1561,  2264,  1586,  1611,   498,
     508,   137,   333,    -9,   632,   549,   444,   467,    19,   514,
       5,   108,   214,   479,   829,   872,   897,   516,  2505,   548,
     659,  2708,    89,   532,   400,   400,   400,   416,  1376,   555,
     771,   353,   236,  2322,   419,  1407,   540,   501,   501,   501,
     465,   924,  2493,  2504,   526,  2478,   542,   552,   723,   571,
    2515,  2286,  2526,    19,    91,   315,   413,   758,  1497,  1531,
    1556,  1581,  1606,  1631,   577,   679,  1244,  2537,  2548,  2559,
    2570,   554,  1498,  2249,    19,   219,   812,  1636,  1661,  1686,
    1484,  1064,    22,   556,   549,   549,   549,   632,  2286,  2516,
    2713,   383,  2719,   253,   314,  2724,  2730,  2274,  2333,   442,
     562,   563,   566,  2344,  2642,  1071,  2355,  2366,   568,   448,
    1656,   593,  1510,   353,   236,  2581,   662,  1681,   575,  2286,
    2286,   571,   571,   571,   723,   578,   585,   586,  2186,  1159,
     488,  1239,   153,   223,  1309,  1317,  1706,  2735,  2377,  2289,
    2734,  2745,   601,  1731,  2592,   489,   605,   612,   618,  2603,
    1756,  1781,  1206,  2653,  2614,  2625,  2211,   143,  1711,  1426,
    2636,  1806,  1831,  1856,  1736,   619,  2211,   219,  1761,   622,
    2211,  1786
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
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -205,  -205,  -205,   610,  -205,  -205,  -205,  -205,  -205,  -205,
      88,  -205,   -29,   -25,   458,  -106,    -3,   300,   -90,   -69,
     -51,   -60,   851,  1109,  1127,  1022,  1131,  1183,  1075,   381,
     927,   824,   669,   226,   484,   -30,  -204
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     3,     4,     5,     6,    16,    25,    17,    30,    19,
      48,     8,    49,    50,    83,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,   179,   100
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      71,    71,    72,    11,    -8,   -71,   -71,   -71,    77,   -71,
      13,    77,    77,   195,    77,   103,   291,   151,   280,    71,
     -71,   284,   136,   137,    86,   138,   299,   -11,     1,   197,
       9,    10,     2,   139,   -52,    76,   140,   309,   284,    14,
     141,    82,    71,   142,   151,   104,   143,    86,   188,   107,
     198,   -51,    15,    71,   108,   224,    -5,    77,    77,   200,
      18,    -5,    77,    77,    77,    77,    77,   -52,   199,   131,
      99,   -65,   -65,   -65,    26,   -65,   330,   -65,    71,   -54,
     -65,   225,    -2,    86,   110,   111,   -65,     2,     7,    71,
     216,   -54,     7,   116,   126,    21,    -4,   -32,    71,   217,
     -32,    -4,    71,   130,    20,   224,   -32,   133,   345,   151,
     151,   -32,    28,   151,   -32,   125,   196,   -51,   -12,   -32,
     -12,   -12,   -12,   -12,   -54,   -12,   285,   -12,   -12,   -12,
     -12,   -12,    27,   151,   -12,    29,   237,   -54,   -12,   -12,
     -52,   -12,   -12,   -52,   -12,    74,   201,   202,   -52,   203,
     -52,   -65,   -65,   -65,   270,   -65,   151,   204,   235,    31,
     205,   164,    33,    34,   206,   135,   -65,   207,    75,   -53,
     208,   285,    92,    41,   216,   216,   -52,    78,   151,   -52,
      43,   255,   -53,    45,    79,   -52,    47,   272,   273,   152,
     153,   154,   155,    90,   151,   151,   151,   151,   156,   157,
     158,   188,   302,   159,    -7,    91,   164,   160,   161,    -7,
     162,    -3,   109,   163,    98,   327,    -3,    99,   270,   270,
     239,   270,   -56,   151,   -56,   102,   -56,    99,   286,   -56,
     -56,    -9,   -56,    24,   -56,    -6,   -56,   286,    99,   -55,
      -6,   -55,   189,   -56,   151,   104,    71,   328,   317,   164,
     195,   -18,   -55,   -16,   216,   216,   216,   216,   270,    94,
     195,   -56,   119,   -56,   195,   -56,   197,    80,   -56,   -53,
     -13,   225,   254,   149,   -56,   -13,   197,    99,   164,   164,
     197,   -53,   -71,   188,   348,   336,   -19,   198,   -17,   270,
     270,   270,   270,   270,   270,   120,   200,   198,    71,   177,
     149,   198,   121,    86,   106,   199,   200,   369,   164,    99,
     200,   -15,   -16,   -15,   -16,   199,   350,   351,   164,   199,
     226,   115,   -56,   -17,   -56,   -17,    71,   216,   226,   164,
     -55,   364,   -55,   122,   -56,   319,    71,   217,   320,   254,
      71,   368,   -55,   -45,   177,   371,   214,   -66,   -66,   -66,
      96,   -66,    87,   196,   123,    88,   180,   181,   -14,   182,
     -14,    89,   -66,   196,   129,   221,   149,   196,   164,   149,
     117,   132,   118,   165,   183,   184,   254,   185,    33,    34,
     186,   135,    22,    23,   233,   177,    94,   177,   -55,   149,
     -55,   -47,   -55,   -10,   231,   -55,    43,   232,   -10,    45,
     164,   -55,    47,   136,   137,   -65,   138,   254,   254,   274,
     268,   337,   149,   118,   139,   -66,   177,   177,   165,   136,
     137,   141,   138,    81,   142,    92,   -67,   143,   145,   -51,
     281,   214,   -51,   -35,   149,   237,   -35,   141,   -51,   -51,
     142,   -35,   -51,   143,   218,   219,   177,   -51,   -68,   -51,
     149,   149,   149,   296,   173,   145,   177,   301,   -67,   -67,
     -67,   165,   -67,   177,   177,   177,   307,   177,   152,   153,
     338,   155,   118,   -67,   315,   268,   342,   268,   118,   149,
     -63,   -68,   -68,   -68,   256,   -68,   160,   228,   229,   162,
     165,   165,   163,   -58,   287,   -58,   -68,   -58,   -62,   173,
     149,   210,   241,   -71,   152,   153,   177,   155,   -58,   275,
     214,   214,   214,   335,   268,   158,   359,   360,   118,   118,
     165,   222,   160,   -71,   145,   162,   190,   278,   163,   191,
     165,   150,   310,   311,   -73,   288,   -73,   279,   177,   347,
     234,   165,   173,   -47,   145,   268,   268,   268,   268,   268,
     355,   256,   201,   202,   289,   203,   190,   178,   150,   191,
     292,   297,   187,   204,   -72,   264,   -72,   145,   303,   313,
     206,   173,   173,   207,   242,   243,   208,   245,   -35,   314,
     165,   -35,   325,   214,   331,   248,   282,   -35,   256,   145,
     339,   340,   250,   321,   341,   252,   -70,   -52,   253,   343,
     -52,   173,   178,   349,   215,   -52,   -64,    33,    34,   134,
     135,   173,   165,   356,    12,   357,    39,    40,    41,   256,
     256,    42,   173,   150,   150,    43,    44,   150,    45,   -69,
     316,    47,   264,   361,   145,   201,   202,   -54,   203,   238,
     362,   -54,   178,   178,   -54,   178,   363,   150,   367,   -54,
     370,   -54,   276,   206,     0,   145,   207,   -37,     0,   208,
     -37,   173,   152,   153,   154,   155,   -37,     0,   269,   264,
     150,   156,   157,   158,   178,   178,   159,     0,   321,     0,
     160,   161,   -51,   162,     0,   -51,   163,   290,   215,   215,
     -51,     0,   150,   173,     0,   -54,     0,   322,     0,   -54,
     264,   264,   -54,   -38,   178,     0,   -38,   -54,   150,   150,
     150,   150,   -38,     0,   178,   187,   148,     0,     0,     0,
       0,   178,   178,   178,   178,   178,   242,   243,     0,   245,
       0,   -32,   269,   269,   -32,   269,     0,   150,   210,   -32,
       0,   -32,   176,   148,   250,     0,   -35,   252,     0,   -35,
     253,   -65,   -65,   -65,   -35,   -65,   -35,   -65,   150,     0,
     -65,     0,     0,   114,   178,   -65,     0,   -65,   215,   215,
     215,   215,   269,     0,   152,   153,   154,   155,   -37,     0,
       0,   -37,     0,   156,   157,   158,   -37,   176,   159,   213,
       0,     0,   160,   161,     0,   162,   178,   187,   163,   298,
       0,     0,     0,   269,   269,   269,   269,   269,   269,   148,
       0,   -37,   148,    32,   -37,    33,    34,   134,    35,   -37,
      36,   -37,    37,    38,    39,    40,    41,     0,   176,    42,
     176,     0,   148,    43,    44,     0,    45,    46,     0,    47,
       0,   215,     0,   -61,   -61,   -61,     0,   -61,   -71,   -71,
     -71,     0,   -71,   267,   -71,   148,     0,   -71,   -61,   176,
     176,   230,   -71,     0,   -71,     0,   -66,   -66,   -66,     0,
     -66,   147,   -66,   -38,   213,   -66,   -38,   148,     0,     0,
     -66,   -38,   -66,   -38,     0,     0,   -63,   -63,   -63,   176,
     -63,     0,     0,   148,   148,   295,     0,   175,   147,   176,
     -36,   -63,     0,   -36,     0,     0,   176,   176,   306,   -36,
     176,   -62,   -62,   -62,     0,   -62,   -31,   113,   267,   -31,
     267,     0,   148,     0,   166,   -31,   -62,   152,   153,   154,
     155,   -33,     0,     0,   -33,     0,   156,   157,   158,     0,
     -33,   159,   175,   148,   212,   160,   161,     0,   162,   176,
       0,   163,   308,   213,   213,   334,     0,   267,     0,   -67,
     -67,   -67,     0,   -67,   147,   -67,     0,   147,   -67,   166,
       0,     0,     0,   -67,   146,   -67,   -36,     0,     0,   -36,
       0,   176,     0,   175,   -36,   175,   -36,   147,   267,   267,
     267,   267,   354,   -68,   -68,   -68,     0,   -68,     0,   -68,
     174,   146,   -68,   -31,     0,     0,   -31,   -68,   266,   -68,
     147,   -31,   166,   -31,   175,   175,   -62,   -62,   -62,   112,
     -62,    96,   -62,     0,     0,   -62,   213,     0,     0,   212,
     -33,   -62,   147,   -33,   -34,   257,     0,   -34,   -33,     0,
     -33,   166,   166,   -34,   175,   174,     0,   211,   147,   294,
       0,   -71,   -71,   -71,   175,   -71,   -71,   -71,     0,     0,
     -71,   175,   305,     0,    73,   175,   -71,   146,     0,    84,
     146,   166,     0,   266,     0,   266,     0,   147,   -60,   -60,
     -60,   166,   -60,     0,     0,   239,   174,   -55,   174,   -55,
     146,   -55,   166,   -60,   -55,   169,   101,   -47,   147,   -55,
     -47,   -55,   257,   -54,   175,    93,   -47,   -54,   212,   333,
     -54,   265,   266,   146,     0,     0,   -54,   174,   174,   -66,
     -66,   -66,   144,   -66,    87,   -66,     0,    88,   -66,     0,
       0,   166,   211,   -42,   -66,   146,   175,     0,     0,   257,
     169,     0,   127,   266,   266,   266,   353,   174,   172,   144,
       0,   293,   -67,   -67,   -67,     0,   -67,   174,   -67,     0,
       0,   -67,     0,   166,   304,   223,     0,   -67,   174,     0,
     257,   257,     0,   -70,   -70,   -70,   265,   -70,   265,     0,
     146,   212,   167,   169,     0,   236,     0,   105,   -70,     0,
     -71,   -71,   -71,   172,   -71,   209,   -71,     0,     0,   -71,
     168,   146,     0,    73,   170,   -71,   260,   174,   271,     0,
       0,   332,   169,   169,     0,   265,     0,     0,   144,   -58,
     240,   -58,   -53,   -58,   322,   -58,   -53,   167,   -58,   -53,
     283,     0,     0,   -58,   -53,   -58,   172,     0,   144,   174,
       0,   -45,   169,     0,   -45,   168,   265,   265,   352,   170,
     -45,     0,   169,   -64,   -64,   -64,   171,   -64,   323,   263,
     -56,   144,   -56,   169,   -56,   172,   172,   -56,   -64,     0,
     167,   -34,   -56,   260,   -34,   318,   -68,   -68,   -68,   -34,
     -68,   -34,   -68,   144,   211,   -68,     0,     0,   168,     0,
       0,   -68,   170,   258,    87,   172,   326,    88,     0,   167,
     167,   171,   169,   -46,   -47,   172,     0,   -47,     0,     0,
     260,   259,   -47,     0,   -47,   261,   172,   168,   168,     0,
       0,   170,   170,   -57,   287,   -57,   263,   -57,   144,   167,
       0,   -59,   -59,   -59,   169,   -59,     0,     0,   -57,   167,
     300,   260,   260,     0,   171,     0,   -59,   168,     0,   144,
     167,   170,   -71,   -71,   -71,   172,   -71,   168,     0,     0,
     258,   170,     0,   263,     0,   220,   -71,   262,   168,     0,
       0,     0,   170,   171,   171,     0,     0,     0,   259,   365,
       0,     0,   261,     0,   -61,   -61,   -61,   172,   -61,   167,
     -61,     0,     0,   -61,   263,   263,   -16,   258,   -61,   -16,
     -61,     0,     0,   171,   -16,     0,   -16,   168,   -58,    95,
     -58,   170,   -58,   171,   -58,   259,     0,   -58,     0,   261,
       0,   167,   346,   -58,   171,     0,     0,   -45,   258,   258,
     -45,     0,   209,     0,   262,   -45,     0,   -45,     0,   168,
     -69,   -69,   -69,   170,   -69,   -44,   259,   259,    88,    87,
     261,   261,    88,     0,   -44,   -69,     0,   -25,   -43,   -25,
     -25,   -25,   -25,   171,   -25,     0,   -25,   -25,   -25,   -25,
     -25,   262,     0,   -25,     0,     0,     0,   -25,   -25,     0,
     -25,   -25,   -50,   -25,     0,   -50,     0,   152,   153,   154,
     155,   -50,     0,     0,     0,   171,   156,   157,   158,     0,
       0,   159,   262,   262,     0,   160,   161,     0,   162,     0,
       0,   163,   329,   152,   153,   154,   155,   -38,   190,     0,
     -38,   191,   156,   157,   158,   -38,   -46,   159,   -46,     0,
       0,   160,   161,     0,   162,     0,     0,   163,   344,   -39,
     -39,   -39,   -39,     0,   -39,   128,   -39,   -39,   -39,   -39,
     -39,   -36,     0,   -39,   -36,     0,     0,   -39,   -39,   -36,
     -39,   -39,   -39,   -39,   -27,   -27,   -27,   -27,     0,   -27,
     -27,   -27,   -27,   -27,   -27,   -27,   -31,     0,   -27,   -31,
       0,     0,   -27,   -27,   -31,   -27,   -27,   -27,   -27,   -28,
     -28,   -28,   -28,     0,   -28,   -28,   -28,   -28,   -28,   -28,
     -28,   -33,     0,   -28,   -33,     0,     0,   -28,   -28,   -33,
     -28,   -28,   -28,   -28,   -29,   -29,   -29,   -29,     0,   -29,
     -29,   -29,   -29,   -29,   -29,   -29,   -34,     0,   -29,   -34,
       0,     0,   -29,   -29,   -34,   -29,   -29,   -29,   -29,   -23,
     -23,   -23,   -23,     0,   -23,   -23,   -23,   -23,   -23,   -23,
     -23,   -47,     0,   -23,   -47,     0,     0,   -23,   -23,   -47,
     -23,   -23,   -23,   -23,   -30,   -30,   -30,   -30,     0,   -30,
     -30,   -30,   -30,   -30,   -30,   -30,   -16,     0,   -30,   -16,
       0,     0,   -30,   -30,   -16,   -30,   -30,   -30,   -30,   -24,
     -24,   -24,   -24,     0,   -24,   -24,   -24,   -24,   -24,   -24,
     -24,   -45,     0,   -24,   -45,     0,     0,   -24,   -24,   -45,
     -24,   -24,   -24,   -24,   -26,   -26,   -26,   -26,     0,   -26,
     -26,   -26,   -26,   -26,   -26,   -26,   319,     0,   -26,   320,
       0,     0,   -26,   -26,   -43,   -26,   -26,   -26,   -26,   -39,
     -39,   -39,   -39,     0,   -39,   366,   -39,   -39,   -39,   -39,
     -39,   -17,     0,   -39,   -17,     0,     0,   -39,   -39,   -17,
     -39,   -39,   -39,   -39,   -40,   -40,   -40,   -40,     0,   -40,
     -40,   -40,   -40,   -40,   -40,   -40,   319,     0,   -40,   320,
       0,     0,   -40,   -40,   -46,   -40,   -40,   -40,   -40,   -41,
     -41,   -41,   -41,     0,   -41,   -41,   -41,   -41,   -41,   -41,
     -41,   -44,     0,   -41,   320,     0,     0,   -41,   -41,   -44,
     -41,   -41,   -41,   -41,   -22,   -22,   -22,   -22,     0,   -22,
       0,   -22,   -22,   -22,   -22,   -22,   -50,     0,   -22,   -50,
       0,     0,   -22,   -22,   -50,   -22,   -22,   -22,   -22,    33,
      34,   134,    35,     0,    36,     0,    37,    38,    39,    40,
      41,   -49,     0,    42,   -49,     0,     0,    43,    44,   -49,
      45,    46,    85,    47,   -21,   -21,   -21,   -21,     0,   -21,
       0,   -21,   -21,   -21,   -21,   -21,   -48,     0,   -21,   -48,
       0,     0,   -21,   -21,   -48,   -21,   -21,   -21,   -21,   -27,
     -27,   -27,   -27,     0,   -27,     0,   -27,   -27,   -27,   -27,
     -27,     0,     0,   -27,     0,     0,     0,   -27,   -27,     0,
     -27,   -27,   -27,   -27,   -28,   -28,   -28,   -28,     0,   -28,
       0,   -28,   -28,   -28,   -28,   -28,     0,     0,   -28,     0,
       0,     0,   -28,   -28,     0,   -28,   -28,   -28,   -28,   -29,
     -29,   -29,   -29,     0,   -29,     0,   -29,   -29,   -29,   -29,
     -29,     0,     0,   -29,     0,     0,     0,   -29,   -29,     0,
     -29,   -29,   -29,   -29,    33,    34,   134,    35,     0,    36,
       0,    37,    38,    39,    40,    41,     0,     0,    42,     0,
       0,     0,    43,    44,     0,    45,    46,    97,    47,   -20,
     -20,   -20,   -20,     0,   -20,     0,   -20,   -20,   -20,   -20,
     -20,     0,     0,   -20,     0,     0,     0,   -20,   -20,     0,
     -20,   -20,   -20,   -20,   -23,   -23,   -23,   -23,     0,   -23,
       0,   -23,   -23,   -23,   -23,   -23,     0,     0,   -23,     0,
       0,     0,   -23,   -23,     0,   -23,   -23,   -23,   -23,   -30,
     -30,   -30,   -30,     0,   -30,     0,   -30,   -30,   -30,   -30,
     -30,     0,     0,   -30,     0,     0,     0,   -30,   -30,     0,
     -30,   -30,   -30,   -30,   -24,   -24,   -24,   -24,     0,   -24,
       0,   -24,   -24,   -24,   -24,   -24,     0,     0,   -24,     0,
       0,     0,   -24,   -24,     0,   -24,   -24,   -24,   -24,    33,
      34,   134,    35,     0,    36,     0,    37,    38,    39,    40,
      41,     0,     0,    42,     0,     0,     0,    43,    44,     0,
      45,    46,   124,    47,   -26,   -26,   -26,   -26,     0,   -26,
       0,   -26,   -26,   -26,   -26,   -26,     0,     0,   -26,     0,
       0,     0,   -26,   -26,     0,   -26,   -26,   -26,   -26,   -40,
     -40,   -40,   -40,     0,   -40,     0,   -40,   -40,   -40,   -40,
     -40,     0,     0,   -40,     0,     0,     0,   -40,   -40,     0,
     -40,   -40,   -40,   -40,   -41,   -41,   -41,   -41,     0,   -41,
       0,   -41,   -41,   -41,   -41,   -41,     0,     0,   -41,     0,
       0,     0,   -41,   -41,     0,   -41,   -41,   -41,   -41,    33,
      34,   134,    35,     0,    36,     0,    37,    38,    39,    40,
      41,     0,     0,    42,     0,     0,     0,    43,    44,     0,
      45,    46,   358,    47,    33,    34,   134,    35,     0,   192,
       0,   193,    38,    39,    40,    41,     0,     0,    42,     0,
       0,     0,    43,    44,   -49,    45,   194,   -49,    47,    33,
      34,   134,    35,   -49,    36,     0,    37,    38,    39,    40,
      41,     0,     0,    42,     0,     0,     0,    43,    44,   -48,
      45,    46,   -48,    47,   152,   153,   154,   155,   -48,   -44,
       0,     0,   191,   156,   157,   158,     0,   -44,   159,   -44,
       0,     0,   160,   161,    87,   162,     0,    88,   163,   242,
     243,   244,   245,   277,   -17,     0,     0,   -17,   246,   247,
     248,     0,   -17,   249,   -17,     0,     0,   250,   251,   -50,
     252,     0,   -50,   253,   -63,   -63,   -63,   -50,   -63,   -50,
     -63,     0,     0,   -63,     0,   -62,   -62,   -62,   -63,   -62,
     -63,   -62,     0,     0,   -62,     0,   -60,   -60,   -60,   -62,
     -60,   -62,   -60,     0,     0,   -60,     0,   -70,   -70,   -70,
     -60,   -70,   -60,   -70,     0,     0,   -70,     0,   -64,   -64,
     -64,   -70,   -64,   -70,   -64,     0,     0,   -64,     0,   -57,
     240,   -57,   -64,   -57,   -64,   -57,     0,     0,   -57,     0,
     -59,   -59,   -59,   -57,   -59,   -57,   -59,     0,     0,   -59,
       0,   -69,   -69,   -69,   -59,   -69,   -59,   -69,     0,     0,
     -69,     0,   -61,   -61,   -61,   -69,   -61,   -69,   -61,     0,
       0,   -61,   -63,   -63,   -63,     0,   -63,   -61,   -63,     0,
       0,   -63,   -62,   -62,   -62,     0,   -62,   -63,   -62,     0,
       0,   -62,   -60,   -60,   -60,     0,   -60,   -62,   -60,     0,
       0,   -60,   -70,   -70,   -70,     0,   -70,   -60,   -70,     0,
       0,   -70,   -64,   -64,   -64,     0,   -64,   -70,   -64,     0,
       0,   -64,   -57,    95,   -57,     0,   -57,   -64,   -57,     0,
       0,   -57,   -59,   -59,   -59,     0,   -59,   -57,   -59,     0,
       0,   -59,   -69,   -69,   -69,     0,   -69,   -59,   -69,     0,
       0,   -69,   -71,   -71,   -71,     0,   -71,   -69,   -71,     0,
       0,   -71,     0,     0,     0,   312,   -71,   -65,   -65,   -65,
     -53,   -65,    93,   -65,   -53,     0,   -65,   -53,   -66,   -66,
     -66,   -65,   -66,   -53,   -66,   -16,     0,   -66,   -16,   -67,
     -67,   -67,   -66,   -67,   -16,   -67,   -17,     0,   -67,   -17,
     -68,   -68,   -68,   -67,   -68,   -17,   -68,     0,     0,   -68,
       0,   -58,   324,   -58,   -68,   -58,     0,   -58,     0,     0,
     -58,     0,   -61,   -61,   -61,   -58,   -61,     0,   -61,     0,
       0,   -61,     0,   -63,   -63,   -63,   -61,   -63,     0,   -63,
       0,     0,   -63,     0,   -62,   -62,   -62,   -63,   -62,     0,
     -62,     0,     0,   -62,     0,   -60,   -60,   -60,   -62,   -60,
       0,   -60,     0,     0,   -60,     0,   -70,   -70,   -70,   -60,
     -70,     0,   -70,     0,     0,   -70,     0,   -64,   -64,   -64,
     -70,   -64,     0,   -64,     0,     0,   -64,     0,   -57,   324,
     -57,   -64,   -57,     0,   -57,     0,     0,   -57,     0,   -59,
     -59,   -59,   -57,   -59,     0,   -59,     0,     0,   -59,     0,
     -69,   -69,   -69,   -59,   -69,     0,   -69,     0,   -53,   -69,
     238,     0,   -53,     0,   -69,   -53,     0,   323,     0,   -55,
     -53,   -55,   -53,   -55,     0,     0,   -55,     0,   -65,   -65,
     -65,   -55,   -65,   -66,   -66,   -66,     0,   -66,     0,   -67,
     -67,   -67,   -65,   -67,   -68,   -68,   -68,   -66,   -68,     0,
     -58,   227,   -58,   -67,   -58,   -61,   -61,   -61,   -68,   -61,
       0,   -63,   -63,   -63,   -58,   -63,   -62,   -62,   -62,   -61,
     -62,     0,   -60,   -60,   -60,   -63,   -60,   -70,   -70,   -70,
     -62,   -70,     0,   -64,   -64,   -64,   -60,   -64,   -57,   227,
     -57,   -70,   -57,     0,   -59,   -59,   -59,   -64,   -59,   -69,
     -69,   -69,   -57,   -69,   -49,     0,     0,   -49,   -59,     0,
       0,     0,   -49,   -69,   -49,   -48,     0,     0,   -48,     0,
       0,     0,     0,   -48,     0,   -48
};

static const yytype_int16 yycheck[] =
{
      30,    31,    31,     0,     5,    14,    15,    16,    38,    18,
      29,    41,    42,   119,    44,    75,   220,    47,    27,    49,
      29,    16,     3,     4,    49,     6,   230,    28,     1,   119,
       6,     7,     5,    14,    29,    38,    17,   241,    16,    27,
      21,    44,    72,    24,    74,    75,    27,    72,    78,    79,
     119,    29,     6,    83,    83,    16,     0,    87,    88,   119,
       5,     5,    92,    93,    94,    95,    96,    28,   119,   129,
      73,    14,    15,    16,    25,    18,   280,    20,   108,    16,
      23,    18,     0,   108,    87,    88,    29,     5,     0,   119,
     120,    28,     4,    96,   119,    28,     0,    20,   128,   129,
      23,     5,   132,   128,    16,    16,    29,   132,   312,   139,
     140,    20,    24,   143,    23,   118,   119,    28,     1,    28,
       3,     4,     5,     6,    16,     8,    18,    10,    11,    12,
      13,    14,     6,   163,    17,    28,    16,    29,    21,    22,
      20,    24,    25,    23,    27,    27,     3,     4,    28,     6,
      30,    14,    15,    16,   184,    18,   186,    14,   161,    25,
      17,    73,     3,     4,    21,     6,    29,    24,    27,    16,
      27,    18,    16,    14,   204,   205,    20,    27,   208,    23,
      21,   184,    29,    24,    27,    29,    27,   190,   191,     3,
       4,     5,     6,    29,   224,   225,   226,   227,    12,    13,
      14,   231,   232,    17,     0,    29,   118,    21,    22,     5,
      24,     0,    28,    27,    28,   275,     5,   220,   248,   249,
      14,   251,    16,   253,    18,     6,    20,   230,    14,    23,
      16,    28,    18,    30,    28,     0,    30,    14,   241,    16,
       5,    18,     6,    29,   274,   275,   276,   276,   251,   161,
     356,    27,    29,    29,   284,   285,   286,   287,   288,    14,
     366,    16,    28,    18,   370,    20,   356,    41,    23,    16,
       0,    18,   184,    47,    29,     5,   366,   280,   190,   191,
     370,    28,    19,   313,   314,   288,    27,   356,    29,   319,
     320,   321,   322,   323,   324,    29,   356,   366,   328,    73,
      74,   370,    28,   328,    78,   356,   366,   367,   220,   312,
     370,    28,    28,    30,    30,   366,   319,   320,   230,   370,
      14,    95,    16,    28,    18,    30,   356,   357,    14,   241,
      16,   356,    18,    28,    28,    20,   366,   367,    23,   251,
     370,   366,    28,    28,   118,   370,   120,    14,    15,    16,
      19,    18,    20,   356,    28,    23,     3,     4,    28,     6,
      30,    29,    29,   366,    29,   139,   140,   370,   280,   143,
      28,    28,    30,    73,    21,    22,   288,    24,     3,     4,
      27,     6,     6,     7,   158,   159,    14,   161,    16,   163,
      18,    28,    20,     0,    27,    23,    21,    27,     5,    24,
     312,    29,    27,     3,     4,    28,     6,   319,   320,    27,
     184,    28,   186,    30,    14,    28,   190,   191,   118,     3,
       4,    21,     6,    42,    24,    16,    28,    27,    47,    20,
     204,   205,    23,    20,   208,    16,    23,    21,    29,    20,
      24,    28,    23,    27,     6,     7,   220,    28,    28,    30,
     224,   225,   226,   227,    73,    74,   230,   231,    14,    15,
      16,   161,    18,   237,   238,   239,   240,   241,     3,     4,
      28,     6,    30,    29,   248,   249,    28,   251,    30,   253,
      28,    14,    15,    16,   184,    18,    21,     6,     7,    24,
     190,   191,    27,    14,    15,    16,    29,    18,    28,   118,
     274,   120,    27,    28,     3,     4,   280,     6,    29,    27,
     284,   285,   286,   287,   288,    14,    28,    28,    30,    30,
     220,   140,    21,    28,   143,    24,    20,    29,    27,    23,
     230,    47,     6,     7,    28,    19,    30,    29,   312,   313,
     159,   241,   161,    29,   163,   319,   320,   321,   322,   323,
     324,   251,     3,     4,     6,     6,    20,    73,    74,    23,
      28,     6,    78,    14,    28,   184,    30,   186,    28,    27,
      21,   190,   191,    24,     3,     4,    27,     6,    20,    27,
     280,    23,    28,   357,    28,    14,   205,    29,   288,   208,
      28,    28,    21,    16,    28,    24,    28,    20,    27,     6,
      23,   220,   118,    28,   120,    28,    28,     3,     4,     5,
       6,   230,   312,    28,     4,    29,    12,    13,    14,   319,
     320,    17,   241,   139,   140,    21,    22,   143,    24,    28,
     249,    27,   251,    28,   253,     3,     4,    16,     6,    18,
      28,    20,   158,   159,    23,   161,    28,   163,    29,    28,
      28,    30,   194,    21,    -1,   274,    24,    20,    -1,    27,
      23,   280,     3,     4,     5,     6,    29,    -1,   184,   288,
     186,    12,    13,    14,   190,   191,    17,    -1,    16,    -1,
      21,    22,    20,    24,    -1,    23,    27,    28,   204,   205,
      28,    -1,   208,   312,    -1,    16,    -1,    18,    -1,    20,
     319,   320,    23,    20,   220,    -1,    23,    28,   224,   225,
     226,   227,    29,    -1,   230,   231,    47,    -1,    -1,    -1,
      -1,   237,   238,   239,   240,   241,     3,     4,    -1,     6,
      -1,    20,   248,   249,    23,   251,    -1,   253,   357,    28,
      -1,    30,    73,    74,    21,    -1,    20,    24,    -1,    23,
      27,    14,    15,    16,    28,    18,    30,    20,   274,    -1,
      23,    -1,    -1,    94,   280,    28,    -1,    30,   284,   285,
     286,   287,   288,    -1,     3,     4,     5,     6,    20,    -1,
      -1,    23,    -1,    12,    13,    14,    28,   118,    17,   120,
      -1,    -1,    21,    22,    -1,    24,   312,   313,    27,    28,
      -1,    -1,    -1,   319,   320,   321,   322,   323,   324,   140,
      -1,    20,   143,     1,    23,     3,     4,     5,     6,    28,
       8,    30,    10,    11,    12,    13,    14,    -1,   159,    17,
     161,    -1,   163,    21,    22,    -1,    24,    25,    -1,    27,
      -1,   357,    -1,    14,    15,    16,    -1,    18,    14,    15,
      16,    -1,    18,   184,    20,   186,    -1,    23,    29,   190,
     191,    27,    28,    -1,    30,    -1,    14,    15,    16,    -1,
      18,    47,    20,    20,   205,    23,    23,   208,    -1,    -1,
      28,    28,    30,    30,    -1,    -1,    14,    15,    16,   220,
      18,    -1,    -1,   224,   225,   226,    -1,    73,    74,   230,
      20,    29,    -1,    23,    -1,    -1,   237,   238,   239,    29,
     241,    14,    15,    16,    -1,    18,    20,    93,   249,    23,
     251,    -1,   253,    -1,    73,    29,    29,     3,     4,     5,
       6,    20,    -1,    -1,    23,    -1,    12,    13,    14,    -1,
      29,    17,   118,   274,   120,    21,    22,    -1,    24,   280,
      -1,    27,    28,   284,   285,   286,    -1,   288,    -1,    14,
      15,    16,    -1,    18,   140,    20,    -1,   143,    23,   118,
      -1,    -1,    -1,    28,    47,    30,    20,    -1,    -1,    23,
      -1,   312,    -1,   159,    28,   161,    30,   163,   319,   320,
     321,   322,   323,    14,    15,    16,    -1,    18,    -1,    20,
      73,    74,    23,    20,    -1,    -1,    23,    28,   184,    30,
     186,    28,   161,    30,   190,   191,    14,    15,    16,    92,
      18,    19,    20,    -1,    -1,    23,   357,    -1,    -1,   205,
      20,    29,   208,    23,    20,   184,    -1,    23,    28,    -1,
      30,   190,   191,    29,   220,   118,    -1,   120,   224,   225,
      -1,    14,    15,    16,   230,    18,    19,    20,    -1,    -1,
      23,   237,   238,    -1,    27,   241,    29,   140,    -1,    47,
     143,   220,    -1,   249,    -1,   251,    -1,   253,    14,    15,
      16,   230,    18,    -1,    -1,    14,   159,    16,   161,    18,
     163,    20,   241,    29,    23,    73,    74,    20,   274,    28,
      23,    30,   251,    16,   280,    18,    29,    20,   284,   285,
      23,   184,   288,   186,    -1,    -1,    29,   190,   191,    14,
      15,    16,    47,    18,    20,    20,    -1,    23,    23,    -1,
      -1,   280,   205,    29,    29,   208,   312,    -1,    -1,   288,
     118,    -1,   120,   319,   320,   321,   322,   220,    73,    74,
      -1,   224,    14,    15,    16,    -1,    18,   230,    20,    -1,
      -1,    23,    -1,   312,   237,   143,    -1,    29,   241,    -1,
     319,   320,    -1,    14,    15,    16,   249,    18,   251,    -1,
     253,   357,    73,   161,    -1,   163,    -1,    78,    29,    -1,
      14,    15,    16,   118,    18,   120,    20,    -1,    -1,    23,
      73,   274,    -1,    27,    73,    29,   184,   280,   186,    -1,
      -1,   284,   190,   191,    -1,   288,    -1,    -1,   143,    14,
      15,    16,    16,    18,    18,    20,    20,   118,    23,    23,
     208,    -1,    -1,    28,    28,    30,   161,    -1,   163,   312,
      -1,    20,   220,    -1,    23,   118,   319,   320,   321,   118,
      29,    -1,   230,    14,    15,    16,    73,    18,    14,   184,
      16,   186,    18,   241,    20,   190,   191,    23,    29,    -1,
     161,    20,    28,   251,    23,   253,    14,    15,    16,    28,
      18,    30,    20,   208,   357,    23,    -1,    -1,   161,    -1,
      -1,    29,   161,   184,    20,   220,   274,    23,    -1,   190,
     191,   118,   280,    29,    20,   230,    -1,    23,    -1,    -1,
     288,   184,    28,    -1,    30,   184,   241,   190,   191,    -1,
      -1,   190,   191,    14,    15,    16,   251,    18,   253,   220,
      -1,    14,    15,    16,   312,    18,    -1,    -1,    29,   230,
     231,   319,   320,    -1,   161,    -1,    29,   220,    -1,   274,
     241,   220,    14,    15,    16,   280,    18,   230,    -1,    -1,
     251,   230,    -1,   288,    -1,    27,    28,   184,   241,    -1,
      -1,    -1,   241,   190,   191,    -1,    -1,    -1,   251,   357,
      -1,    -1,   251,    -1,    14,    15,    16,   312,    18,   280,
      20,    -1,    -1,    23,   319,   320,    20,   288,    28,    23,
      30,    -1,    -1,   220,    28,    -1,    30,   280,    14,    15,
      16,   280,    18,   230,    20,   288,    -1,    23,    -1,   288,
      -1,   312,   313,    29,   241,    -1,    -1,    20,   319,   320,
      23,    -1,   357,    -1,   251,    28,    -1,    30,    -1,   312,
      14,    15,    16,   312,    18,    20,   319,   320,    23,    20,
     319,   320,    23,    -1,    29,    29,    -1,     1,    29,     3,
       4,     5,     6,   280,     8,    -1,    10,    11,    12,    13,
      14,   288,    -1,    17,    -1,    -1,    -1,    21,    22,    -1,
      24,    25,    20,    27,    -1,    23,    -1,     3,     4,     5,
       6,    29,    -1,    -1,    -1,   312,    12,    13,    14,    -1,
      -1,    17,   319,   320,    -1,    21,    22,    -1,    24,    -1,
      -1,    27,    28,     3,     4,     5,     6,    20,    20,    -1,
      23,    23,    12,    13,    14,    28,    28,    17,    30,    -1,
      -1,    21,    22,    -1,    24,    -1,    -1,    27,    28,     3,
       4,     5,     6,    -1,     8,     9,    10,    11,    12,    13,
      14,    20,    -1,    17,    23,    -1,    -1,    21,    22,    28,
      24,    25,    26,    27,     3,     4,     5,     6,    -1,     8,
       9,    10,    11,    12,    13,    14,    20,    -1,    17,    23,
      -1,    -1,    21,    22,    28,    24,    25,    26,    27,     3,
       4,     5,     6,    -1,     8,     9,    10,    11,    12,    13,
      14,    20,    -1,    17,    23,    -1,    -1,    21,    22,    28,
      24,    25,    26,    27,     3,     4,     5,     6,    -1,     8,
       9,    10,    11,    12,    13,    14,    20,    -1,    17,    23,
      -1,    -1,    21,    22,    28,    24,    25,    26,    27,     3,
       4,     5,     6,    -1,     8,     9,    10,    11,    12,    13,
      14,    20,    -1,    17,    23,    -1,    -1,    21,    22,    28,
      24,    25,    26,    27,     3,     4,     5,     6,    -1,     8,
       9,    10,    11,    12,    13,    14,    20,    -1,    17,    23,
      -1,    -1,    21,    22,    28,    24,    25,    26,    27,     3,
       4,     5,     6,    -1,     8,     9,    10,    11,    12,    13,
      14,    20,    -1,    17,    23,    -1,    -1,    21,    22,    28,
      24,    25,    26,    27,     3,     4,     5,     6,    -1,     8,
       9,    10,    11,    12,    13,    14,    20,    -1,    17,    23,
      -1,    -1,    21,    22,    28,    24,    25,    26,    27,     3,
       4,     5,     6,    -1,     8,     9,    10,    11,    12,    13,
      14,    20,    -1,    17,    23,    -1,    -1,    21,    22,    28,
      24,    25,    26,    27,     3,     4,     5,     6,    -1,     8,
       9,    10,    11,    12,    13,    14,    20,    -1,    17,    23,
      -1,    -1,    21,    22,    28,    24,    25,    26,    27,     3,
       4,     5,     6,    -1,     8,     9,    10,    11,    12,    13,
      14,    20,    -1,    17,    23,    -1,    -1,    21,    22,    28,
      24,    25,    26,    27,     3,     4,     5,     6,    -1,     8,
      -1,    10,    11,    12,    13,    14,    20,    -1,    17,    23,
      -1,    -1,    21,    22,    28,    24,    25,    26,    27,     3,
       4,     5,     6,    -1,     8,    -1,    10,    11,    12,    13,
      14,    20,    -1,    17,    23,    -1,    -1,    21,    22,    28,
      24,    25,    26,    27,     3,     4,     5,     6,    -1,     8,
      -1,    10,    11,    12,    13,    14,    20,    -1,    17,    23,
      -1,    -1,    21,    22,    28,    24,    25,    26,    27,     3,
       4,     5,     6,    -1,     8,    -1,    10,    11,    12,    13,
      14,    -1,    -1,    17,    -1,    -1,    -1,    21,    22,    -1,
      24,    25,    26,    27,     3,     4,     5,     6,    -1,     8,
      -1,    10,    11,    12,    13,    14,    -1,    -1,    17,    -1,
      -1,    -1,    21,    22,    -1,    24,    25,    26,    27,     3,
       4,     5,     6,    -1,     8,    -1,    10,    11,    12,    13,
      14,    -1,    -1,    17,    -1,    -1,    -1,    21,    22,    -1,
      24,    25,    26,    27,     3,     4,     5,     6,    -1,     8,
      -1,    10,    11,    12,    13,    14,    -1,    -1,    17,    -1,
      -1,    -1,    21,    22,    -1,    24,    25,    26,    27,     3,
       4,     5,     6,    -1,     8,    -1,    10,    11,    12,    13,
      14,    -1,    -1,    17,    -1,    -1,    -1,    21,    22,    -1,
      24,    25,    26,    27,     3,     4,     5,     6,    -1,     8,
      -1,    10,    11,    12,    13,    14,    -1,    -1,    17,    -1,
      -1,    -1,    21,    22,    -1,    24,    25,    26,    27,     3,
       4,     5,     6,    -1,     8,    -1,    10,    11,    12,    13,
      14,    -1,    -1,    17,    -1,    -1,    -1,    21,    22,    -1,
      24,    25,    26,    27,     3,     4,     5,     6,    -1,     8,
      -1,    10,    11,    12,    13,    14,    -1,    -1,    17,    -1,
      -1,    -1,    21,    22,    -1,    24,    25,    26,    27,     3,
       4,     5,     6,    -1,     8,    -1,    10,    11,    12,    13,
      14,    -1,    -1,    17,    -1,    -1,    -1,    21,    22,    -1,
      24,    25,    26,    27,     3,     4,     5,     6,    -1,     8,
      -1,    10,    11,    12,    13,    14,    -1,    -1,    17,    -1,
      -1,    -1,    21,    22,    -1,    24,    25,    26,    27,     3,
       4,     5,     6,    -1,     8,    -1,    10,    11,    12,    13,
      14,    -1,    -1,    17,    -1,    -1,    -1,    21,    22,    -1,
      24,    25,    26,    27,     3,     4,     5,     6,    -1,     8,
      -1,    10,    11,    12,    13,    14,    -1,    -1,    17,    -1,
      -1,    -1,    21,    22,    -1,    24,    25,    26,    27,     3,
       4,     5,     6,    -1,     8,    -1,    10,    11,    12,    13,
      14,    -1,    -1,    17,    -1,    -1,    -1,    21,    22,    -1,
      24,    25,    26,    27,     3,     4,     5,     6,    -1,     8,
      -1,    10,    11,    12,    13,    14,    -1,    -1,    17,    -1,
      -1,    -1,    21,    22,    20,    24,    25,    23,    27,     3,
       4,     5,     6,    29,     8,    -1,    10,    11,    12,    13,
      14,    -1,    -1,    17,    -1,    -1,    -1,    21,    22,    20,
      24,    25,    23,    27,     3,     4,     5,     6,    29,    20,
      -1,    -1,    23,    12,    13,    14,    -1,    28,    17,    30,
      -1,    -1,    21,    22,    20,    24,    -1,    23,    27,     3,
       4,     5,     6,    29,    20,    -1,    -1,    23,    12,    13,
      14,    -1,    28,    17,    30,    -1,    -1,    21,    22,    20,
      24,    -1,    23,    27,    14,    15,    16,    28,    18,    30,
      20,    -1,    -1,    23,    -1,    14,    15,    16,    28,    18,
      30,    20,    -1,    -1,    23,    -1,    14,    15,    16,    28,
      18,    30,    20,    -1,    -1,    23,    -1,    14,    15,    16,
      28,    18,    30,    20,    -1,    -1,    23,    -1,    14,    15,
      16,    28,    18,    30,    20,    -1,    -1,    23,    -1,    14,
      15,    16,    28,    18,    30,    20,    -1,    -1,    23,    -1,
      14,    15,    16,    28,    18,    30,    20,    -1,    -1,    23,
      -1,    14,    15,    16,    28,    18,    30,    20,    -1,    -1,
      23,    -1,    14,    15,    16,    28,    18,    30,    20,    -1,
      -1,    23,    14,    15,    16,    -1,    18,    29,    20,    -1,
      -1,    23,    14,    15,    16,    -1,    18,    29,    20,    -1,
      -1,    23,    14,    15,    16,    -1,    18,    29,    20,    -1,
      -1,    23,    14,    15,    16,    -1,    18,    29,    20,    -1,
      -1,    23,    14,    15,    16,    -1,    18,    29,    20,    -1,
      -1,    23,    14,    15,    16,    -1,    18,    29,    20,    -1,
      -1,    23,    14,    15,    16,    -1,    18,    29,    20,    -1,
      -1,    23,    14,    15,    16,    -1,    18,    29,    20,    -1,
      -1,    23,    14,    15,    16,    -1,    18,    29,    20,    -1,
      -1,    23,    -1,    -1,    -1,    27,    28,    14,    15,    16,
      16,    18,    18,    20,    20,    -1,    23,    23,    14,    15,
      16,    28,    18,    29,    20,    20,    -1,    23,    23,    14,
      15,    16,    28,    18,    29,    20,    20,    -1,    23,    23,
      14,    15,    16,    28,    18,    29,    20,    -1,    -1,    23,
      -1,    14,    15,    16,    28,    18,    -1,    20,    -1,    -1,
      23,    -1,    14,    15,    16,    28,    18,    -1,    20,    -1,
      -1,    23,    -1,    14,    15,    16,    28,    18,    -1,    20,
      -1,    -1,    23,    -1,    14,    15,    16,    28,    18,    -1,
      20,    -1,    -1,    23,    -1,    14,    15,    16,    28,    18,
      -1,    20,    -1,    -1,    23,    -1,    14,    15,    16,    28,
      18,    -1,    20,    -1,    -1,    23,    -1,    14,    15,    16,
      28,    18,    -1,    20,    -1,    -1,    23,    -1,    14,    15,
      16,    28,    18,    -1,    20,    -1,    -1,    23,    -1,    14,
      15,    16,    28,    18,    -1,    20,    -1,    -1,    23,    -1,
      14,    15,    16,    28,    18,    -1,    20,    -1,    16,    23,
      18,    -1,    20,    -1,    28,    23,    -1,    14,    -1,    16,
      28,    18,    30,    20,    -1,    -1,    23,    -1,    14,    15,
      16,    28,    18,    14,    15,    16,    -1,    18,    -1,    14,
      15,    16,    28,    18,    14,    15,    16,    28,    18,    -1,
      14,    15,    16,    28,    18,    14,    15,    16,    28,    18,
      -1,    14,    15,    16,    28,    18,    14,    15,    16,    28,
      18,    -1,    14,    15,    16,    28,    18,    14,    15,    16,
      28,    18,    -1,    14,    15,    16,    28,    18,    14,    15,
      16,    28,    18,    -1,    14,    15,    16,    28,    18,    14,
      15,    16,    28,    18,    20,    -1,    -1,    23,    28,    -1,
      -1,    -1,    28,    28,    30,    20,    -1,    -1,    23,    -1,
      -1,    -1,    -1,    28,    -1,    30
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     1,     5,    32,    33,    34,    35,    41,    42,     6,
       7,     0,    34,    29,    27,     6,    36,    38,     5,    40,
      41,    28,     6,     7,    30,    37,    25,     6,    41,    28,
      39,    25,     1,     3,     4,     6,     8,    10,    11,    12,
      13,    14,    17,    21,    22,    24,    25,    27,    41,    43,
      44,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    43,    27,    27,    27,    47,    66,    27,    27,
      64,    60,    47,    45,    56,    26,    44,    20,    23,    29,
      29,    29,    16,    18,    14,    15,    19,    26,    28,    47,
      67,    56,     6,    52,    66,    54,    64,    66,    43,    28,
      47,    47,    61,    62,    63,    64,    47,    28,    30,    28,
      29,    28,    28,    28,    26,    47,    44,    56,     9,    29,
      44,    52,    28,    44,     5,     6,     3,     4,     6,    14,
      17,    21,    24,    27,    59,    60,    61,    62,    63,    64,
      65,    66,     3,     4,     5,     6,    12,    13,    14,    17,
      21,    22,    24,    27,    41,    48,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
       3,     4,     6,    21,    22,    24,    27,    65,    66,     6,
      20,    23,     8,    10,    25,    46,    47,    49,    50,    51,
      52,     3,     4,     6,    14,    17,    21,    24,    27,    59,
      60,    61,    62,    63,    64,    65,    66,    66,     6,     7,
      27,    64,    60,    56,    16,    18,    14,    15,     6,     7,
      27,    27,    27,    64,    60,    47,    56,    16,    18,    14,
      15,    27,     3,     4,     5,     6,    12,    13,    14,    17,
      21,    22,    24,    27,    41,    47,    48,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    56,    47,    47,    27,    27,    45,    29,    29,    29,
      27,    64,    60,    56,    16,    18,    14,    15,    19,     6,
      28,    67,    28,    61,    62,    63,    64,     6,    28,    67,
      54,    64,    66,    28,    61,    62,    63,    64,    28,    67,
       6,     7,    27,    27,    27,    64,    60,    47,    56,    20,
      23,    16,    18,    14,    15,    28,    56,    52,    43,    28,
      67,    28,    61,    62,    63,    64,    47,    28,    28,    28,
      28,    28,    28,     6,    28,    67,    54,    64,    66,    28,
      47,    47,    61,    62,    63,    64,    28,    29,    26,    28,
      28,    28,    28,    28,    44,    56,     9,    29,    44,    52,
      28,    44
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    31,    32,    33,    33,    33,    34,    34,    36,    37,
      35,    38,    39,    35,    40,    40,    41,    41,    42,    42,
      43,    43,    43,    44,    44,    45,    44,    44,    46,    46,
      46,    47,    47,    47,    47,    47,    47,    48,    48,    49,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      58,    59,    59,    60,    60,    61,    61,    62,    62,    63,
      63,    63,    64,    64,    64,    64,    64,    64,    64,    65,
      65,    66,    67,    67
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     1,     1,     2,     1,     0,     0,
       9,     0,     0,     8,     3,     1,     2,     3,     2,     3,
       2,     1,     1,     2,     2,     0,     4,     1,     1,     1,
       2,     1,     1,     1,     1,     1,     1,     1,     1,     5,
       7,     9,     2,     3,     3,     2,     3,     1,     4,     4,
       4,     2,     1,     3,     1,     3,     1,     3,     1,     3,
       2,     1,     1,     1,     3,     1,     1,     1,     1,     4,
       3,     1,     3,     1
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
#line 76 "src/sin_analyser.y"
            { syntaxTree = (yyval.treeNode); }
#line 2056 "src/sin_analyser.tab.c"
    break;

  case 3:
#line 80 "src/sin_analyser.y"
                          {
        (yyval.treeNode) = newNode("PROGRAM", 0);
        (yyval.treeNode)->subtree1 = (yyvsp[-1].treeNode);
        (yyval.treeNode)->subtree2 = (yyvsp[0].treeNode);
    }
#line 2066 "src/sin_analyser.tab.c"
    break;

  case 4:
#line 86 "src/sin_analyser.y"
                  { (yyval.treeNode) = (yyvsp[0].treeNode); }
#line 2072 "src/sin_analyser.tab.c"
    break;

  case 5:
#line 88 "src/sin_analyser.y"
          { (yyval.treeNode) = newNode("ERROR", 0); }
#line 2078 "src/sin_analyser.tab.c"
    break;

  case 6:
#line 92 "src/sin_analyser.y"
               { (yyval.treeNode) = (yyvsp[-1].treeNode); }
#line 2084 "src/sin_analyser.tab.c"
    break;

  case 7:
#line 94 "src/sin_analyser.y"
              { (yyval.treeNode) = (yyvsp[0].treeNode); }
#line 2090 "src/sin_analyser.tab.c"
    break;

  case 8:
#line 98 "src/sin_analyser.y"
           {
        changeScope(1);
    }
#line 2098 "src/sin_analyser.tab.c"
    break;

  case 9:
#line 100 "src/sin_analyser.y"
             {
        updateParams(table, params);
        params = 0;
    }
#line 2107 "src/sin_analyser.tab.c"
    break;

  case 10:
#line 103 "src/sin_analyser.y"
                     {
        (yyval.treeNode) = newNode("FUNCTION", 0);
        (yyval.treeNode)->subtree1 = (yyvsp[-8].treeNode);
        (yyval.treeNode)->subtree2 = (yyvsp[-5].treeNode);
        (yyval.treeNode)->subtree3 = (yyvsp[-1].treeNode);
        if((yyval.treeNode)->subtree1->type == 1){
            if((yyval.treeNode)->subtree3->type == 1){
                (yyval.treeNode)->type = (yyval.treeNode)->subtree1->type;
            }else{
                printf("SEMANTIC ERROR: Return type error: Function type is %d and return is %d. [%d, %d]\n", (yyval.treeNode)->subtree1->type, (yyval.treeNode)->subtree3->type, (yyvsp[-7].lex).line, (yyvsp[-7].lex).col);
                sem_errors++;
            }
        } else if((yyval.treeNode)->subtree1->type == 2){
            if((yyval.treeNode)->subtree3->type == 1){
                (yyval.treeNode)->type = (yyval.treeNode)->subtree1->type;
            }else if((yyval.treeNode)->subtree3->type == 2){
                (yyval.treeNode)->type = (yyval.treeNode)->subtree3->type;
            }else{
                printf("SEMANTIC ERROR: Return type error: Function type is %d and return is %d. [%d, %d]\n", (yyval.treeNode)->subtree1->type, (yyval.treeNode)->subtree3->type, (yyvsp[-7].lex).line, (yyvsp[-7].lex).col);
                sem_errors++;
            }
        } else if((yyval.treeNode)->subtree1->type == 3){
            if((yyval.treeNode)->subtree3->type == 3){
                (yyval.treeNode)->type = (yyval.treeNode)->subtree1->type;
            }else{
                printf("SEMANTIC ERROR: Return type error: Function type is %d and return is %d. [%d, %d]\n", (yyval.treeNode)->subtree1->type, (yyval.treeNode)->subtree3->type, (yyvsp[-7].lex).line, (yyvsp[-7].lex).col);
                sem_errors++;
            }
        } else if((yyval.treeNode)->subtree1->type == 4){
            if((yyval.treeNode)->subtree3->type == 3){
                (yyval.treeNode)->type = (yyval.treeNode)->subtree1->type;
            }else if((yyval.treeNode)->subtree3->type == 4){
                (yyval.treeNode)->type = (yyval.treeNode)->subtree3->type;
            }else{
                printf("SEMANTIC ERROR: Return type error: Function type is %d and return is %d. [%d, %d]\n", (yyval.treeNode)->subtree1->type, (yyval.treeNode)->subtree3->type, (yyvsp[-7].lex).line, (yyvsp[-7].lex).col);
                sem_errors++;
            }
        }
        changeScope(0);
    }
#line 2152 "src/sin_analyser.tab.c"
    break;

  case 11:
#line 144 "src/sin_analyser.y"
            {
        updateParams(table, params);
    }
#line 2160 "src/sin_analyser.tab.c"
    break;

  case 12:
#line 146 "src/sin_analyser.y"
            {
        changeScope(1);
    }
#line 2168 "src/sin_analyser.tab.c"
    break;

  case 13:
#line 148 "src/sin_analyser.y"
               {
        (yyval.treeNode) = newNode("FUNCTION", 0);
        (yyval.treeNode)->subtree1 = (yyvsp[-7].treeNode);
        (yyval.treeNode)->subtree2 = (yyvsp[-1].treeNode);
        if((yyval.treeNode)->subtree1->type == 1){
            if((yyval.treeNode)->subtree2->type == 1){
                (yyval.treeNode)->type = (yyval.treeNode)->subtree1->type;
            }else{
                printf("SEMANTIC ERROR: Return type error: Function type is %d and return is %d. [%d, %d]\n", (yyval.treeNode)->subtree1->type, (yyval.treeNode)->subtree2->type, (yyvsp[-6].lex).line, (yyvsp[-6].lex).col);
                sem_errors++;
            }
        } else if((yyval.treeNode)->subtree1->type == 2){
            if((yyval.treeNode)->subtree2->type == 1){
                (yyval.treeNode)->type = (yyval.treeNode)->subtree1->type;
            }else if((yyval.treeNode)->subtree2->type == 2){
                (yyval.treeNode)->type = (yyval.treeNode)->subtree2->type;
            }else{
                printf("SEMANTIC ERROR: Return type error: Function type is %d and return is %d. [%d, %d]\n", (yyval.treeNode)->subtree1->type, (yyval.treeNode)->subtree2->type, (yyvsp[-6].lex).line, (yyvsp[-6].lex).col);
                sem_errors++;
            }
        } else if((yyval.treeNode)->subtree1->type == 3){
            if((yyval.treeNode)->subtree2->type == 3){
                (yyval.treeNode)->type = (yyval.treeNode)->subtree1->type;
            }else{
                printf("SEMANTIC ERROR: Return type error: Function type is %d and return is %d. [%d, %d]\n", (yyval.treeNode)->subtree1->type, (yyval.treeNode)->subtree2->type, (yyvsp[-6].lex).line, (yyvsp[-6].lex).col);
                sem_errors++;
            }
        } else if((yyval.treeNode)->subtree1->type == 4){
            if((yyval.treeNode)->subtree2->type == 3){
                (yyval.treeNode)->type = (yyval.treeNode)->subtree1->type;
            }else if((yyval.treeNode)->subtree2->type == 4){
                (yyval.treeNode)->type = (yyval.treeNode)->subtree2->type;
            }else{
                printf("SEMANTIC ERROR: Return type error: Function type is %d and return is %d. [%d, %d]\n", (yyval.treeNode)->subtree1->type, (yyval.treeNode)->subtree2->type, (yyvsp[-6].lex).line, (yyvsp[-6].lex).col);
                sem_errors++;
            }
        }
        changeScope(0);
    }
#line 2212 "src/sin_analyser.tab.c"
    break;

  case 14:
#line 190 "src/sin_analyser.y"
                            {
        params++;
        (yyval.treeNode) = newNode("PARAMS", 0);
        (yyval.treeNode)->subtree1 = (yyvsp[-2].treeNode);
        (yyval.treeNode)->subtree2 = (yyvsp[0].treeNode);
    }
#line 2223 "src/sin_analyser.tab.c"
    break;

  case 15:
#line 197 "src/sin_analyser.y"
           { 
        params++;
        (yyval.treeNode) = (yyvsp[0].treeNode);
    }
#line 2232 "src/sin_analyser.tab.c"
    break;

  case 16:
#line 204 "src/sin_analyser.y"
            {
        if(searchTable(table, (yyvsp[0].lex).id, stack[scope_pos], 0, 1)){
            printf("SEMANTIC ERROR: Variable %s already declared [%d, %d]\n", (yyvsp[0].lex).id, (yyvsp[0].lex).line, (yyvsp[0].lex).col);
            sem_errors++;
        }
        newSymbol(table, (yyvsp[0].lex).id, (yyvsp[-1].lex).id, "VAR      ", (yyvsp[0].lex).line, (yyvsp[0].lex).col, stack[scope_pos], 0);   
        (yyval.treeNode) = newNode(strcat(strcat((yyvsp[-1].lex).id," var "), (yyvsp[0].lex).id), checkType(table, (yyvsp[0].lex).id));
    }
#line 2245 "src/sin_analyser.tab.c"
    break;

  case 17:
#line 213 "src/sin_analyser.y"
                 {
        if(searchTable(table, (yyvsp[0].lex).id, stack[scope_pos], 0, 1)) {
            printf("SEMANTIC ERROR: Variable %s already declared [%d, %d]\n", (yyvsp[0].lex).id, (yyvsp[0].lex).line, (yyvsp[0].lex).col);
            sem_errors++;
        }
        newSymbol(table, (yyvsp[0].lex).id, strcat((yyvsp[-2].lex).id," list"), "LIST VAR ",(yyvsp[0].lex).line, (yyvsp[0].lex).col, stack[scope_pos], 0);
        (yyval.treeNode) = newNode(strcat(strcat((yyvsp[-2].lex).id," "), (yyvsp[0].lex).id), checkType(table, (yyvsp[0].lex).id));
    }
#line 2258 "src/sin_analyser.tab.c"
    break;

  case 18:
#line 224 "src/sin_analyser.y"
            {
        if(!strcmp((yyvsp[0].lex).id, "main")) main_found = 1;
        if(searchTable(table, (yyvsp[0].lex).id, stack[scope_pos], 1, 0)) {
            printf("SEMANTIC ERROR: Function %s already declared [%d, %d]\n", (yyvsp[0].lex).id, (yyvsp[0].lex).line, (yyvsp[0].lex).col);
            sem_errors++;
        }
        newSymbol(table, (yyvsp[0].lex).id, (yyvsp[-1].lex).id, "FUNC     ", (yyvsp[0].lex).line, (yyvsp[0].lex).col, stack[scope_pos], -1);
        (yyval.treeNode) = newNode(strcat(strcat((yyvsp[-1].lex).id," function "), (yyvsp[0].lex).id), checkType(table, (yyvsp[0].lex).id));
    }
#line 2272 "src/sin_analyser.tab.c"
    break;

  case 19:
#line 234 "src/sin_analyser.y"
                 {
        if(!strcmp((yyvsp[0].lex).id, "main")) main_found = 1;
        if(searchTable(table, (yyvsp[0].lex).id, stack[scope_pos], 1, 0)) {
            printf("SEMANTIC ERROR: Function %s already declared [%d, %d]\n", (yyvsp[0].lex).id, (yyvsp[0].lex).line, (yyvsp[0].lex).col);
            sem_errors++;
        }
        newSymbol(table, (yyvsp[0].lex).id, strcat((yyvsp[-2].lex).id," list"), "LIST FUNC", (yyvsp[0].lex).line, (yyvsp[0].lex).col, scope, -1);
        (yyval.treeNode) = newNode(strcat(strcat((yyvsp[-2].lex).id," function list "), (yyvsp[0].lex).id), checkType(table, (yyvsp[0].lex).id));
    }
#line 2286 "src/sin_analyser.tab.c"
    break;

  case 20:
#line 246 "src/sin_analyser.y"
                    {
        (yyval.treeNode) = newNode("BLOCK", 0);
        (yyval.treeNode)->subtree1 = (yyvsp[-1].treeNode);
        (yyval.treeNode)->subtree2 = (yyvsp[0].treeNode);
        (yyval.treeNode)->type = (yyval.treeNode)->subtree2->type;
    }
#line 2297 "src/sin_analyser.tab.c"
    break;

  case 21:
#line 253 "src/sin_analyser.y"
              { (yyval.treeNode) = (yyvsp[0].treeNode); }
#line 2303 "src/sin_analyser.tab.c"
    break;

  case 22:
#line 255 "src/sin_analyser.y"
          { (yyval.treeNode) = newNode("ERROR", 0); }
#line 2309 "src/sin_analyser.tab.c"
    break;

  case 23:
#line 259 "src/sin_analyser.y"
             { (yyval.treeNode) = (yyvsp[-1].treeNode); }
#line 2315 "src/sin_analyser.tab.c"
    break;

  case 24:
#line 261 "src/sin_analyser.y"
              { (yyval.treeNode) = (yyvsp[-1].treeNode); }
#line 2321 "src/sin_analyser.tab.c"
    break;

  case 25:
#line 263 "src/sin_analyser.y"
       {
        changeScope(1);
    }
#line 2329 "src/sin_analyser.tab.c"
    break;

  case 26:
#line 265 "src/sin_analyser.y"
               { 
        (yyval.treeNode) = (yyvsp[-1].treeNode);
        changeScope(0);
    }
#line 2338 "src/sin_analyser.tab.c"
    break;

  case 27:
#line 270 "src/sin_analyser.y"
             { (yyval.treeNode) = (yyvsp[0].treeNode); }
#line 2344 "src/sin_analyser.tab.c"
    break;

  case 28:
#line 274 "src/sin_analyser.y"
            { (yyval.treeNode) = (yyvsp[0].treeNode); }
#line 2350 "src/sin_analyser.tab.c"
    break;

  case 29:
#line 276 "src/sin_analyser.y"
        { (yyval.treeNode) = (yyvsp[0].treeNode); }
#line 2356 "src/sin_analyser.tab.c"
    break;

  case 30:
#line 278 "src/sin_analyser.y"
               { (yyval.treeNode) = (yyvsp[-1].treeNode); }
#line 2362 "src/sin_analyser.tab.c"
    break;

  case 31:
#line 282 "src/sin_analyser.y"
              { (yyval.treeNode) = (yyvsp[0].treeNode); }
#line 2368 "src/sin_analyser.tab.c"
    break;

  case 32:
#line 284 "src/sin_analyser.y"
           { (yyval.treeNode) = (yyvsp[0].treeNode); }
#line 2374 "src/sin_analyser.tab.c"
    break;

  case 33:
#line 286 "src/sin_analyser.y"
          { (yyval.treeNode) = (yyvsp[0].treeNode); }
#line 2380 "src/sin_analyser.tab.c"
    break;

  case 34:
#line 288 "src/sin_analyser.y"
           { (yyval.treeNode) = (yyvsp[0].treeNode); }
#line 2386 "src/sin_analyser.tab.c"
    break;

  case 35:
#line 290 "src/sin_analyser.y"
            { (yyval.treeNode) = (yyvsp[0].treeNode); }
#line 2392 "src/sin_analyser.tab.c"
    break;

  case 36:
#line 292 "src/sin_analyser.y"
              { (yyval.treeNode) = (yyvsp[0].treeNode); }
#line 2398 "src/sin_analyser.tab.c"
    break;

  case 37:
#line 296 "src/sin_analyser.y"
             { (yyval.treeNode) = (yyvsp[0].treeNode); }
#line 2404 "src/sin_analyser.tab.c"
    break;

  case 38:
#line 298 "src/sin_analyser.y"
              { (yyval.treeNode) = (yyvsp[0].treeNode); }
#line 2410 "src/sin_analyser.tab.c"
    break;

  case 39:
#line 302 "src/sin_analyser.y"
                                            {
        (yyval.treeNode) = newNode("IF", 0);
        (yyval.treeNode)->subtree1 = (yyvsp[-2].treeNode);
        (yyval.treeNode)->subtree2 = (yyvsp[0].treeNode);
    }
#line 2420 "src/sin_analyser.tab.c"
    break;

  case 40:
#line 308 "src/sin_analyser.y"
                                                {
        (yyval.treeNode) = newNode("IF ELSE", 0);
        (yyval.treeNode)->subtree1 = (yyvsp[-4].treeNode);
        (yyval.treeNode)->subtree2 = (yyvsp[-2].treeNode);
        (yyval.treeNode)->subtree3 = (yyvsp[0].treeNode);
    }
#line 2431 "src/sin_analyser.tab.c"
    break;

  case 41:
#line 317 "src/sin_analyser.y"
                                                        {
        (yyval.treeNode) = newNode("FOR", 0);
        (yyval.treeNode)->subtree1 = (yyvsp[-6].treeNode);
        (yyval.treeNode)->subtree2 = (yyvsp[-4].treeNode);
        (yyval.treeNode)->subtree3 = (yyvsp[-2].treeNode);
        (yyval.treeNode)->subtree4 = (yyvsp[0].treeNode);
    }
#line 2443 "src/sin_analyser.tab.c"
    break;

  case 42:
#line 327 "src/sin_analyser.y"
                {
        (yyval.treeNode) = newNode("RETURN", 0);
        (yyval.treeNode)->subtree1 = (yyvsp[0].treeNode);
        (yyval.treeNode)->type = (yyval.treeNode)->subtree1->type;
    }
#line 2453 "src/sin_analyser.tab.c"
    break;

  case 43:
#line 335 "src/sin_analyser.y"
                   {
        (yyval.treeNode) = newNode("ASSIGN", 0);
        (yyval.treeNode)->subtree1 = (yyvsp[-2].treeNode);
        (yyval.treeNode)->subtree2 = (yyvsp[0].treeNode);
        if((yyval.treeNode)->subtree1->type == 1){
            if((yyval.treeNode)->subtree2->type == 1){
                (yyval.treeNode)->type = (yyval.treeNode)->subtree1->type;
            }else if((yyval.treeNode)->subtree2->type == 2){
                (yyval.treeNode)->type = (yyval.treeNode)->subtree1->type;
            }else{
                printf("SEMANTIC ERROR: Type error when assigning %d to %d. [%d, %d]\n", (yyval.treeNode)->subtree2->type, (yyval.treeNode)->subtree1->type, (yyvsp[-1].lex).line, (yyvsp[-1].lex).col);
                sem_errors++;
            }
        } else if((yyval.treeNode)->subtree1->type == 2){
            if((yyval.treeNode)->subtree2->type == 1){
                (yyval.treeNode)->type = (yyval.treeNode)->subtree1->type;
            }else if((yyval.treeNode)->subtree2->type == 2){
                (yyval.treeNode)->type = (yyval.treeNode)->subtree2->type;
            }else{
                printf("SEMANTIC ERROR: Type error when assigning %d to %d. [%d, %d]\n", (yyval.treeNode)->subtree2->type, (yyval.treeNode)->subtree1->type, (yyvsp[-1].lex).line, (yyvsp[-1].lex).col);
                sem_errors++;
            }
        } else if((yyval.treeNode)->subtree1->type == 3){
            if((yyval.treeNode)->subtree2->type == 3){
                (yyval.treeNode)->type = (yyval.treeNode)->subtree1->type;
            }else{
                printf("SEMANTIC ERROR: Type error when assigning %d to %d. [%d, %d]\n", (yyval.treeNode)->subtree2->type, (yyval.treeNode)->subtree1->type, (yyvsp[-1].lex).line, (yyvsp[-1].lex).col);
                sem_errors++;
            }
        } else if((yyval.treeNode)->subtree1->type == 4){
            if((yyval.treeNode)->subtree2->type == 3){
                (yyval.treeNode)->type = (yyval.treeNode)->subtree1->type;
            }else if((yyval.treeNode)->subtree2->type == 4){
                (yyval.treeNode)->type = (yyval.treeNode)->subtree2->type;
            }else{
                printf("SEMANTIC ERROR: Type error when assigning %d to %d. [%d, %d]\n", (yyval.treeNode)->subtree2->type, (yyval.treeNode)->subtree1->type, (yyvsp[-1].lex).line, (yyvsp[-1].lex).col);
                sem_errors++;
            }
        }
    }
#line 2498 "src/sin_analyser.tab.c"
    break;

  case 44:
#line 378 "src/sin_analyser.y"
                       {
        (yyval.treeNode) = newNode("LIST OP", 0);
        (yyval.treeNode)->subtree1 = (yyvsp[-2].treeNode);
        (yyval.treeNode)->subtree2 = (yyvsp[0].treeNode);
        if((yyval.treeNode)->subtree1->type == 1 || (yyval.treeNode)->subtree1->type == 2){
            if((yyval.treeNode)->subtree2->type == 3 || (yyval.treeNode)->subtree2->type == 4){
                (yyval.treeNode)->type = (yyval.treeNode)->subtree2->type;
            }else{
                printf("SEMANTIC ERROR: Type error in list constructor with type %d and %d. [%d, %d]\n", (yyval.treeNode)->subtree1->type, (yyval.treeNode)->subtree2->type, (yyvsp[-1].lex).line, (yyvsp[-1].lex).col);
                sem_errors++;
            }
        } else{
            printf("SEMANTIC ERROR: Type error in list constructor with type %d and %d. [%d, %d]\n", (yyval.treeNode)->subtree1->type, (yyval.treeNode)->subtree2->type, (yyvsp[-1].lex).line, (yyvsp[-1].lex).col);
            sem_errors++;
        }
    }
#line 2519 "src/sin_analyser.tab.c"
    break;

  case 45:
#line 397 "src/sin_analyser.y"
                  {
        (yyval.treeNode) = newNode("LIST OP", 0);
        (yyval.treeNode)->subtree1 = (yyvsp[0].treeNode);
        if((yyval.treeNode)->subtree1->type == 3 || (yyval.treeNode)->subtree1->type == 4){
            (yyval.treeNode)->type = (yyval.treeNode)->subtree1->type;
        } else{
            printf("SEMANTIC ERROR: Type error in list operator with type %d. [%d, %d]\n", (yyval.treeNode)->subtree1->type, (yyvsp[-1].lex).line, (yyvsp[-1].lex).col);
            sem_errors++;
        }
    }
#line 2534 "src/sin_analyser.tab.c"
    break;

  case 46:
#line 410 "src/sin_analyser.y"
                        {
        (yyval.treeNode) = newNode("LIST FUNC", 0);
        (yyval.treeNode)->subtree1 = (yyvsp[-2].treeNode);
        (yyval.treeNode)->subtree2 = (yyvsp[0].treeNode);
        if((yyval.treeNode)->subtree1->type == 1 || (yyval.treeNode)->subtree1->type == 2){
            if((yyval.treeNode)->subtree2->type == 3 || (yyval.treeNode)->subtree2->type == 4){
                (yyval.treeNode)->type = (yyval.treeNode)->subtree2->type;
            }else{
                printf("SEMANTIC ERROR: Type error in list function with type %d and %d. [%d, %d]\n", (yyval.treeNode)->subtree1->type, (yyval.treeNode)->subtree2->type, (yyvsp[-1].lex).line, (yyvsp[-1].lex).col);
                sem_errors++;
            }
        } else{
            printf("SEMANTIC ERROR: Type error in list function with type %d and %d. [%d, %d]\n", (yyval.treeNode)->subtree1->type, (yyval.treeNode)->subtree2->type, (yyvsp[-1].lex).line, (yyvsp[-1].lex).col);
            sem_errors++;
        }
    }
#line 2555 "src/sin_analyser.tab.c"
    break;

  case 47:
#line 429 "src/sin_analyser.y"
            { (yyval.treeNode) = (yyvsp[0].treeNode); }
#line 2561 "src/sin_analyser.tab.c"
    break;

  case 48:
#line 433 "src/sin_analyser.y"
                {
        (yyval.treeNode) = newNode("IN", 0);
        (yyval.treeNode)->subtree1 = (yyvsp[-1].treeNode);
    }
#line 2570 "src/sin_analyser.tab.c"
    break;

  case 49:
#line 440 "src/sin_analyser.y"
                  {
        (yyval.treeNode) = newNode("OUT", 0);
        (yyval.treeNode)->subtree1 = (yyvsp[-1].treeNode);
    }
#line 2579 "src/sin_analyser.tab.c"
    break;

  case 50:
#line 445 "src/sin_analyser.y"
                        { 
        (yyval.treeNode) = newNode("OUT", 0);
        (yyval.treeNode)->subtree1 = (yyvsp[-1].treeNode); 
    }
#line 2588 "src/sin_analyser.tab.c"
    break;

  case 51:
#line 452 "src/sin_analyser.y"
                   {
        (yyval.treeNode) = newNode("LOG OP", 0);
        (yyval.treeNode)->subtree1 = (yyvsp[0].treeNode);
        if((yyval.treeNode)->subtree1->type != 1 && (yyval.treeNode)->subtree1->type != 2){
            printf("SEMANTIC ERROR: Type error in logical operation with type %d. [%d, %d]\n", (yyval.treeNode)->subtree1->type, (yyvsp[-1].lex).line, (yyvsp[-1].lex).col);
            sem_errors++;
        }
        else (yyval.treeNode)->type = 1;
    }
#line 2602 "src/sin_analyser.tab.c"
    break;

  case 52:
#line 462 "src/sin_analyser.y"
           { (yyval.treeNode) = (yyvsp[0].treeNode); }
#line 2608 "src/sin_analyser.tab.c"
    break;

  case 53:
#line 466 "src/sin_analyser.y"
                          {
        (yyval.treeNode) = newNode("LOG OP", 0);
        (yyval.treeNode)->subtree1 = (yyvsp[-2].treeNode);
        (yyval.treeNode)->subtree2 = (yyvsp[0].treeNode);
        if((yyval.treeNode)->subtree1->type == 1){
            if((yyval.treeNode)->subtree2->type == 1){
                (yyval.treeNode)->type = 1;
            }else if((yyval.treeNode)->subtree2->type == 2){
                (yyval.treeNode)->type = 1;
            }else{
                printf("SEMANTIC ERROR: Type error in logical operation with type %d and %d. [%d, %d]\n", (yyval.treeNode)->subtree1->type, (yyval.treeNode)->subtree2->type, (yyvsp[-1].lex).line, (yyvsp[-1].lex).col);
                sem_errors++;
            }
        } else if((yyval.treeNode)->subtree1->type == 2){
            if((yyval.treeNode)->subtree2->type == 1){
                (yyval.treeNode)->type = 1;
            }else if((yyval.treeNode)->subtree2->type == 2){
                (yyval.treeNode)->type = 1;
            }else{
                printf("SEMANTIC ERROR: Type error in logical operation with type %d and %d. [%d, %d]\n", (yyval.treeNode)->subtree1->type, (yyval.treeNode)->subtree2->type, (yyvsp[-1].lex).line, (yyvsp[-1].lex).col);
                sem_errors++;
            }
        } else{
            printf("SEMANTIC ERROR: Type error in logical operation with type %d and %d. [%d, %d]\n", (yyval.treeNode)->subtree1->type, (yyval.treeNode)->subtree2->type, (yyvsp[-1].lex).line, (yyvsp[-1].lex).col);
            sem_errors++;
        }
    }
#line 2640 "src/sin_analyser.tab.c"
    break;

  case 54:
#line 494 "src/sin_analyser.y"
           { (yyval.treeNode) = (yyvsp[0].treeNode); }
#line 2646 "src/sin_analyser.tab.c"
    break;

  case 55:
#line 498 "src/sin_analyser.y"
                         {
        (yyval.treeNode) = newNode("REL OP", 0);
        (yyval.treeNode)->subtree1 = (yyvsp[-2].treeNode);
        (yyval.treeNode)->subtree2 = (yyvsp[0].treeNode);
        if((yyval.treeNode)->subtree1->type == 1){
            if((yyval.treeNode)->subtree2->type == 1){
                (yyval.treeNode)->type = 1;
            }else if((yyval.treeNode)->subtree2->type == 2){
                (yyval.treeNode)->type = 1;
            }else{
                printf("SEMANTIC ERROR: Type error in relational operation with type %d and %d. [%d, %d]\n", (yyval.treeNode)->subtree1->type, (yyval.treeNode)->subtree2->type, (yyvsp[-1].lex).line, (yyvsp[-1].lex).col);
                sem_errors++;
            }
        } else if((yyval.treeNode)->subtree1->type == 2){
            if((yyval.treeNode)->subtree2->type == 1){
                (yyval.treeNode)->type = 1;
            }else if((yyval.treeNode)->subtree2->type == 2){
                (yyval.treeNode)->type = 1;
            }else{
                printf("SEMANTIC ERROR: Type error in relational operation with type %d and %d. [%d, %d]\n", (yyval.treeNode)->subtree1->type, (yyval.treeNode)->subtree2->type, (yyvsp[-1].lex).line, (yyvsp[-1].lex).col);
                sem_errors++;
            }
        } else{
            if((yyval.treeNode)->subtree2->type == 3 || (yyval.treeNode)->subtree2->type == 4){
                (yyval.treeNode)->type = 1;
            }else{
                printf("SEMANTIC ERROR: Type error in relational operation with type %d and %d. [%d, %d]\n", (yyval.treeNode)->subtree1->type, (yyval.treeNode)->subtree2->type, (yyvsp[-1].lex).line, (yyvsp[-1].lex).col);
                sem_errors++;
            }
        }
    }
#line 2682 "src/sin_analyser.tab.c"
    break;

  case 56:
#line 530 "src/sin_analyser.y"
           { (yyval.treeNode) = (yyvsp[0].treeNode); }
#line 2688 "src/sin_analyser.tab.c"
    break;

  case 57:
#line 534 "src/sin_analyser.y"
                       {
        (yyval.treeNode) = newNode("ARI SS OP", 0);
        (yyval.treeNode)->subtree1 = (yyvsp[-2].treeNode);
        (yyval.treeNode)->subtree2 = (yyvsp[0].treeNode);
        if((yyval.treeNode)->subtree1->type == 1){
            if((yyval.treeNode)->subtree2->type == 1){
                (yyval.treeNode)->type = (yyval.treeNode)->subtree1->type;
            }else if((yyval.treeNode)->subtree2->type == 2){
                (yyval.treeNode)->type = (yyval.treeNode)->subtree2->type;
            }else{
                printf("SEMANTIC ERROR: Type error in arithmetic operation with type %d and %d. [%d, %d]\n", (yyval.treeNode)->subtree1->type, (yyval.treeNode)->subtree2->type, (yyvsp[-1].lex).line, (yyvsp[-1].lex).col);
                sem_errors++;
            }
        } else if((yyval.treeNode)->subtree1->type == 2){
            if((yyval.treeNode)->subtree2->type == 1){
                (yyval.treeNode)->type = (yyval.treeNode)->subtree1->type;
            }else if((yyval.treeNode)->subtree2->type == 2){
                (yyval.treeNode)->type = (yyval.treeNode)->subtree2->type;
            }else{
                printf("SEMANTIC ERROR: Type error in arithmetic operation with type %d and %d. [%d, %d]\n", (yyval.treeNode)->subtree1->type, (yyval.treeNode)->subtree2->type, (yyvsp[-1].lex).line, (yyvsp[-1].lex).col);
                sem_errors++;
            }
        } else{
            printf("SEMANTIC ERROR: Type error in arithmetic operation with type %d and %d. [%d, %d]\n", (yyval.treeNode)->subtree1->type, (yyval.treeNode)->subtree2->type, (yyvsp[-1].lex).line, (yyvsp[-1].lex).col);
            sem_errors++;
        }
    }
#line 2720 "src/sin_analyser.tab.c"
    break;

  case 58:
#line 562 "src/sin_analyser.y"
          { (yyval.treeNode) = (yyvsp[0].treeNode); }
#line 2726 "src/sin_analyser.tab.c"
    break;

  case 59:
#line 566 "src/sin_analyser.y"
                    {
        (yyval.treeNode) = newNode("ARI MD OP", 0);
        (yyval.treeNode)->subtree1 = (yyvsp[-2].treeNode);
        (yyval.treeNode)->subtree2 = (yyvsp[0].treeNode);
        if((yyval.treeNode)->subtree1->type == 1){
            if((yyval.treeNode)->subtree2->type == 1){
                (yyval.treeNode)->type = (yyval.treeNode)->subtree1->type;
            }else if((yyval.treeNode)->subtree2->type == 2){
                (yyval.treeNode)->type = (yyval.treeNode)->subtree2->type;
            }else{
                printf("SEMANTIC ERROR: Type error in arithmetic operation with type %d and %d. [%d, %d]\n", (yyval.treeNode)->subtree1->type, (yyval.treeNode)->subtree2->type, (yyvsp[-1].lex).line, (yyvsp[-1].lex).col);
                sem_errors++;
            }
        } else if((yyval.treeNode)->subtree1->type == 2){
            if((yyval.treeNode)->subtree2->type == 1){
                (yyval.treeNode)->type = (yyval.treeNode)->subtree1->type;
            }else if((yyval.treeNode)->subtree2->type == 2){
                (yyval.treeNode)->type = (yyval.treeNode)->subtree2->type;
            }else{
                printf("SEMANTIC ERROR: Type error in arithmetic operation with type %d and %d. [%d, %d]\n", (yyval.treeNode)->subtree1->type, (yyval.treeNode)->subtree2->type, (yyvsp[-1].lex).line, (yyvsp[-1].lex).col);
                sem_errors++;
            }
        } else{
            printf("SEMANTIC ERROR: Type error in arithmetic operation with type %d and %d. [%d, %d]\n", (yyval.treeNode)->subtree1->type, (yyval.treeNode)->subtree2->type, (yyvsp[-1].lex).line, (yyvsp[-1].lex).col);
            sem_errors++;
        }
    }
#line 2758 "src/sin_analyser.tab.c"
    break;

  case 60:
#line 594 "src/sin_analyser.y"
              {
        (yyval.treeNode) = newNode("NEGATIVE", 0);
        (yyval.treeNode)->subtree1 = (yyvsp[0].treeNode);
        if((yyval.treeNode)->subtree1->type != 1 && (yyval.treeNode)->subtree1->type != 2){
            printf("SEMANTIC ERROR: Type error in assigning negative to type %d. [%d, %d]\n", (yyval.treeNode)->subtree1->type, (yyvsp[-1].lex).line, (yyvsp[-1].lex).col);
            sem_errors++;
        }else{
             (yyval.treeNode)->type = (yyval.treeNode)->subtree1->type;
        }
    }
#line 2773 "src/sin_analyser.tab.c"
    break;

  case 61:
#line 605 "src/sin_analyser.y"
        { (yyval.treeNode) = (yyvsp[0].treeNode); }
#line 2779 "src/sin_analyser.tab.c"
    break;

  case 62:
#line 609 "src/sin_analyser.y"
       { (yyval.treeNode) = (yyvsp[0].treeNode); }
#line 2785 "src/sin_analyser.tab.c"
    break;

  case 63:
#line 611 "src/sin_analyser.y"
              { (yyval.treeNode) = (yyvsp[0].treeNode); }
#line 2791 "src/sin_analyser.tab.c"
    break;

  case 64:
#line 613 "src/sin_analyser.y"
                    { (yyval.treeNode) = (yyvsp[-1].treeNode); }
#line 2797 "src/sin_analyser.tab.c"
    break;

  case 65:
#line 615 "src/sin_analyser.y"
        { (yyval.treeNode) = newNode((yyvsp[0].lex).id, 1); }
#line 2803 "src/sin_analyser.tab.c"
    break;

  case 66:
#line 617 "src/sin_analyser.y"
          { (yyval.treeNode) = newNode((yyvsp[0].lex).id, 2); }
#line 2809 "src/sin_analyser.tab.c"
    break;

  case 67:
#line 619 "src/sin_analyser.y"
        { (yyval.treeNode) = newNode("NIL", 3); }
#line 2815 "src/sin_analyser.tab.c"
    break;

  case 68:
#line 621 "src/sin_analyser.y"
            { (yyval.treeNode) = newNode((yyvsp[0].lex).id, 0); }
#line 2821 "src/sin_analyser.tab.c"
    break;

  case 69:
#line 625 "src/sin_analyser.y"
                         {
        if(!searchTable(table, (yyvsp[-3].lex).id, scope, 1, 1)){
            printf("SEMANTIC ERROR: Function %s not declared [%d, %d]\n", (yyvsp[-3].lex).id, (yyvsp[-3].lex).line, (yyvsp[-3].lex).col);
            sem_errors++;
        }else if(checkParams(table, (yyvsp[-3].lex).id) != args){
            printf("SEMANTIC ERROR: Function %s calls for different number of arguments [%d, %d]\n", (yyvsp[-3].lex).id, (yyvsp[-3].lex).line, (yyvsp[-3].lex).col);
            sem_errors++;
        }
        args = 0;
        (yyval.treeNode) = newNode("CALL", checkType(table, (yyvsp[-3].lex).id));
        (yyval.treeNode)->subtree2 = (yyvsp[-1].treeNode);
    }
#line 2838 "src/sin_analyser.tab.c"
    break;

  case 70:
#line 638 "src/sin_analyser.y"
             {
        if(!searchTable(table, (yyvsp[-2].lex).id, scope, 1, 1)){
            printf("SEMANTIC ERROR: Function %s not declared [%d, %d]\n", (yyvsp[-2].lex).id, (yyvsp[-2].lex).line, (yyvsp[-2].lex).col);
            sem_errors++;
        }else if(checkParams(table, (yyvsp[-2].lex).id) != args){
            printf("SEMANTIC ERROR: Function %s calls for different number of arguments [%d, %d]\n", (yyvsp[-2].lex).id, (yyvsp[-2].lex).line, (yyvsp[-2].lex).col);
            sem_errors++;
        }
        args = 0;
        (yyval.treeNode) = newNode("CALL", checkType(table, (yyvsp[-2].lex).id));
    }
#line 2854 "src/sin_analyser.tab.c"
    break;

  case 71:
#line 652 "src/sin_analyser.y"
       { 
        if(!searchTable(table, (yyvsp[0].lex).id, scope, 0, 0)){
            printf("SEMANTIC ERROR: Variable %s not declared [%d, %d]\n", (yyvsp[0].lex).id, (yyvsp[0].lex).line, (yyvsp[0].lex).col);
            sem_errors++;
        }
        (yyval.treeNode) = newNode((yyvsp[0].lex).id, checkType(table, (yyvsp[0].lex).id)); 
    }
#line 2866 "src/sin_analyser.tab.c"
    break;

  case 72:
#line 662 "src/sin_analyser.y"
                              {
        args++;
        (yyval.treeNode) = newNode("PARAMS", 0);
        (yyval.treeNode)->subtree1 = (yyvsp[-2].treeNode);
        (yyval.treeNode)->subtree2 = (yyvsp[0].treeNode);
    }
#line 2877 "src/sin_analyser.tab.c"
    break;

  case 73:
#line 669 "src/sin_analyser.y"
         { 
        args++;
        (yyval.treeNode) = (yyvsp[0].treeNode); 
    }
#line 2886 "src/sin_analyser.tab.c"
    break;


#line 2890 "src/sin_analyser.tab.c"

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
#line 675 "src/sin_analyser.y"


extern void changeScope(int op){
    if(op){
        scope++;
        scope_pos++;
        stack[scope_pos] = scope;
        // for(int i=0; i<10; i++){
        //     printf("%d ", stack[i]);
        // }
        // printf("\n%d, %d, %d\n", scope_pos, scope, stack[scope_pos]);
    }
    else{
        stack[scope_pos] = 0;
        scope_pos--;
        // for(int i=0; i<10; i++){
        //     printf("%d ", stack[i]);
        // }
        // printf("\n%d, %d, %d\n", scope_pos, scope, stack[scope_pos]);
    }
}

int main(int argc, char **argv){
    printf("────────────────────────────────────────\n");
    printf("Analysis in file '%s'", argv[1]);
    printf("\n────────────────────────────────────────\n");

    yyin = fopen(argv[1], "r");

    yyparse();

    if(!main_found){
        printf("SEMANTIC ERROR: Main not found\n");
        sem_errors++;
    }

    if(sem_errors) printf("\nNOTE: For type errors, assume: 1 as int, 2 as float, 3 as int list and 4 as int float.\n");

    printf("\n");
    printf("Syntax analysis finished with %d semantic errors, %d syntax errors and %d lexical errors.\n", sem_errors, sin_errors, lex_errors);
    
    if(!sin_errors) showTree(syntaxTree, 0);

    showTable(table);
    destroyTree();

    fclose(yyin);
    yylex_destroy();

    return 0;
}

void yyerror(const char* error) {
    printf("\nSYNTAX ERROR: %s [%d, %d]\n", error, line, col);
    sin_errors++;
}
