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
    int params = 0;
    int args_ret = 0;
    int args = 0;
    int main_found = 0;
    int sin_errors = 0;
    int sem_errors = 0;

#line 91 "src/sin_analyser.tab.c"

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
#line 27 "src/sin_analyser.y"

    /*Token structure*/
    struct lexToken {
        char id[200];
        int line;
        int col;
    } lex;
    /*Tree node reference*/
    struct treeNode* treeNode;

#line 185 "src/sin_analyser.tab.c"

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
#define YYLAST   2142

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  31
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  34
/* YYNRULES -- Number of rules.  */
#define YYNRULES  74
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  323

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
       0,    73,    73,    77,    83,    87,    89,    91,    95,    95,
     138,   138,   181,   188,   195,   201,   207,   211,   219,   227,
     231,   238,   242,   244,   246,   248,   250,   254,   256,   258,
     262,   264,   266,   268,   270,   272,   276,   278,   282,   288,
     295,   299,   307,   311,   319,   360,   379,   392,   411,   415,
     422,   427,   434,   462,   466,   476,   480,   508,   512,   540,
     544,   572,   583,   587,   589,   591,   593,   595,   597,   599,
     603,   611,   620,   627,   634
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
  "$@2", "params", "declar", "func", "block", "statement", "flow_ctr",
  "expr", "list_op", "if_else", "for", "return", "ass_op", "list_con",
  "list_oper", "list_func", "operation", "input", "output", "log_op",
  "ulog_op", "rel_op", "ari_op", "md_op", "val", "func_call", "id",
  "func_params", YY_NULLPTR
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

#define YYPACT_NINF (-169)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-75)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     160,    53,    65,    12,   199,   671,   687,    -9,     0,     8,
      75,  -169,   741,   768,     4,   204,   393,   448,    61,   456,
     583,   598,    92,    81,   354,    97,   647,  1563,   666,   110,
     726,   310,   557,  1682,     7,    13,  1613,   101,   169,   142,
     429,  1702,  1613,  1712,  1563,   288,   107,  1104,  1131,  1158,
     121,   162,  1185,  1212,   139,   178,   174,   253,   285,   293,
     321,   334,    10,   131,   141,   195,  1722,  1732,  1742,   541,
    1563,    41,  1239,   288,  1266,   208,   335,  1661,    99,   281,
    1752,  1762,   164,   362,  1293,   246,   771,  1320,   284,  1347,
    1374,  1401,   588,   429,   429,   142,  1613,  1613,  1428,   669,
    1772,   876,   903,   272,   282,   316,   318,   342,   360,  1455,
    1782,   374,   212,   238,  1792,  1802,   377,   408,   795,  1812,
     428,  1588,   621,   415,   418,   434,   930,   753,   443,  1563,
     208,  1482,   459,  1563,  1509,   544,   500,   333,  1692,  2032,
    2037,  1915,   378,   497,  2043,  2048,   288,    72,    76,   361,
    2109,  2054,  2059,  2065,  2070,   478,   481,   484,   689,   491,
    1638,   554,   288,   561,   570,   573,   503,   697,    21,    24,
    1563,   780,   507,   807,   834,   540,   556,   357,   675,   581,
    1664,   659,  1818,  1824,   288,    79,    93,    27,   211,  1830,
    1836,  1842,  1848,   618,   516,   644,    56,  2076,   394,   631,
     288,   497,   497,   378,    71,   130,   401,   476,   738,  1894,
     639,   657,  1668,  1642,  1930,  1638,  1936,   288,   153,   499,
     530,   594,   633,   646,   705,   759,   775,   465,   591,   446,
     565,  1947,  1953,  1964,   250,   685,   861,   288,   888,   208,
    1536,   915,   942,   969,    84,  1854,   277,   707,   621,   659,
     659,  1664,  1638,   525,  2081,   957,  2087,   111,  2114,  2092,
    2098,   732,   984,   786,   793,    90,    99,   281,  1909,  1970,
    1981,  1605,   799,   798,   817,   643,  1642,  1642,  1668,  1638,
     822,   825,   848,   996,  1860,  1011,  1866,   103,   270,  1872,
    1878,   802,  2103,   852,   813,  1987,  1038,   875,   879,   880,
    1998,   826,   829,   613,   616,  2004,  2015,   840,  1588,   621,
    1884,  2021,   853,   856,   867,  1023,   882,  1588,   208,  1050,
     889,  1588,  1077
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
       0,     0,     0
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -169,  -169,  -169,   918,  -169,  -169,  -169,  -169,    17,  -169,
     -41,   -46,  -119,   -36,  -145,   -91,   -66,   -64,    19,  -142,
     -74,  -141,   268,  -137,  -136,   416,   406,   161,   403,   258,
     117,   265,   -29,  -168
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     3,     4,     5,     6,    25,    18,    19,    46,     8,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,   102
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      76,    87,   171,    84,   106,    16,    83,    77,    72,    17,
      81,    81,    11,    77,    74,   220,   154,     7,   221,   223,
      13,     7,   236,   225,   226,   238,    92,    14,   255,    98,
     173,    20,   -10,   -48,    73,   -17,   262,   -14,    87,   -48,
      75,    28,   101,   -55,   154,   249,   105,    99,   237,   164,
     108,   239,    87,    -7,    -7,   174,   -55,   175,    -7,   111,
     116,   117,    99,    81,    81,    81,    81,    77,    77,   100,
     220,     9,    10,   221,   223,   127,   285,    99,   225,   226,
     -19,    15,   -16,   131,   254,   172,   222,   134,   200,    23,
      99,   126,   -53,   192,   104,   248,    99,   296,    26,   261,
     -48,   193,   156,   157,   -53,   158,    27,   220,   -48,   -53,
     221,   223,   284,   154,   154,   225,   226,   154,   295,   -52,
     159,   160,   -53,   161,   219,    29,   162,   -52,    78,   240,
     -31,   234,   -52,   154,   220,    70,   -31,   221,   223,   -52,
     176,   222,   225,   226,    88,    31,    32,   -53,   138,   132,
      89,   192,   192,   -16,   -53,   154,    80,   -55,   -16,    93,
     -53,     1,   152,    41,   -55,     2,    43,   101,    90,    45,
     -55,   154,   154,   154,   154,   101,   -31,   218,   222,   272,
     -54,   -31,    93,   270,   270,   -34,   234,   -54,   154,   171,
     152,   -34,   297,   -54,    87,   107,    79,   -36,   171,    -2,
       1,    82,   171,   -36,     2,   222,   149,    91,   154,    94,
     105,   -57,   115,   -57,   155,   101,   291,   173,   -57,   192,
     192,   192,   192,   234,   -57,   250,   173,   -57,   -52,   -57,
     173,   -18,   218,   -15,   149,   -52,   101,   164,   299,   190,
     -57,   -52,   174,   307,   175,   302,   270,   270,   270,   270,
     234,   174,    94,   175,   -56,   174,   -56,   175,   282,   197,
     152,   -56,   315,   152,   -63,   -63,   -63,   -56,   -63,   218,
     279,   319,   172,   -63,   110,   322,   -37,   232,   -63,   152,
     192,   172,   -37,   187,   250,   172,   -56,   165,   -56,   193,
     166,   139,   140,   -54,   141,   249,   218,   245,   190,   -56,
     121,   152,   142,   151,   198,   143,   -54,   149,   -35,   144,
     153,   122,   145,    85,   -35,   146,   -30,   152,   152,   152,
     260,   229,   -30,   149,   -66,   -66,   -66,   176,   -66,   269,
     232,   151,   232,   -66,   152,    96,   176,   320,   153,   -66,
     176,   103,   246,   163,   -32,   149,   123,   -72,   -72,   -72,
     -32,   -72,   114,   -72,   152,    16,   -72,   -33,    88,    17,
      71,   149,   -72,   -33,   -43,   190,   190,   190,   290,   232,
     124,   -66,   -66,   -66,   271,   -66,   229,   -55,   149,   201,
     189,   139,   140,   298,   141,   -46,   -66,   191,   125,   -55,
     128,   -46,   232,   232,   232,   306,   232,   -45,   149,   144,
      88,   151,   145,   -45,   151,   146,   -44,   153,   153,   187,
     -54,   153,   201,   229,   199,   -66,   -66,   -66,   231,   -66,
     151,   -16,   -54,   -16,   -66,   233,   190,   153,   224,   -66,
     235,    88,    31,    32,    99,   138,   229,   -47,   -51,   189,
     229,   -50,   151,    39,   -51,   191,   191,   -50,   150,   153,
      41,   148,   247,    43,    21,    22,    45,   -49,   151,   151,
     259,   147,   -55,   -49,   276,   153,   153,   153,   153,   -55,
     187,   231,   130,   231,   -55,   151,   150,   233,   233,   148,
     233,   275,   153,   224,    -8,   273,    24,   133,   -48,   147,
     -67,   -67,   -67,   -48,   -67,   151,   113,   -72,   112,   -67,
     139,   140,   153,   141,   -67,   281,   189,   189,   289,   -66,
     231,   142,   -67,   191,   191,   191,   191,   233,   144,   -68,
     224,   145,   274,   -16,   146,   188,   -72,   -46,   186,   -16,
      88,   163,   -72,   231,   231,   305,   241,   231,   185,   -14,
     233,   233,   233,   233,   233,   -14,   150,   224,   -15,   150,
     194,   195,   148,   -34,   -15,   -63,   -63,   -63,   -34,   -63,
      96,    97,   147,   230,   -63,   150,   228,   189,   148,   242,
     -63,   -67,   -67,   -67,   191,   -67,   227,   316,   147,   277,
     -67,   -57,   -69,   -57,   188,   243,   -67,   150,   -57,   -64,
     148,    31,    32,   -57,   138,   -72,   -72,   -72,   -63,   -72,
     147,   -72,    39,   150,   258,    40,   257,   -53,   244,    41,
     -72,   -13,    43,   -13,   -53,    45,   230,   -36,   230,   -53,
     150,   228,   -36,   148,   177,   178,   -14,   179,   -14,   -52,
     277,   227,   -56,   147,   -56,   180,   -52,   252,   181,   -56,
     150,   -52,   182,   148,   -56,   183,   206,   207,   184,   268,
     253,   188,   288,   147,   287,   230,   -37,   212,   228,   256,
     213,   -37,   177,   178,   214,   179,   266,   216,   227,   -35,
     217,    -4,    -4,   180,   -35,   -15,    -4,   -15,   230,   304,
     182,   303,   230,   183,   267,   228,   184,    -6,    -6,   -67,
     -67,   -67,    -6,   -67,   -12,   227,   -12,   -72,   -26,   -72,
     -26,   -26,   -26,   -26,   -67,   -26,   -26,   -26,   -26,   -26,
     -26,   -26,   188,   280,   -26,   186,   204,   -72,   -26,   -26,
     -16,   -26,   -26,   -26,   -26,   185,   -16,   -26,   -30,   -26,
     -26,   -26,   -26,   -30,   -26,   286,   -26,   -26,   -26,   -26,
     -26,    -3,    -3,   -26,   263,   264,    -3,   -26,   -26,   -16,
     -26,   -26,   -26,   -26,   -38,   -16,   -38,   -38,   -38,   -38,
     -71,   -38,   129,   -38,   -38,   -38,   -38,   -38,    -5,    -5,
     -38,   -11,   -11,    -5,   -38,   -38,   -11,   -38,   -38,   -38,
     -38,   -25,   -32,   -25,   -25,   -25,   -25,   -32,   -25,   -25,
     -25,   -25,   -25,   -25,   -25,    -9,    -9,   -25,   -33,   294,
      -9,   -25,   -25,   -33,   -25,   -25,   -25,   -25,   -27,   -14,
     -27,   -27,   -27,   -27,   -14,   -27,   -27,   -27,   -27,   -27,
     -27,   -27,   -46,   301,   -27,   274,   300,   -46,   -27,   -27,
     -44,   -27,   -27,   -27,   -27,   -28,   -15,   -28,   -28,   -28,
     -28,   -15,   -28,   -28,   -28,   -28,   -28,   -28,   -28,   -72,
     -65,   -28,   -45,   308,   -72,   -28,   -28,   -45,   -28,   -28,
     -28,   -28,   -40,   274,   -40,   -40,   -40,   -40,   -47,   -40,
     -40,   -40,   -40,   -40,   -40,   -40,   -51,   309,   -40,   -50,
     -70,   -51,   -40,   -40,   -50,   -40,   -40,   -40,   -40,   -42,
     -49,   -42,   -42,   -42,   -42,   -49,   -42,   -42,   -42,   -42,
     -42,   -42,   -42,   312,   -74,   -42,   -74,   313,   314,   -42,
     -42,   318,   -42,   -42,   -42,   -42,   -22,   321,   -22,   -22,
     -22,   -22,    12,   -22,   -22,   -22,   -22,   -22,   -22,   -22,
       0,   119,   -22,   120,     0,     0,   -22,   -22,     0,   -22,
     -22,   -22,   -22,   -29,     0,   -29,   -29,   -29,   -29,     0,
     -29,   -29,   -29,   -29,   -29,   -29,   -29,     0,   -73,   -29,
     -73,     0,     0,   -29,   -29,     0,   -29,   -29,   -29,   -29,
     -23,     0,   -23,   -23,   -23,   -23,     0,   -23,   -23,   -23,
     -23,   -23,   -23,   -23,     0,   292,   -23,   120,     0,     0,
     -23,   -23,     0,   -23,   -23,   -23,   -23,   -24,     0,   -24,
     -24,   -24,   -24,     0,   -24,   -24,   -24,   -24,   -24,   -24,
     -24,     0,   293,   -24,   120,     0,     0,   -24,   -24,     0,
     -24,   -24,   -24,   -24,   -38,     0,   -38,   -38,   -38,   -38,
       0,   -38,   317,   -38,   -38,   -38,   -38,   -38,     0,   310,
     -38,   120,     0,     0,   -38,   -38,     0,   -38,   -38,   -38,
     -38,   -39,     0,   -39,   -39,   -39,   -39,     0,   -39,   -39,
     -39,   -39,   -39,   -39,   -39,     0,   311,   -39,   120,     0,
       0,   -39,   -39,     0,   -39,   -39,   -39,   -39,   -41,     0,
     -41,   -41,   -41,   -41,     0,   -41,   -41,   -41,   -41,   -41,
     -41,   -41,     0,     0,   -41,     0,     0,     0,   -41,   -41,
       0,   -41,   -41,   -41,   -41,    30,     0,    31,    32,   135,
      33,     0,    34,     0,    35,    36,    37,    38,    39,     0,
       0,    40,     0,     0,     0,    41,    42,     0,    43,    44,
      86,    45,   -21,     0,   -21,   -21,   -21,   -21,     0,   -21,
       0,   -21,   -21,   -21,   -21,   -21,     0,     0,   -21,     0,
       0,     0,   -21,   -21,     0,   -21,   -21,   -21,   -21,   -25,
       0,   -25,   -25,   -25,   -25,     0,   -25,     0,   -25,   -25,
     -25,   -25,   -25,     0,     0,   -25,     0,     0,     0,   -25,
     -25,     0,   -25,   -25,   -25,   -25,   -27,     0,   -27,   -27,
     -27,   -27,     0,   -27,     0,   -27,   -27,   -27,   -27,   -27,
       0,     0,   -27,     0,     0,     0,   -27,   -27,     0,   -27,
     -27,   -27,   -27,   -28,     0,   -28,   -28,   -28,   -28,     0,
     -28,     0,   -28,   -28,   -28,   -28,   -28,     0,     0,   -28,
       0,     0,     0,   -28,   -28,     0,   -28,   -28,   -28,   -28,
     -40,     0,   -40,   -40,   -40,   -40,     0,   -40,     0,   -40,
     -40,   -40,   -40,   -40,     0,     0,   -40,     0,     0,     0,
     -40,   -40,     0,   -40,   -40,   -40,   -40,   -42,     0,   -42,
     -42,   -42,   -42,     0,   -42,     0,   -42,   -42,   -42,   -42,
     -42,     0,     0,   -42,     0,     0,     0,   -42,   -42,     0,
     -42,   -42,   -42,   -42,    30,     0,    31,    32,   135,    33,
       0,    34,     0,    35,    36,    37,    38,    39,     0,     0,
      40,     0,     0,     0,    41,    42,     0,    43,    44,   109,
      45,   -20,     0,   -20,   -20,   -20,   -20,     0,   -20,     0,
     -20,   -20,   -20,   -20,   -20,     0,     0,   -20,     0,     0,
       0,   -20,   -20,     0,   -20,   -20,   -20,   -20,   -22,     0,
     -22,   -22,   -22,   -22,     0,   -22,     0,   -22,   -22,   -22,
     -22,   -22,     0,     0,   -22,     0,     0,     0,   -22,   -22,
       0,   -22,   -22,   -22,   -22,   -29,     0,   -29,   -29,   -29,
     -29,     0,   -29,     0,   -29,   -29,   -29,   -29,   -29,     0,
       0,   -29,     0,     0,     0,   -29,   -29,     0,   -29,   -29,
     -29,   -29,   -23,     0,   -23,   -23,   -23,   -23,     0,   -23,
       0,   -23,   -23,   -23,   -23,   -23,     0,     0,   -23,     0,
       0,     0,   -23,   -23,     0,   -23,   -23,   -23,   -23,    30,
       0,    31,    32,   135,    33,     0,    34,     0,    35,    36,
      37,    38,    39,     0,     0,    40,     0,     0,     0,    41,
      42,     0,    43,    44,   118,    45,   -24,     0,   -24,   -24,
     -24,   -24,     0,   -24,     0,   -24,   -24,   -24,   -24,   -24,
       0,     0,   -24,     0,     0,     0,   -24,   -24,     0,   -24,
     -24,   -24,   -24,   -39,     0,   -39,   -39,   -39,   -39,     0,
     -39,     0,   -39,   -39,   -39,   -39,   -39,     0,     0,   -39,
       0,     0,     0,   -39,   -39,     0,   -39,   -39,   -39,   -39,
     -41,     0,   -41,   -41,   -41,   -41,     0,   -41,     0,   -41,
     -41,   -41,   -41,   -41,     0,     0,   -41,     0,     0,     0,
     -41,   -41,     0,   -41,   -41,   -41,   -41,    30,     0,    31,
      32,   135,    33,     0,    34,     0,    35,    36,    37,    38,
      39,     0,     0,    40,     0,     0,     0,    41,    42,     0,
      43,    44,   283,    45,    30,     0,    31,    32,   135,    33,
       0,    34,     0,    35,    36,    37,    38,    39,     0,     0,
      40,     0,     0,     0,    41,    42,     0,    43,    44,   167,
      45,    31,    32,   135,    33,     0,   168,     0,   169,    36,
      37,    38,    39,     0,     0,    40,     0,     0,     0,    41,
      42,     0,    43,   170,   136,    45,    31,    32,   135,   137,
       0,   -54,     0,   276,     0,    37,    38,    39,   -54,     0,
      40,     0,     0,   -54,    41,    42,     0,    43,     0,   205,
      45,   206,   207,   208,   209,   206,   207,     0,   268,     0,
     210,   211,   212,     0,     0,   213,   212,     0,     0,   214,
     215,     0,   216,   214,     0,   217,   216,   177,   178,   217,
     179,   206,   207,     0,   268,   -63,   -63,   -63,     0,   -63,
       0,    97,     0,     0,   -63,   182,     0,     0,   183,   214,
     -63,   184,   216,     0,     0,   217,   -72,   -72,   -72,     0,
     -72,   -72,   -72,     0,     0,   -72,   -72,   -72,   -72,    71,
     -72,   -72,     0,     0,     0,   -72,   -68,   -68,   -68,    71,
     -68,   -72,     0,     0,     0,   -68,   -69,   -69,   -69,     0,
     -69,   -68,     0,     0,     0,   -69,   -59,    95,   -59,     0,
     -59,   -69,     0,     0,     0,   -59,   -62,   -62,   -62,     0,
     -62,   -59,     0,     0,     0,   -62,   -64,   -64,   -64,     0,
     -64,   -62,     0,     0,     0,   -64,   -61,   -61,   -61,     0,
     -61,   -64,     0,     0,     0,   -61,   -63,   -63,   -63,     0,
     -63,   -61,     0,     0,     0,   -63,   -71,   -71,   -71,     0,
     -71,   -63,     0,     0,     0,   -71,   -65,   -65,   -65,     0,
     -65,   -71,     0,     0,     0,   -65,   -58,    95,   -58,     0,
     -58,   -65,     0,     0,     0,   -58,   -60,   -60,   -60,     0,
     -60,   -58,     0,     0,     0,   -60,   -70,   -70,   -70,     0,
     -70,   -60,   -68,   -68,   -68,   -70,   -68,     0,   -69,   -69,
     -69,   -70,   -69,     0,   -59,   251,   -59,   -68,   -59,     0,
     -62,   -62,   -62,   -69,   -62,     0,   -64,   -64,   -64,   -59,
     -64,     0,   -63,   -63,   -63,   -62,   -63,     0,   -61,   -61,
     -61,   -64,   -61,     0,   -71,   -71,   -71,   -63,   -71,     0,
     -65,   -65,   -65,   -61,   -65,     0,   -58,   251,   -58,   -71,
     -58,     0,   -60,   -60,   -60,   -65,   -60,     0,   -70,   -70,
     -70,   -58,   -70,     0,     0,     0,     0,   -60,   -72,   -72,
     -72,     0,   -72,   -70,   -72,     0,     0,   -72,     0,     0,
       0,   265,   -72,   -72,   -72,   -72,     0,   -72,     0,   -72,
     -72,   -72,   -72,   -72,     0,     0,   265,   -72,     0,     0,
       0,     0,   196,   -72,   -68,   -68,   -68,     0,   -68,     0,
     -69,   -69,   -69,   -68,   -69,     0,     0,     0,   -68,   -69,
       0,   -59,   278,   -59,   -69,   -59,     0,   -62,   -62,   -62,
     -59,   -62,     0,     0,     0,   -59,   -62,     0,   -64,   -64,
     -64,   -62,   -64,     0,   -61,   -61,   -61,   -64,   -61,     0,
       0,     0,   -64,   -61,     0,   -63,   -63,   -63,   -61,   -63,
       0,   -71,   -71,   -71,   -63,   -71,     0,     0,     0,   -63,
     -71,     0,   -65,   -65,   -65,   -71,   -65,     0,   -58,   278,
     -58,   -65,   -58,     0,     0,     0,   -65,   -58,     0,   -60,
     -60,   -60,   -58,   -60,     0,   -70,   -70,   -70,   -60,   -70,
       0,     0,     0,   -60,   -70,     0,   -66,   -66,   -66,   -70,
     -66,   -67,   -67,   -67,     0,   -67,     0,   -68,   -68,   -68,
     -66,   -68,   -69,   -69,   -69,   -67,   -69,     0,   -59,   203,
     -59,   -68,   -59,   -62,   -62,   -62,   -69,   -62,     0,   -64,
     -64,   -64,   -59,   -64,   -63,   -63,   -63,   -62,   -63,     0,
     -61,   -61,   -61,   -64,   -61,   -71,   -71,   -71,   -63,   -71,
       0,   -65,   -65,   -65,   -61,   -65,   -58,   203,   -58,   -71,
     -58,     0,   -60,   -60,   -60,   -65,   -60,   -70,   -70,   -70,
     -58,   -70,     0,   202,     0,   -57,   -60,   -57,   202,     0,
     -56,   -70,   -56,     0,     0,     0,     0,   -57,     0,     0,
       0,     0,   -56
};

static const yytype_int16 yycheck[] =
{
      36,    47,   121,    44,    78,     1,    42,    36,     1,     5,
      39,    40,     0,    42,     1,   160,    45,     0,   160,   160,
      29,     4,     1,   160,   160,     1,    16,    27,   196,    70,
     121,    14,    28,    23,    27,    27,   204,    29,    84,    29,
      27,    24,    71,    16,    73,    18,    75,     6,    27,    78,
      79,    27,    98,     0,     1,   121,    29,   121,     5,    88,
      96,    97,     6,    92,    93,    94,    95,    96,    97,    28,
     215,     6,     7,   215,   215,   121,   244,     6,   215,   215,
      27,     6,    29,   129,    28,   121,   160,   133,    16,    28,
       6,   120,    16,   122,    75,    16,     6,   265,     6,    28,
      28,   130,     3,     4,    28,     6,    25,   252,    29,    16,
     252,   252,    28,   142,   143,   252,   252,   146,    28,    16,
      21,    22,    29,    24,   160,    28,    27,    16,    27,   170,
      23,   160,    29,   162,   279,    25,    29,   279,   279,    28,
     121,   215,   279,   279,    23,     3,     4,    16,     6,   130,
      29,   180,   181,    23,    23,   184,    39,    16,    28,    18,
      29,     1,    45,    21,    23,     5,    24,   196,    29,    27,
      29,   200,   201,   202,   203,   204,    23,   160,   252,   215,
      16,    28,    18,   212,   213,    23,   215,    23,   217,   308,
      73,    29,   266,    29,   240,    78,    27,    23,   317,     0,
       1,    40,   321,    29,     5,   279,    45,    29,   237,    14,
     239,    16,    95,    18,     6,   244,   252,   308,    23,   248,
     249,   250,   251,   252,    29,    14,   317,    16,    16,    18,
     321,    27,   215,    29,    73,    23,   265,   266,   267,   122,
      29,    29,   308,   279,   308,   274,   275,   276,   277,   278,
     279,   317,    14,   317,    16,   321,    18,   321,   239,   142,
     143,    23,   308,   146,    14,    15,    16,    29,    18,   252,
      20,   317,   308,    23,    28,   321,    23,   160,    28,   162,
     309,   317,    29,   122,    14,   321,    16,     6,    18,   318,
       6,     3,     4,    16,     6,    18,   279,   180,   181,    29,
      28,   184,    14,    45,   143,    17,    29,   146,    23,    21,
      45,    29,    24,    45,    29,    27,    23,   200,   201,   202,
     203,   160,    29,   162,    14,    15,    16,   308,    18,   212,
     213,    73,   215,    23,   217,    19,   317,   318,    73,    29,
     321,    73,   181,    78,    23,   184,    28,    14,    15,    16,
      29,    18,    94,    20,   237,     1,    23,    23,    23,     5,
      27,   200,    29,    29,    29,   248,   249,   250,   251,   252,
      28,    14,    15,    16,   213,    18,   215,    16,   217,    18,
     122,     3,     4,   266,     6,    23,    29,   122,    28,    28,
     122,    29,   275,   276,   277,   278,   279,    23,   237,    21,
      23,   143,    24,    29,   146,    27,    29,   142,   143,   248,
      16,   146,    18,   252,   146,    14,    15,    16,   160,    18,
     162,    28,    28,    30,    23,   160,   309,   162,   160,    28,
     162,    23,     3,     4,     6,     6,   275,    29,    23,   181,
     279,    23,   184,    14,    29,   180,   181,    29,    45,   184,
      21,    45,   184,    24,     6,     7,    27,    23,   200,   201,
     202,    45,    16,    29,    18,   200,   201,   202,   203,    23,
     309,   213,    29,   215,    28,   217,    73,   212,   213,    73,
     215,    16,   217,   215,    28,   217,    30,    28,    23,    73,
      14,    15,    16,    28,    18,   237,    93,    19,    92,    23,
       3,     4,   237,     6,    28,   237,   248,   249,   250,    28,
     252,    14,    28,   248,   249,   250,   251,   252,    21,    28,
     252,    24,    23,    23,    27,   122,    23,    28,   122,    29,
      23,   266,    29,   275,   276,   277,    29,   279,   122,    23,
     275,   276,   277,   278,   279,    29,   143,   279,    23,   146,
       6,     7,   146,    23,    29,    14,    15,    16,    28,    18,
      19,    20,   146,   160,    23,   162,   160,   309,   162,    29,
      29,    14,    15,    16,   309,    18,   160,   309,   162,    14,
      23,    16,    28,    18,   181,    29,    29,   184,    23,    28,
     184,     3,     4,    28,     6,    14,    15,    16,    28,    18,
     184,    28,    14,   200,   201,    17,   200,    16,    27,    21,
      29,    28,    24,    30,    23,    27,   213,    23,   215,    28,
     217,   215,    28,   217,     3,     4,    28,     6,    30,    16,
      14,   215,    16,   217,    18,    14,    23,    19,    17,    23,
     237,    28,    21,   237,    28,    24,     3,     4,    27,     6,
       6,   248,   249,   237,   248,   252,    23,    14,   252,    28,
      17,    28,     3,     4,    21,     6,    27,    24,   252,    23,
      27,     0,     1,    14,    28,    28,     5,    30,   275,   276,
      21,   275,   279,    24,    27,   279,    27,     0,     1,    14,
      15,    16,     5,    18,    28,   279,    30,    28,     1,    30,
       3,     4,     5,     6,    29,     8,     9,    10,    11,    12,
      13,    14,   309,    28,    17,   309,    27,    28,    21,    22,
      23,    24,    25,    26,    27,   309,    29,     1,    23,     3,
       4,     5,     6,    28,     8,    28,    10,    11,    12,    13,
      14,     0,     1,    17,     6,     7,     5,    21,    22,    23,
      24,    25,    26,    27,     1,    29,     3,     4,     5,     6,
      28,     8,     9,    10,    11,    12,    13,    14,     0,     1,
      17,     0,     1,     5,    21,    22,     5,    24,    25,    26,
      27,     1,    23,     3,     4,     5,     6,    28,     8,     9,
      10,    11,    12,    13,    14,     0,     1,    17,    23,     6,
       5,    21,    22,    28,    24,    25,    26,    27,     1,    23,
       3,     4,     5,     6,    28,     8,     9,    10,    11,    12,
      13,    14,    23,     6,    17,    23,    28,    28,    21,    22,
      28,    24,    25,    26,    27,     1,    23,     3,     4,     5,
       6,    28,     8,     9,    10,    11,    12,    13,    14,    23,
      28,    17,    23,    28,    28,    21,    22,    28,    24,    25,
      26,    27,     1,    23,     3,     4,     5,     6,    28,     8,
       9,    10,    11,    12,    13,    14,    23,    29,    17,    23,
      28,    28,    21,    22,    28,    24,    25,    26,    27,     1,
      23,     3,     4,     5,     6,    28,     8,     9,    10,    11,
      12,    13,    14,    28,    28,    17,    30,    28,    28,    21,
      22,    29,    24,    25,    26,    27,     1,    28,     3,     4,
       5,     6,     4,     8,     9,    10,    11,    12,    13,    14,
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
      27,     3,     4,     5,     6,    -1,     8,    -1,    10,    11,
      12,    13,    14,    -1,    -1,    17,    -1,    -1,    -1,    21,
      22,    -1,    24,    25,     1,    27,     3,     4,     5,     6,
      -1,    16,    -1,    18,    -1,    12,    13,    14,    23,    -1,
      17,    -1,    -1,    28,    21,    22,    -1,    24,    -1,     1,
      27,     3,     4,     5,     6,     3,     4,    -1,     6,    -1,
      12,    13,    14,    -1,    -1,    17,    14,    -1,    -1,    21,
      22,    -1,    24,    21,    -1,    27,    24,     3,     4,    27,
       6,     3,     4,    -1,     6,    14,    15,    16,    -1,    18,
      -1,    20,    -1,    -1,    23,    21,    -1,    -1,    24,    21,
      29,    27,    24,    -1,    -1,    27,    14,    15,    16,    -1,
      18,    19,    20,    -1,    -1,    23,    14,    15,    16,    27,
      18,    29,    -1,    -1,    -1,    23,    14,    15,    16,    27,
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
      18,    29,    -1,    -1,    -1,    23,    14,    15,    16,    -1,
      18,    29,    14,    15,    16,    23,    18,    -1,    14,    15,
      16,    29,    18,    -1,    14,    15,    16,    29,    18,    -1,
      14,    15,    16,    29,    18,    -1,    14,    15,    16,    29,
      18,    -1,    14,    15,    16,    29,    18,    -1,    14,    15,
      16,    29,    18,    -1,    14,    15,    16,    29,    18,    -1,
      14,    15,    16,    29,    18,    -1,    14,    15,    16,    29,
      18,    -1,    14,    15,    16,    29,    18,    -1,    14,    15,
      16,    29,    18,    -1,    -1,    -1,    -1,    29,    14,    15,
      16,    -1,    18,    29,    20,    -1,    -1,    23,    -1,    -1,
      -1,    27,    28,    14,    15,    16,    -1,    18,    -1,    14,
      15,    16,    23,    18,    -1,    -1,    27,    28,    -1,    -1,
      -1,    -1,    27,    28,    14,    15,    16,    -1,    18,    -1,
      14,    15,    16,    23,    18,    -1,    -1,    -1,    28,    23,
      -1,    14,    15,    16,    28,    18,    -1,    14,    15,    16,
      23,    18,    -1,    -1,    -1,    28,    23,    -1,    14,    15,
      16,    28,    18,    -1,    14,    15,    16,    23,    18,    -1,
      -1,    -1,    28,    23,    -1,    14,    15,    16,    28,    18,
      -1,    14,    15,    16,    23,    18,    -1,    -1,    -1,    28,
      23,    -1,    14,    15,    16,    28,    18,    -1,    14,    15,
      16,    23,    18,    -1,    -1,    -1,    28,    23,    -1,    14,
      15,    16,    28,    18,    -1,    14,    15,    16,    23,    18,
      -1,    -1,    -1,    28,    23,    -1,    14,    15,    16,    28,
      18,    14,    15,    16,    -1,    18,    -1,    14,    15,    16,
      28,    18,    14,    15,    16,    28,    18,    -1,    14,    15,
      16,    28,    18,    14,    15,    16,    28,    18,    -1,    14,
      15,    16,    28,    18,    14,    15,    16,    28,    18,    -1,
      14,    15,    16,    28,    18,    14,    15,    16,    28,    18,
      -1,    14,    15,    16,    28,    18,    14,    15,    16,    28,
      18,    -1,    14,    15,    16,    28,    18,    14,    15,    16,
      28,    18,    -1,    14,    -1,    16,    28,    18,    14,    -1,
      16,    28,    18,    -1,    -1,    -1,    -1,    28,    -1,    -1,
      -1,    -1,    28
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     1,     5,    32,    33,    34,    35,    39,    40,     6,
       7,     0,    34,    29,    27,     6,     1,     5,    37,    38,
      39,     6,     7,    28,    30,    36,     6,    25,    39,    28,
       1,     3,     4,     6,     8,    10,    11,    12,    13,    14,
      17,    21,    22,    24,    25,    27,    39,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      25,    27,     1,    27,     1,    27,    44,    63,    27,    27,
      61,    63,    58,    44,    41,    53,    26,    42,    23,    29,
      29,    29,    16,    18,    14,    15,    19,    20,    41,     6,
      28,    63,    64,    53,    49,    63,    51,    61,    63,    26,
      28,    63,    57,    59,    60,    61,    44,    44,    26,    28,
      30,    28,    29,    28,    28,    28,    63,    42,    53,     9,
      29,    42,    49,    28,    42,     5,     1,     6,     6,     3,
       4,     6,    14,    17,    21,    24,    27,    56,    57,    58,
      59,    60,    61,    62,    63,     6,     3,     4,     6,    21,
      22,    24,    27,    62,    63,     6,     6,     1,     8,    10,
      25,    43,    44,    46,    47,    48,    49,     3,     4,     6,
      14,    17,    21,    24,    27,    56,    57,    58,    59,    60,
      61,    62,    63,    63,     6,     7,    27,    61,    58,    53,
      16,    18,    14,    15,    27,     1,     3,     4,     5,     6,
      12,    13,    14,    17,    21,    22,    24,    27,    39,    44,
      45,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    53,     1,    27,     1,    27,
      41,    29,    29,    29,    27,    61,    58,    53,    16,    18,
      14,    15,    19,     6,    28,    64,    28,    57,    59,    60,
      61,    28,    64,     6,     7,    27,    27,    27,     6,    61,
      63,    58,    44,    53,    23,    16,    18,    14,    15,    20,
      28,    53,    49,    26,    28,    64,    28,    57,    59,    60,
      61,    44,    28,    28,     6,    28,    64,    51,    61,    63,
      28,     6,    63,    57,    59,    60,    61,    44,    28,    29,
      28,    28,    28,    28,    28,    42,    53,     9,    29,    42,
      49,    28,    42
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    31,    32,    33,    33,    34,    34,    34,    36,    35,
      37,    35,    38,    38,    39,    39,    39,    40,    40,    40,
      41,    41,    42,    42,    42,    42,    42,    43,    43,    43,
      44,    44,    44,    44,    44,    44,    45,    45,    46,    46,
      46,    47,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    55,    56,    56,    57,    57,    58,    58,    59,    59,
      60,    60,    60,    61,    61,    61,    61,    61,    61,    61,
      62,    62,    63,    64,    64
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     1,     2,     1,     1,     0,     8,
       0,     7,     3,     1,     2,     3,     1,     2,     3,     1,
       2,     1,     2,     2,     3,     1,     1,     1,     1,     2,
       1,     1,     1,     1,     1,     1,     1,     1,     5,     7,
       2,     9,     2,     2,     3,     3,     2,     3,     1,     4,
       4,     4,     3,     1,     2,     1,     3,     1,     3,     1,
       3,     2,     1,     1,     1,     3,     1,     1,     1,     1,
       4,     3,     1,     3,     1
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
#line 73 "src/sin_analyser.y"
            { syntaxTree = (yyval.treeNode); }
#line 1912 "src/sin_analyser.tab.c"
    break;

  case 3:
#line 77 "src/sin_analyser.y"
                          {
        (yyval.treeNode) = newNode("PROGRAM", 0);
        (yyval.treeNode)->subtree1 = (yyvsp[-1].treeNode);
        (yyval.treeNode)->subtree2 = (yyvsp[0].treeNode);
    }
#line 1922 "src/sin_analyser.tab.c"
    break;

  case 4:
#line 83 "src/sin_analyser.y"
                  { (yyval.treeNode) = (yyvsp[0].treeNode); }
#line 1928 "src/sin_analyser.tab.c"
    break;

  case 5:
#line 87 "src/sin_analyser.y"
               { (yyval.treeNode) = (yyvsp[-1].treeNode); }
#line 1934 "src/sin_analyser.tab.c"
    break;

  case 6:
#line 89 "src/sin_analyser.y"
              { (yyval.treeNode) = (yyvsp[0].treeNode); }
#line 1940 "src/sin_analyser.tab.c"
    break;

  case 7:
#line 91 "src/sin_analyser.y"
          { }
#line 1946 "src/sin_analyser.tab.c"
    break;

  case 8:
#line 95 "src/sin_analyser.y"
                   {
        updateParams(table, params);
        params = 0;
    }
#line 1955 "src/sin_analyser.tab.c"
    break;

  case 9:
#line 98 "src/sin_analyser.y"
                     {
        (yyval.treeNode) = newNode("FUNCTION", 0);
        (yyval.treeNode)->subtree1 = (yyvsp[-7].treeNode);
        (yyval.treeNode)->subtree2 = (yyvsp[-5].treeNode);
        (yyval.treeNode)->subtree3 = (yyvsp[-1].treeNode);
        if((yyval.treeNode)->subtree1->type == 1){
            if((yyval.treeNode)->subtree3->type == 1){
                (yyval.treeNode)->type = (yyval.treeNode)->subtree1->type;
            }else{
                printf("Return type error: Function type is %d and return is %d. [%d, %d]\n", (yyval.treeNode)->subtree1->type, (yyval.treeNode)->subtree3->type, (yyvsp[-6].lex).line, (yyvsp[-6].lex).col);
                sem_errors++;
            }
        } else if((yyval.treeNode)->subtree1->type == 2){
            if((yyval.treeNode)->subtree3->type == 1){
                (yyval.treeNode)->type = (yyval.treeNode)->subtree1->type;
            }else if((yyval.treeNode)->subtree3->type == 2){
                (yyval.treeNode)->type = (yyval.treeNode)->subtree3->type;
            }else{
                printf("Return type error: Function type is %d and return is %d. [%d, %d]\n", (yyval.treeNode)->subtree1->type, (yyval.treeNode)->subtree3->type, (yyvsp[-6].lex).line, (yyvsp[-6].lex).col);
                sem_errors++;
            }
        } else if((yyval.treeNode)->subtree1->type == 3){
            if((yyval.treeNode)->subtree3->type == 3){
                (yyval.treeNode)->type = (yyval.treeNode)->subtree1->type;
            }else{
                printf("Return type error: Function type is %d and return is %d. [%d, %d]\n", (yyval.treeNode)->subtree1->type, (yyval.treeNode)->subtree3->type, (yyvsp[-6].lex).line, (yyvsp[-6].lex).col);
                sem_errors++;
            }
        } else if((yyval.treeNode)->subtree1->type == 4){
            if((yyval.treeNode)->subtree3->type == 3){
                (yyval.treeNode)->type = (yyval.treeNode)->subtree1->type;
            }else if((yyval.treeNode)->subtree3->type == 4){
                (yyval.treeNode)->type = (yyval.treeNode)->subtree3->type;
            }else{
                printf("Return type error: Function type is %d and return is %d. [%d, %d]\n", (yyval.treeNode)->subtree1->type, (yyval.treeNode)->subtree3->type, (yyvsp[-6].lex).line, (yyvsp[-6].lex).col);
                sem_errors++;
            }
        }
    }
#line 1999 "src/sin_analyser.tab.c"
    break;

  case 10:
#line 138 "src/sin_analyser.y"
            {
        updateParams(table, params);
    }
#line 2007 "src/sin_analyser.tab.c"
    break;

  case 11:
#line 140 "src/sin_analyser.y"
                     {
        (yyval.treeNode) = newNode("FUNCTION", 0);
        (yyval.treeNode)->subtree1 = (yyvsp[-6].treeNode);
        (yyval.treeNode)->subtree2 = (yyvsp[-1].treeNode);
        if((yyval.treeNode)->subtree1->type == 1){
            if((yyval.treeNode)->subtree2->type == 1){
                (yyval.treeNode)->type = (yyval.treeNode)->subtree1->type;
            }else{
                printf("Return type error: Function type is %d and return is %d. [%d, %d]\n", (yyval.treeNode)->subtree1->type, (yyval.treeNode)->subtree2->type, (yyvsp[-5].lex).line, (yyvsp[-5].lex).col);
                sem_errors++;
            }
        } else if((yyval.treeNode)->subtree1->type == 2){
            if((yyval.treeNode)->subtree2->type == 1){
                (yyval.treeNode)->type = (yyval.treeNode)->subtree1->type;
            }else if((yyval.treeNode)->subtree2->type == 2){
                (yyval.treeNode)->type = (yyval.treeNode)->subtree2->type;
            }else{
                printf("Return type error: Function type is %d and return is %d. [%d, %d]\n", (yyval.treeNode)->subtree1->type, (yyval.treeNode)->subtree2->type, (yyvsp[-5].lex).line, (yyvsp[-5].lex).col);
                sem_errors++;
            }
        } else if((yyval.treeNode)->subtree1->type == 3){
            if((yyval.treeNode)->subtree2->type == 3){
                (yyval.treeNode)->type = (yyval.treeNode)->subtree1->type;
            }else{
                printf("Return type error: Function type is %d and return is %d. [%d, %d]\n", (yyval.treeNode)->subtree1->type, (yyval.treeNode)->subtree2->type, (yyvsp[-5].lex).line, (yyvsp[-5].lex).col);
                sem_errors++;
            }
        } else if((yyval.treeNode)->subtree1->type == 4){
            if((yyval.treeNode)->subtree2->type == 3){
                (yyval.treeNode)->type = (yyval.treeNode)->subtree1->type;
            }else if((yyval.treeNode)->subtree2->type == 4){
                (yyval.treeNode)->type = (yyval.treeNode)->subtree2->type;
            }else{
                printf("Return type error: Function type is %d and return is %d. [%d, %d]\n", (yyval.treeNode)->subtree1->type, (yyval.treeNode)->subtree2->type, (yyvsp[-5].lex).line, (yyvsp[-5].lex).col);
                sem_errors++;
            }
        }
    }
#line 2050 "src/sin_analyser.tab.c"
    break;

  case 12:
#line 181 "src/sin_analyser.y"
                            {
        params++;
        (yyval.treeNode) = newNode("PARAMS", 0);
        (yyval.treeNode)->subtree1 = (yyvsp[-2].treeNode);
        (yyval.treeNode)->subtree2 = (yyvsp[0].treeNode);
    }
#line 2061 "src/sin_analyser.tab.c"
    break;

  case 13:
#line 188 "src/sin_analyser.y"
           { 
        params++;
        (yyval.treeNode) = (yyvsp[0].treeNode);
    }
#line 2070 "src/sin_analyser.tab.c"
    break;

  case 14:
#line 195 "src/sin_analyser.y"
            {
        if(searchTable(table, (yyvsp[0].lex).id, scope, 0, 1)) printf("Variable already declared\n");
        newSymbol(table, (yyvsp[0].lex).id, (yyvsp[-1].lex).id, "VAR      ", (yyvsp[0].lex).line, (yyvsp[0].lex).col, scope, 0);   
        (yyval.treeNode) = newNode(strcat(strcat((yyvsp[-1].lex).id," var "), (yyvsp[0].lex).id), checkType(table, (yyvsp[0].lex).id));
    }
#line 2080 "src/sin_analyser.tab.c"
    break;

  case 15:
#line 201 "src/sin_analyser.y"
                 {
        if(searchTable(table, (yyvsp[0].lex).id, scope, 0, 1)) printf("Variable already declared\n");
        newSymbol(table, (yyvsp[0].lex).id, strcat((yyvsp[-2].lex).id," list"), "LIST VAR ",(yyvsp[0].lex).line, (yyvsp[0].lex).col, scope, 0);
        (yyval.treeNode) = newNode(strcat(strcat((yyvsp[-2].lex).id," list "), (yyvsp[0].lex).id), checkType(table, (yyvsp[0].lex).id));
    }
#line 2090 "src/sin_analyser.tab.c"
    break;

  case 16:
#line 207 "src/sin_analyser.y"
          { }
#line 2096 "src/sin_analyser.tab.c"
    break;

  case 17:
#line 211 "src/sin_analyser.y"
            {
        scope++;
        if(!strcmp((yyvsp[0].lex).id, "main")) main_found = 1;
        if(searchTable(table, (yyvsp[0].lex).id, scope, 1, 0)) printf("Function already declared\n");
        newSymbol(table, (yyvsp[0].lex).id, (yyvsp[-1].lex).id, "FUNC     ", (yyvsp[0].lex).line, (yyvsp[0].lex).col, scope, -1);
        (yyval.treeNode) = newNode(strcat(strcat((yyvsp[-1].lex).id," function "), (yyvsp[0].lex).id), checkType(table, (yyvsp[0].lex).id));
    }
#line 2108 "src/sin_analyser.tab.c"
    break;

  case 18:
#line 219 "src/sin_analyser.y"
                 {
        scope++;
        if(!strcmp((yyvsp[0].lex).id, "main")) main_found = 1;
        if(searchTable(table, (yyvsp[0].lex).id, scope, 1, 0)) printf("Function already declared\n");
        newSymbol(table, (yyvsp[0].lex).id, strcat((yyvsp[-2].lex).id," list"), "LIST FUNC", (yyvsp[0].lex).line, (yyvsp[0].lex).col, scope, -1);
        (yyval.treeNode) = newNode(strcat(strcat((yyvsp[-2].lex).id," function list "), (yyvsp[0].lex).id), checkType(table, (yyvsp[0].lex).id));
    }
#line 2120 "src/sin_analyser.tab.c"
    break;

  case 19:
#line 227 "src/sin_analyser.y"
          { }
#line 2126 "src/sin_analyser.tab.c"
    break;

  case 20:
#line 231 "src/sin_analyser.y"
                    {
        (yyval.treeNode) = newNode("BLOCK", 0);
        (yyval.treeNode)->subtree1 = (yyvsp[-1].treeNode);
        (yyval.treeNode)->subtree2 = (yyvsp[0].treeNode);
        (yyval.treeNode)->type = (yyval.treeNode)->subtree2->type;
    }
#line 2137 "src/sin_analyser.tab.c"
    break;

  case 21:
#line 238 "src/sin_analyser.y"
              { (yyval.treeNode) = (yyvsp[0].treeNode); }
#line 2143 "src/sin_analyser.tab.c"
    break;

  case 22:
#line 242 "src/sin_analyser.y"
             { (yyval.treeNode) = (yyvsp[-1].treeNode); }
#line 2149 "src/sin_analyser.tab.c"
    break;

  case 23:
#line 244 "src/sin_analyser.y"
              { (yyval.treeNode) = (yyvsp[-1].treeNode); }
#line 2155 "src/sin_analyser.tab.c"
    break;

  case 24:
#line 246 "src/sin_analyser.y"
                { (yyval.treeNode) = (yyvsp[-1].treeNode); }
#line 2161 "src/sin_analyser.tab.c"
    break;

  case 25:
#line 248 "src/sin_analyser.y"
             { (yyval.treeNode) = (yyvsp[0].treeNode); }
#line 2167 "src/sin_analyser.tab.c"
    break;

  case 26:
#line 250 "src/sin_analyser.y"
           {  }
#line 2173 "src/sin_analyser.tab.c"
    break;

  case 27:
#line 254 "src/sin_analyser.y"
            { (yyval.treeNode) = (yyvsp[0].treeNode); }
#line 2179 "src/sin_analyser.tab.c"
    break;

  case 28:
#line 256 "src/sin_analyser.y"
        { (yyval.treeNode) = (yyvsp[0].treeNode); }
#line 2185 "src/sin_analyser.tab.c"
    break;

  case 29:
#line 258 "src/sin_analyser.y"
               { (yyval.treeNode) = (yyvsp[-1].treeNode); }
#line 2191 "src/sin_analyser.tab.c"
    break;

  case 30:
#line 262 "src/sin_analyser.y"
              { (yyval.treeNode) = (yyvsp[0].treeNode); }
#line 2197 "src/sin_analyser.tab.c"
    break;

  case 31:
#line 264 "src/sin_analyser.y"
           { (yyval.treeNode) = (yyvsp[0].treeNode); }
#line 2203 "src/sin_analyser.tab.c"
    break;

  case 32:
#line 266 "src/sin_analyser.y"
          { (yyval.treeNode) = (yyvsp[0].treeNode); }
#line 2209 "src/sin_analyser.tab.c"
    break;

  case 33:
#line 268 "src/sin_analyser.y"
           { (yyval.treeNode) = (yyvsp[0].treeNode); }
#line 2215 "src/sin_analyser.tab.c"
    break;

  case 34:
#line 270 "src/sin_analyser.y"
            { (yyval.treeNode) = (yyvsp[0].treeNode); }
#line 2221 "src/sin_analyser.tab.c"
    break;

  case 35:
#line 272 "src/sin_analyser.y"
              { (yyval.treeNode) = (yyvsp[0].treeNode); }
#line 2227 "src/sin_analyser.tab.c"
    break;

  case 36:
#line 276 "src/sin_analyser.y"
             { (yyval.treeNode) = (yyvsp[0].treeNode); }
#line 2233 "src/sin_analyser.tab.c"
    break;

  case 37:
#line 278 "src/sin_analyser.y"
              { (yyval.treeNode) = (yyvsp[0].treeNode); }
#line 2239 "src/sin_analyser.tab.c"
    break;

  case 38:
#line 282 "src/sin_analyser.y"
                                            {
        (yyval.treeNode) = newNode("IF", 0);
        (yyval.treeNode)->subtree1 = (yyvsp[-2].treeNode);
        (yyval.treeNode)->subtree2 = (yyvsp[0].treeNode);
    }
#line 2249 "src/sin_analyser.tab.c"
    break;

  case 39:
#line 288 "src/sin_analyser.y"
                                                {
        (yyval.treeNode) = newNode("IF ELSE", 0);
        (yyval.treeNode)->subtree1 = (yyvsp[-4].treeNode);
        (yyval.treeNode)->subtree2 = (yyvsp[-2].treeNode);
        (yyval.treeNode)->subtree3 = (yyvsp[0].treeNode);
    }
#line 2260 "src/sin_analyser.tab.c"
    break;

  case 40:
#line 295 "src/sin_analyser.y"
             { }
#line 2266 "src/sin_analyser.tab.c"
    break;

  case 41:
#line 299 "src/sin_analyser.y"
                                                        {
        (yyval.treeNode) = newNode("FOR", 0);
        (yyval.treeNode)->subtree1 = (yyvsp[-6].treeNode);
        (yyval.treeNode)->subtree2 = (yyvsp[-4].treeNode);
        (yyval.treeNode)->subtree3 = (yyvsp[-2].treeNode);
        (yyval.treeNode)->subtree4 = (yyvsp[0].treeNode);
    }
#line 2278 "src/sin_analyser.tab.c"
    break;

  case 42:
#line 307 "src/sin_analyser.y"
               {  }
#line 2284 "src/sin_analyser.tab.c"
    break;

  case 43:
#line 311 "src/sin_analyser.y"
                {
        (yyval.treeNode) = newNode("RETURN", 0);
        (yyval.treeNode)->subtree1 = (yyvsp[0].treeNode);
        (yyval.treeNode)->type = (yyval.treeNode)->subtree1->type;
    }
#line 2294 "src/sin_analyser.tab.c"
    break;

  case 44:
#line 319 "src/sin_analyser.y"
                   {
        (yyval.treeNode) = newNode("ASSIGN", 0);
        (yyval.treeNode)->subtree1 = (yyvsp[-2].treeNode);
        (yyval.treeNode)->subtree2 = (yyvsp[0].treeNode);
        if((yyval.treeNode)->subtree1->type == 1){
            if((yyval.treeNode)->subtree2->type == 1){
                (yyval.treeNode)->type = (yyval.treeNode)->subtree1->type;
            }else{
                printf("Type error when assigning %d to %d. [%d, %d]\n", (yyval.treeNode)->subtree2->type, (yyval.treeNode)->subtree1->type, (yyvsp[-1].lex).line, (yyvsp[-1].lex).col);
                sem_errors++;
            }
        } else if((yyval.treeNode)->subtree1->type == 2){
            if((yyval.treeNode)->subtree2->type == 1){
                (yyval.treeNode)->type = (yyval.treeNode)->subtree1->type;
            }else if((yyval.treeNode)->subtree2->type == 2){
                (yyval.treeNode)->type = (yyval.treeNode)->subtree2->type;
            }else{
                printf("Type error when assigning %d to %d. [%d, %d]\n", (yyval.treeNode)->subtree2->type, (yyval.treeNode)->subtree1->type, (yyvsp[-1].lex).line, (yyvsp[-1].lex).col);
                sem_errors++;
            }
        } else if((yyval.treeNode)->subtree1->type == 3){
            if((yyval.treeNode)->subtree2->type == 3){
                (yyval.treeNode)->type = (yyval.treeNode)->subtree1->type;
            }else{
                printf("Type error when assigning %d to %d. [%d, %d]\n", (yyval.treeNode)->subtree2->type, (yyval.treeNode)->subtree1->type, (yyvsp[-1].lex).line, (yyvsp[-1].lex).col);
                sem_errors++;
            }
        } else if((yyval.treeNode)->subtree1->type == 4){
            if((yyval.treeNode)->subtree2->type == 3){
                (yyval.treeNode)->type = (yyval.treeNode)->subtree1->type;
            }else if((yyval.treeNode)->subtree2->type == 4){
                (yyval.treeNode)->type = (yyval.treeNode)->subtree2->type;
            }else{
                printf("Type error when assigning %d to %d. [%d, %d]\n", (yyval.treeNode)->subtree2->type, (yyval.treeNode)->subtree1->type, (yyvsp[-1].lex).line, (yyvsp[-1].lex).col);
                sem_errors++;
            }
        }
    }
#line 2337 "src/sin_analyser.tab.c"
    break;

  case 45:
#line 360 "src/sin_analyser.y"
                     {
        (yyval.treeNode) = newNode("LIST OP", 0);
        (yyval.treeNode)->subtree1 = (yyvsp[-2].treeNode);
        (yyval.treeNode)->subtree2 = (yyvsp[0].treeNode);
        if((yyval.treeNode)->subtree1->type == 1 || (yyval.treeNode)->subtree1->type == 2){
            if((yyval.treeNode)->subtree2->type == 3 || (yyval.treeNode)->subtree2->type == 4){
                (yyval.treeNode)->type = (yyval.treeNode)->subtree2->type;
            }else{
                printf("Type error in list constructor with type %d and %d. [%d, %d]\n", (yyval.treeNode)->subtree1->type, (yyval.treeNode)->subtree2->type, (yyvsp[-1].lex).line, (yyvsp[-1].lex).col);
                sem_errors++;
            }
        } else{
            printf("Type error in list constructor with type %d and %d. [%d, %d]\n", (yyval.treeNode)->subtree1->type, (yyval.treeNode)->subtree2->type, (yyvsp[-1].lex).line, (yyvsp[-1].lex).col);
            sem_errors++;
        }
    }
#line 2358 "src/sin_analyser.tab.c"
    break;

  case 46:
#line 379 "src/sin_analyser.y"
                  {
        (yyval.treeNode) = newNode("LIST OP", 0);
        (yyval.treeNode)->subtree1 = (yyvsp[0].treeNode);
        if((yyval.treeNode)->subtree1->type == 3 || (yyval.treeNode)->subtree1->type == 4){
            (yyval.treeNode)->type = (yyval.treeNode)->subtree1->type;
        } else{
            printf("Type error in list operator with type %d. [%d, %d]\n", (yyval.treeNode)->subtree1->type, (yyvsp[-1].lex).line, (yyvsp[-1].lex).col);
            sem_errors++;
        }
    }
#line 2373 "src/sin_analyser.tab.c"
    break;

  case 47:
#line 392 "src/sin_analyser.y"
                      {
        (yyval.treeNode) = newNode("LIST FUNC", 0);
        (yyval.treeNode)->subtree1 = (yyvsp[-2].treeNode);
        (yyval.treeNode)->subtree2 = (yyvsp[0].treeNode);
        if((yyval.treeNode)->subtree1->type == 1 || (yyval.treeNode)->subtree1->type == 2){
            if((yyval.treeNode)->subtree2->type == 3 || (yyval.treeNode)->subtree2->type == 4){
                (yyval.treeNode)->type = (yyval.treeNode)->subtree2->type;
            }else{
                printf("Type error in list function with type %d and %d. [%d, %d]\n", (yyval.treeNode)->subtree1->type, (yyval.treeNode)->subtree2->type, (yyvsp[-1].lex).line, (yyvsp[-1].lex).col);
                sem_errors++;
            }
        } else{
            printf("Type error in list function with type %d and %d. [%d, %d]\n", (yyval.treeNode)->subtree1->type, (yyval.treeNode)->subtree2->type, (yyvsp[-1].lex).line, (yyvsp[-1].lex).col);
            sem_errors++;
        }
    }
#line 2394 "src/sin_analyser.tab.c"
    break;

  case 48:
#line 411 "src/sin_analyser.y"
           { (yyval.treeNode) = (yyvsp[0].treeNode); }
#line 2400 "src/sin_analyser.tab.c"
    break;

  case 49:
#line 415 "src/sin_analyser.y"
                {
        (yyval.treeNode) = newNode("IN", 0);
        (yyval.treeNode)->subtree1 = (yyvsp[-1].treeNode);
    }
#line 2409 "src/sin_analyser.tab.c"
    break;

  case 50:
#line 422 "src/sin_analyser.y"
                  {
        (yyval.treeNode) = newNode("OUT", 0);
        (yyval.treeNode)->subtree1 = (yyvsp[-1].treeNode);
    }
#line 2418 "src/sin_analyser.tab.c"
    break;

  case 51:
#line 427 "src/sin_analyser.y"
                        { 
        (yyval.treeNode) = newNode("OUT", 0);
        (yyval.treeNode)->subtree1 = (yyvsp[-1].treeNode); 
    }
#line 2427 "src/sin_analyser.tab.c"
    break;

  case 52:
#line 434 "src/sin_analyser.y"
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
                printf("Type error in logical operation with type %d and %d. [%d, %d]\n", (yyval.treeNode)->subtree1->type, (yyval.treeNode)->subtree2->type, (yyvsp[-1].lex).line, (yyvsp[-1].lex).col);
                sem_errors++;
            }
        } else if((yyval.treeNode)->subtree1->type == 2){
            if((yyval.treeNode)->subtree2->type == 1){
                (yyval.treeNode)->type = 1;
            }else if((yyval.treeNode)->subtree2->type == 2){
                (yyval.treeNode)->type = 1;
            }else{
                printf("Type error in logical operation with type %d and %d. [%d, %d]\n", (yyval.treeNode)->subtree1->type, (yyval.treeNode)->subtree2->type, (yyvsp[-1].lex).line, (yyvsp[-1].lex).col);
                sem_errors++;
            }
        } else{
            printf("Type error in logical operation with type %d and %d. [%d, %d]\n", (yyval.treeNode)->subtree1->type, (yyval.treeNode)->subtree2->type, (yyvsp[-1].lex).line, (yyvsp[-1].lex).col);
            sem_errors++;
        }
    }
#line 2459 "src/sin_analyser.tab.c"
    break;

  case 53:
#line 462 "src/sin_analyser.y"
            { (yyval.treeNode) = (yyvsp[0].treeNode); }
#line 2465 "src/sin_analyser.tab.c"
    break;

  case 54:
#line 466 "src/sin_analyser.y"
                   {
        (yyval.treeNode) = newNode("LOG OP", 0);
        (yyval.treeNode)->subtree1 = (yyvsp[0].treeNode);
        if((yyval.treeNode)->subtree1->type != 1 && (yyval.treeNode)->subtree1->type != 2){
            printf("Type error in logical operation with type %d. [%d, %d]\n", (yyval.treeNode)->subtree1->type, (yyvsp[-1].lex).line, (yyvsp[-1].lex).col);
            sem_errors++;
        }
        else (yyval.treeNode)->type = 1;
    }
#line 2479 "src/sin_analyser.tab.c"
    break;

  case 55:
#line 476 "src/sin_analyser.y"
           { (yyval.treeNode) = (yyvsp[0].treeNode); }
#line 2485 "src/sin_analyser.tab.c"
    break;

  case 56:
#line 480 "src/sin_analyser.y"
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
                printf("Type error in relational operation with type %d and %d. [%d, %d]\n", (yyval.treeNode)->subtree1->type, (yyval.treeNode)->subtree2->type, (yyvsp[-1].lex).line, (yyvsp[-1].lex).col);
                sem_errors++;
            }
        } else if((yyval.treeNode)->subtree1->type == 2){
            if((yyval.treeNode)->subtree2->type == 1){
                (yyval.treeNode)->type = 1;
            }else if((yyval.treeNode)->subtree2->type == 2){
                (yyval.treeNode)->type = 1;
            }else{
                printf("Type error in relational operation with type %d and %d. [%d, %d]\n", (yyval.treeNode)->subtree1->type, (yyval.treeNode)->subtree2->type, (yyvsp[-1].lex).line, (yyvsp[-1].lex).col);
                sem_errors++;
            }
        } else{
            printf("Type error in relational operation with type %d and %d. [%d, %d]\n", (yyval.treeNode)->subtree1->type, (yyval.treeNode)->subtree2->type, (yyvsp[-1].lex).line, (yyvsp[-1].lex).col);
            sem_errors++;
        }
    }
#line 2517 "src/sin_analyser.tab.c"
    break;

  case 57:
#line 508 "src/sin_analyser.y"
           { (yyval.treeNode) = (yyvsp[0].treeNode); }
#line 2523 "src/sin_analyser.tab.c"
    break;

  case 58:
#line 512 "src/sin_analyser.y"
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
                printf("Type error in arithmetic operation with type %d and %d. [%d, %d]\n", (yyval.treeNode)->subtree1->type, (yyval.treeNode)->subtree2->type, (yyvsp[-1].lex).line, (yyvsp[-1].lex).col);
                sem_errors++;
            }
        } else if((yyval.treeNode)->subtree1->type == 2){
            if((yyval.treeNode)->subtree2->type == 1){
                (yyval.treeNode)->type = (yyval.treeNode)->subtree1->type;
            }else if((yyval.treeNode)->subtree2->type == 2){
                (yyval.treeNode)->type = (yyval.treeNode)->subtree2->type;
            }else{
                printf("Type error in arithmetic operation with type %d and %d. [%d, %d]\n", (yyval.treeNode)->subtree1->type, (yyval.treeNode)->subtree2->type, (yyvsp[-1].lex).line, (yyvsp[-1].lex).col);
                sem_errors++;
            }
        } else{
            printf("Type error in arithmetic operation with type %d and %d. [%d, %d]\n", (yyval.treeNode)->subtree1->type, (yyval.treeNode)->subtree2->type, (yyvsp[-1].lex).line, (yyvsp[-1].lex).col);
            sem_errors++;
        }
    }
#line 2555 "src/sin_analyser.tab.c"
    break;

  case 59:
#line 540 "src/sin_analyser.y"
          { (yyval.treeNode) = (yyvsp[0].treeNode); }
#line 2561 "src/sin_analyser.tab.c"
    break;

  case 60:
#line 544 "src/sin_analyser.y"
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
                printf("Type error in arithmetic operation with type %d and %d. [%d, %d]\n", (yyval.treeNode)->subtree1->type, (yyval.treeNode)->subtree2->type, (yyvsp[-1].lex).line, (yyvsp[-1].lex).col);
                sem_errors++;
            }
        } else if((yyval.treeNode)->subtree1->type == 2){
            if((yyval.treeNode)->subtree2->type == 1){
                (yyval.treeNode)->type = (yyval.treeNode)->subtree1->type;
            }else if((yyval.treeNode)->subtree2->type == 2){
                (yyval.treeNode)->type = (yyval.treeNode)->subtree2->type;
            }else{
                printf("Type error in arithmetic operation with type %d and %d. [%d, %d]\n", (yyval.treeNode)->subtree1->type, (yyval.treeNode)->subtree2->type, (yyvsp[-1].lex).line, (yyvsp[-1].lex).col);
                sem_errors++;
            }
        } else{
            printf("Type error in arithmetic operation with type %d and %d. [%d, %d]\n", (yyval.treeNode)->subtree1->type, (yyval.treeNode)->subtree2->type, (yyvsp[-1].lex).line, (yyvsp[-1].lex).col);
            sem_errors++;
        }
    }
#line 2593 "src/sin_analyser.tab.c"
    break;

  case 61:
#line 572 "src/sin_analyser.y"
              {
        (yyval.treeNode) = newNode("NEGATIVE", 0);
        (yyval.treeNode)->subtree1 = (yyvsp[0].treeNode);
        if((yyval.treeNode)->subtree1->type != 1 && (yyval.treeNode)->subtree1->type != 2){
            printf("Type error in assigning negative ti type %d. [%d, %d]\n", (yyval.treeNode)->subtree1->type, (yyvsp[-1].lex).line, (yyvsp[-1].lex).col);
            sem_errors++;
        }else{
             (yyval.treeNode)->type = (yyval.treeNode)->subtree1->type;
        }
    }
#line 2608 "src/sin_analyser.tab.c"
    break;

  case 62:
#line 583 "src/sin_analyser.y"
        { (yyval.treeNode) = (yyvsp[0].treeNode); }
#line 2614 "src/sin_analyser.tab.c"
    break;

  case 63:
#line 587 "src/sin_analyser.y"
       { (yyval.treeNode) = (yyvsp[0].treeNode); }
#line 2620 "src/sin_analyser.tab.c"
    break;

  case 64:
#line 589 "src/sin_analyser.y"
              { (yyval.treeNode) = (yyvsp[0].treeNode); }
#line 2626 "src/sin_analyser.tab.c"
    break;

  case 65:
#line 591 "src/sin_analyser.y"
                    { (yyval.treeNode) = (yyvsp[-1].treeNode); }
#line 2632 "src/sin_analyser.tab.c"
    break;

  case 66:
#line 593 "src/sin_analyser.y"
        { (yyval.treeNode) = newNode((yyvsp[0].lex).id, 1); }
#line 2638 "src/sin_analyser.tab.c"
    break;

  case 67:
#line 595 "src/sin_analyser.y"
          { (yyval.treeNode) = newNode((yyvsp[0].lex).id, 2); }
#line 2644 "src/sin_analyser.tab.c"
    break;

  case 68:
#line 597 "src/sin_analyser.y"
        { (yyval.treeNode) = newNode("NIL", 3); }
#line 2650 "src/sin_analyser.tab.c"
    break;

  case 69:
#line 599 "src/sin_analyser.y"
            { (yyval.treeNode) = newNode((yyvsp[0].lex).id, 0); }
#line 2656 "src/sin_analyser.tab.c"
    break;

  case 70:
#line 603 "src/sin_analyser.y"
                         {
        if(!searchTable(table, (yyvsp[-3].lex).id, scope, 1, 1)) printf("Function not declared\n");
        else if(checkParams(table, (yyvsp[-3].lex).id) != args) printf("Function calls for different number of arguments\n");
        args = 0;
        (yyval.treeNode) = newNode("CALL", checkType(table, (yyvsp[-3].lex).id));
        (yyval.treeNode)->subtree2 = (yyvsp[-1].treeNode);
    }
#line 2668 "src/sin_analyser.tab.c"
    break;

  case 71:
#line 611 "src/sin_analyser.y"
             {
        if(!searchTable(table, (yyvsp[-2].lex).id, scope, 1, 1)) printf("Function not declared\n");
        else if(checkParams(table, (yyvsp[-2].lex).id) != args) printf("Function calls for different number of arguments\n");
        args = 0;
        (yyval.treeNode) = newNode("CALL", checkType(table, (yyvsp[-2].lex).id));
    }
#line 2679 "src/sin_analyser.tab.c"
    break;

  case 72:
#line 620 "src/sin_analyser.y"
       { 
        if(!searchTable(table, (yyvsp[0].lex).id, scope, 0, 0)) printf("Variable not declared\n");
        (yyval.treeNode) = newNode((yyvsp[0].lex).id, checkType(table, (yyvsp[0].lex).id)); 
    }
#line 2688 "src/sin_analyser.tab.c"
    break;

  case 73:
#line 627 "src/sin_analyser.y"
                            {
        args++;
        (yyval.treeNode) = newNode("PARAMS", 0);
        (yyval.treeNode)->subtree1 = (yyvsp[-2].treeNode);
        (yyval.treeNode)->subtree2 = (yyvsp[0].treeNode);
    }
#line 2699 "src/sin_analyser.tab.c"
    break;

  case 74:
#line 634 "src/sin_analyser.y"
       { 
        args++;
        (yyval.treeNode) = (yyvsp[0].treeNode); 
    }
#line 2708 "src/sin_analyser.tab.c"
    break;


#line 2712 "src/sin_analyser.tab.c"

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
#line 640 "src/sin_analyser.y"


int main(int argc, char **argv){
    printf("────────────────────────────────────────\n");
    printf("Syntax analysis in file '%s'", argv[1]);
    printf("\n────────────────────────────────────────\n");

    yyin = fopen(argv[1], "r");

    yyparse();

    printf("\n");
    if(!main_found){
        printf("Main not found");
        sem_errors++;
    }

    printf("\n");
    printf("Syntax analysis finished with %d semantic error, %d syntax errors and %d lexical errors.\n", sem_errors, sin_errors, lex_errors);
    
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
