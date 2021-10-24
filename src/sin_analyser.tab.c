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
    #include "../lib/intermediate_code.h"
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
    char tacTable[1000];
    char tacCode[1000];
    int reg = 0;
    int str = 0;
    int loop = 0;
    int scope_pos = 0;
    int scope = 0;
    int params = 0;
    int args_ret = 0;
    int call_scope;
    int param_error = 0;
    int args = 0;
    char reg_num[5];
    char str_num[5];
    char loop_num[5];
    char tac[100];
    int main_found = 0;
    int sin_errors = 0;
    int sem_errors = 0;

#line 106 "src/sin_analyser.tab.c"

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
    REL_OP = 272,
    ASS_OP = 273,
    LIST_FUNC = 274,
    NIL = 275,
    UN_OP = 276,
    RLIST_OP = 277,
    LITERAL = 278,
    LB = 279,
    RB = 280,
    LP = 281,
    RP = 282,
    END = 283,
    SEPARATOR = 284
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 42 "src/sin_analyser.y"

    /*Token structure*/
    struct lexToken {
        char id[200];
        int line;
        int col;
    } lex;
    /*Tree node reference*/
    struct treeNode* treeNode;

#line 199 "src/sin_analyser.tab.c"

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
#define YYLAST   1933

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  30
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  36
/* YYNRULES -- Number of rules.  */
#define YYNRULES  71
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  242

#define YYUNDEFTOK  2
#define YYMAXUTOK   284


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
      25,    26,    27,    28,    29
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    87,    87,    91,    97,    99,   103,   105,   109,   111,
     109,   155,   157,   155,   201,   208,   215,   221,   229,   250,
     274,   288,   304,   311,   313,   317,   319,   321,   321,   328,
     332,   334,   336,   340,   342,   344,   346,   350,   364,   374,
     385,   396,   407,   452,   500,   504,   544,   548,   600,   604,
     621,   638,   642,   682,   702,   706,   746,   750,   761,   765,
     767,   769,   771,   773,   775,   777,   792,   792,   818,   835,
     845,   860
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 1
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "INT", "FLOAT", "TYPE", "ID", "LIST",
  "IF", "ELSE", "FOR", "RETURN", "OUT", "IN", "SS_OP", "MD_OP", "LLOG_OP",
  "REL_OP", "ASS_OP", "LIST_FUNC", "NIL", "UN_OP", "RLIST_OP", "LITERAL",
  "LB", "RB", "LP", "RP", "END", "SEPARATOR", "$accept", "start",
  "program", "program_block", "func_dclr", "$@1", "$@2", "$@3", "$@4",
  "params", "param", "declar", "func", "block", "statement", "$@5",
  "flow_ctr", "expr", "if_else", "for", "return", "input", "output",
  "ass_op", "operation", "log_op", "rel_op", "list_op", "ari_op", "md_op",
  "un_op", "val", "func_call", "$@6", "id", "func_params", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_int16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284
};
# endif

#define YYPACT_NINF (-171)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-72)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     150,    67,     4,    54,    69,   137,   138,    10,    45,   155,
      82,  -171,   152,   154,     0,   183,    74,    64,   196,   186,
     198,    75,   199,   104,    74,    93,   638,   248,   249,    99,
     662,   662,   597,   612,  1553,   212,   478,   132,   135,   366,
     149,   165,   277,  1563,   277,  1573,   686,   435,   210,   950,
     974,   998,   217,  1022,  1046,   220,   221,   230,   231,   242,
     -12,   -10,     6,   238,  1583,  1593,  1603,  1613,  1528,  1070,
     251,   206,    29,   435,   261,   265,  1623,   435,   290,  1633,
    1643,   662,   272,   168,  1094,  1118,  1142,  1166,   366,   366,
     366,   366,   277,   277,   366,   177,   289,  1653,   460,   278,
     309,   302,   316,   312,   313,  1190,  1663,    73,    90,  1700,
    1710,  1673,  1683,   317,   282,   286,  1310,   366,   318,   319,
    1214,  1693,   460,   539,   320,   293,  1334,   261,  1238,   322,
    1334,  1262,  1538,  1734,  1743,  1720,   281,  1752,   281,  1761,
     435,    49,    30,  1899,   100,  1770,  1779,  1788,  1797,  1806,
     324,  1359,  1368,   552,  1346,  1377,  1346,  1386,   435,   -14,
      13,   383,   443,  1395,  1404,  1413,  1422,  1431,   332,   333,
     686,   710,   343,   734,   758,   345,   353,   325,   268,  1815,
    1824,   355,   435,   435,   435,   435,   281,   281,   315,  1440,
    1449,   356,   460,   460,   460,   460,  1346,  1346,   435,   261,
     662,   782,   806,   830,   435,  1833,   460,  1842,    86,  1906,
    1876,  1883,  1851,  1860,  1458,   460,  1467,    66,  1890,  1503,
    1512,  1476,  1485,   357,   360,  1286,   364,   296,   304,  1310,
     366,   854,  1869,  1494,   878,   373,  1310,   261,   902,   367,
    1310,   926
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
       0,     0
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -171,  -171,  -171,   340,  -171,  -171,  -171,  -171,  -171,  -171,
     336,   184,  -171,   -28,   -32,   233,  -108,   -96,   -95,   -90,
     -35,  -171,  -171,   -50,    31,   192,   432,    58,   400,    38,
     170,   239,   331,  -147,   -30,  -170
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     3,     4,     5,     6,    16,    25,    17,    30,    19,
      20,    48,     8,    49,    50,    81,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    98,   149,   115
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      68,    68,   192,    69,    88,    -8,   -46,    89,   171,    76,
       9,    10,    76,   -44,    76,   -44,   -44,    84,   -46,    68,
     172,   173,   -48,   -48,   101,    90,   174,   -11,    91,   -46,
     193,   206,   -66,   -66,   -48,   -66,   227,    84,    13,    68,
     -46,   215,   -46,   -66,   102,   228,   -46,   183,   104,   -66,
     -66,    68,   -66,   105,    11,   -66,    97,   -46,    76,    76,
      76,    76,    76,    76,    76,   182,   176,    -5,   167,    -2,
      75,    14,    -5,    84,     2,    68,   -44,   129,    82,    18,
      79,   175,   -45,   193,   123,   145,    68,    76,    15,   -45,
      89,    21,   167,   -45,   128,   -45,    68,   177,   131,    26,
      68,   -45,   -45,   183,    99,   143,   -47,   -47,   103,    90,
      27,   145,    91,   -45,   186,   145,   -51,   -51,   -47,   -51,
      29,   171,   -51,    31,   167,   113,   167,   -51,   171,   114,
     111,   143,   171,   172,   173,   143,   163,    -4,    -7,   174,
     172,   173,    -4,    -7,   172,   173,   174,   108,   124,   224,
     174,     1,    -3,   125,    -6,     2,   161,    -3,    73,    -6,
     163,    74,   167,   167,   167,   167,   167,   167,   -13,   102,
      68,   181,   225,   -13,   179,    77,   167,   -10,   145,   176,
     161,   -20,   -10,   -18,     7,   167,   176,   239,     7,   191,
     176,    78,   189,    84,   175,    68,   145,   234,   143,    68,
      76,   175,    22,    23,   238,   175,    68,   177,   241,   -21,
      68,   -19,    96,    -9,    80,    24,   143,   146,    70,    71,
     145,   145,   145,   145,   212,   -15,   -16,   -15,   -16,   223,
     163,   163,   163,   163,   221,   226,   145,   114,   -34,   141,
     143,   209,   145,   146,   163,    85,   114,   146,    86,   -35,
     161,   218,    92,   163,   -51,   -51,   143,   -51,   -36,    87,
     -51,   235,   143,   112,   161,   141,   -51,   100,   164,   141,
     -33,   -66,   -66,   161,   -66,   -17,   -14,   -17,   -14,   -18,
      33,    34,   -66,   132,   133,   134,   147,   135,   -66,   -66,
     159,   -66,   164,   -40,   -66,   205,   150,    43,    44,   106,
      45,   137,   138,    47,   139,   116,   146,   140,   180,   -71,
     146,   -71,   147,   121,   159,   122,   147,   -19,   -66,   -66,
     -70,   -66,   -70,   232,   164,   122,   190,   -69,   146,   -66,
     117,   233,   141,   122,    94,   -66,   -66,   165,   -66,   118,
     119,   -66,   214,   204,    12,   -43,   -42,   -41,   127,   130,
     141,   -69,   146,   146,   146,   146,   146,   213,   198,   199,
      28,   165,   164,   164,   164,   164,   164,   222,   146,    33,
      34,   201,   132,   202,   146,   147,   164,   147,   148,   147,
      42,   203,   207,   216,   229,   164,    43,    44,   230,    45,
     141,   -43,    47,   165,   240,   165,   141,   147,   159,   -48,
     -48,   237,   194,   200,   148,   195,     0,   159,   148,     0,
     -48,     0,   -48,     0,     0,     0,     0,     0,     0,     0,
       0,   147,   147,   147,   147,   147,   147,     0,     0,   166,
       0,   165,   165,   165,   165,   165,   165,   147,   133,   134,
       0,   135,     0,   147,     0,   165,     0,   144,     0,   136,
       0,     0,     0,   166,   165,   137,   138,   196,   139,   -51,
     -51,   140,   -51,   151,   152,   -51,   153,   148,     0,   148,
     -51,   148,   -51,   144,   154,     0,     0,   144,     0,   142,
     155,   156,     0,   157,     0,   166,   158,   166,     0,   148,
     109,   110,   -69,   -69,   -69,   -69,   -69,   -69,   162,     0,
     -69,     0,     0,     0,    72,   142,   -69,     0,     0,   142,
       0,     0,     0,   148,   148,   148,   148,   148,   148,     0,
     107,     0,   162,   166,   166,   166,   166,   166,   166,   148,
     160,     0,     0,     0,     0,   148,     0,   166,     0,     0,
     144,     0,   -37,   -37,   -37,   -37,   166,   -37,   126,   -37,
     -37,   -37,   -37,   -37,   160,     0,     0,     0,   144,   -37,
     -37,     0,   -37,   -37,   -37,   -37,   -69,   -69,   -69,   -69,
       0,   -69,   142,     0,   -69,     0,     0,     0,   188,   -69,
       0,   -69,   144,   144,   210,   211,     0,     0,     0,     0,
     142,     0,   162,   162,   219,   220,     0,     0,   144,     0,
     -24,   -24,   -24,   -24,   144,   -24,   162,   -24,   -24,   -24,
     -24,   -24,     0,     0,   208,   162,     0,   -24,   -24,     0,
     -24,   -24,   -24,   -24,   217,     0,   -62,   -62,   -62,   -62,
     142,   -62,     0,     0,   -62,     0,   142,     0,   160,   -12,
     -62,   -12,   -12,   -12,   -12,     0,   -12,   160,   -12,   -12,
     -12,   -12,   -12,     0,     0,     0,     0,     0,   -12,   -12,
       0,   -12,   -12,    32,   -12,    33,    34,    35,    36,     0,
      37,     0,    38,    39,    40,    41,    42,     0,     0,     0,
       0,     0,    43,    44,     0,    45,    46,   -27,    47,   -27,
     -27,   -27,   -27,     0,   -27,     0,   -27,   -27,   -27,   -27,
     -27,     0,     0,     0,     0,     0,   -27,   -27,     0,   -27,
     -27,     0,   -27,   -29,   -29,   -29,   -29,     0,   -29,   -29,
     -29,   -29,   -29,   -29,   -29,     0,     0,     0,     0,     0,
     -29,   -29,     0,   -29,   -29,   -29,   -29,   -30,   -30,   -30,
     -30,     0,   -30,   -30,   -30,   -30,   -30,   -30,   -30,     0,
       0,     0,     0,     0,   -30,   -30,     0,   -30,   -30,   -30,
     -30,   -31,   -31,   -31,   -31,     0,   -31,   -31,   -31,   -31,
     -31,   -31,   -31,     0,     0,     0,     0,     0,   -31,   -31,
       0,   -31,   -31,   -31,   -31,   -25,   -25,   -25,   -25,     0,
     -25,   -25,   -25,   -25,   -25,   -25,   -25,     0,     0,     0,
       0,     0,   -25,   -25,     0,   -25,   -25,   -25,   -25,   -32,
     -32,   -32,   -32,     0,   -32,   -32,   -32,   -32,   -32,   -32,
     -32,     0,     0,     0,     0,     0,   -32,   -32,     0,   -32,
     -32,   -32,   -32,   -26,   -26,   -26,   -26,     0,   -26,   -26,
     -26,   -26,   -26,   -26,   -26,     0,     0,     0,     0,     0,
     -26,   -26,     0,   -26,   -26,   -26,   -26,   -28,   -28,   -28,
     -28,     0,   -28,   -28,   -28,   -28,   -28,   -28,   -28,     0,
       0,     0,     0,     0,   -28,   -28,     0,   -28,   -28,   -28,
     -28,   -37,   -37,   -37,   -37,     0,   -37,   236,   -37,   -37,
     -37,   -37,   -37,     0,     0,     0,     0,     0,   -37,   -37,
       0,   -37,   -37,   -37,   -37,   -38,   -38,   -38,   -38,     0,
     -38,   -38,   -38,   -38,   -38,   -38,   -38,     0,     0,     0,
       0,     0,   -38,   -38,     0,   -38,   -38,   -38,   -38,   -39,
     -39,   -39,   -39,     0,   -39,   -39,   -39,   -39,   -39,   -39,
     -39,     0,     0,     0,     0,     0,   -39,   -39,     0,   -39,
     -39,   -39,   -39,    33,    34,    35,    36,     0,    37,     0,
      38,    39,    40,    41,    42,     0,     0,     0,     0,     0,
      43,    44,     0,    45,    46,    83,    47,   -23,   -23,   -23,
     -23,     0,   -23,     0,   -23,   -23,   -23,   -23,   -23,     0,
       0,     0,     0,     0,   -23,   -23,     0,   -23,   -23,   -23,
     -23,   -29,   -29,   -29,   -29,     0,   -29,     0,   -29,   -29,
     -29,   -29,   -29,     0,     0,     0,     0,     0,   -29,   -29,
       0,   -29,   -29,   -29,   -29,   -30,   -30,   -30,   -30,     0,
     -30,     0,   -30,   -30,   -30,   -30,   -30,     0,     0,     0,
       0,     0,   -30,   -30,     0,   -30,   -30,   -30,   -30,   -31,
     -31,   -31,   -31,     0,   -31,     0,   -31,   -31,   -31,   -31,
     -31,     0,     0,     0,     0,     0,   -31,   -31,     0,   -31,
     -31,   -31,   -31,    33,    34,    35,    36,     0,    37,     0,
      38,    39,    40,    41,    42,     0,     0,     0,     0,     0,
      43,    44,     0,    45,    46,    95,    47,   -22,   -22,   -22,
     -22,     0,   -22,     0,   -22,   -22,   -22,   -22,   -22,     0,
       0,     0,     0,     0,   -22,   -22,     0,   -22,   -22,   -22,
     -22,   -25,   -25,   -25,   -25,     0,   -25,     0,   -25,   -25,
     -25,   -25,   -25,     0,     0,     0,     0,     0,   -25,   -25,
       0,   -25,   -25,   -25,   -25,   -32,   -32,   -32,   -32,     0,
     -32,     0,   -32,   -32,   -32,   -32,   -32,     0,     0,     0,
       0,     0,   -32,   -32,     0,   -32,   -32,   -32,   -32,   -26,
     -26,   -26,   -26,     0,   -26,     0,   -26,   -26,   -26,   -26,
     -26,     0,     0,     0,     0,     0,   -26,   -26,     0,   -26,
     -26,   -26,   -26,    33,    34,    35,    36,     0,    37,     0,
      38,    39,    40,    41,    42,     0,     0,     0,     0,     0,
      43,    44,     0,    45,    46,   120,    47,   -28,   -28,   -28,
     -28,     0,   -28,     0,   -28,   -28,   -28,   -28,   -28,     0,
       0,     0,     0,     0,   -28,   -28,     0,   -28,   -28,   -28,
     -28,   -38,   -38,   -38,   -38,     0,   -38,     0,   -38,   -38,
     -38,   -38,   -38,     0,     0,     0,     0,     0,   -38,   -38,
       0,   -38,   -38,   -38,   -38,   -39,   -39,   -39,   -39,     0,
     -39,     0,   -39,   -39,   -39,   -39,   -39,     0,     0,     0,
       0,     0,   -39,   -39,     0,   -39,   -39,   -39,   -39,    33,
      34,    35,    36,     0,    37,     0,    38,    39,    40,    41,
      42,     0,     0,     0,     0,     0,    43,    44,     0,    45,
      46,   231,    47,    33,    34,    35,    36,     0,   168,     0,
     169,    39,    40,    41,    42,     0,     0,     0,     0,     0,
      43,    44,     0,    45,   170,     0,    47,    33,    34,    35,
      36,     0,    37,     0,    38,    39,    40,    41,    42,   151,
     152,     0,   153,     0,    43,    44,     0,    45,    46,     0,
      47,     0,     0,     0,     0,     0,   155,   156,     0,   157,
       0,     0,   158,   -62,   -62,   -62,   -62,     0,   -62,     0,
       0,   -62,   -63,   -63,   -63,   -63,   -62,   -63,   -62,     0,
     -63,   -64,   -64,   -64,   -64,   -63,   -64,   -63,     0,   -64,
     -65,   -65,   -65,   -65,   -64,   -65,   -64,     0,   -65,   -54,
     197,   -54,   -54,   -65,   -54,   -65,     0,   -54,   -56,   -56,
     -56,   -56,   -54,   -56,   -54,     0,   -56,   -58,   -58,   -58,
     -58,   -56,   -58,   -56,     0,   -58,   -60,   -60,   -60,   -60,
     -58,   -60,   -58,     0,   -60,   -59,   -59,   -59,   -59,   -60,
     -59,   -60,     0,   -59,   -53,   197,   -53,   -53,   -59,   -53,
     -59,     0,   -53,   -57,   -57,   -57,   -57,   -53,   -57,   -53,
       0,   -57,   -68,   -68,   -68,   -68,   -57,   -68,   -57,     0,
     -68,   -61,   -61,   -61,   -61,   -68,   -61,   -68,     0,   -61,
     -52,   197,   -52,   -52,   -61,   -52,   -61,     0,   -52,   -55,
     -55,   -55,   -55,   -52,   -55,   -52,     0,   -55,   -67,   -67,
     -67,   -67,   -55,   -67,   -55,     0,   -67,   196,     0,   -49,
     -49,   -67,   -49,   -67,     0,   -49,   196,     0,   -50,   -50,
     -49,   -50,   -49,     0,   -50,     0,     0,     0,     0,   -50,
       0,   -50,   -59,   -59,   -59,   -59,    94,   -59,     0,     0,
     -59,     0,   -69,   -69,   -69,   -69,   -59,   -69,     0,     0,
     -69,     0,     0,     0,    72,     0,   -69,   -63,   -63,   -63,
     -63,     0,   -63,     0,     0,   -63,     0,   -64,   -64,   -64,
     -64,   -63,   -64,     0,     0,   -64,     0,   -65,   -65,   -65,
     -65,   -64,   -65,     0,     0,   -65,     0,   -54,    93,   -54,
     -54,   -65,   -54,     0,     0,   -54,     0,   -56,   -56,   -56,
     -56,   -54,   -56,     0,     0,   -56,     0,   -58,   -58,   -58,
     -58,   -56,   -58,     0,     0,   -58,     0,   -60,   -60,   -60,
     -60,   -58,   -60,     0,     0,   -60,     0,   -59,   -59,   -59,
     -59,   -60,   -59,     0,     0,   -59,     0,   -53,    93,   -53,
     -53,   -59,   -53,     0,     0,   -53,     0,   -57,   -57,   -57,
     -57,   -53,   -57,     0,     0,   -57,     0,   -68,   -68,   -68,
     -68,   -57,   -68,     0,     0,   -68,     0,   -61,   -61,   -61,
     -61,   -68,   -61,     0,     0,   -61,     0,   -52,    93,   -52,
     -52,   -61,   -52,     0,     0,   -52,     0,   -55,   -55,   -55,
     -55,   -52,   -55,     0,     0,   -55,     0,   -67,   -67,   -67,
     -67,   -55,   -67,     0,    92,   -67,   -49,   -49,     0,   -49,
       0,   -67,   -49,     0,    92,     0,   -50,   -50,   -49,   -50,
       0,     0,   -50,     0,   -69,   -69,   -69,   -69,   -50,   -69,
       0,     0,   -69,     0,     0,     0,   178,   -69,   -62,   -62,
     -62,   -62,     0,   -62,     0,     0,   -62,   -63,   -63,   -63,
     -63,   -62,   -63,     0,     0,   -63,   -64,   -64,   -64,   -64,
     -63,   -64,     0,     0,   -64,   -65,   -65,   -65,   -65,   -64,
     -65,     0,     0,   -65,   -54,   187,   -54,   -54,   -65,   -54,
       0,     0,   -54,   -56,   -56,   -56,   -56,   -54,   -56,     0,
       0,   -56,   -58,   -58,   -58,   -58,   -56,   -58,     0,     0,
     -58,   -60,   -60,   -60,   -60,   -58,   -60,     0,     0,   -60,
     -59,   -59,   -59,   -59,   -60,   -59,     0,     0,   -59,   -53,
     187,   -53,   -53,   -59,   -53,     0,     0,   -53,   -57,   -57,
     -57,   -57,   -53,   -57,     0,     0,   -57,   -68,   -68,   -68,
     -68,   -57,   -68,     0,     0,   -68,   -61,   -61,   -61,   -61,
     -68,   -61,     0,     0,   -61,   -52,   187,   -52,   -52,   -61,
     -52,     0,     0,   -52,   -55,   -55,   -55,   -55,   -52,   -55,
       0,     0,   -55,   -67,   -67,   -67,   -67,   -55,   -67,     0,
     186,   -67,   -49,   -49,     0,   -49,   -67,   186,   -49,   -50,
     -50,     0,   -50,   -49,     0,   -50,   -47,   -47,     0,   194,
     -50,     0,   195,     0,     0,   -48,   -48,   -47,   184,   -47,
       0,   185,   -47,   -47,     0,   184,   -48,     0,   185,     0,
       0,     0,     0,   -47
};

static const yytype_int16 yycheck[] =
{
      30,    31,    16,    31,    16,     5,    16,    17,   116,    39,
       6,     7,    42,    27,    44,    29,    28,    49,    28,    49,
     116,   116,    16,    17,    74,    19,   116,    27,    22,    16,
      17,   178,     3,     4,    28,     6,   206,    69,    28,    69,
      27,   188,    29,    14,    74,   215,    16,    17,    78,    20,
      21,    81,    23,    81,     0,    26,    27,    27,    88,    89,
      90,    91,    92,    93,    94,    16,   116,     0,    98,     0,
      39,    26,     5,   105,     5,   105,    27,   127,    47,     5,
      42,   116,    16,    17,   116,    47,   116,   117,     6,    16,
      17,    27,   122,    27,   126,    29,   126,   127,   130,    24,
     130,    28,    16,    17,    73,    47,    16,    17,    77,    19,
       6,    73,    22,    27,    14,    77,    16,    17,    28,    19,
      27,   229,    22,    24,   154,    94,   156,    27,   236,    98,
      92,    73,   240,   229,   229,    77,    98,     0,     0,   229,
     236,   236,     5,     5,   240,   240,   236,    89,   117,   199,
     240,     1,     0,   122,     0,     5,    98,     5,    26,     5,
     122,    26,   192,   193,   194,   195,   196,   197,     0,   199,
     200,   140,   200,     5,   136,    26,   206,     0,   140,   229,
     122,    26,     5,    28,     0,   215,   236,   237,     4,   158,
     240,    26,   154,   225,   229,   225,   158,   229,   140,   229,
     230,   236,     6,     7,   236,   240,   236,   237,   240,    26,
     240,    28,     6,    27,    44,    29,   158,    47,     6,     7,
     182,   183,   184,   185,   186,    27,    27,    29,    29,   198,
     192,   193,   194,   195,   196,   204,   198,   206,    28,    47,
     182,   183,   204,    73,   206,    28,   215,    77,    28,    28,
     192,   193,    14,   215,    16,    17,   198,    19,    28,    28,
      22,   230,   204,    93,   206,    73,    28,     6,    98,    77,
      28,     3,     4,   215,     6,    27,    27,    29,    29,    28,
       3,     4,    14,     6,     3,     4,    47,     6,    20,    21,
      98,    23,   122,    28,    26,    27,     6,    20,    21,    27,
      23,    20,    21,    26,    23,    27,   136,    26,   138,    27,
     140,    29,    73,    27,   122,    29,    77,    28,     3,     4,
      27,     6,    29,    27,   154,    29,   156,    18,   158,    14,
      28,    27,   140,    29,    18,    20,    21,    98,    23,    27,
      27,    26,    27,    18,     4,    28,    28,    28,    28,    27,
     158,    27,   182,   183,   184,   185,   186,   187,    26,    26,
      24,   122,   192,   193,   194,   195,   196,   197,   198,     3,
       4,    28,     6,    28,   204,   136,   206,   138,    47,   140,
      14,    28,    27,    27,    27,   215,    20,    21,    28,    23,
     198,    27,    26,   154,    27,   156,   204,   158,   206,    16,
      17,    28,    19,   170,    73,    22,    -1,   215,    77,    -1,
      27,    -1,    29,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   182,   183,   184,   185,   186,   187,    -1,    -1,    98,
      -1,   192,   193,   194,   195,   196,   197,   198,     3,     4,
      -1,     6,    -1,   204,    -1,   206,    -1,    47,    -1,    14,
      -1,    -1,    -1,   122,   215,    20,    21,    14,    23,    16,
      17,    26,    19,     3,     4,    22,     6,   136,    -1,   138,
      27,   140,    29,    73,    14,    -1,    -1,    77,    -1,    47,
      20,    21,    -1,    23,    -1,   154,    26,   156,    -1,   158,
      90,    91,    14,    15,    16,    17,    18,    19,    98,    -1,
      22,    -1,    -1,    -1,    26,    73,    28,    -1,    -1,    77,
      -1,    -1,    -1,   182,   183,   184,   185,   186,   187,    -1,
      88,    -1,   122,   192,   193,   194,   195,   196,   197,   198,
      98,    -1,    -1,    -1,    -1,   204,    -1,   206,    -1,    -1,
     140,    -1,     3,     4,     5,     6,   215,     8,     9,    10,
      11,    12,    13,    14,   122,    -1,    -1,    -1,   158,    20,
      21,    -1,    23,    24,    25,    26,    14,    15,    16,    17,
      -1,    19,   140,    -1,    22,    -1,    -1,    -1,    26,    27,
      -1,    29,   182,   183,   184,   185,    -1,    -1,    -1,    -1,
     158,    -1,   192,   193,   194,   195,    -1,    -1,   198,    -1,
       3,     4,     5,     6,   204,     8,   206,    10,    11,    12,
      13,    14,    -1,    -1,   182,   215,    -1,    20,    21,    -1,
      23,    24,    25,    26,   192,    -1,    14,    15,    16,    17,
     198,    19,    -1,    -1,    22,    -1,   204,    -1,   206,     1,
      28,     3,     4,     5,     6,    -1,     8,   215,    10,    11,
      12,    13,    14,    -1,    -1,    -1,    -1,    -1,    20,    21,
      -1,    23,    24,     1,    26,     3,     4,     5,     6,    -1,
       8,    -1,    10,    11,    12,    13,    14,    -1,    -1,    -1,
      -1,    -1,    20,    21,    -1,    23,    24,     1,    26,     3,
       4,     5,     6,    -1,     8,    -1,    10,    11,    12,    13,
      14,    -1,    -1,    -1,    -1,    -1,    20,    21,    -1,    23,
      24,    -1,    26,     3,     4,     5,     6,    -1,     8,     9,
      10,    11,    12,    13,    14,    -1,    -1,    -1,    -1,    -1,
      20,    21,    -1,    23,    24,    25,    26,     3,     4,     5,
       6,    -1,     8,     9,    10,    11,    12,    13,    14,    -1,
      -1,    -1,    -1,    -1,    20,    21,    -1,    23,    24,    25,
      26,     3,     4,     5,     6,    -1,     8,     9,    10,    11,
      12,    13,    14,    -1,    -1,    -1,    -1,    -1,    20,    21,
      -1,    23,    24,    25,    26,     3,     4,     5,     6,    -1,
       8,     9,    10,    11,    12,    13,    14,    -1,    -1,    -1,
      -1,    -1,    20,    21,    -1,    23,    24,    25,    26,     3,
       4,     5,     6,    -1,     8,     9,    10,    11,    12,    13,
      14,    -1,    -1,    -1,    -1,    -1,    20,    21,    -1,    23,
      24,    25,    26,     3,     4,     5,     6,    -1,     8,     9,
      10,    11,    12,    13,    14,    -1,    -1,    -1,    -1,    -1,
      20,    21,    -1,    23,    24,    25,    26,     3,     4,     5,
       6,    -1,     8,     9,    10,    11,    12,    13,    14,    -1,
      -1,    -1,    -1,    -1,    20,    21,    -1,    23,    24,    25,
      26,     3,     4,     5,     6,    -1,     8,     9,    10,    11,
      12,    13,    14,    -1,    -1,    -1,    -1,    -1,    20,    21,
      -1,    23,    24,    25,    26,     3,     4,     5,     6,    -1,
       8,     9,    10,    11,    12,    13,    14,    -1,    -1,    -1,
      -1,    -1,    20,    21,    -1,    23,    24,    25,    26,     3,
       4,     5,     6,    -1,     8,     9,    10,    11,    12,    13,
      14,    -1,    -1,    -1,    -1,    -1,    20,    21,    -1,    23,
      24,    25,    26,     3,     4,     5,     6,    -1,     8,    -1,
      10,    11,    12,    13,    14,    -1,    -1,    -1,    -1,    -1,
      20,    21,    -1,    23,    24,    25,    26,     3,     4,     5,
       6,    -1,     8,    -1,    10,    11,    12,    13,    14,    -1,
      -1,    -1,    -1,    -1,    20,    21,    -1,    23,    24,    25,
      26,     3,     4,     5,     6,    -1,     8,    -1,    10,    11,
      12,    13,    14,    -1,    -1,    -1,    -1,    -1,    20,    21,
      -1,    23,    24,    25,    26,     3,     4,     5,     6,    -1,
       8,    -1,    10,    11,    12,    13,    14,    -1,    -1,    -1,
      -1,    -1,    20,    21,    -1,    23,    24,    25,    26,     3,
       4,     5,     6,    -1,     8,    -1,    10,    11,    12,    13,
      14,    -1,    -1,    -1,    -1,    -1,    20,    21,    -1,    23,
      24,    25,    26,     3,     4,     5,     6,    -1,     8,    -1,
      10,    11,    12,    13,    14,    -1,    -1,    -1,    -1,    -1,
      20,    21,    -1,    23,    24,    25,    26,     3,     4,     5,
       6,    -1,     8,    -1,    10,    11,    12,    13,    14,    -1,
      -1,    -1,    -1,    -1,    20,    21,    -1,    23,    24,    25,
      26,     3,     4,     5,     6,    -1,     8,    -1,    10,    11,
      12,    13,    14,    -1,    -1,    -1,    -1,    -1,    20,    21,
      -1,    23,    24,    25,    26,     3,     4,     5,     6,    -1,
       8,    -1,    10,    11,    12,    13,    14,    -1,    -1,    -1,
      -1,    -1,    20,    21,    -1,    23,    24,    25,    26,     3,
       4,     5,     6,    -1,     8,    -1,    10,    11,    12,    13,
      14,    -1,    -1,    -1,    -1,    -1,    20,    21,    -1,    23,
      24,    25,    26,     3,     4,     5,     6,    -1,     8,    -1,
      10,    11,    12,    13,    14,    -1,    -1,    -1,    -1,    -1,
      20,    21,    -1,    23,    24,    25,    26,     3,     4,     5,
       6,    -1,     8,    -1,    10,    11,    12,    13,    14,    -1,
      -1,    -1,    -1,    -1,    20,    21,    -1,    23,    24,    25,
      26,     3,     4,     5,     6,    -1,     8,    -1,    10,    11,
      12,    13,    14,    -1,    -1,    -1,    -1,    -1,    20,    21,
      -1,    23,    24,    25,    26,     3,     4,     5,     6,    -1,
       8,    -1,    10,    11,    12,    13,    14,    -1,    -1,    -1,
      -1,    -1,    20,    21,    -1,    23,    24,    25,    26,     3,
       4,     5,     6,    -1,     8,    -1,    10,    11,    12,    13,
      14,    -1,    -1,    -1,    -1,    -1,    20,    21,    -1,    23,
      24,    25,    26,     3,     4,     5,     6,    -1,     8,    -1,
      10,    11,    12,    13,    14,    -1,    -1,    -1,    -1,    -1,
      20,    21,    -1,    23,    24,    -1,    26,     3,     4,     5,
       6,    -1,     8,    -1,    10,    11,    12,    13,    14,     3,
       4,    -1,     6,    -1,    20,    21,    -1,    23,    24,    -1,
      26,    -1,    -1,    -1,    -1,    -1,    20,    21,    -1,    23,
      -1,    -1,    26,    14,    15,    16,    17,    -1,    19,    -1,
      -1,    22,    14,    15,    16,    17,    27,    19,    29,    -1,
      22,    14,    15,    16,    17,    27,    19,    29,    -1,    22,
      14,    15,    16,    17,    27,    19,    29,    -1,    22,    14,
      15,    16,    17,    27,    19,    29,    -1,    22,    14,    15,
      16,    17,    27,    19,    29,    -1,    22,    14,    15,    16,
      17,    27,    19,    29,    -1,    22,    14,    15,    16,    17,
      27,    19,    29,    -1,    22,    14,    15,    16,    17,    27,
      19,    29,    -1,    22,    14,    15,    16,    17,    27,    19,
      29,    -1,    22,    14,    15,    16,    17,    27,    19,    29,
      -1,    22,    14,    15,    16,    17,    27,    19,    29,    -1,
      22,    14,    15,    16,    17,    27,    19,    29,    -1,    22,
      14,    15,    16,    17,    27,    19,    29,    -1,    22,    14,
      15,    16,    17,    27,    19,    29,    -1,    22,    14,    15,
      16,    17,    27,    19,    29,    -1,    22,    14,    -1,    16,
      17,    27,    19,    29,    -1,    22,    14,    -1,    16,    17,
      27,    19,    29,    -1,    22,    -1,    -1,    -1,    -1,    27,
      -1,    29,    14,    15,    16,    17,    18,    19,    -1,    -1,
      22,    -1,    14,    15,    16,    17,    28,    19,    -1,    -1,
      22,    -1,    -1,    -1,    26,    -1,    28,    14,    15,    16,
      17,    -1,    19,    -1,    -1,    22,    -1,    14,    15,    16,
      17,    28,    19,    -1,    -1,    22,    -1,    14,    15,    16,
      17,    28,    19,    -1,    -1,    22,    -1,    14,    15,    16,
      17,    28,    19,    -1,    -1,    22,    -1,    14,    15,    16,
      17,    28,    19,    -1,    -1,    22,    -1,    14,    15,    16,
      17,    28,    19,    -1,    -1,    22,    -1,    14,    15,    16,
      17,    28,    19,    -1,    -1,    22,    -1,    14,    15,    16,
      17,    28,    19,    -1,    -1,    22,    -1,    14,    15,    16,
      17,    28,    19,    -1,    -1,    22,    -1,    14,    15,    16,
      17,    28,    19,    -1,    -1,    22,    -1,    14,    15,    16,
      17,    28,    19,    -1,    -1,    22,    -1,    14,    15,    16,
      17,    28,    19,    -1,    -1,    22,    -1,    14,    15,    16,
      17,    28,    19,    -1,    -1,    22,    -1,    14,    15,    16,
      17,    28,    19,    -1,    -1,    22,    -1,    14,    15,    16,
      17,    28,    19,    -1,    14,    22,    16,    17,    -1,    19,
      -1,    28,    22,    -1,    14,    -1,    16,    17,    28,    19,
      -1,    -1,    22,    -1,    14,    15,    16,    17,    28,    19,
      -1,    -1,    22,    -1,    -1,    -1,    26,    27,    14,    15,
      16,    17,    -1,    19,    -1,    -1,    22,    14,    15,    16,
      17,    27,    19,    -1,    -1,    22,    14,    15,    16,    17,
      27,    19,    -1,    -1,    22,    14,    15,    16,    17,    27,
      19,    -1,    -1,    22,    14,    15,    16,    17,    27,    19,
      -1,    -1,    22,    14,    15,    16,    17,    27,    19,    -1,
      -1,    22,    14,    15,    16,    17,    27,    19,    -1,    -1,
      22,    14,    15,    16,    17,    27,    19,    -1,    -1,    22,
      14,    15,    16,    17,    27,    19,    -1,    -1,    22,    14,
      15,    16,    17,    27,    19,    -1,    -1,    22,    14,    15,
      16,    17,    27,    19,    -1,    -1,    22,    14,    15,    16,
      17,    27,    19,    -1,    -1,    22,    14,    15,    16,    17,
      27,    19,    -1,    -1,    22,    14,    15,    16,    17,    27,
      19,    -1,    -1,    22,    14,    15,    16,    17,    27,    19,
      -1,    -1,    22,    14,    15,    16,    17,    27,    19,    -1,
      14,    22,    16,    17,    -1,    19,    27,    14,    22,    16,
      17,    -1,    19,    27,    -1,    22,    16,    17,    -1,    19,
      27,    -1,    22,    -1,    -1,    16,    17,    27,    19,    29,
      -1,    22,    16,    17,    -1,    19,    27,    -1,    22,    -1,
      -1,    -1,    -1,    27
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     1,     5,    31,    32,    33,    34,    41,    42,     6,
       7,     0,    33,    28,    26,     6,    35,    37,     5,    39,
      40,    27,     6,     7,    29,    36,    24,     6,    40,    27,
      38,    24,     1,     3,     4,     5,     6,     8,    10,    11,
      12,    13,    14,    20,    21,    23,    24,    26,    41,    43,
      44,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    64,    43,
       6,     7,    26,    26,    26,    54,    64,    26,    26,    59,
      60,    45,    54,    25,    44,    28,    28,    28,    16,    17,
      19,    22,    14,    15,    18,    25,     6,    27,    63,    54,
       6,    53,    64,    54,    64,    43,    27,    56,    57,    58,
      58,    59,    60,    54,    54,    65,    27,    28,    27,    27,
      25,    27,    29,    44,    54,    54,     9,    28,    44,    53,
      27,    44,     6,     3,     4,     6,    14,    20,    21,    23,
      26,    55,    56,    57,    58,    59,    60,    61,    62,    64,
       6,     3,     4,     6,    14,    20,    21,    23,    26,    55,
      56,    57,    58,    59,    60,    61,    62,    64,     8,    10,
      24,    46,    47,    48,    49,    50,    53,    64,    26,    59,
      60,    54,    16,    17,    19,    22,    14,    15,    26,    59,
      60,    54,    16,    17,    19,    22,    14,    15,    26,    26,
      45,    28,    28,    28,    18,    27,    63,    27,    56,    57,
      58,    58,    59,    60,    27,    63,    27,    56,    57,    58,
      58,    59,    60,    54,    53,    43,    54,    65,    65,    27,
      28,    25,    27,    27,    44,    54,     9,    28,    44,    53,
      27,    44
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    30,    31,    32,    32,    32,    33,    33,    35,    36,
      34,    37,    38,    34,    39,    39,    40,    40,    41,    41,
      42,    42,    43,    43,    43,    44,    44,    45,    44,    44,
      46,    46,    46,    47,    47,    47,    47,    48,    48,    49,
      50,    51,    52,    53,    54,    55,    55,    56,    56,    57,
      57,    57,    58,    58,    58,    59,    59,    60,    60,    61,
      61,    61,    61,    61,    61,    61,    63,    62,    62,    64,
      65,    65
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     1,     1,     2,     1,     0,     0,
       9,     0,     0,     8,     3,     1,     2,     3,     2,     3,
       2,     3,     2,     1,     1,     2,     2,     0,     4,     1,
       1,     1,     2,     1,     1,     1,     1,     5,     7,     9,
       2,     4,     4,     3,     1,     3,     1,     3,     1,     3,
       3,     1,     3,     2,     1,     3,     1,     2,     1,     1,
       1,     3,     1,     1,     1,     1,     0,     5,     3,     1,
       3,     1
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
#line 87 "src/sin_analyser.y"
            { syntaxTree = (yyval.treeNode); }
#line 1858 "src/sin_analyser.tab.c"
    break;

  case 3:
#line 91 "src/sin_analyser.y"
                          {
        (yyval.treeNode) = newNode("PROGRAM", 0, " ");
        (yyval.treeNode)->subtree1 = (yyvsp[-1].treeNode);
        (yyval.treeNode)->subtree2 = (yyvsp[0].treeNode);
    }
#line 1868 "src/sin_analyser.tab.c"
    break;

  case 4:
#line 97 "src/sin_analyser.y"
                  { (yyval.treeNode) = (yyvsp[0].treeNode); }
#line 1874 "src/sin_analyser.tab.c"
    break;

  case 5:
#line 99 "src/sin_analyser.y"
          { (yyval.treeNode) = newNode("ERROR", 0, " "); }
#line 1880 "src/sin_analyser.tab.c"
    break;

  case 6:
#line 103 "src/sin_analyser.y"
               { (yyval.treeNode) = (yyvsp[-1].treeNode); }
#line 1886 "src/sin_analyser.tab.c"
    break;

  case 7:
#line 105 "src/sin_analyser.y"
              { (yyval.treeNode) = (yyvsp[0].treeNode); }
#line 1892 "src/sin_analyser.tab.c"
    break;

  case 8:
#line 109 "src/sin_analyser.y"
           {
        changeScope(1);
    }
#line 1900 "src/sin_analyser.tab.c"
    break;

  case 9:
#line 111 "src/sin_analyser.y"
             {
        updateParams(table, params);
        params = 0;
    }
#line 1909 "src/sin_analyser.tab.c"
    break;

  case 10:
#line 114 "src/sin_analyser.y"
                     {
        (yyval.treeNode) = newNode("FUNCTION", 0, " ");
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
#line 1954 "src/sin_analyser.tab.c"
    break;

  case 11:
#line 155 "src/sin_analyser.y"
            {
        updateParams(table, params);
    }
#line 1962 "src/sin_analyser.tab.c"
    break;

  case 12:
#line 157 "src/sin_analyser.y"
            {
        changeScope(1);
    }
#line 1970 "src/sin_analyser.tab.c"
    break;

  case 13:
#line 159 "src/sin_analyser.y"
               {
        (yyval.treeNode) = newNode("FUNCTION", 0, " ");
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
#line 2014 "src/sin_analyser.tab.c"
    break;

  case 14:
#line 201 "src/sin_analyser.y"
                           {
        params++;
        (yyval.treeNode) = newNode("PARAMS", 0, " ");
        (yyval.treeNode)->subtree1 = (yyvsp[-2].treeNode);
        (yyval.treeNode)->subtree2 = (yyvsp[0].treeNode);
    }
#line 2025 "src/sin_analyser.tab.c"
    break;

  case 15:
#line 208 "src/sin_analyser.y"
          { 
        params++;
        (yyval.treeNode) = (yyvsp[0].treeNode);
    }
#line 2034 "src/sin_analyser.tab.c"
    break;

  case 16:
#line 215 "src/sin_analyser.y"
            {
        // reg++;
        newSymbol(table, (yyvsp[0].lex).id, (yyvsp[-1].lex).id, "PAR      ", (yyvsp[0].lex).line, (yyvsp[0].lex).col, stack[scope_pos], params+1, reg);   
        (yyval.treeNode) = newNode(strcat(strcat((yyvsp[-1].lex).id," var "), (yyvsp[0].lex).id), checkType(table, (yyvsp[0].lex).id, stack[scope_pos], 1), " ");
    }
#line 2044 "src/sin_analyser.tab.c"
    break;

  case 17:
#line 221 "src/sin_analyser.y"
                 {
        // reg++;
        newSymbol(table, (yyvsp[0].lex).id, strcat((yyvsp[-2].lex).id," list"), "LIST PAR ",(yyvsp[0].lex).line, (yyvsp[0].lex).col, stack[scope_pos], params+1, reg);
        (yyval.treeNode) = newNode(strcat(strcat((yyvsp[-2].lex).id," "), (yyvsp[0].lex).id), checkType(table, (yyvsp[0].lex).id, stack[scope_pos], 1), " ");
    }
#line 2054 "src/sin_analyser.tab.c"
    break;

  case 18:
#line 229 "src/sin_analyser.y"
            {
        strcat(tacTable, (yyvsp[-1].lex).id);
        strcat(tacTable, " ");
        strcat(tacTable, (yyvsp[0].lex).id);
        strcat(tacTable, "\n");
        // strcat(tacCode, "mov ");
        // reg_num[0] = '$';
        // reg_num[1] = reg + '0';
        // strcat(tacCode, reg_num);
        // strcat(tacCode, ", ");
        // strcat(tacCode, $2.id);
        // strcat(tacCode, "\n");
        // reg++;
        if(searchTable(table, (yyvsp[0].lex).id, 0, 1, stack, scope_pos)){
            printf("SEMANTIC ERROR: Variable %s already declared [%d, %d]\n", (yyvsp[0].lex).id, (yyvsp[0].lex).line, (yyvsp[0].lex).col);
            sem_errors++;
        }
        newSymbol(table, (yyvsp[0].lex).id, (yyvsp[-1].lex).id, "VAR      ", (yyvsp[0].lex).line, (yyvsp[0].lex).col, stack[scope_pos], 0, reg);   
        (yyval.treeNode) = newNode(strcat(strcat((yyvsp[-1].lex).id," var "), (yyvsp[0].lex).id), checkType(table, (yyvsp[0].lex).id, stack[scope_pos], 1), " ");
    }
#line 2079 "src/sin_analyser.tab.c"
    break;

  case 19:
#line 250 "src/sin_analyser.y"
                 {
        strcat(tacTable, (yyvsp[-2].lex).id);
        strcat(tacTable, " ");
        strcat(tacTable, (yyvsp[0].lex).id);
        // strcat(tacTable, "[]");
        strcat(tacTable, "\n");
        // strcat(tacCode, "mov ");
        // reg_num[0] = '$';
        // reg_num[1] = reg + '0';
        // strcat(tacCode, reg_num);
        // strcat(tacCode, ", ");
        // strcat(tacCode, $3.id);
        // strcat(tacCode, "\n");
        // reg++;
        if(searchTable(table, (yyvsp[0].lex).id, 0, 1, stack, scope_pos)) {
            printf("SEMANTIC ERROR: Variable %s already declared [%d, %d]\n", (yyvsp[0].lex).id, (yyvsp[0].lex).line, (yyvsp[0].lex).col);
            sem_errors++;
        }
        newSymbol(table, (yyvsp[0].lex).id, strcat((yyvsp[-2].lex).id," list"), "LIST VAR ",(yyvsp[0].lex).line, (yyvsp[0].lex).col, stack[scope_pos], 0, reg);
        (yyval.treeNode) = newNode(strcat(strcat((yyvsp[-2].lex).id," "), (yyvsp[0].lex).id), checkType(table, (yyvsp[0].lex).id, stack[scope_pos], 1), " ");
    }
#line 2105 "src/sin_analyser.tab.c"
    break;

  case 20:
#line 274 "src/sin_analyser.y"
            {
        strcat(tacCode, "_");
        strcat(tacCode, (yyvsp[0].lex).id);
        strcat(tacCode, ":");
        strcat(tacCode, "\n");
        if(!strcmp((yyvsp[0].lex).id, "main")) main_found = 1;
        if(searchTable(table, (yyvsp[0].lex).id, 1, 0, stack, scope_pos)) {
            printf("SEMANTIC ERROR: Function %s already declared [%d, %d]\n", (yyvsp[0].lex).id, (yyvsp[0].lex).line, (yyvsp[0].lex).col);
            sem_errors++;
        }
        newSymbol(table, (yyvsp[0].lex).id, (yyvsp[-1].lex).id, "FUNC     ", (yyvsp[0].lex).line, (yyvsp[0].lex).col, stack[scope_pos], -1, -1);
        (yyval.treeNode) = newNode(strcat(strcat((yyvsp[-1].lex).id," function "), (yyvsp[0].lex).id), checkType(table, (yyvsp[0].lex).id, stack[scope_pos], 1), " ");
    }
#line 2123 "src/sin_analyser.tab.c"
    break;

  case 21:
#line 288 "src/sin_analyser.y"
                 {
        strcat(tacCode, "_");
        strcat(tacCode, (yyvsp[0].lex).id);
        strcat(tacCode, ":");
        strcat(tacCode, "\n");
        if(!strcmp((yyvsp[0].lex).id, "main")) main_found = 1;
        if(searchTable(table, (yyvsp[0].lex).id, 1, 0, stack, scope_pos)) {
            printf("SEMANTIC ERROR: Function %s already declared [%d, %d]\n", (yyvsp[0].lex).id, (yyvsp[0].lex).line, (yyvsp[0].lex).col);
            sem_errors++;
        }
        newSymbol(table, (yyvsp[0].lex).id, strcat((yyvsp[-2].lex).id," list"), "LIST FUNC", (yyvsp[0].lex).line, (yyvsp[0].lex).col, scope, -1, -1);
        (yyval.treeNode) = newNode(strcat(strcat((yyvsp[-2].lex).id," function list "), (yyvsp[0].lex).id), checkType(table, (yyvsp[0].lex).id, stack[scope_pos], 1), " ");
    }
#line 2141 "src/sin_analyser.tab.c"
    break;

  case 22:
#line 304 "src/sin_analyser.y"
                    {
        (yyval.treeNode) = newNode("BLOCK", 0, " ");
        (yyval.treeNode)->subtree1 = (yyvsp[-1].treeNode);
        (yyval.treeNode)->subtree2 = (yyvsp[0].treeNode);
        (yyval.treeNode)->type = (yyval.treeNode)->subtree2->type;
    }
#line 2152 "src/sin_analyser.tab.c"
    break;

  case 23:
#line 311 "src/sin_analyser.y"
              { (yyval.treeNode) = (yyvsp[0].treeNode); }
#line 2158 "src/sin_analyser.tab.c"
    break;

  case 24:
#line 313 "src/sin_analyser.y"
          { (yyval.treeNode) = newNode("ERROR", 0, " "); }
#line 2164 "src/sin_analyser.tab.c"
    break;

  case 25:
#line 317 "src/sin_analyser.y"
             { (yyval.treeNode) = (yyvsp[-1].treeNode); }
#line 2170 "src/sin_analyser.tab.c"
    break;

  case 26:
#line 319 "src/sin_analyser.y"
              { (yyval.treeNode) = (yyvsp[-1].treeNode); }
#line 2176 "src/sin_analyser.tab.c"
    break;

  case 27:
#line 321 "src/sin_analyser.y"
       {
        changeScope(1);
    }
#line 2184 "src/sin_analyser.tab.c"
    break;

  case 28:
#line 323 "src/sin_analyser.y"
               { 
        (yyval.treeNode) = (yyvsp[-1].treeNode);
        changeScope(0);
    }
#line 2193 "src/sin_analyser.tab.c"
    break;

  case 29:
#line 328 "src/sin_analyser.y"
             { (yyval.treeNode) = (yyvsp[0].treeNode); }
#line 2199 "src/sin_analyser.tab.c"
    break;

  case 30:
#line 332 "src/sin_analyser.y"
            { (yyval.treeNode) = (yyvsp[0].treeNode); }
#line 2205 "src/sin_analyser.tab.c"
    break;

  case 31:
#line 334 "src/sin_analyser.y"
        { (yyval.treeNode) = (yyvsp[0].treeNode); }
#line 2211 "src/sin_analyser.tab.c"
    break;

  case 32:
#line 336 "src/sin_analyser.y"
               { (yyval.treeNode) = (yyvsp[-1].treeNode); }
#line 2217 "src/sin_analyser.tab.c"
    break;

  case 33:
#line 340 "src/sin_analyser.y"
              { (yyval.treeNode) = (yyvsp[0].treeNode); }
#line 2223 "src/sin_analyser.tab.c"
    break;

  case 34:
#line 342 "src/sin_analyser.y"
           { (yyval.treeNode) = (yyvsp[0].treeNode); }
#line 2229 "src/sin_analyser.tab.c"
    break;

  case 35:
#line 344 "src/sin_analyser.y"
          { (yyval.treeNode) = (yyvsp[0].treeNode); }
#line 2235 "src/sin_analyser.tab.c"
    break;

  case 36:
#line 346 "src/sin_analyser.y"
           { (yyval.treeNode) = (yyvsp[0].treeNode); }
#line 2241 "src/sin_analyser.tab.c"
    break;

  case 37:
#line 350 "src/sin_analyser.y"
                                            {
        (yyval.treeNode) = newNode("IF", 0, " ");
        (yyval.treeNode)->subtree1 = (yyvsp[-2].treeNode);
        // loop_num[0] = 'L';
        // loop_num[1] = loop + '0';
        // loop++;
        // strcat(tacCode, "brz ");
        // strcat(tacCode, loop_num);
        // strcat(tacCode, ", ");
        // strcat(tacCode, "\n");
        (yyval.treeNode)->subtree2 = (yyvsp[0].treeNode);
        (yyval.treeNode)->type = (yyval.treeNode)->subtree2->type;
    }
#line 2259 "src/sin_analyser.tab.c"
    break;

  case 38:
#line 364 "src/sin_analyser.y"
                                                {
        (yyval.treeNode) = newNode("IF ELSE", 0, " ");
        (yyval.treeNode)->subtree1 = (yyvsp[-4].treeNode);
        (yyval.treeNode)->subtree2 = (yyvsp[-2].treeNode);
        (yyval.treeNode)->subtree3 = (yyvsp[0].treeNode);
        (yyval.treeNode)->type = (yyval.treeNode)->subtree3->type;
    }
#line 2271 "src/sin_analyser.tab.c"
    break;

  case 39:
#line 374 "src/sin_analyser.y"
                                                        {
        (yyval.treeNode) = newNode("FOR", 0, " ");
        (yyval.treeNode)->subtree1 = (yyvsp[-6].treeNode);
        (yyval.treeNode)->subtree2 = (yyvsp[-4].treeNode);
        (yyval.treeNode)->subtree3 = (yyvsp[-2].treeNode);
        (yyval.treeNode)->subtree4 = (yyvsp[0].treeNode);
        (yyval.treeNode)->type = (yyval.treeNode)->subtree4->type;
    }
#line 2284 "src/sin_analyser.tab.c"
    break;

  case 40:
#line 385 "src/sin_analyser.y"
                     {
        (yyval.treeNode) = newNode("RETURN", 0, " ");
        (yyval.treeNode)->subtree1 = (yyvsp[0].treeNode);
        (yyval.treeNode)->type = (yyval.treeNode)->subtree1->type;
        strcat(tacCode, "return ");
        strcat(tacCode, (yyval.treeNode)->subtree1->tac);
        strcat(tacCode, "\n");
    }
#line 2297 "src/sin_analyser.tab.c"
    break;

  case 41:
#line 396 "src/sin_analyser.y"
                {
        (yyval.treeNode) = newNode("IN", 0, " ");
        (yyval.treeNode)->subtree1 = (yyvsp[-1].treeNode);
        if((yyval.treeNode)->subtree1->type == 1) strcat(tacCode, "scani ");
        else strcat(tacCode, "scanf ");
        strcat(tacCode, (yyval.treeNode)->subtree1->tac);
        strcat(tacCode, "\n");
    }
#line 2310 "src/sin_analyser.tab.c"
    break;

  case 42:
#line 407 "src/sin_analyser.y"
                        { 
        (yyval.treeNode) = newNode("OUT", 0, " ");
        (yyval.treeNode)->subtree1 = (yyvsp[-1].treeNode);
        if((yyval.treeNode)->subtree1->type == 0){ // Cria um loop para printar cada caracter de um literal.
            loop_num[0] = 'L';
            loop_num[1] = loop + '0';
            loop++;
            reg_num[0] = '$';
            reg_num[1] = reg + '0';
            reg++;
            strcat(tacCode, "mov $1000, ");
            sprintf(str_num, "%ld", strlen((yyval.treeNode)->subtree1->value)-2);
            strcat(tacCode, str_num);
            strcat(tacCode, "\n");
            strcat(tacCode, "mov $999, 0\n");
            strcat(tacCode, loop_num);
            strcat(tacCode, ":\n");
            strcat(tacCode, "mov ");
            strcat(tacCode, reg_num);
            strcat(tacCode, ", &");
            strcat(tacCode, (yyval.treeNode)->subtree1->tac);
            strcat(tacCode, "\n");
            strcat(tacCode, "mov ");
            strcat(tacCode, reg_num);
            strcat(tacCode, ", ");
            strcat(tacCode, reg_num);
            strcat(tacCode, "[$999]\n");
            strcat(tacCode, "print ");
            strcat(tacCode, reg_num);
            strcat(tacCode, "\n");
            strcat(tacCode, "sub $1000, $1000, 1\n");
            strcat(tacCode, "add $999, $999, 1\n");
            strcat(tacCode, "brnz ");
            strcat(tacCode, loop_num);
            strcat(tacCode, ", $1000\n");
        }else{
            strcat(tacCode, "print ");
            strcat(tacCode, (yyval.treeNode)->subtree1->tac);
            strcat(tacCode, "\n");
        }
        if(!strcmp((yyvsp[-3].lex).id, "writeln")) strcat(tacCode, "print '\\n' \n");
    }
#line 2357 "src/sin_analyser.tab.c"
    break;

  case 43:
#line 452 "src/sin_analyser.y"
                        {
        (yyval.treeNode) = newNode("ASSIGN", 0, " ");
        (yyval.treeNode)->subtree1 = (yyvsp[-2].treeNode);
        (yyval.treeNode)->subtree2 = (yyvsp[0].treeNode);
        strcat(tacCode, "mov ");
        strcat(tacCode, (yyval.treeNode)->subtree1->tac);
        strcat(tacCode, ", ");
        strcat(tacCode, (yyval.treeNode)->subtree2->tac);
        strcat(tacCode, "\n");
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
#line 2407 "src/sin_analyser.tab.c"
    break;

  case 44:
#line 500 "src/sin_analyser.y"
           { (yyval.treeNode) = (yyvsp[0].treeNode); }
#line 2413 "src/sin_analyser.tab.c"
    break;

  case 45:
#line 504 "src/sin_analyser.y"
                          {
        (yyval.treeNode) = newNode("LOG OP", 0, " ");
        (yyval.treeNode)->subtree1 = (yyvsp[-2].treeNode);
        (yyval.treeNode)->subtree2 = (yyvsp[0].treeNode);
        if(!strcmp((yyvsp[-1].lex).id, "&&")) strcat(tacCode, "and ");
        else strcat(tacCode, "or ");
        reg_num[0] = '$';
        reg_num[1] = reg + '0';
        strcat(tacCode, reg_num);
        strcat(tacCode, ", ");
        strcat(tacCode, (yyval.treeNode)->subtree1->tac);
        strcat(tacCode, ", ");
        strcat(tacCode, (yyval.treeNode)->subtree2->tac);
        strcat(tacCode, "\n");
        strcpy((yyval.treeNode)->tac, reg_num);
        reg++;
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
#line 2457 "src/sin_analyser.tab.c"
    break;

  case 46:
#line 544 "src/sin_analyser.y"
           { (yyval.treeNode) = (yyvsp[0].treeNode); }
#line 2463 "src/sin_analyser.tab.c"
    break;

  case 47:
#line 548 "src/sin_analyser.y"
                          {
        (yyval.treeNode) = newNode("REL OP", 0, " ");
        (yyval.treeNode)->subtree1 = (yyvsp[-2].treeNode);
        (yyval.treeNode)->subtree2 = (yyvsp[0].treeNode);
        if(!strcmp((yyvsp[-1].lex).id, "==") || !strcmp((yyvsp[-1].lex).id, "!=")) strcat(tacCode, "seq ");
        else if(!strcmp((yyvsp[-1].lex).id, ">=") || !strcmp((yyvsp[-1].lex).id, "<")) strcat(tacCode, "slt ");
        else strcat(tacCode, "sleq ");
        reg_num[0] = '$';
        reg_num[1] = reg + '0';
        strcat(tacCode, reg_num);
        strcat(tacCode, ", ");
        strcat(tacCode, (yyval.treeNode)->subtree1->tac);
        strcat(tacCode, ", ");
        strcat(tacCode, (yyval.treeNode)->subtree2->tac);
        strcat(tacCode, "\n");
        if(!strcmp((yyvsp[-1].lex).id, ">=") || !strcmp((yyvsp[-1].lex).id, "!=") || !strcmp((yyvsp[-1].lex).id, ">")){
            strcat(tacCode, "not ");
            strcat(tacCode, reg_num);
            strcat(tacCode, ", ");
            strcat(tacCode, reg_num);
            strcat(tacCode, "\n");
        }
        strcpy((yyval.treeNode)->tac, reg_num);
        reg++;
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
#line 2519 "src/sin_analyser.tab.c"
    break;

  case 48:
#line 600 "src/sin_analyser.y"
            { (yyval.treeNode) = (yyvsp[0].treeNode); }
#line 2525 "src/sin_analyser.tab.c"
    break;

  case 49:
#line 604 "src/sin_analyser.y"
                             {
        (yyval.treeNode) = newNode("LIST FUNC", 0, " ");
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
#line 2546 "src/sin_analyser.tab.c"
    break;

  case 50:
#line 621 "src/sin_analyser.y"
                            {
        (yyval.treeNode) = newNode("LIST OP", 0, " ");
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
#line 2567 "src/sin_analyser.tab.c"
    break;

  case 51:
#line 638 "src/sin_analyser.y"
           { (yyval.treeNode) = (yyvsp[0].treeNode); }
#line 2573 "src/sin_analyser.tab.c"
    break;

  case 52:
#line 642 "src/sin_analyser.y"
                       {
        (yyval.treeNode) = newNode("ARI SS OP", 0, " ");
        (yyval.treeNode)->subtree1 = (yyvsp[-2].treeNode);
        (yyval.treeNode)->subtree2 = (yyvsp[0].treeNode);
        if(!strcmp((yyvsp[-1].lex).id, "+")) strcat(tacCode, "add ");
        else strcat(tacCode, "sub ");
        reg_num[0] = '$';
        reg_num[1] = reg + '0';
        strcat(tacCode, reg_num);
        strcat(tacCode, ", ");
        strcat(tacCode, (yyval.treeNode)->subtree1->tac);
        strcat(tacCode, ", ");
        strcat(tacCode, (yyval.treeNode)->subtree2->tac);
        strcat(tacCode, "\n");
        strcpy((yyval.treeNode)->tac, reg_num);
        reg++;
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
#line 2617 "src/sin_analyser.tab.c"
    break;

  case 53:
#line 682 "src/sin_analyser.y"
                {
        (yyval.treeNode) = newNode("NEGATIVE", 0, " ");
        (yyval.treeNode)->subtree1 = (yyvsp[0].treeNode);
        reg_num[0] = '$';
        reg_num[1] = reg + '0';
        strcat(tacCode, "minus ");
        strcat(tacCode, reg_num);
        strcat(tacCode, ", ");
        strcat(tacCode, (yyval.treeNode)->subtree1->tac);
        strcat(tacCode, "\n");
        strcpy((yyval.treeNode)->tac, reg_num);
        reg++;
        if((yyval.treeNode)->subtree1->type > 2){
            printf("SEMANTIC ERROR: Type error in assigning negative to type %d. [%d, %d]\n", (yyval.treeNode)->subtree1->type, (yyvsp[-1].lex).line, (yyvsp[-1].lex).col);
            sem_errors++;
        }else{
             (yyval.treeNode)->type = (yyval.treeNode)->subtree1->type;
        }
    }
#line 2641 "src/sin_analyser.tab.c"
    break;

  case 54:
#line 702 "src/sin_analyser.y"
          { (yyval.treeNode) = (yyvsp[0].treeNode); }
#line 2647 "src/sin_analyser.tab.c"
    break;

  case 55:
#line 706 "src/sin_analyser.y"
                      {
        (yyval.treeNode) = newNode("ARI MD OP", 0, " ");
        (yyval.treeNode)->subtree1 = (yyvsp[-2].treeNode);
        (yyval.treeNode)->subtree2 = (yyvsp[0].treeNode);
        if(!strcmp((yyvsp[-1].lex).id, "*")) strcat(tacCode, "mul ");
        else strcat(tacCode, "div ");
        reg_num[0] = '$';
        reg_num[1] = reg + '0';
        strcat(tacCode, reg_num);
        strcat(tacCode, ", ");
        strcat(tacCode, (yyval.treeNode)->subtree1->tac);
        strcat(tacCode, ", ");
        strcat(tacCode, (yyval.treeNode)->subtree2->tac);
        strcat(tacCode, "\n");
        strcpy((yyval.treeNode)->tac, reg_num);
        reg++;
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
#line 2691 "src/sin_analyser.tab.c"
    break;

  case 56:
#line 746 "src/sin_analyser.y"
          { (yyval.treeNode) = (yyvsp[0].treeNode); }
#line 2697 "src/sin_analyser.tab.c"
    break;

  case 57:
#line 750 "src/sin_analyser.y"
                {
        (yyval.treeNode) = newNode("UNARY OP", 0, " ");
        (yyval.treeNode)->subtree1 = (yyvsp[0].treeNode);
        if((yyval.treeNode)->subtree1->type != 0){
            (yyval.treeNode)->type = (yyval.treeNode)->subtree1->type;
        } else{
            printf("SEMANTIC ERROR: Type error in unary operator with type %d. [%d, %d]\n", (yyval.treeNode)->subtree1->type, (yyvsp[-1].lex).line, (yyvsp[-1].lex).col);
            sem_errors++;
        }
    }
#line 2712 "src/sin_analyser.tab.c"
    break;

  case 58:
#line 761 "src/sin_analyser.y"
        { (yyval.treeNode) = (yyvsp[0].treeNode); }
#line 2718 "src/sin_analyser.tab.c"
    break;

  case 59:
#line 765 "src/sin_analyser.y"
       { (yyval.treeNode) = (yyvsp[0].treeNode); }
#line 2724 "src/sin_analyser.tab.c"
    break;

  case 60:
#line 767 "src/sin_analyser.y"
              { (yyval.treeNode) = (yyvsp[0].treeNode); }
#line 2730 "src/sin_analyser.tab.c"
    break;

  case 61:
#line 769 "src/sin_analyser.y"
                    { (yyval.treeNode) = (yyvsp[-1].treeNode); }
#line 2736 "src/sin_analyser.tab.c"
    break;

  case 62:
#line 771 "src/sin_analyser.y"
        { (yyval.treeNode) = newNode((yyvsp[0].lex).id, 1, (yyvsp[0].lex).id); }
#line 2742 "src/sin_analyser.tab.c"
    break;

  case 63:
#line 773 "src/sin_analyser.y"
          { (yyval.treeNode) = newNode((yyvsp[0].lex).id, 2, (yyvsp[0].lex).id); }
#line 2748 "src/sin_analyser.tab.c"
    break;

  case 64:
#line 775 "src/sin_analyser.y"
        { (yyval.treeNode) = newNode("NIL", 3, (yyvsp[0].lex).id); }
#line 2754 "src/sin_analyser.tab.c"
    break;

  case 65:
#line 777 "src/sin_analyser.y"
            {
        strcat(tacTable, "char ");
        str_num[0] = '_';
        str_num[1] = 's';
        str_num[2] = str + '0';
        strcat(tacTable, str_num);
        strcat(tacTable, "[] = ");
        strcat(tacTable, (yyvsp[0].lex).id);
        strcat(tacTable, "\n");
        str++;
        (yyval.treeNode) = newNode((yyvsp[0].lex).id, 0, str_num); 
    }
#line 2771 "src/sin_analyser.tab.c"
    break;

  case 66:
#line 792 "src/sin_analyser.y"
          {
        call_scope = searchTable(table, (yyvsp[-1].lex).id, 1, 1, stack, scope_pos);
    }
#line 2779 "src/sin_analyser.tab.c"
    break;

  case 67:
#line 794 "src/sin_analyser.y"
                     {
        if(!call_scope){
            printf("SEMANTIC ERROR: Function '%s' not declared [%d, %d]\n", (yyvsp[-4].lex).id, (yyvsp[-4].lex).line, (yyvsp[-4].lex).col);
            sem_errors++;
        }else if(checkParams(table, (yyvsp[-4].lex).id) != args){
            printf("SEMANTIC ERROR: Function '%s' calls for different number of parameters [%d, %d]\n", (yyvsp[-4].lex).id, (yyvsp[-4].lex).line, (yyvsp[-4].lex).col);
            sem_errors++;
        }else if(param_error){
            printf("SEMANTIC ERROR: Function '%s' incorrect parameter type [%d, %d]\n", (yyvsp[-4].lex).id, (yyvsp[-3].lex).line, (yyvsp[-3].lex).col);
            param_error = 0;
            sem_errors++;
        }
        (yyval.treeNode) = newNode("CALL", checkType(table, (yyvsp[-4].lex).id, stack[scope_pos], 0), " ");
        (yyval.treeNode)->subtree2 = (yyvsp[-1].treeNode);
        strcat(tacCode, "call _");
        strcat(tacCode, (yyvsp[-4].lex).id);
        strcat(tacCode, ", ");
        sprintf(str_num, "%d", args);
        strcat(tacCode, str_num);
        strcat(tacCode, "\n");
        args = 0;

    }
#line 2807 "src/sin_analyser.tab.c"
    break;

  case 68:
#line 818 "src/sin_analyser.y"
             {
        if(!searchTable(table, (yyvsp[-2].lex).id, 1, 1, stack, scope_pos)){
            printf("SEMANTIC ERROR: Function %s not declared [%d, %d]\n", (yyvsp[-2].lex).id, (yyvsp[-2].lex).line, (yyvsp[-2].lex).col);
            sem_errors++;
        }else if(checkParams(table, (yyvsp[-2].lex).id) != args){
            printf("SEMANTIC ERROR: Function %s calls for different number of parameters [%d, %d]\n", (yyvsp[-2].lex).id, (yyvsp[-2].lex).line, (yyvsp[-2].lex).col);
            sem_errors++;
        }
        args = 0;
        (yyval.treeNode) = newNode("CALL", checkType(table, (yyvsp[-2].lex).id, stack[scope_pos], 0), " ");
        strcat(tacCode, "call _");
        strcat(tacCode, (yyvsp[-2].lex).id);
        strcat(tacCode, ", 0\n");
    }
#line 2826 "src/sin_analyser.tab.c"
    break;

  case 69:
#line 835 "src/sin_analyser.y"
       { 
        if(!searchTable(table, (yyvsp[0].lex).id, 0, 0, stack, scope_pos)){
            printf("SEMANTIC ERROR: Variable %s not declared [%d, %d]\n", (yyvsp[0].lex).id, (yyvsp[0].lex).line, (yyvsp[0].lex).col);
            sem_errors++;
        }
        (yyval.treeNode) = newNode((yyvsp[0].lex).id, checkType(table, (yyvsp[0].lex).id, stack[scope_pos], 1), (yyvsp[0].lex).id); 
    }
#line 2838 "src/sin_analyser.tab.c"
    break;

  case 70:
#line 845 "src/sin_analyser.y"
                                   {
        args++;
        (yyval.treeNode) = newNode("PARAMS", 0, " ");
        (yyval.treeNode)->subtree1 = (yyvsp[-2].treeNode);
        (yyval.treeNode)->subtree2 = (yyvsp[0].treeNode);
        strcat(tacCode, "param ");
        strcat(tacCode, (yyval.treeNode)->subtree2->tac);
        strcat(tacCode, "\n");
        if((yyval.treeNode)->subtree2->type < 3 && checkParamType(table, args, call_scope-1) > 2)
            param_error = 1;
        else if((yyval.treeNode)->subtree2->type > 2 && checkParamType(table, args, call_scope-1) < 3)
            param_error = 1;
        // printf("asub type: %d, check type: %d, args: %d, call: %d\n", $$->subtree2->type, checkParamType(table, args, call_scope-1), args, call_scope);
    }
#line 2857 "src/sin_analyser.tab.c"
    break;

  case 71:
#line 860 "src/sin_analyser.y"
              { 
        args++;
        (yyval.treeNode) = newNode("PARAMS", 0, " ");
        (yyval.treeNode)->subtree1 = (yyvsp[0].treeNode);
        strcat(tacCode, "param ");
        strcat(tacCode, (yyval.treeNode)->subtree1->tac);
        strcat(tacCode, "\n");
        if((yyval.treeNode)->subtree1->type < 3 && checkParamType(table, args, call_scope-1) > 2)
            param_error = 1;
        else if((yyval.treeNode)->subtree1->type > 2 && checkParamType(table, args, call_scope-1) < 3)
            param_error = 1;
        // printf("bsub type: %d, check type: %d, args: %d, call: %d\n", $$->subtree1->type, checkParamType(table, args, call_scope-1), args, call_scope);
    }
#line 2875 "src/sin_analyser.tab.c"
    break;


#line 2879 "src/sin_analyser.tab.c"

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
#line 875 "src/sin_analyser.y"


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
    char tacFile[100];
    int i = 5; // Pula os primeiros caracteres "tests/"
    while(++i){
        tacFile[i-6] = argv[1][i];
        if(tacFile[i-6] == '.') break;
    }
    strcat(tacFile, "tac");
    
    if(argc > 1) yyin = fopen(argv[1], "r");
    else return 0;

    yyparse();

    if(!main_found){
        printf("SEMANTIC ERROR: Main not found\n");
        sem_errors++;
    }

    if(sem_errors) printf("\nNOTE: For type errors, assume: 1 as int, 2 as float, 3 as int list and 4 as float list.\n");

    printf("\n");
    printf("Syntax analysis finished with %d semantic errors, %d syntax errors and %d lexical errors.\n", sem_errors, sin_errors, lex_errors);
    
    // if(!sin_errors) showTree(syntaxTree, 0);

    showTable(table);
    destroyTree();

    strcat(tacCode, "\n");
    strcat(tacCode, "main:");
    strcat(tacCode, "\n");
    strcat(tacCode, "call _main, 0");
    strcat(tacCode, "\n");
    intermediateCode(tacFile, tacTable, tacCode);

    fclose(yyin);
    yylex_destroy();

    return 0;
}

void yyerror(const char* error) {
    printf("\nSYNTAX ERROR: %s [%d, %d]\n", error, line, col);
    sin_errors++;
}
