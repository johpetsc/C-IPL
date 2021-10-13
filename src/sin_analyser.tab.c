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
    int call_scope;
    int param_error = 0;
    int args = 0;
    int main_found = 0;
    int sin_errors = 0;
    int sem_errors = 0;

#line 96 "src/sin_analyser.tab.c"

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
    LLIST_OP = 276,
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
#line 32 "src/sin_analyser.y"

    /*Token structure*/
    struct lexToken {
        char id[200];
        int line;
        int col;
    } lex;
    /*Tree node reference*/
    struct treeNode* treeNode;

#line 189 "src/sin_analyser.tab.c"

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
#define YYLAST   2563

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  30
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  36
/* YYNRULES -- Number of rules.  */
#define YYNRULES  71
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  320

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
       0,    77,    77,    81,    87,    89,    93,    95,    99,   101,
      99,   145,   147,   145,   191,   198,   205,   210,   217,   226,
     237,   247,   259,   266,   268,   272,   274,   276,   276,   283,
     287,   289,   291,   295,   297,   299,   301,   305,   312,   322,
     333,   341,   384,   388,   395,   402,   430,   434,   466,   470,
     487,   504,   508,   536,   540,   568,   579,   583,   594,   598,
     600,   602,   604,   606,   608,   610,   614,   614,   633,   647,
     657,   667
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 1
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "INT", "FLOAT", "TYPE", "ID", "LIST",
  "IF", "ELSE", "FOR", "RETURN", "OUT", "IN", "SS_OP", "MD_OP", "LLOG_OP",
  "REL_OP", "ASS_OP", "LIST_FUNC", "NIL", "LLIST_OP", "RLIST_OP",
  "LITERAL", "LB", "RB", "LP", "RP", "END", "SEPARATOR", "$accept",
  "start", "program", "program_block", "func_dclr", "$@1", "$@2", "$@3",
  "$@4", "params", "param", "declar", "func", "block", "statement", "$@5",
  "flow_ctr", "expr", "if_else", "for", "return", "ass_op", "operation",
  "input", "output", "log_op", "rel_op", "list_op", "ari_op", "md_op",
  "ulog_op", "val", "func_call", "$@6", "id", "func_params", YY_NULLPTR
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

#define YYPACT_NINF (-204)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-72)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      64,    17,   225,    16,    67,    84,   107,   -15,     5,    85,
      31,  -204,   109,   136,     1,   146,    38,    23,   234,   239,
     250,    42,   275,    49,    38,    94,   933,   351,   362,   106,
    1002,  1002,  1330,  2070,  2080,   324,  2030,   101,   116,   323,
     142,   149,     4,  2090,    50,  2100,  1028,   447,   150,  1354,
    1378,  1402,   164,  1426,  1450,   175,   184,   187,   216,   229,
      10,    62,  2529,   407,  2110,  2120,  2130,  2140,  2045,  1474,
     237,   156,   102,   447,   203,   258,  2150,   447,   290,  2160,
    2170,  1002,   281,   140,  1498,  1522,  1546,  1570,   323,   589,
     323,   323,   323,    50,   323,   287,   277,  2180,  1751,   285,
     303,   296,   317,   311,   314,  1594,  2190,    87,   103,   489,
    2227,  2200,  2210,   325,   386,   410,  1714,   323,   332,   333,
    1618,  2220,  1751,  1066,   345,   411,  1738,   203,  1642,   347,
    1738,  1666,  2055,  2285,  2294,   653,   252,  2303,   213,  2312,
     447,    30,   130,  2536,   232,  2321,  2330,  2339,  2348,  2357,
     352,    19,   300,   209,   553,   371,   336,   389,   447,   708,
     746,   934,   954,  2022,   284,   613,   144,   842,  1815,   684,
    1824,   447,    13,   264,   713,   517,  1833,  1842,  1851,  1860,
    1869,   589,   357,   364,  1028,  1090,   388,  1114,  1138,   391,
     397,   415,   129,  2366,  2375,   414,   447,  1764,   447,   447,
     447,   213,   495,  2236,  2242,   418,   336,   810,  1878,  1887,
     419,  1751,  1777,  1751,  1751,  1751,   684,  2246,   447,   203,
    1002,  1162,  1186,  1210,   447,  2384,  1751,  2393,   137,  1003,
    2276,  2429,   899,  2453,  1789,  2458,   447,   331,  2462,  2467,
    2476,  2481,  2485,  2435,  2444,  2402,  2411,  2251,  1751,  2261,
    2266,  1896,  1751,  1905,   293,    66,   448,   355,  1802,   468,
    1798,   570,   447,   181,   825,   866,   975,  1950,  1957,   776,
    1941,  1914,  1923,   432,   406,  1690,   433,   428,   960,  2490,
    2499,   439,  1764,  1789,   442,   461,  1041,  1966,  1973,   445,
    1777,  1798,  1714,   323,  1234,  2420,  2504,  1751,  2508,  2513,
    2522,  2270,  1932,  1982,  1751,  1989,  1998,  2005,  1258,   452,
     500,   514,  1714,   203,  2527,  2014,  1282,   454,  1714,  1306
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
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -204,  -204,  -204,   438,  -204,  -204,  -204,  -204,  -204,  -204,
     467,   134,  -204,   -29,   -28,   329,  -113,  -112,  -105,   -98,
     -91,   -42,    71,  -204,  -204,   749,   278,   680,   661,   573,
     354,   196,   485,  -187,   -30,  -203
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
      68,    68,    69,   185,   186,   226,    -8,    33,    34,    76,
     132,   187,    76,    13,    76,   248,    11,    -5,   188,    68,
     252,    84,    -5,   277,    43,   189,    88,    45,   -11,   211,
      47,    14,   101,   -62,   -62,   -62,   -62,    15,   -42,    68,
     -42,    84,   -42,    18,   102,   284,   196,   -62,   104,   285,
      21,    68,   105,    33,    34,    27,   132,   -42,    76,   163,
      76,    76,    76,    76,    76,     1,    26,    -2,   180,     2,
      43,    44,     2,    45,   190,    68,    47,    84,   -46,    89,
     -62,   -62,   -62,   -62,    -4,   129,    68,    76,   123,    -4,
     -46,   297,   180,   -62,   310,   -62,    68,   191,   128,   304,
      68,   311,   131,   -45,    89,   -66,   -66,    -7,   -66,    -3,
      75,   -20,    -7,   -18,    -3,   -45,   -66,   181,    82,   -47,
     -47,    29,   -66,   -66,   163,   -66,   163,    73,   -66,    97,
      31,   -47,   -66,   -66,     7,   -66,    -6,   180,     7,   180,
     -13,    -6,    74,   -66,    99,   -13,   -46,   197,   103,   -66,
     -66,   163,   -66,   -45,   197,   -66,   225,   -46,   -69,   -69,
     -69,   -69,    96,   -69,   -45,   113,   -69,   242,    77,   114,
     207,   -69,   -21,   -69,   -19,    78,   163,   274,   -34,   185,
     186,   180,   268,   180,   180,   180,   180,   187,   124,   102,
      68,   275,    85,   125,   188,   290,   180,   -47,   -47,   185,
     186,   189,   242,    86,   242,   185,   186,   187,   -47,   100,
     -47,   195,    87,   187,   188,   -33,   133,   134,   180,   135,
     188,   189,   180,   -69,   -69,   -69,   -69,   189,   268,   205,
     268,     9,    10,   137,   138,   202,   139,   -69,    79,   140,
      22,    23,   210,   147,   -35,    68,   200,    84,   -51,   -51,
     190,   -51,   242,   242,   -51,   133,   134,   -36,   135,   -51,
     268,   268,    68,    76,   308,   -18,    -9,   180,    24,   147,
     190,   317,   137,   147,   180,   139,   190,   -15,   140,   -15,
     -46,   212,    68,   191,   316,   161,   -40,   -10,    68,   273,
     319,   -46,   -10,   -46,   178,   276,   150,   114,   -62,   -62,
     -62,   -62,   -16,   -62,   -16,   -19,   -62,   281,   106,   -45,
     212,   -62,   116,   -62,   -63,   -63,   -63,   -63,   178,   114,
     -45,   -69,   -45,   114,   117,   142,    33,    34,   -63,   132,
      70,    71,   193,   289,   147,    94,   147,    42,   118,   151,
     152,   119,   153,    43,    44,   282,    45,   -47,   -47,    47,
     203,   142,   161,   -41,   147,   142,   155,   156,   -47,   157,
     -44,   -43,   158,   208,   309,   178,   107,   147,   114,   -69,
     -69,   -69,   -69,   127,   130,   114,   173,   161,   -17,   -69,
     -17,   286,   -69,   218,   -69,   -64,   -64,   -64,   -64,   -14,
     219,   -14,   147,   240,   147,   147,   147,   147,    80,   -64,
     173,   146,   161,   -65,   -65,   -65,   -65,   178,   266,   178,
     178,   178,   178,   -71,   147,   -71,   221,   -65,   142,   222,
     147,    92,   178,   -51,   -51,   223,   -51,   146,   279,   -51,
     240,   146,   147,   224,   293,   -51,   142,   121,   -70,   122,
     -70,   227,    12,   160,   178,   249,   253,   112,   178,   142,
     133,   134,   177,   135,   287,   295,   266,   122,   147,   292,
     -41,   136,   -63,   -63,   -63,   -63,   298,   137,   138,   301,
     139,   122,   305,   140,   228,   -63,   177,   -63,   240,   240,
     313,   318,   -64,   -64,   -64,   -64,   266,   266,   302,   254,
     122,    28,   194,   178,   146,   -64,   142,   -64,   -66,   -66,
     178,   -66,   142,    92,   173,   -49,   -49,     0,   -49,   -66,
     204,   -49,   146,   220,   142,   -66,   -66,   -49,   -66,     0,
       0,   -66,   247,   209,     0,   146,   173,   314,     0,   122,
     173,   215,   148,   -51,   -51,   160,   -51,     0,     0,   -51,
     142,   315,     0,   122,   -51,     0,   -51,     0,     0,     0,
     146,   239,   146,   146,   146,   246,   151,   152,   148,   153,
     250,     0,   148,     0,     0,   177,   265,   177,   177,   177,
     272,     0,   146,   155,   162,   173,   157,     0,   146,   158,
     177,     0,   173,   179,   -65,   -65,   -65,   -65,   280,     0,
     146,     0,   151,   152,     0,   153,     0,   -65,     0,   -65,
       0,     0,   177,   154,     0,     0,   177,   179,     0,   155,
     156,     0,   157,     0,   288,   158,   146,     0,     0,     0,
     145,   148,     0,   148,     0,   148,     0,   -63,   -63,   -63,
     -63,     0,   -63,     0,     0,   -63,   239,   300,     0,   162,
     -63,   162,   -63,   148,   265,   307,   145,     0,     0,     0,
     145,   177,   179,     0,   179,     0,   148,     0,   177,     0,
       0,     0,   159,     0,     0,   111,   162,   -69,   -69,   -69,
     -69,   176,   -69,     0,     0,   -69,     0,     0,     0,   192,
     -69,   148,   241,   148,   148,   148,   148,   164,   165,     0,
     166,   162,     0,     0,     0,   176,   179,   267,   179,   179,
     179,   179,     0,   148,   168,   169,     0,   170,   144,   148,
     171,   179,     0,   145,     0,     0,     0,   241,     0,   241,
       0,   148,   -53,   206,   -53,   -53,     0,   143,     0,   -48,
     -48,   145,   213,   179,   144,   214,   -53,   179,   144,     0,
     -48,     0,   -48,   267,   145,   267,     0,   148,     0,     0,
     108,   109,   110,   143,   217,     0,     0,   143,     0,   175,
     -56,   -56,   -56,   -56,     0,     0,     0,   241,   241,   145,
     238,   145,   145,   245,   -56,   267,   267,     0,   174,     0,
       0,     0,   179,   175,   176,   264,   176,   176,   271,   179,
     215,   145,   -49,   -49,     0,   -49,   141,   145,   -49,   176,
       0,   144,   174,   -49,     0,   -49,     0,     0,     0,   145,
       0,     0,     0,   -66,   -66,     0,   -66,     0,     0,   144,
     143,   176,   141,     0,   -66,   176,   141,     0,     0,     0,
     -66,   -66,   144,   -66,     0,   145,   -66,   251,   143,   -53,
     291,   -53,   -53,     0,     0,   164,   165,   172,   166,     0,
       0,   143,   -53,     0,   -53,   299,     0,   144,   237,   243,
     244,     0,   168,   306,     0,   170,     0,     0,   171,     0,
     176,   172,   175,   263,   269,   270,   143,   176,     0,   144,
     -56,   -56,   -56,   -56,     0,   144,     0,   175,     0,   141,
       0,   174,     0,   -56,     0,   -56,     0,   144,   143,     0,
       0,     0,   229,   230,   143,   231,   174,   141,     0,   175,
       0,     0,     0,   175,     0,     0,   143,     0,     0,   233,
     141,     0,   235,   144,     0,   236,     0,     0,   174,     0,
       0,     0,   174,     0,   -12,     0,   -12,   -12,   -12,   -12,
       0,   -12,   143,   -12,   -12,   -12,   -12,   -12,   -58,   -58,
     -58,   -58,     0,   -12,   -12,     0,   -12,   -12,   175,   -12,
       0,     0,   -58,   -66,   -66,   175,   -66,   141,   -60,   -60,
     -60,   -60,     0,   141,   -66,   172,     0,   174,     0,     0,
     -66,   -66,   -60,   -66,   174,   141,   -66,   296,     0,   -58,
     -58,   -58,   -58,     0,     0,     0,     0,   172,     0,     0,
       0,   172,   -58,    32,   -58,    33,    34,    35,    36,     0,
      37,   141,    38,    39,    40,    41,    42,   -62,   -62,   -62,
     -62,     0,    43,    44,     0,    45,    46,     0,    47,   -27,
     -62,   -27,   -27,   -27,   -27,     0,   -27,     0,   -27,   -27,
     -27,   -27,   -27,     0,   -66,   -66,   172,   -66,   -27,   -27,
       0,   -27,   -27,   172,   -27,   -66,     0,     0,     0,     0,
       0,   -66,   -66,     0,   -66,     0,     0,   -66,   303,   -37,
     -37,   -37,   -37,     0,   -37,   126,   -37,   -37,   -37,   -37,
     -37,     0,     0,     0,     0,     0,   -37,   -37,     0,   -37,
     -37,   -37,   -37,   -29,   -29,   -29,   -29,     0,   -29,   -29,
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
     -28,   -37,   -37,   -37,   -37,     0,   -37,   312,   -37,   -37,
     -37,   -37,   -37,     0,     0,     0,     0,     0,   -37,   -37,
       0,   -37,   -37,   -37,   -37,   -38,   -38,   -38,   -38,     0,
     -38,   -38,   -38,   -38,   -38,   -38,   -38,     0,     0,     0,
       0,     0,   -38,   -38,     0,   -38,   -38,   -38,   -38,   -39,
     -39,   -39,   -39,     0,   -39,   -39,   -39,   -39,   -39,   -39,
     -39,     0,     0,     0,     0,     0,   -39,   -39,     0,   -39,
     -39,   -39,   -39,   -24,   -24,   -24,   -24,     0,   -24,     0,
     -24,   -24,   -24,   -24,   -24,     0,     0,     0,     0,     0,
     -24,   -24,     0,   -24,   -24,   -24,   -24,    33,    34,    35,
      36,     0,    37,     0,    38,    39,    40,    41,    42,     0,
       0,     0,     0,     0,    43,    44,     0,    45,    46,    83,
      47,   -23,   -23,   -23,   -23,     0,   -23,     0,   -23,   -23,
     -23,   -23,   -23,     0,     0,     0,     0,     0,   -23,   -23,
       0,   -23,   -23,   -23,   -23,   -29,   -29,   -29,   -29,     0,
     -29,     0,   -29,   -29,   -29,   -29,   -29,     0,     0,     0,
       0,     0,   -29,   -29,     0,   -29,   -29,   -29,   -29,   -30,
     -30,   -30,   -30,     0,   -30,     0,   -30,   -30,   -30,   -30,
     -30,     0,     0,     0,     0,     0,   -30,   -30,     0,   -30,
     -30,   -30,   -30,   -31,   -31,   -31,   -31,     0,   -31,     0,
     -31,   -31,   -31,   -31,   -31,     0,     0,     0,     0,     0,
     -31,   -31,     0,   -31,   -31,   -31,   -31,    33,    34,    35,
      36,     0,    37,     0,    38,    39,    40,    41,    42,     0,
       0,     0,     0,     0,    43,    44,     0,    45,    46,    95,
      47,   -22,   -22,   -22,   -22,     0,   -22,     0,   -22,   -22,
     -22,   -22,   -22,     0,     0,     0,     0,     0,   -22,   -22,
       0,   -22,   -22,   -22,   -22,   -25,   -25,   -25,   -25,     0,
     -25,     0,   -25,   -25,   -25,   -25,   -25,     0,     0,     0,
       0,     0,   -25,   -25,     0,   -25,   -25,   -25,   -25,   -32,
     -32,   -32,   -32,     0,   -32,     0,   -32,   -32,   -32,   -32,
     -32,     0,     0,     0,     0,     0,   -32,   -32,     0,   -32,
     -32,   -32,   -32,   -26,   -26,   -26,   -26,     0,   -26,     0,
     -26,   -26,   -26,   -26,   -26,     0,     0,     0,     0,     0,
     -26,   -26,     0,   -26,   -26,   -26,   -26,    33,    34,    35,
      36,     0,    37,     0,    38,    39,    40,    41,    42,     0,
       0,     0,     0,     0,    43,    44,     0,    45,    46,   120,
      47,   -28,   -28,   -28,   -28,     0,   -28,     0,   -28,   -28,
     -28,   -28,   -28,     0,     0,     0,     0,     0,   -28,   -28,
       0,   -28,   -28,   -28,   -28,   -38,   -38,   -38,   -38,     0,
     -38,     0,   -38,   -38,   -38,   -38,   -38,     0,     0,     0,
       0,     0,   -38,   -38,     0,   -38,   -38,   -38,   -38,   -39,
     -39,   -39,   -39,     0,   -39,     0,   -39,   -39,   -39,   -39,
     -39,     0,     0,     0,     0,     0,   -39,   -39,     0,   -39,
     -39,   -39,   -39,    33,    34,    35,    36,     0,    37,     0,
      38,    39,    40,    41,    42,     0,     0,     0,     0,     0,
      43,    44,     0,    45,    46,   294,    47,    33,    34,    35,
      36,     0,   182,     0,   183,    39,    40,    41,    42,     0,
       0,     0,     0,     0,    43,    44,     0,    45,   184,     0,
      47,    33,    34,    35,    36,     0,    37,     0,    38,    39,
      40,    41,    42,     0,   164,   165,     0,   166,    43,    44,
       0,    45,    46,     0,    47,   167,     0,   229,   230,     0,
     231,   168,   169,     0,   170,     0,     0,   171,   232,     0,
     255,   256,     0,   257,   233,   234,     0,   235,     0,     0,
     236,   258,   229,   230,     0,   231,     0,   259,   260,     0,
     261,   255,   256,   262,   257,   255,   256,     0,   257,   233,
     234,     0,   235,     0,     0,   236,     0,     0,   259,   260,
       0,   261,   259,     0,   262,   261,     0,     0,   262,   -64,
     -64,   -64,   -64,     0,   -64,     0,     0,   -64,   -65,   -65,
     -65,   -65,   -64,   -65,   -64,     0,   -65,   -53,   216,   -53,
     -53,   -65,   -53,   -65,     0,   -53,   -56,   -56,   -56,   -56,
     -53,   -56,   -53,     0,   -56,   -58,   -58,   -58,   -58,   -56,
     -58,   -56,     0,   -58,   -60,   -60,   -60,   -60,   -58,   -60,
     -58,     0,   -60,   -59,   -59,   -59,   -59,   -60,   -59,   -60,
       0,   -59,   -55,   -55,   -55,   -55,   -59,   -55,   -59,     0,
     -55,   -57,   -57,   -57,   -57,   -55,   -57,   -55,     0,   -57,
     -68,   -68,   -68,   -68,   -57,   -68,   -57,     0,   -68,   -61,
     -61,   -61,   -61,   -68,   -61,   -68,     0,   -61,   -52,   216,
     -52,   -52,   -61,   -52,   -61,     0,   -52,   -54,   -54,   -54,
     -54,   -52,   -54,   -52,     0,   -54,   -67,   -67,   -67,   -67,
     -54,   -67,   -54,     0,   -67,   215,     0,   -50,   -50,   -67,
     -50,   -67,     0,   -50,   -60,   -60,   -60,   -60,   -50,     0,
     -50,   -59,   -59,   -59,   -59,     0,     0,   -60,     0,   -60,
     -55,   -55,   -55,   -55,   -59,     0,   -59,   -57,   -57,   -57,
     -57,     0,     0,   -55,     0,   -55,   -68,   -68,   -68,   -68,
     -57,     0,   -57,   -61,   -61,   -61,   -61,     0,     0,   -68,
       0,   -68,   -52,   291,   -52,   -52,   -61,     0,   -61,   -54,
     -54,   -54,   -54,     0,     0,   -52,     0,   -52,   -67,   -67,
     -67,   -67,   -54,     0,   -54,     0,   -59,   -59,   -59,   -59,
       0,   -67,     0,   -67,   -69,   -69,   -69,   -69,   -69,   -69,
     -59,     0,   -69,     0,     0,     0,    72,     0,   -69,   -59,
     -59,   -59,   -59,    94,   -59,     0,     0,   -59,     0,   -69,
     -69,   -69,   -69,   -59,   -69,     0,     0,   -69,     0,     0,
       0,    72,     0,   -69,   -62,   -62,   -62,   -62,     0,   -62,
       0,     0,   -62,     0,   -63,   -63,   -63,   -63,   -62,   -63,
       0,     0,   -63,     0,   -64,   -64,   -64,   -64,   -63,   -64,
       0,     0,   -64,     0,   -65,   -65,   -65,   -65,   -64,   -65,
       0,     0,   -65,     0,   -53,    93,   -53,   -53,   -65,   -53,
       0,     0,   -53,     0,   -56,   -56,   -56,   -56,   -53,   -56,
       0,     0,   -56,     0,   -58,   -58,   -58,   -58,   -56,   -58,
       0,     0,   -58,     0,   -60,   -60,   -60,   -60,   -58,   -60,
       0,     0,   -60,     0,   -59,   -59,   -59,   -59,   -60,   -59,
       0,     0,   -59,     0,   -55,   -55,   -55,   -55,   -59,   -55,
       0,     0,   -55,     0,   -57,   -57,   -57,   -57,   -55,   -57,
       0,     0,   -57,     0,   -68,   -68,   -68,   -68,   -57,   -68,
       0,     0,   -68,     0,   -61,   -61,   -61,   -61,   -68,   -61,
       0,     0,   -61,     0,   -52,    93,   -52,   -52,   -61,   -52,
       0,     0,   -52,     0,   -54,   -54,   -54,   -54,   -52,   -54,
       0,     0,   -54,     0,   -67,   -67,   -67,   -67,   -54,   -67,
       0,    92,   -67,   -50,   -50,     0,   -50,     0,   -67,   -50,
     -55,   -55,   -55,   -55,     0,   -50,   -57,   -57,   -57,   -57,
     -52,   206,   -52,   -52,   -55,   -68,   -68,   -68,   -68,     0,
     -57,     0,     0,     0,   -52,   -61,   -61,   -61,   -61,   -68,
     -54,   -54,   -54,   -54,   -67,   -67,   -67,   -67,     0,   -61,
     -63,   -63,   -63,   -63,   -54,     0,     0,     0,   -67,   -62,
     -62,   -62,   -62,   -63,   -62,     0,     0,   -62,   -63,   -63,
     -63,   -63,   -62,   -63,     0,     0,   -63,   -64,   -64,   -64,
     -64,   -63,   -64,     0,     0,   -64,   -65,   -65,   -65,   -65,
     -64,   -65,     0,     0,   -65,   -53,   201,   -53,   -53,   -65,
     -53,     0,     0,   -53,   -56,   -56,   -56,   -56,   -53,   -56,
       0,     0,   -56,   -58,   -58,   -58,   -58,   -56,   -58,     0,
       0,   -58,   -60,   -60,   -60,   -60,   -58,   -60,     0,     0,
     -60,   -59,   -59,   -59,   -59,   -60,   -59,     0,     0,   -59,
     -55,   -55,   -55,   -55,   -59,   -55,     0,     0,   -55,   -57,
     -57,   -57,   -57,   -55,   -57,     0,     0,   -57,   -68,   -68,
     -68,   -68,   -57,   -68,     0,     0,   -68,   -61,   -61,   -61,
     -61,   -68,   -61,     0,     0,   -61,   -52,   201,   -52,   -52,
     -61,   -52,     0,     0,   -52,   -54,   -54,   -54,   -54,   -52,
     -54,     0,     0,   -54,   -67,   -67,   -67,   -67,   -54,   -67,
       0,     0,   -67,   -69,   -69,   -69,   -69,   -67,     0,   200,
       0,   -49,   -49,     0,   -49,   278,   -69,   -49,   200,     0,
     -50,   -50,   -49,   -50,     0,     0,   -50,   -64,   -64,   -64,
     -64,   -50,   -65,   -65,   -65,   -65,   -53,   283,   -53,   -53,
     -64,   -56,   -56,   -56,   -56,   -65,     0,     0,     0,   -53,
     -58,   -58,   -58,   -58,   -56,   -60,   -60,   -60,   -60,   -59,
     -59,   -59,   -59,   -58,   -55,   -55,   -55,   -55,   -60,     0,
       0,     0,   -59,   -57,   -57,   -57,   -57,   -55,   -68,   -68,
     -68,   -68,   -61,   -61,   -61,   -61,   -57,   -52,   283,   -52,
     -52,   -68,     0,     0,     0,   -61,   -54,   -54,   -54,   -54,
     -52,   -67,   -67,   -67,   -67,   -48,   -48,     0,    90,   -54,
       0,    91,   -48,   -48,   -67,   198,     0,   -48,   199,     0,
       0,     0,     0,   -48
};

static const yytype_int16 yycheck[] =
{
      30,    31,    31,   116,   116,   192,     5,     3,     4,    39,
       6,   116,    42,    28,    44,   202,     0,     0,   116,    49,
     207,    49,     5,   226,    20,   116,    16,    23,    27,    16,
      26,    26,    74,    14,    15,    16,    17,     6,    28,    69,
      27,    69,    29,     5,    74,   248,    16,    28,    78,   252,
      27,    81,    81,     3,     4,     6,     6,    27,    88,    89,
      90,    91,    92,    93,    94,     1,    24,     0,    98,     5,
      20,    21,     5,    23,   116,   105,    26,   105,    16,    17,
      14,    15,    16,    17,     0,   127,   116,   117,   116,     5,
      28,   278,   122,    27,   297,    29,   126,   127,   126,   286,
     130,   304,   130,    16,    17,     3,     4,     0,     6,     0,
      39,    26,     5,    28,     5,    28,    14,    14,    47,    16,
      17,    27,    20,    21,   154,    23,   156,    26,    26,    27,
      24,    28,     3,     4,     0,     6,     0,   167,     4,   169,
       0,     5,    26,    14,    73,     5,    16,    17,    77,    20,
      21,   181,    23,    16,    17,    26,    27,    27,    14,    15,
      16,    17,     6,    19,    27,    94,    22,   197,    26,    98,
      26,    27,    26,    29,    28,    26,   206,   219,    28,   292,
     292,   211,   212,   213,   214,   215,   216,   292,   117,   219,
     220,   220,    28,   122,   292,    14,   226,    16,    17,   312,
     312,   292,   232,    28,   234,   318,   318,   312,    27,     6,
      29,   140,    28,   318,   312,    28,     3,     4,   248,     6,
     318,   312,   252,    14,    15,    16,    17,   318,   258,   158,
     260,     6,     7,    20,    21,    26,    23,    28,    42,    26,
       6,     7,   171,    47,    28,   275,    14,   275,    16,    17,
     292,    19,   282,   283,    22,     3,     4,    28,     6,    27,
     290,   291,   292,   293,   292,    28,    27,   297,    29,    73,
     312,   313,    20,    77,   304,    23,   318,    27,    26,    29,
      16,    17,   312,   313,   312,    89,    28,     0,   318,   218,
     318,    27,     5,    29,    98,   224,     6,   226,    14,    15,
      16,    17,    27,    19,    29,    28,    22,   236,    27,    16,
      17,    27,    27,    29,    14,    15,    16,    17,   122,   248,
      27,    18,    29,   252,    28,    47,     3,     4,    28,     6,
       6,     7,   136,   262,   138,    18,   140,    14,    27,     3,
       4,    27,     6,    20,    21,    14,    23,    16,    17,    26,
     154,    73,   156,    28,   158,    77,    20,    21,    27,    23,
      28,    28,    26,   167,   293,   169,    88,   171,   297,    14,
      15,    16,    17,    28,    27,   304,    98,   181,    27,    27,
      29,    26,    27,    26,    29,    14,    15,    16,    17,    27,
      26,    29,   196,   197,   198,   199,   200,   201,    44,    28,
     122,    47,   206,    14,    15,    16,    17,   211,   212,   213,
     214,   215,   216,    27,   218,    29,    28,    28,   140,    28,
     224,    14,   226,    16,    17,    28,    19,    73,   232,    22,
     234,    77,   236,    18,    28,    28,   158,    27,    27,    29,
      29,    27,     4,    89,   248,    27,    27,    93,   252,   171,
       3,     4,    98,     6,   258,    27,   260,    29,   262,    27,
      27,    14,    14,    15,    16,    17,    27,    20,    21,    27,
      23,    29,    27,    26,   196,    27,   122,    29,   282,   283,
      28,    27,    14,    15,    16,    17,   290,   291,    27,   211,
      29,    24,   138,   297,   140,    27,   218,    29,     3,     4,
     304,     6,   224,    14,   226,    16,    17,    -1,    19,    14,
     156,    22,   158,   184,   236,    20,    21,    28,    23,    -1,
      -1,    26,    27,   169,    -1,   171,   248,    27,    -1,    29,
     252,    14,    47,    16,    17,   181,    19,    -1,    -1,    22,
     262,    27,    -1,    29,    27,    -1,    29,    -1,    -1,    -1,
     196,   197,   198,   199,   200,   201,     3,     4,    73,     6,
     206,    -1,    77,    -1,    -1,   211,   212,   213,   214,   215,
     216,    -1,   218,    20,    89,   297,    23,    -1,   224,    26,
     226,    -1,   304,    98,    14,    15,    16,    17,   234,    -1,
     236,    -1,     3,     4,    -1,     6,    -1,    27,    -1,    29,
      -1,    -1,   248,    14,    -1,    -1,   252,   122,    -1,    20,
      21,    -1,    23,    -1,   260,    26,   262,    -1,    -1,    -1,
      47,   136,    -1,   138,    -1,   140,    -1,    14,    15,    16,
      17,    -1,    19,    -1,    -1,    22,   282,   283,    -1,   154,
      27,   156,    29,   158,   290,   291,    73,    -1,    -1,    -1,
      77,   297,   167,    -1,   169,    -1,   171,    -1,   304,    -1,
      -1,    -1,    89,    -1,    -1,    92,   181,    14,    15,    16,
      17,    98,    19,    -1,    -1,    22,    -1,    -1,    -1,    26,
      27,   196,   197,   198,   199,   200,   201,     3,     4,    -1,
       6,   206,    -1,    -1,    -1,   122,   211,   212,   213,   214,
     215,   216,    -1,   218,    20,    21,    -1,    23,    47,   224,
      26,   226,    -1,   140,    -1,    -1,    -1,   232,    -1,   234,
      -1,   236,    14,    15,    16,    17,    -1,    47,    -1,    16,
      17,   158,    19,   248,    73,    22,    28,   252,    77,    -1,
      27,    -1,    29,   258,   171,   260,    -1,   262,    -1,    -1,
      89,    90,    91,    73,   181,    -1,    -1,    77,    -1,    98,
      14,    15,    16,    17,    -1,    -1,    -1,   282,   283,   196,
     197,   198,   199,   200,    28,   290,   291,    -1,    98,    -1,
      -1,    -1,   297,   122,   211,   212,   213,   214,   215,   304,
      14,   218,    16,    17,    -1,    19,    47,   224,    22,   226,
      -1,   140,   122,    27,    -1,    29,    -1,    -1,    -1,   236,
      -1,    -1,    -1,     3,     4,    -1,     6,    -1,    -1,   158,
     140,   248,    73,    -1,    14,   252,    77,    -1,    -1,    -1,
      20,    21,   171,    23,    -1,   262,    26,    27,   158,    14,
      15,    16,    17,    -1,    -1,     3,     4,    98,     6,    -1,
      -1,   171,    27,    -1,    29,   282,    -1,   196,   197,   198,
     199,    -1,    20,   290,    -1,    23,    -1,    -1,    26,    -1,
     297,   122,   211,   212,   213,   214,   196,   304,    -1,   218,
      14,    15,    16,    17,    -1,   224,    -1,   226,    -1,   140,
      -1,   211,    -1,    27,    -1,    29,    -1,   236,   218,    -1,
      -1,    -1,     3,     4,   224,     6,   226,   158,    -1,   248,
      -1,    -1,    -1,   252,    -1,    -1,   236,    -1,    -1,    20,
     171,    -1,    23,   262,    -1,    26,    -1,    -1,   248,    -1,
      -1,    -1,   252,    -1,     1,    -1,     3,     4,     5,     6,
      -1,     8,   262,    10,    11,    12,    13,    14,    14,    15,
      16,    17,    -1,    20,    21,    -1,    23,    24,   297,    26,
      -1,    -1,    28,     3,     4,   304,     6,   218,    14,    15,
      16,    17,    -1,   224,    14,   226,    -1,   297,    -1,    -1,
      20,    21,    28,    23,   304,   236,    26,    27,    -1,    14,
      15,    16,    17,    -1,    -1,    -1,    -1,   248,    -1,    -1,
      -1,   252,    27,     1,    29,     3,     4,     5,     6,    -1,
       8,   262,    10,    11,    12,    13,    14,    14,    15,    16,
      17,    -1,    20,    21,    -1,    23,    24,    -1,    26,     1,
      27,     3,     4,     5,     6,    -1,     8,    -1,    10,    11,
      12,    13,    14,    -1,     3,     4,   297,     6,    20,    21,
      -1,    23,    24,   304,    26,    14,    -1,    -1,    -1,    -1,
      -1,    20,    21,    -1,    23,    -1,    -1,    26,    27,     3,
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
      20,    21,    -1,    23,    24,    25,    26,     3,     4,     5,
       6,    -1,     8,    -1,    10,    11,    12,    13,    14,    -1,
      -1,    -1,    -1,    -1,    20,    21,    -1,    23,    24,    -1,
      26,     3,     4,     5,     6,    -1,     8,    -1,    10,    11,
      12,    13,    14,    -1,     3,     4,    -1,     6,    20,    21,
      -1,    23,    24,    -1,    26,    14,    -1,     3,     4,    -1,
       6,    20,    21,    -1,    23,    -1,    -1,    26,    14,    -1,
       3,     4,    -1,     6,    20,    21,    -1,    23,    -1,    -1,
      26,    14,     3,     4,    -1,     6,    -1,    20,    21,    -1,
      23,     3,     4,    26,     6,     3,     4,    -1,     6,    20,
      21,    -1,    23,    -1,    -1,    26,    -1,    -1,    20,    21,
      -1,    23,    20,    -1,    26,    23,    -1,    -1,    26,    14,
      15,    16,    17,    -1,    19,    -1,    -1,    22,    14,    15,
      16,    17,    27,    19,    29,    -1,    22,    14,    15,    16,
      17,    27,    19,    29,    -1,    22,    14,    15,    16,    17,
      27,    19,    29,    -1,    22,    14,    15,    16,    17,    27,
      19,    29,    -1,    22,    14,    15,    16,    17,    27,    19,
      29,    -1,    22,    14,    15,    16,    17,    27,    19,    29,
      -1,    22,    14,    15,    16,    17,    27,    19,    29,    -1,
      22,    14,    15,    16,    17,    27,    19,    29,    -1,    22,
      14,    15,    16,    17,    27,    19,    29,    -1,    22,    14,
      15,    16,    17,    27,    19,    29,    -1,    22,    14,    15,
      16,    17,    27,    19,    29,    -1,    22,    14,    15,    16,
      17,    27,    19,    29,    -1,    22,    14,    15,    16,    17,
      27,    19,    29,    -1,    22,    14,    -1,    16,    17,    27,
      19,    29,    -1,    22,    14,    15,    16,    17,    27,    -1,
      29,    14,    15,    16,    17,    -1,    -1,    27,    -1,    29,
      14,    15,    16,    17,    27,    -1,    29,    14,    15,    16,
      17,    -1,    -1,    27,    -1,    29,    14,    15,    16,    17,
      27,    -1,    29,    14,    15,    16,    17,    -1,    -1,    27,
      -1,    29,    14,    15,    16,    17,    27,    -1,    29,    14,
      15,    16,    17,    -1,    -1,    27,    -1,    29,    14,    15,
      16,    17,    27,    -1,    29,    -1,    14,    15,    16,    17,
      -1,    27,    -1,    29,    14,    15,    16,    17,    18,    19,
      28,    -1,    22,    -1,    -1,    -1,    26,    -1,    28,    14,
      15,    16,    17,    18,    19,    -1,    -1,    22,    -1,    14,
      15,    16,    17,    28,    19,    -1,    -1,    22,    -1,    -1,
      -1,    26,    -1,    28,    14,    15,    16,    17,    -1,    19,
      -1,    -1,    22,    -1,    14,    15,    16,    17,    28,    19,
      -1,    -1,    22,    -1,    14,    15,    16,    17,    28,    19,
      -1,    -1,    22,    -1,    14,    15,    16,    17,    28,    19,
      -1,    -1,    22,    -1,    14,    15,    16,    17,    28,    19,
      -1,    -1,    22,    -1,    14,    15,    16,    17,    28,    19,
      -1,    -1,    22,    -1,    14,    15,    16,    17,    28,    19,
      -1,    -1,    22,    -1,    14,    15,    16,    17,    28,    19,
      -1,    -1,    22,    -1,    14,    15,    16,    17,    28,    19,
      -1,    -1,    22,    -1,    14,    15,    16,    17,    28,    19,
      -1,    -1,    22,    -1,    14,    15,    16,    17,    28,    19,
      -1,    -1,    22,    -1,    14,    15,    16,    17,    28,    19,
      -1,    -1,    22,    -1,    14,    15,    16,    17,    28,    19,
      -1,    -1,    22,    -1,    14,    15,    16,    17,    28,    19,
      -1,    -1,    22,    -1,    14,    15,    16,    17,    28,    19,
      -1,    -1,    22,    -1,    14,    15,    16,    17,    28,    19,
      -1,    14,    22,    16,    17,    -1,    19,    -1,    28,    22,
      14,    15,    16,    17,    -1,    28,    14,    15,    16,    17,
      14,    15,    16,    17,    28,    14,    15,    16,    17,    -1,
      28,    -1,    -1,    -1,    28,    14,    15,    16,    17,    28,
      14,    15,    16,    17,    14,    15,    16,    17,    -1,    28,
      14,    15,    16,    17,    28,    -1,    -1,    -1,    28,    14,
      15,    16,    17,    27,    19,    -1,    -1,    22,    14,    15,
      16,    17,    27,    19,    -1,    -1,    22,    14,    15,    16,
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
      -1,    -1,    22,    14,    15,    16,    17,    27,    -1,    14,
      -1,    16,    17,    -1,    19,    26,    27,    22,    14,    -1,
      16,    17,    27,    19,    -1,    -1,    22,    14,    15,    16,
      17,    27,    14,    15,    16,    17,    14,    15,    16,    17,
      27,    14,    15,    16,    17,    27,    -1,    -1,    -1,    27,
      14,    15,    16,    17,    27,    14,    15,    16,    17,    14,
      15,    16,    17,    27,    14,    15,    16,    17,    27,    -1,
      -1,    -1,    27,    14,    15,    16,    17,    27,    14,    15,
      16,    17,    14,    15,    16,    17,    27,    14,    15,    16,
      17,    27,    -1,    -1,    -1,    27,    14,    15,    16,    17,
      27,    14,    15,    16,    17,    16,    17,    -1,    19,    27,
      -1,    22,    16,    17,    27,    19,    -1,    28,    22,    -1,
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
       6,     7,    26,    26,    26,    52,    64,    26,    26,    61,
      60,    45,    52,    25,    44,    28,    28,    28,    16,    17,
      19,    22,    14,    15,    18,    25,     6,    27,    63,    52,
       6,    51,    64,    52,    64,    43,    27,    56,    58,    58,
      58,    59,    60,    52,    52,    65,    27,    28,    27,    27,
      25,    27,    29,    44,    52,    52,     9,    28,    44,    51,
      27,    44,     6,     3,     4,     6,    14,    20,    21,    23,
      26,    55,    56,    57,    58,    59,    60,    61,    62,    64,
       6,     3,     4,     6,    14,    20,    21,    23,    26,    59,
      60,    61,    62,    64,     3,     4,     6,    14,    20,    21,
      23,    26,    55,    56,    57,    58,    59,    60,    61,    62,
      64,    14,     8,    10,    24,    46,    47,    48,    49,    50,
      51,    64,    26,    61,    60,    52,    16,    17,    19,    22,
      14,    15,    26,    61,    60,    52,    15,    26,    61,    60,
      52,    16,    17,    19,    22,    14,    15,    59,    26,    26,
      45,    28,    28,    28,    18,    27,    63,    27,    56,     3,
       4,     6,    14,    20,    21,    23,    26,    58,    59,    60,
      61,    62,    64,    58,    58,    59,    60,    27,    63,    27,
      60,    27,    63,    27,    56,     3,     4,     6,    14,    20,
      21,    23,    26,    58,    59,    60,    61,    62,    64,    58,
      58,    59,    60,    52,    51,    43,    52,    65,    26,    61,
      60,    52,    14,    15,    65,    65,    26,    61,    60,    52,
      14,    15,    27,    28,    25,    27,    27,    63,    27,    59,
      60,    27,    27,    27,    63,    27,    59,    60,    44,    52,
      65,    65,     9,    28,    27,    27,    44,    51,    27,    44
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    30,    31,    32,    32,    32,    33,    33,    35,    36,
      34,    37,    38,    34,    39,    39,    40,    40,    41,    41,
      42,    42,    43,    43,    43,    44,    44,    45,    44,    44,
      46,    46,    46,    47,    47,    47,    47,    48,    48,    49,
      50,    51,    52,    53,    54,    55,    55,    56,    56,    57,
      57,    57,    58,    58,    59,    59,    59,    60,    60,    61,
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
       2,     3,     1,     4,     4,     3,     1,     3,     1,     3,
       3,     1,     3,     1,     3,     2,     1,     2,     1,     1,
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
#line 77 "src/sin_analyser.y"
            { syntaxTree = (yyval.treeNode); }
#line 1995 "src/sin_analyser.tab.c"
    break;

  case 3:
#line 81 "src/sin_analyser.y"
                          {
        (yyval.treeNode) = newNode("PROGRAM", 0);
        (yyval.treeNode)->subtree1 = (yyvsp[-1].treeNode);
        (yyval.treeNode)->subtree2 = (yyvsp[0].treeNode);
    }
#line 2005 "src/sin_analyser.tab.c"
    break;

  case 4:
#line 87 "src/sin_analyser.y"
                  { (yyval.treeNode) = (yyvsp[0].treeNode); }
#line 2011 "src/sin_analyser.tab.c"
    break;

  case 5:
#line 89 "src/sin_analyser.y"
          { (yyval.treeNode) = newNode("ERROR", 0); }
#line 2017 "src/sin_analyser.tab.c"
    break;

  case 6:
#line 93 "src/sin_analyser.y"
               { (yyval.treeNode) = (yyvsp[-1].treeNode); }
#line 2023 "src/sin_analyser.tab.c"
    break;

  case 7:
#line 95 "src/sin_analyser.y"
              { (yyval.treeNode) = (yyvsp[0].treeNode); }
#line 2029 "src/sin_analyser.tab.c"
    break;

  case 8:
#line 99 "src/sin_analyser.y"
           {
        changeScope(1);
    }
#line 2037 "src/sin_analyser.tab.c"
    break;

  case 9:
#line 101 "src/sin_analyser.y"
             {
        updateParams(table, params);
        params = 0;
    }
#line 2046 "src/sin_analyser.tab.c"
    break;

  case 10:
#line 104 "src/sin_analyser.y"
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
#line 2091 "src/sin_analyser.tab.c"
    break;

  case 11:
#line 145 "src/sin_analyser.y"
            {
        updateParams(table, params);
    }
#line 2099 "src/sin_analyser.tab.c"
    break;

  case 12:
#line 147 "src/sin_analyser.y"
            {
        changeScope(1);
    }
#line 2107 "src/sin_analyser.tab.c"
    break;

  case 13:
#line 149 "src/sin_analyser.y"
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
#line 2151 "src/sin_analyser.tab.c"
    break;

  case 14:
#line 191 "src/sin_analyser.y"
                           {
        params++;
        (yyval.treeNode) = newNode("PARAMS", 0);
        (yyval.treeNode)->subtree1 = (yyvsp[-2].treeNode);
        (yyval.treeNode)->subtree2 = (yyvsp[0].treeNode);
    }
#line 2162 "src/sin_analyser.tab.c"
    break;

  case 15:
#line 198 "src/sin_analyser.y"
          { 
        params++;
        (yyval.treeNode) = (yyvsp[0].treeNode);
    }
#line 2171 "src/sin_analyser.tab.c"
    break;

  case 16:
#line 205 "src/sin_analyser.y"
            {
        newSymbol(table, (yyvsp[0].lex).id, (yyvsp[-1].lex).id, "PAR      ", (yyvsp[0].lex).line, (yyvsp[0].lex).col, stack[scope_pos], params+1);   
        (yyval.treeNode) = newNode(strcat(strcat((yyvsp[-1].lex).id," var "), (yyvsp[0].lex).id), checkType(table, (yyvsp[0].lex).id, stack[scope_pos], 1));
    }
#line 2180 "src/sin_analyser.tab.c"
    break;

  case 17:
#line 210 "src/sin_analyser.y"
                 {
        newSymbol(table, (yyvsp[0].lex).id, strcat((yyvsp[-2].lex).id," list"), "LIST PAR ",(yyvsp[0].lex).line, (yyvsp[0].lex).col, stack[scope_pos], params+1);
        (yyval.treeNode) = newNode(strcat(strcat((yyvsp[-2].lex).id," "), (yyvsp[0].lex).id), checkType(table, (yyvsp[0].lex).id, stack[scope_pos], 1));
    }
#line 2189 "src/sin_analyser.tab.c"
    break;

  case 18:
#line 217 "src/sin_analyser.y"
            {
        if(searchTable(table, (yyvsp[0].lex).id, stack[scope_pos], 0, 1)){
            printf("SEMANTIC ERROR: Variable %s already declared [%d, %d]\n", (yyvsp[0].lex).id, (yyvsp[0].lex).line, (yyvsp[0].lex).col);
            sem_errors++;
        }
        newSymbol(table, (yyvsp[0].lex).id, (yyvsp[-1].lex).id, "VAR      ", (yyvsp[0].lex).line, (yyvsp[0].lex).col, stack[scope_pos], 0);   
        (yyval.treeNode) = newNode(strcat(strcat((yyvsp[-1].lex).id," var "), (yyvsp[0].lex).id), checkType(table, (yyvsp[0].lex).id, stack[scope_pos], 1));
    }
#line 2202 "src/sin_analyser.tab.c"
    break;

  case 19:
#line 226 "src/sin_analyser.y"
                 {
        if(searchTable(table, (yyvsp[0].lex).id, stack[scope_pos], 0, 1)) {
            printf("SEMANTIC ERROR: Variable %s already declared [%d, %d]\n", (yyvsp[0].lex).id, (yyvsp[0].lex).line, (yyvsp[0].lex).col);
            sem_errors++;
        }
        newSymbol(table, (yyvsp[0].lex).id, strcat((yyvsp[-2].lex).id," list"), "LIST VAR ",(yyvsp[0].lex).line, (yyvsp[0].lex).col, stack[scope_pos], 0);
        (yyval.treeNode) = newNode(strcat(strcat((yyvsp[-2].lex).id," "), (yyvsp[0].lex).id), checkType(table, (yyvsp[0].lex).id, stack[scope_pos], 1));
    }
#line 2215 "src/sin_analyser.tab.c"
    break;

  case 20:
#line 237 "src/sin_analyser.y"
            {
        if(!strcmp((yyvsp[0].lex).id, "main")) main_found = 1;
        if(searchTable(table, (yyvsp[0].lex).id, stack[scope_pos], 1, 0)) {
            printf("SEMANTIC ERROR: Function %s already declared [%d, %d]\n", (yyvsp[0].lex).id, (yyvsp[0].lex).line, (yyvsp[0].lex).col);
            sem_errors++;
        }
        newSymbol(table, (yyvsp[0].lex).id, (yyvsp[-1].lex).id, "FUNC     ", (yyvsp[0].lex).line, (yyvsp[0].lex).col, stack[scope_pos], -1);
        (yyval.treeNode) = newNode(strcat(strcat((yyvsp[-1].lex).id," function "), (yyvsp[0].lex).id), checkType(table, (yyvsp[0].lex).id, stack[scope_pos], 1));
    }
#line 2229 "src/sin_analyser.tab.c"
    break;

  case 21:
#line 247 "src/sin_analyser.y"
                 {
        if(!strcmp((yyvsp[0].lex).id, "main")) main_found = 1;
        if(searchTable(table, (yyvsp[0].lex).id, stack[scope_pos], 1, 0)) {
            printf("SEMANTIC ERROR: Function %s already declared [%d, %d]\n", (yyvsp[0].lex).id, (yyvsp[0].lex).line, (yyvsp[0].lex).col);
            sem_errors++;
        }
        newSymbol(table, (yyvsp[0].lex).id, strcat((yyvsp[-2].lex).id," list"), "LIST FUNC", (yyvsp[0].lex).line, (yyvsp[0].lex).col, scope, -1);
        (yyval.treeNode) = newNode(strcat(strcat((yyvsp[-2].lex).id," function list "), (yyvsp[0].lex).id), checkType(table, (yyvsp[0].lex).id, stack[scope_pos], 1));
    }
#line 2243 "src/sin_analyser.tab.c"
    break;

  case 22:
#line 259 "src/sin_analyser.y"
                    {
        (yyval.treeNode) = newNode("BLOCK", 0);
        (yyval.treeNode)->subtree1 = (yyvsp[-1].treeNode);
        (yyval.treeNode)->subtree2 = (yyvsp[0].treeNode);
        (yyval.treeNode)->type = (yyval.treeNode)->subtree2->type;
    }
#line 2254 "src/sin_analyser.tab.c"
    break;

  case 23:
#line 266 "src/sin_analyser.y"
              { (yyval.treeNode) = (yyvsp[0].treeNode); }
#line 2260 "src/sin_analyser.tab.c"
    break;

  case 24:
#line 268 "src/sin_analyser.y"
          { (yyval.treeNode) = newNode("ERROR", 0); }
#line 2266 "src/sin_analyser.tab.c"
    break;

  case 25:
#line 272 "src/sin_analyser.y"
             { (yyval.treeNode) = (yyvsp[-1].treeNode); }
#line 2272 "src/sin_analyser.tab.c"
    break;

  case 26:
#line 274 "src/sin_analyser.y"
              { (yyval.treeNode) = (yyvsp[-1].treeNode); }
#line 2278 "src/sin_analyser.tab.c"
    break;

  case 27:
#line 276 "src/sin_analyser.y"
       {
        changeScope(1);
    }
#line 2286 "src/sin_analyser.tab.c"
    break;

  case 28:
#line 278 "src/sin_analyser.y"
               { 
        (yyval.treeNode) = (yyvsp[-1].treeNode);
        changeScope(0);
    }
#line 2295 "src/sin_analyser.tab.c"
    break;

  case 29:
#line 283 "src/sin_analyser.y"
             { (yyval.treeNode) = (yyvsp[0].treeNode); }
#line 2301 "src/sin_analyser.tab.c"
    break;

  case 30:
#line 287 "src/sin_analyser.y"
            { (yyval.treeNode) = (yyvsp[0].treeNode); }
#line 2307 "src/sin_analyser.tab.c"
    break;

  case 31:
#line 289 "src/sin_analyser.y"
        { (yyval.treeNode) = (yyvsp[0].treeNode); }
#line 2313 "src/sin_analyser.tab.c"
    break;

  case 32:
#line 291 "src/sin_analyser.y"
               { (yyval.treeNode) = (yyvsp[-1].treeNode); }
#line 2319 "src/sin_analyser.tab.c"
    break;

  case 33:
#line 295 "src/sin_analyser.y"
              { (yyval.treeNode) = (yyvsp[0].treeNode); }
#line 2325 "src/sin_analyser.tab.c"
    break;

  case 34:
#line 297 "src/sin_analyser.y"
           { (yyval.treeNode) = (yyvsp[0].treeNode); }
#line 2331 "src/sin_analyser.tab.c"
    break;

  case 35:
#line 299 "src/sin_analyser.y"
          { (yyval.treeNode) = (yyvsp[0].treeNode); }
#line 2337 "src/sin_analyser.tab.c"
    break;

  case 36:
#line 301 "src/sin_analyser.y"
           { (yyval.treeNode) = (yyvsp[0].treeNode); }
#line 2343 "src/sin_analyser.tab.c"
    break;

  case 37:
#line 305 "src/sin_analyser.y"
                                            {
        (yyval.treeNode) = newNode("IF", 0);
        (yyval.treeNode)->subtree1 = (yyvsp[-2].treeNode);
        (yyval.treeNode)->subtree2 = (yyvsp[0].treeNode);
        (yyval.treeNode)->type = (yyval.treeNode)->subtree2->type;
    }
#line 2354 "src/sin_analyser.tab.c"
    break;

  case 38:
#line 312 "src/sin_analyser.y"
                                                {
        (yyval.treeNode) = newNode("IF ELSE", 0);
        (yyval.treeNode)->subtree1 = (yyvsp[-4].treeNode);
        (yyval.treeNode)->subtree2 = (yyvsp[-2].treeNode);
        (yyval.treeNode)->subtree3 = (yyvsp[0].treeNode);
        (yyval.treeNode)->type = (yyval.treeNode)->subtree3->type;
    }
#line 2366 "src/sin_analyser.tab.c"
    break;

  case 39:
#line 322 "src/sin_analyser.y"
                                                        {
        (yyval.treeNode) = newNode("FOR", 0);
        (yyval.treeNode)->subtree1 = (yyvsp[-6].treeNode);
        (yyval.treeNode)->subtree2 = (yyvsp[-4].treeNode);
        (yyval.treeNode)->subtree3 = (yyvsp[-2].treeNode);
        (yyval.treeNode)->subtree4 = (yyvsp[0].treeNode);
        (yyval.treeNode)->type = (yyval.treeNode)->subtree4->type;
    }
#line 2379 "src/sin_analyser.tab.c"
    break;

  case 40:
#line 333 "src/sin_analyser.y"
                     {
        (yyval.treeNode) = newNode("RETURN", 0);
        (yyval.treeNode)->subtree1 = (yyvsp[0].treeNode);
        (yyval.treeNode)->type = (yyval.treeNode)->subtree1->type;
    }
#line 2389 "src/sin_analyser.tab.c"
    break;

  case 41:
#line 341 "src/sin_analyser.y"
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
#line 2434 "src/sin_analyser.tab.c"
    break;

  case 42:
#line 384 "src/sin_analyser.y"
           { (yyval.treeNode) = (yyvsp[0].treeNode); }
#line 2440 "src/sin_analyser.tab.c"
    break;

  case 43:
#line 388 "src/sin_analyser.y"
                {
        (yyval.treeNode) = newNode("IN", 0);
        (yyval.treeNode)->subtree1 = (yyvsp[-1].treeNode);
    }
#line 2449 "src/sin_analyser.tab.c"
    break;

  case 44:
#line 395 "src/sin_analyser.y"
                        { 
        (yyval.treeNode) = newNode("OUT", 0);
        (yyval.treeNode)->subtree1 = (yyvsp[-1].treeNode); 
    }
#line 2458 "src/sin_analyser.tab.c"
    break;

  case 45:
#line 402 "src/sin_analyser.y"
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
#line 2490 "src/sin_analyser.tab.c"
    break;

  case 46:
#line 430 "src/sin_analyser.y"
           { (yyval.treeNode) = (yyvsp[0].treeNode); }
#line 2496 "src/sin_analyser.tab.c"
    break;

  case 47:
#line 434 "src/sin_analyser.y"
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
#line 2532 "src/sin_analyser.tab.c"
    break;

  case 48:
#line 466 "src/sin_analyser.y"
            { (yyval.treeNode) = (yyvsp[0].treeNode); }
#line 2538 "src/sin_analyser.tab.c"
    break;

  case 49:
#line 470 "src/sin_analyser.y"
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
#line 2559 "src/sin_analyser.tab.c"
    break;

  case 50:
#line 487 "src/sin_analyser.y"
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
#line 2580 "src/sin_analyser.tab.c"
    break;

  case 51:
#line 504 "src/sin_analyser.y"
           { (yyval.treeNode) = (yyvsp[0].treeNode); }
#line 2586 "src/sin_analyser.tab.c"
    break;

  case 52:
#line 508 "src/sin_analyser.y"
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
#line 2618 "src/sin_analyser.tab.c"
    break;

  case 53:
#line 536 "src/sin_analyser.y"
          { (yyval.treeNode) = (yyvsp[0].treeNode); }
#line 2624 "src/sin_analyser.tab.c"
    break;

  case 54:
#line 540 "src/sin_analyser.y"
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
#line 2656 "src/sin_analyser.tab.c"
    break;

  case 55:
#line 568 "src/sin_analyser.y"
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
#line 2671 "src/sin_analyser.tab.c"
    break;

  case 56:
#line 579 "src/sin_analyser.y"
            { (yyval.treeNode) = (yyvsp[0].treeNode); }
#line 2677 "src/sin_analyser.tab.c"
    break;

  case 57:
#line 583 "src/sin_analyser.y"
                     {
        (yyval.treeNode) = newNode("UNARY OP", 0);
        (yyval.treeNode)->subtree1 = (yyvsp[0].treeNode);
        if((yyval.treeNode)->subtree1->type != 0){
            (yyval.treeNode)->type = (yyval.treeNode)->subtree1->type;
        } else{
            printf("SEMANTIC ERROR: Type error in list operator with type %d. [%d, %d]\n", (yyval.treeNode)->subtree1->type, (yyvsp[-1].lex).line, (yyvsp[-1].lex).col);
            sem_errors++;
        }
    }
#line 2692 "src/sin_analyser.tab.c"
    break;

  case 58:
#line 594 "src/sin_analyser.y"
        { (yyval.treeNode) = (yyvsp[0].treeNode); }
#line 2698 "src/sin_analyser.tab.c"
    break;

  case 59:
#line 598 "src/sin_analyser.y"
       { (yyval.treeNode) = (yyvsp[0].treeNode); }
#line 2704 "src/sin_analyser.tab.c"
    break;

  case 60:
#line 600 "src/sin_analyser.y"
              { (yyval.treeNode) = (yyvsp[0].treeNode); }
#line 2710 "src/sin_analyser.tab.c"
    break;

  case 61:
#line 602 "src/sin_analyser.y"
                    { (yyval.treeNode) = (yyvsp[-1].treeNode); }
#line 2716 "src/sin_analyser.tab.c"
    break;

  case 62:
#line 604 "src/sin_analyser.y"
        { (yyval.treeNode) = newNode((yyvsp[0].lex).id, 1); }
#line 2722 "src/sin_analyser.tab.c"
    break;

  case 63:
#line 606 "src/sin_analyser.y"
          { (yyval.treeNode) = newNode((yyvsp[0].lex).id, 2); }
#line 2728 "src/sin_analyser.tab.c"
    break;

  case 64:
#line 608 "src/sin_analyser.y"
        { (yyval.treeNode) = newNode("NIL", 3); }
#line 2734 "src/sin_analyser.tab.c"
    break;

  case 65:
#line 610 "src/sin_analyser.y"
            { (yyval.treeNode) = newNode((yyvsp[0].lex).id, 0); }
#line 2740 "src/sin_analyser.tab.c"
    break;

  case 66:
#line 614 "src/sin_analyser.y"
          {
        call_scope = searchTable(table, (yyvsp[-1].lex).id, scope, 1, 1);
    }
#line 2748 "src/sin_analyser.tab.c"
    break;

  case 67:
#line 616 "src/sin_analyser.y"
                     {
        if(!call_scope){
            printf("SEMANTIC ERROR: Function '%s' not declared [%d, %d]\n", (yyvsp[-4].lex).id, (yyvsp[-4].lex).line, (yyvsp[-4].lex).col);
            sem_errors++;
        }else if(checkParams(table, (yyvsp[-4].lex).id) != args){
            printf("SEMANTIC ERROR: Function '%s' calls for different number of arguments [%d, %d]\n", (yyvsp[-4].lex).id, (yyvsp[-4].lex).line, (yyvsp[-4].lex).col);
            sem_errors++;
        }else if(param_error){
            printf("SEMANTIC ERROR: Function '%s' incorrect parameter type [%d, %d]\n", (yyvsp[-4].lex).id, (yyvsp[-3].lex).line, (yyvsp[-3].lex).col);
            param_error = 0;
            sem_errors++;
        }
        args = 0;
        (yyval.treeNode) = newNode("CALL", checkType(table, (yyvsp[-4].lex).id, stack[scope_pos], 0));
        (yyval.treeNode)->subtree2 = (yyvsp[-1].treeNode);
    }
#line 2769 "src/sin_analyser.tab.c"
    break;

  case 68:
#line 633 "src/sin_analyser.y"
             {
        if(!searchTable(table, (yyvsp[-2].lex).id, scope, 1, 1)){
            printf("SEMANTIC ERROR: Function %s not declared [%d, %d]\n", (yyvsp[-2].lex).id, (yyvsp[-2].lex).line, (yyvsp[-2].lex).col);
            sem_errors++;
        }else if(checkParams(table, (yyvsp[-2].lex).id) != args){
            printf("SEMANTIC ERROR: Function %s calls for different number of arguments [%d, %d]\n", (yyvsp[-2].lex).id, (yyvsp[-2].lex).line, (yyvsp[-2].lex).col);
            sem_errors++;
        }
        args = 0;
        (yyval.treeNode) = newNode("CALL", checkType(table, (yyvsp[-2].lex).id, stack[scope_pos], 0));
    }
#line 2785 "src/sin_analyser.tab.c"
    break;

  case 69:
#line 647 "src/sin_analyser.y"
       { 
        if(!searchTable(table, (yyvsp[0].lex).id, scope, 0, 0)){
            printf("SEMANTIC ERROR: Variable %s not declared [%d, %d]\n", (yyvsp[0].lex).id, (yyvsp[0].lex).line, (yyvsp[0].lex).col);
            sem_errors++;
        }
        (yyval.treeNode) = newNode((yyvsp[0].lex).id, checkType(table, (yyvsp[0].lex).id, stack[scope_pos], 1)); 
    }
#line 2797 "src/sin_analyser.tab.c"
    break;

  case 70:
#line 657 "src/sin_analyser.y"
                                   {
        args++;
        (yyval.treeNode) = newNode("PARAMS", 0);
        (yyval.treeNode)->subtree1 = (yyvsp[-2].treeNode);
        (yyval.treeNode)->subtree2 = (yyvsp[0].treeNode);
        if((yyval.treeNode)->subtree2->type != checkParamType(table, args, call_scope-1))
            param_error = 1;
        // printf("asub type: %d, check type: %d, args: %d, call: %d\n", $$->subtree2->type, checkParamType(table, args, call_scope-1), args, call_scope);
    }
#line 2811 "src/sin_analyser.tab.c"
    break;

  case 71:
#line 667 "src/sin_analyser.y"
              { 
        args++;
        (yyval.treeNode) = newNode("PARAMS", 0);
        (yyval.treeNode)->subtree1 = (yyvsp[0].treeNode);
        if((yyval.treeNode)->subtree1->type != checkParamType(table, args, call_scope-1))
            param_error = 1;
        // printf("bsub type: %d, check type: %d, args: %d, call: %d\n", $$->subtree1->type, checkParamType(table, args, call_scope-1), args, call_scope);
    }
#line 2824 "src/sin_analyser.tab.c"
    break;


#line 2828 "src/sin_analyser.tab.c"

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
#line 677 "src/sin_analyser.y"


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
