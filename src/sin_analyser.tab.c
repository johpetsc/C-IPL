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
    extern int errors;
    extern FILE *yyin;

#line 84 "src/sin_analyser.tab.c"

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
    FOR = 264,
    RETURN = 265,
    OUT = 266,
    IN = 267,
    SS_OP = 268,
    MD_OP = 269,
    LLOG_OP = 270,
    RLOG_OP = 271,
    ELSE = 272,
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
#line 20 "src/sin_analyser.y"

    struct lexToken {
        char id[200];
        int line;
        int col;
    } lex;
    struct treeNode* treeNode;

#line 176 "src/sin_analyser.tab.c"

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
#define YYLAST   1594

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  31
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  32
/* YYNRULES -- Number of rules.  */
#define YYNRULES  71
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  235

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
       0,    75,    75,    79,    85,    89,    91,    95,   102,   110,
     116,   120,   125,   130,   134,   139,   144,   148,   154,   158,
     160,   162,   166,   168,   170,   174,   176,   178,   180,   182,
     184,   186,   190,   192,   196,   202,   209,   213,   221,   225,
     232,   240,   248,   255,   263,   267,   274,   281,   287,   291,
     296,   300,   306,   310,   316,   320,   326,   331,   335,   337,
     339,   341,   343,   345,   347,   349,   353,   359,   364,   368,
     372,   378
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 1
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "INT", "FLOAT", "TYPE", "ID", "LIST",
  "IF", "FOR", "RETURN", "OUT", "IN", "SS_OP", "MD_OP", "LLOG_OP",
  "RLOG_OP", "ELSE", "REL_OP", "ASS_OP", "LIST_FUNC", "NIL", "LLIST_OP",
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

#define YYPACT_NINF (-175)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-72)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      22,    56,    40,    18,    31,   130,   140,     6,    25,    60,
      34,  -175,   192,   229,    10,   120,   143,    62,    53,   161,
     187,   217,    82,  1253,    71,    75,   266,    52,   208,   263,
     440,     7,    12,  1303,    79,    84,   325,   325,   367,  1303,
     421,  1253,  1350,   107,   821,   848,   875,   114,   115,   902,
     929,   121,   122,   133,   139,   141,   529,   145,   154,   556,
     583,   610,   637,   664,   691,   718,  1365,  1253,   273,   142,
    1350,   956,   178,   179,  1350,   184,   745,   772,   799,    80,
     826,   182,   983,   498,   249,  1010,  1037,  1064,   325,   325,
     325,   325,  1303,  1303,  1303,    13,  1091,  1118,  1344,   185,
     188,  1404,   199,  1145,   853,   880,   907,   934,   961,   191,
     209,   210,   988,   294,   302,   279,  1278,   325,   222,   231,
    1015,   262,   483,  1042,   307,  1253,   178,  1172,   243,  1253,
    1199,    93,   347,  1410,  1416,  1422,  1283,  1350,  1350,  1428,
    1434,  1350,  1440,  1446,  1452,  1458,  1464,  1470,  1476,  1308,
     240,  1482,   254,   323,    15,    36,  1253,   524,   257,   551,
     578,   260,   278,   269,   301,  1488,  1494,  1500,  1350,  1350,
    1350,  1350,    27,   291,  1350,   605,   178,  1226,   632,   659,
    1328,   280,  1506,  1512,  1518,  1524,  1530,  1536,   327,   686,
    1542,   288,   713,  1548,   109,  1382,   298,   306,  1328,   290,
     293,   311,   312,   322,   328,   330,  1554,   331,   335,  1393,
    1560,  1278,   325,   336,   360,  1350,   184,   341,  1328,  1328,
     740,  1069,   342,  1566,   345,   349,   350,  1278,   178,   358,
     369,   767,   374,  1278,   794
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
       0,     0,     0,     0,     0
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -175,  -175,  -175,   384,  -175,  -175,     0,  -175,   -38,   -39,
    -114,   -32,  -174,  -107,   -99,   -94,    55,  -170,  -168,  -127,
      87,  -116,   -13,   253,   174,    95,   230,   246,    72,   305,
     -16,   162
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
       7,    73,   157,    82,     7,    85,   201,    81,    69,   159,
     203,    16,   204,    71,    20,    17,   173,   160,    11,   153,
      79,    79,   161,     1,   201,    68,   149,     2,   203,    96,
     204,    -2,     1,   153,    70,    13,     2,   175,    18,    72,
      15,   112,   174,    85,   201,   201,     9,    10,   203,   203,
     204,   204,    14,   205,   149,   187,   100,    85,   149,   102,
     109,   110,   111,   176,   207,   -68,   -68,   -68,    21,    22,
     -68,   205,    79,    79,    79,    79,    16,   122,    23,   113,
      17,   -13,   207,   -16,   158,   -13,   127,   -14,    26,   -11,
     130,   205,   205,   -58,   -58,   -58,    67,   157,   -58,   163,
     164,    79,   207,   207,   159,   124,    74,    95,    78,   -58,
     162,    75,   160,   157,   147,   213,   214,   161,   177,   157,
     159,   149,   149,    77,    77,   149,   159,    99,   160,    83,
      -4,    -4,    80,   161,   160,    -4,   -27,   144,    85,   161,
      -6,    -6,   147,    86,   -30,    -6,   101,   -15,   200,   -12,
      87,   -25,   149,   149,   149,   149,   113,    98,   149,    97,
     100,   151,   -32,   108,   209,   144,   217,   208,   -33,   144,
     -31,   -13,   220,   -13,   -28,    77,    77,    77,    77,   158,
     199,   128,   209,   -29,   150,   208,   225,   226,   231,    24,
     152,    25,    -3,    -3,   234,   158,    79,    -3,   199,   149,
     224,   158,   209,   209,   123,   208,   208,    92,   -39,   165,
     147,   -42,   162,   147,   117,   -10,   143,   -10,   199,   199,
     -40,   -61,   -61,   -61,   151,   151,   -61,   119,   167,    -5,
      -5,   191,   144,   166,    -5,   202,   144,   -61,   -43,   -41,
     147,   147,   147,   186,   143,   -11,   147,   -11,   143,    -8,
      -8,   -46,   147,   202,    -8,   151,   151,   151,   151,   -69,
     -45,   190,   105,   144,   144,   144,   144,   206,   153,   144,
     147,   129,   145,   202,   202,   144,   -62,   -62,   -62,    -7,
      -7,   -62,   -69,   232,    -7,   206,   178,   223,   146,   179,
     147,   147,   -62,   144,   -12,   142,   -12,   180,   -11,   221,
     145,    -9,   151,    -9,   145,   206,   206,   181,   189,   -12,
     144,   143,   143,   144,   144,   143,   146,   212,   -27,   106,
     146,   -40,   -71,   142,   -71,   215,    76,   142,    28,    29,
     120,   132,   121,   216,   188,   -70,   107,   -70,    36,   -30,
     -25,    37,   183,   143,   143,   143,    38,   148,   143,    40,
     -32,   -69,    42,   -69,   143,   210,   -33,   121,   -31,   -28,
     -69,   -69,   -69,   -29,   -11,   -69,   222,   145,   145,   -42,
     -12,   145,   143,   230,   -69,   148,   -69,   -43,   -41,   148,
     -63,   -63,   -63,   146,   146,   -63,   -46,   146,    12,   143,
     142,   142,   143,   143,   142,     0,   -63,   -45,   145,   184,
     145,   145,   233,     0,   145,     0,     0,     0,     0,     0,
     145,     0,     0,     0,   146,   146,   185,   146,     0,     0,
     146,   142,   142,   142,   142,     0,   146,   142,   145,     0,
       0,     0,     0,   142,   -64,   -64,   -64,     0,     0,   -64,
       0,     0,   148,   148,   146,   145,   148,     0,   145,   145,
     -64,   142,     0,   -69,   -69,   -69,     0,     0,   -69,   -69,
     -69,   146,     0,   -69,   146,   146,     0,   -69,   142,   -69,
       0,   142,   142,   148,   148,   148,   148,     0,     0,   148,
       0,     0,     0,     0,   -34,   148,   -34,   -34,   -34,   -34,
       0,   -34,   -34,   -34,   -34,   -34,   -34,     0,     0,   -34,
     125,     0,     0,   148,   -34,   -34,     0,   -34,   -34,   -34,
     -34,   -65,   -65,   -65,     0,     0,   -65,     0,     0,     0,
     148,     0,     0,   148,   148,   -21,   104,   -21,   -21,   -21,
     -21,     0,   -21,   -21,   -21,   -21,   -21,   -21,     0,     0,
     -21,   -21,   -65,   -65,   -65,   -21,   -21,   -65,   -21,   -21,
     -21,   -21,   -22,     0,   -22,   -22,   -22,   -22,   -26,   -22,
     -22,   -22,   -22,   -22,   -22,     0,     0,   -22,   -22,   -44,
     -44,    88,   -22,   -22,   -44,   -22,   -22,   -22,   -22,   -23,
       0,   -23,   -23,   -23,   -23,   -44,   -23,   -23,   -23,   -23,
     -23,   -23,     0,     0,   -23,   -23,   -48,   -48,   -48,   -23,
     -23,   -48,   -23,   -23,   -23,   -23,   -38,     0,   -38,   -38,
     -38,   -38,   -48,   -38,   -38,   -38,   -38,   -38,   -38,     0,
       0,   -38,   -38,   -50,   -50,   -50,   -38,   -38,    89,   -38,
     -38,   -38,   -38,   -19,     0,   -19,   -19,   -19,   -19,   -50,
     -19,   -19,   -19,   -19,   -19,   -19,     0,     0,   -19,   -19,
      90,   -52,   -52,   -19,   -19,   -52,   -19,   -19,   -19,   -19,
     -24,     0,   -24,   -24,   -24,   -24,   -52,   -24,   -24,   -24,
     -24,   -24,   -24,     0,     0,   -24,   -24,   -54,    91,   -54,
     -24,   -24,   -54,   -24,   -24,   -24,   -24,   -36,     0,   -36,
     -36,   -36,   -36,   -54,   -36,   -36,   -36,   -36,   -36,   -36,
       0,     0,   -36,   -36,   -57,   -57,   -57,   -36,   -36,   -57,
     -36,   -36,   -36,   -36,   -20,     0,   -20,   -20,   -20,   -20,
     -57,   -20,   -20,   -20,   -20,   -20,   -20,     0,     0,   -20,
     -20,   -59,   -59,   -59,   -20,   -20,   -59,   -20,   -20,   -20,
     -20,   -34,     0,   -34,   -34,   -34,   -34,   -59,   -34,   -34,
     -34,   -34,   -34,   -34,     0,     0,   -34,   227,   -68,   -68,
     -68,   -34,   -34,   -68,   -34,   -34,   -34,   -34,   -35,     0,
     -35,   -35,   -35,   -35,   -68,   -35,   -35,   -35,   -35,   -35,
     -35,     0,     0,   -35,   -35,   -65,   -65,   -65,   -35,   -35,
     -65,   -35,   -35,   -35,   -35,   -37,     0,   -37,   -37,   -37,
     -37,   -65,   -37,   -37,   -37,   -37,   -37,   -37,     0,     0,
     -37,   -37,   -56,   -56,   -56,   -37,   -37,   -56,   -37,   -37,
     -37,   -37,    27,     0,    28,    29,   131,    30,   -56,    31,
      32,    33,    34,    35,    36,     0,     0,    37,     0,   -49,
     -49,   -49,    38,    39,    89,    40,    41,    84,    42,   -18,
       0,   -18,   -18,   -18,   -18,   -49,   -18,   -18,   -18,   -18,
     -18,   -18,     0,     0,   -18,     0,   -60,   -60,   -60,   -18,
     -18,   -60,   -18,   -18,   -18,   -18,   -21,     0,   -21,   -21,
     -21,   -21,   -60,   -21,   -21,   -21,   -21,   -21,   -21,     0,
       0,   -21,     0,   -47,   -47,   -47,   -21,   -21,   -47,   -21,
     -21,   -21,   -21,   -22,     0,   -22,   -22,   -22,   -22,   -47,
     -22,   -22,   -22,   -22,   -22,   -22,     0,     0,   -22,     0,
      90,   -51,   -51,   -22,   -22,   -51,   -22,   -22,   -22,   -22,
     -23,     0,   -23,   -23,   -23,   -23,   -51,   -23,   -23,   -23,
     -23,   -23,   -23,     0,     0,   -23,     0,   -53,   -53,   -53,
     -23,   -23,   -53,   -23,   -23,   -23,   -23,   -38,     0,   -38,
     -38,   -38,   -38,   -53,   -38,   -38,   -38,   -38,   -38,   -38,
       0,     0,   -38,     0,   -55,   -55,   -55,   -38,   -38,   -55,
     -38,   -38,   -38,   -38,    27,     0,    28,    29,   131,    30,
     -55,    31,    32,    33,    34,    35,    36,     0,     0,    37,
       0,   -67,   -67,   -67,    38,    39,   -67,    40,    41,   103,
      42,   -17,     0,   -17,   -17,   -17,   -17,   -67,   -17,   -17,
     -17,   -17,   -17,   -17,     0,     0,   -17,     0,   -66,   -66,
     -66,   -17,   -17,   -66,   -17,   -17,   -17,   -17,   -19,     0,
     -19,   -19,   -19,   -19,   -66,   -19,   -19,   -19,   -19,   -19,
     -19,     0,     0,   -19,     0,   -65,   -65,   -65,   -19,   -19,
     -65,   -19,   -19,   -19,   -19,   -24,     0,   -24,   -24,   -24,
     -24,   126,   -24,   -24,   -24,   -24,   -24,   -24,     0,     0,
     -24,     0,   -65,   -65,   -65,   -24,   -24,   -65,   -24,   -24,
     -24,   -24,    27,     0,    28,    29,   131,    30,   228,    31,
      32,    33,    34,    35,    36,     0,     0,    37,     0,     0,
       0,     0,    38,    39,     0,    40,    41,   115,    42,   -36,
       0,   -36,   -36,   -36,   -36,     0,   -36,   -36,   -36,   -36,
     -36,   -36,     0,     0,   -36,     0,     0,     0,     0,   -36,
     -36,     0,   -36,   -36,   -36,   -36,   -20,     0,   -20,   -20,
     -20,   -20,     0,   -20,   -20,   -20,   -20,   -20,   -20,     0,
       0,   -20,     0,     0,     0,     0,   -20,   -20,     0,   -20,
     -20,   -20,   -20,   -35,     0,   -35,   -35,   -35,   -35,     0,
     -35,   -35,   -35,   -35,   -35,   -35,     0,     0,   -35,     0,
       0,     0,     0,   -35,   -35,     0,   -35,   -35,   -35,   -35,
     -37,     0,   -37,   -37,   -37,   -37,     0,   -37,   -37,   -37,
     -37,   -37,   -37,     0,     0,   -37,     0,     0,     0,     0,
     -37,   -37,     0,   -37,   -37,   -37,   -37,    27,     0,    28,
      29,   131,    30,     0,    31,    32,    33,    34,    35,    36,
       0,     0,    37,     0,     0,     0,     0,    38,    39,     0,
      40,    41,   192,    42,    27,     0,    28,    29,   131,    30,
       0,    31,    32,    33,    34,    35,    36,     0,     0,    37,
       0,     0,     0,     0,    38,    39,     0,    40,    41,    27,
      42,    28,    29,   131,    30,     0,   154,   155,    33,    34,
      35,    36,     0,     0,    37,     0,   -69,   -69,   -69,    38,
      39,   -69,    40,   156,    27,    42,    28,    29,   131,    30,
     -69,   -69,     0,     0,    34,    35,    36,     0,     0,    37,
       0,   -58,   -58,   -58,    38,    39,   -58,    40,     0,   193,
      42,   134,   135,   194,   195,   172,   -58,     0,     0,   196,
     197,   137,     0,     0,   138,     0,     0,     0,     0,   139,
     198,   133,   140,   134,   135,   141,   136,   -65,   -65,   -65,
       0,     0,   -65,   137,     0,     0,   138,     0,     0,     0,
       0,   139,   116,     0,   140,     0,     0,   141,   -58,   -58,
     -58,     0,     0,   -58,    92,    93,     0,     0,    94,     0,
       0,     0,    95,     0,   -58,   -69,   -69,   -69,     0,     0,
     -69,   -69,   -69,     0,     0,   -69,   -58,   -58,   -58,   -69,
     -69,   -58,   180,   218,     0,     0,   219,   -57,   -57,   -57,
     172,   -58,   -57,   -68,   -68,   -68,     0,     0,   -68,   -61,
     -61,   -61,   118,     0,   -61,   -62,   -62,   -62,   -68,     0,
     -62,   -63,   -63,   -63,   -61,     0,   -63,   -64,   -64,   -64,
     -62,     0,   -64,   -44,   -44,   168,   -63,     0,   -44,   -48,
     -48,   -48,   -64,     0,   -48,   -50,   -50,   -50,   -44,     0,
     169,   170,   -52,   -52,   -48,     0,   -52,   -54,   171,   -54,
     -50,     0,   -54,   -57,   -57,   -57,   -52,     0,   -57,   -59,
     -59,   -59,   -54,     0,   -59,   -65,   -65,   -65,   -57,     0,
     -65,   -56,   -56,   -56,   -59,     0,   -56,   -49,   -49,   -49,
     -65,     0,   169,   -65,   -65,   -65,   -56,     0,   -65,   -60,
     -60,   -60,   -49,     0,   -60,   -47,   -47,   -47,   182,     0,
     -47,   170,   -51,   -51,   -60,     0,   -51,   -53,   -53,   -53,
     -47,     0,   -53,   -55,   -55,   -55,   -51,     0,   -55,   -67,
     -67,   -67,   -53,     0,   -67,   -65,   -65,   -65,   -55,     0,
     -65,   -68,   -68,   -68,   -67,     0,   -68,   -65,   -65,   -65,
     211,     0,   -65,   -66,   -66,   -66,   -13,     0,   -66,   -57,
     -57,   -57,   -26,     0,   -57,     0,     0,     0,   -66,     0,
       0,     0,     0,     0,   229
};

static const yytype_int16 yycheck[] =
{
       0,    33,   116,    41,     4,    44,   180,    39,     1,   116,
     180,     1,   180,     1,    14,     5,     1,   116,     0,     6,
      36,    37,   116,     1,   198,    25,    42,     5,   198,    67,
     198,     0,     1,     6,    27,    29,     5,     1,    28,    27,
       6,    28,    27,    82,   218,   219,     6,     7,   218,   219,
     218,   219,    27,   180,    70,    28,    72,    96,    74,    75,
      92,    93,    94,    27,   180,    13,    14,    15,     6,     7,
      18,   198,    88,    89,    90,    91,     1,   116,    25,    95,
       5,    29,   198,    27,   116,    29,   125,    27,     6,    29,
     129,   218,   219,    13,    14,    15,    25,   211,    18,     6,
       7,   117,   218,   219,   211,   121,    27,    27,    36,    29,
     126,    27,   211,   227,    42,     6,     7,   211,   156,   233,
     227,   137,   138,    36,    37,   141,   233,    72,   227,    42,
       0,     1,    37,   227,   233,     5,    29,    42,   177,   233,
       0,     1,    70,    29,    29,     5,    74,    27,   180,    29,
      29,    29,   168,   169,   170,   171,   172,    70,   174,    17,
     176,    74,    29,    91,   180,    70,   198,   180,    29,    74,
      29,    28,   211,    30,    29,    88,    89,    90,    91,   211,
     180,   126,   198,    29,     6,   198,   218,   219,   227,    28,
       6,    30,     0,     1,   233,   227,   212,     5,   198,   215,
     216,   233,   218,   219,   117,   218,   219,    19,    29,   137,
     138,    29,   228,   141,    29,    28,    42,    30,   218,   219,
      29,    13,    14,    15,   137,   138,    18,    28,   141,     0,
       1,   176,   137,   138,     5,   180,   141,    29,    29,    29,
     168,   169,   170,   171,    70,    28,   174,    30,    74,     0,
       1,    29,   180,   198,     5,   168,   169,   170,   171,    19,
      29,   174,    88,   168,   169,   170,   171,   180,     6,   174,
     198,    28,    42,   218,   219,   180,    13,    14,    15,     0,
       1,    18,    28,   228,     5,   198,    29,   215,    42,    29,
     218,   219,    29,   198,    28,    42,    30,    19,    29,   212,
      70,    28,   215,    30,    74,   218,   219,     6,    17,    29,
     215,   137,   138,   218,   219,   141,    70,    29,    28,    89,
      74,    28,    28,    70,    30,    27,     1,    74,     3,     4,
      28,     6,    30,    27,   172,    28,    90,    30,    13,    28,
      28,    16,   168,   169,   170,   171,    21,    42,   174,    24,
      28,    28,    27,    30,   180,    28,    28,    30,    28,    28,
      13,    14,    15,    28,    28,    18,     6,   137,   138,    28,
      28,   141,   198,    28,    27,    70,    29,    28,    28,    74,
      13,    14,    15,   137,   138,    18,    28,   141,     4,   215,
     137,   138,   218,   219,   141,    -1,    29,    28,   168,   169,
     170,   171,    28,    -1,   174,    -1,    -1,    -1,    -1,    -1,
     180,    -1,    -1,    -1,   168,   169,   170,   171,    -1,    -1,
     174,   168,   169,   170,   171,    -1,   180,   174,   198,    -1,
      -1,    -1,    -1,   180,    13,    14,    15,    -1,    -1,    18,
      -1,    -1,   137,   138,   198,   215,   141,    -1,   218,   219,
      29,   198,    -1,    13,    14,    15,    -1,    -1,    18,    19,
      20,   215,    -1,    23,   218,   219,    -1,    27,   215,    29,
      -1,   218,   219,   168,   169,   170,   171,    -1,    -1,   174,
      -1,    -1,    -1,    -1,     1,   180,     3,     4,     5,     6,
      -1,     8,     9,    10,    11,    12,    13,    -1,    -1,    16,
      17,    -1,    -1,   198,    21,    22,    -1,    24,    25,    26,
      27,    13,    14,    15,    -1,    -1,    18,    -1,    -1,    -1,
     215,    -1,    -1,   218,   219,     1,    28,     3,     4,     5,
       6,    -1,     8,     9,    10,    11,    12,    13,    -1,    -1,
      16,    17,    13,    14,    15,    21,    22,    18,    24,    25,
      26,    27,     1,    -1,     3,     4,     5,     6,    29,     8,
       9,    10,    11,    12,    13,    -1,    -1,    16,    17,    13,
      14,    15,    21,    22,    18,    24,    25,    26,    27,     1,
      -1,     3,     4,     5,     6,    29,     8,     9,    10,    11,
      12,    13,    -1,    -1,    16,    17,    13,    14,    15,    21,
      22,    18,    24,    25,    26,    27,     1,    -1,     3,     4,
       5,     6,    29,     8,     9,    10,    11,    12,    13,    -1,
      -1,    16,    17,    13,    14,    15,    21,    22,    18,    24,
      25,    26,    27,     1,    -1,     3,     4,     5,     6,    29,
       8,     9,    10,    11,    12,    13,    -1,    -1,    16,    17,
      13,    14,    15,    21,    22,    18,    24,    25,    26,    27,
       1,    -1,     3,     4,     5,     6,    29,     8,     9,    10,
      11,    12,    13,    -1,    -1,    16,    17,    13,    14,    15,
      21,    22,    18,    24,    25,    26,    27,     1,    -1,     3,
       4,     5,     6,    29,     8,     9,    10,    11,    12,    13,
      -1,    -1,    16,    17,    13,    14,    15,    21,    22,    18,
      24,    25,    26,    27,     1,    -1,     3,     4,     5,     6,
      29,     8,     9,    10,    11,    12,    13,    -1,    -1,    16,
      17,    13,    14,    15,    21,    22,    18,    24,    25,    26,
      27,     1,    -1,     3,     4,     5,     6,    29,     8,     9,
      10,    11,    12,    13,    -1,    -1,    16,    17,    13,    14,
      15,    21,    22,    18,    24,    25,    26,    27,     1,    -1,
       3,     4,     5,     6,    29,     8,     9,    10,    11,    12,
      13,    -1,    -1,    16,    17,    13,    14,    15,    21,    22,
      18,    24,    25,    26,    27,     1,    -1,     3,     4,     5,
       6,    29,     8,     9,    10,    11,    12,    13,    -1,    -1,
      16,    17,    13,    14,    15,    21,    22,    18,    24,    25,
      26,    27,     1,    -1,     3,     4,     5,     6,    29,     8,
       9,    10,    11,    12,    13,    -1,    -1,    16,    -1,    13,
      14,    15,    21,    22,    18,    24,    25,    26,    27,     1,
      -1,     3,     4,     5,     6,    29,     8,     9,    10,    11,
      12,    13,    -1,    -1,    16,    -1,    13,    14,    15,    21,
      22,    18,    24,    25,    26,    27,     1,    -1,     3,     4,
       5,     6,    29,     8,     9,    10,    11,    12,    13,    -1,
      -1,    16,    -1,    13,    14,    15,    21,    22,    18,    24,
      25,    26,    27,     1,    -1,     3,     4,     5,     6,    29,
       8,     9,    10,    11,    12,    13,    -1,    -1,    16,    -1,
      13,    14,    15,    21,    22,    18,    24,    25,    26,    27,
       1,    -1,     3,     4,     5,     6,    29,     8,     9,    10,
      11,    12,    13,    -1,    -1,    16,    -1,    13,    14,    15,
      21,    22,    18,    24,    25,    26,    27,     1,    -1,     3,
       4,     5,     6,    29,     8,     9,    10,    11,    12,    13,
      -1,    -1,    16,    -1,    13,    14,    15,    21,    22,    18,
      24,    25,    26,    27,     1,    -1,     3,     4,     5,     6,
      29,     8,     9,    10,    11,    12,    13,    -1,    -1,    16,
      -1,    13,    14,    15,    21,    22,    18,    24,    25,    26,
      27,     1,    -1,     3,     4,     5,     6,    29,     8,     9,
      10,    11,    12,    13,    -1,    -1,    16,    -1,    13,    14,
      15,    21,    22,    18,    24,    25,    26,    27,     1,    -1,
       3,     4,     5,     6,    29,     8,     9,    10,    11,    12,
      13,    -1,    -1,    16,    -1,    13,    14,    15,    21,    22,
      18,    24,    25,    26,    27,     1,    -1,     3,     4,     5,
       6,    29,     8,     9,    10,    11,    12,    13,    -1,    -1,
      16,    -1,    13,    14,    15,    21,    22,    18,    24,    25,
      26,    27,     1,    -1,     3,     4,     5,     6,    29,     8,
       9,    10,    11,    12,    13,    -1,    -1,    16,    -1,    -1,
      -1,    -1,    21,    22,    -1,    24,    25,    26,    27,     1,
      -1,     3,     4,     5,     6,    -1,     8,     9,    10,    11,
      12,    13,    -1,    -1,    16,    -1,    -1,    -1,    -1,    21,
      22,    -1,    24,    25,    26,    27,     1,    -1,     3,     4,
       5,     6,    -1,     8,     9,    10,    11,    12,    13,    -1,
      -1,    16,    -1,    -1,    -1,    -1,    21,    22,    -1,    24,
      25,    26,    27,     1,    -1,     3,     4,     5,     6,    -1,
       8,     9,    10,    11,    12,    13,    -1,    -1,    16,    -1,
      -1,    -1,    -1,    21,    22,    -1,    24,    25,    26,    27,
       1,    -1,     3,     4,     5,     6,    -1,     8,     9,    10,
      11,    12,    13,    -1,    -1,    16,    -1,    -1,    -1,    -1,
      21,    22,    -1,    24,    25,    26,    27,     1,    -1,     3,
       4,     5,     6,    -1,     8,     9,    10,    11,    12,    13,
      -1,    -1,    16,    -1,    -1,    -1,    -1,    21,    22,    -1,
      24,    25,    26,    27,     1,    -1,     3,     4,     5,     6,
      -1,     8,     9,    10,    11,    12,    13,    -1,    -1,    16,
      -1,    -1,    -1,    -1,    21,    22,    -1,    24,    25,     1,
      27,     3,     4,     5,     6,    -1,     8,     9,    10,    11,
      12,    13,    -1,    -1,    16,    -1,    13,    14,    15,    21,
      22,    18,    24,    25,     1,    27,     3,     4,     5,     6,
      27,    28,    -1,    -1,    11,    12,    13,    -1,    -1,    16,
      -1,    13,    14,    15,    21,    22,    18,    24,    -1,     1,
      27,     3,     4,     5,     6,    27,    28,    -1,    -1,    11,
      12,    13,    -1,    -1,    16,    -1,    -1,    -1,    -1,    21,
      22,     1,    24,     3,     4,    27,     6,    13,    14,    15,
      -1,    -1,    18,    13,    -1,    -1,    16,    -1,    -1,    -1,
      -1,    21,    28,    -1,    24,    -1,    -1,    27,    13,    14,
      15,    -1,    -1,    18,    19,    20,    -1,    -1,    23,    -1,
      -1,    -1,    27,    -1,    29,    13,    14,    15,    -1,    -1,
      18,    19,    20,    -1,    -1,    23,    13,    14,    15,    27,
      28,    18,    19,    20,    -1,    -1,    23,    13,    14,    15,
      27,    28,    18,    13,    14,    15,    -1,    -1,    18,    13,
      14,    15,    28,    -1,    18,    13,    14,    15,    28,    -1,
      18,    13,    14,    15,    28,    -1,    18,    13,    14,    15,
      28,    -1,    18,    13,    14,    15,    28,    -1,    18,    13,
      14,    15,    28,    -1,    18,    13,    14,    15,    28,    -1,
      18,    13,    14,    15,    28,    -1,    18,    13,    14,    15,
      28,    -1,    18,    13,    14,    15,    28,    -1,    18,    13,
      14,    15,    28,    -1,    18,    13,    14,    15,    28,    -1,
      18,    13,    14,    15,    28,    -1,    18,    13,    14,    15,
      28,    -1,    18,    13,    14,    15,    28,    -1,    18,    13,
      14,    15,    28,    -1,    18,    13,    14,    15,    28,    -1,
      18,    13,    14,    15,    28,    -1,    18,    13,    14,    15,
      28,    -1,    18,    13,    14,    15,    28,    -1,    18,    13,
      14,    15,    28,    -1,    18,    13,    14,    15,    28,    -1,
      18,    13,    14,    15,    28,    -1,    18,    13,    14,    15,
      28,    -1,    18,    13,    14,    15,    28,    -1,    18,    13,
      14,    15,    28,    -1,    18,    -1,    -1,    -1,    28,    -1,
      -1,    -1,    -1,    -1,    28
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     1,     5,    32,    33,    34,    35,    37,    38,     6,
       7,     0,    34,    29,    27,     6,     1,     5,    28,    36,
      37,     6,     7,    25,    28,    30,     6,     1,     3,     4,
       6,     8,     9,    10,    11,    12,    13,    16,    21,    22,
      24,    25,    27,    37,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    25,    37,     1,
      27,     1,    27,    42,    27,    27,     1,    51,    59,    61,
      56,    42,    39,    51,    26,    40,    29,    29,    15,    18,
      13,    14,    19,    20,    23,    27,    39,    17,    51,    47,
      61,    59,    61,    26,    28,    55,    57,    58,    59,    42,
      42,    42,    28,    61,    62,    26,    28,    29,    28,    28,
      28,    30,    40,    51,    61,    17,    29,    40,    47,    28,
      40,     5,     6,     1,     3,     4,     6,    13,    16,    21,
      24,    27,    54,    55,    56,    57,    58,    59,    60,    61,
       6,    51,     6,     6,     8,     9,    25,    41,    42,    44,
      45,    46,    61,     6,     7,    59,    56,    51,    15,    18,
      13,    14,    27,     1,    27,     1,    27,    39,    29,    29,
      19,     6,    28,    55,    57,    58,    59,    28,    62,    17,
      51,    47,    26,     1,     5,     6,    11,    12,    22,    37,
      42,    43,    47,    48,    49,    50,    51,    52,    53,    61,
      28,    28,    29,     6,     7,    27,    27,    42,    20,    23,
      40,    51,     6,    59,    61,    42,    42,    17,    29,    28,
      28,    40,    47,    28,    40
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    31,    32,    33,    33,    34,    34,    35,    35,    36,
      36,    37,    37,    37,    38,    38,    38,    39,    39,    40,
      40,    40,    41,    41,    41,    42,    42,    42,    42,    42,
      42,    42,    43,    43,    44,    44,    44,    45,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    54,    55,
      55,    56,    56,    57,    57,    58,    58,    58,    59,    59,
      59,    59,    59,    59,    59,    59,    60,    60,    60,    61,
      62,    62
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     1,     2,     1,     7,     6,     3,
       1,     2,     3,     1,     2,     3,     1,     2,     1,     2,
       3,     1,     1,     1,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     5,     7,     3,     9,     2,     2,
       3,     3,     2,     3,     1,     4,     4,     3,     1,     2,
       1,     3,     1,     3,     1,     3,     2,     1,     1,     1,
       3,     1,     1,     1,     1,     1,     4,     3,     1,     1,
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
#line 75 "src/sin_analyser.y"
            { syntaxTree = (yyval.treeNode); }
#line 1765 "src/sin_analyser.tab.c"
    break;

  case 3:
#line 79 "src/sin_analyser.y"
                          {
        (yyval.treeNode) = newNode("PROGRAM");
        (yyval.treeNode)->subtree1 = (yyvsp[-1].treeNode);
        (yyval.treeNode)->subtree2 = (yyvsp[0].treeNode);
    }
#line 1775 "src/sin_analyser.tab.c"
    break;

  case 4:
#line 85 "src/sin_analyser.y"
                  { (yyval.treeNode) = (yyvsp[0].treeNode); }
#line 1781 "src/sin_analyser.tab.c"
    break;

  case 5:
#line 89 "src/sin_analyser.y"
               { (yyval.treeNode) = (yyvsp[-1].treeNode); }
#line 1787 "src/sin_analyser.tab.c"
    break;

  case 6:
#line 91 "src/sin_analyser.y"
              { (yyval.treeNode) = (yyvsp[0].treeNode); }
#line 1793 "src/sin_analyser.tab.c"
    break;

  case 7:
#line 95 "src/sin_analyser.y"
                                  {
        (yyval.treeNode) = newNode("FUNCTION");
        (yyval.treeNode)->subtree1 = (yyvsp[-6].treeNode);
        (yyval.treeNode)->subtree2 = (yyvsp[-4].treeNode);
        (yyval.treeNode)->subtree3 = (yyvsp[-1].treeNode);
    }
#line 1804 "src/sin_analyser.tab.c"
    break;

  case 8:
#line 102 "src/sin_analyser.y"
                           {
        (yyval.treeNode) = newNode("FUNCTION");
        (yyval.treeNode)->subtree1 = (yyvsp[-5].treeNode);
        (yyval.treeNode)->subtree2 = (yyvsp[-1].treeNode);
    }
#line 1814 "src/sin_analyser.tab.c"
    break;

  case 9:
#line 110 "src/sin_analyser.y"
                            {
        (yyval.treeNode) = newNode("PARAMS");
        (yyval.treeNode)->subtree1 = (yyvsp[-2].treeNode);
        (yyval.treeNode)->subtree2 = (yyvsp[0].treeNode);
    }
#line 1824 "src/sin_analyser.tab.c"
    break;

  case 10:
#line 116 "src/sin_analyser.y"
           { (yyval.treeNode) = (yyvsp[0].treeNode); }
#line 1830 "src/sin_analyser.tab.c"
    break;

  case 11:
#line 120 "src/sin_analyser.y"
            {
        newSymbol(table, (yyvsp[0].lex).id, (yyvsp[-1].lex).id, "VAR      ", (yyvsp[0].lex).line, (yyvsp[0].lex).col);      
        (yyval.treeNode) = newNode(strcat(strcat((yyvsp[-1].lex).id," "), (yyvsp[0].lex).id));
    }
#line 1839 "src/sin_analyser.tab.c"
    break;

  case 12:
#line 125 "src/sin_analyser.y"
                 {
        newSymbol(table, (yyvsp[0].lex).id, (yyvsp[-2].lex).id, "LIST VAR ",(yyvsp[0].lex).line, (yyvsp[0].lex).col);
        (yyval.treeNode) = newNode(strcat(strcat((yyvsp[-2].lex).id," list "), (yyvsp[0].lex).id));
    }
#line 1848 "src/sin_analyser.tab.c"
    break;

  case 13:
#line 130 "src/sin_analyser.y"
          { }
#line 1854 "src/sin_analyser.tab.c"
    break;

  case 14:
#line 134 "src/sin_analyser.y"
            {
        newSymbol(table, (yyvsp[0].lex).id, (yyvsp[-1].lex).id, "FUNC     ", (yyvsp[0].lex).line, (yyvsp[0].lex).col);
        (yyval.treeNode) = newNode(strcat(strcat((yyvsp[-1].lex).id," function "), (yyvsp[0].lex).id));
    }
#line 1863 "src/sin_analyser.tab.c"
    break;

  case 15:
#line 139 "src/sin_analyser.y"
                 {
        newSymbol(table, (yyvsp[-1].lex).id, (yyvsp[-2].lex).id, "LIST FUNC", (yyvsp[-1].lex).line, (yyvsp[-1].lex).col);
        (yyval.treeNode) = newNode(strcat(strcat((yyvsp[-2].lex).id," function list "), (yyvsp[0].lex).id));
    }
#line 1872 "src/sin_analyser.tab.c"
    break;

  case 16:
#line 144 "src/sin_analyser.y"
          { }
#line 1878 "src/sin_analyser.tab.c"
    break;

  case 17:
#line 148 "src/sin_analyser.y"
                    {
        (yyval.treeNode) = newNode("BLOCK");
        (yyval.treeNode)->subtree1 = (yyvsp[-1].treeNode);
        (yyval.treeNode)->subtree2 = (yyvsp[0].treeNode);
    }
#line 1888 "src/sin_analyser.tab.c"
    break;

  case 18:
#line 154 "src/sin_analyser.y"
              { (yyval.treeNode) = (yyvsp[0].treeNode); }
#line 1894 "src/sin_analyser.tab.c"
    break;

  case 19:
#line 158 "src/sin_analyser.y"
             { (yyval.treeNode) = (yyvsp[-1].treeNode); }
#line 1900 "src/sin_analyser.tab.c"
    break;

  case 20:
#line 160 "src/sin_analyser.y"
                { (yyval.treeNode) = (yyvsp[-1].treeNode); }
#line 1906 "src/sin_analyser.tab.c"
    break;

  case 21:
#line 162 "src/sin_analyser.y"
             { (yyval.treeNode) = (yyvsp[0].treeNode); }
#line 1912 "src/sin_analyser.tab.c"
    break;

  case 22:
#line 166 "src/sin_analyser.y"
            { (yyval.treeNode) = (yyvsp[0].treeNode); }
#line 1918 "src/sin_analyser.tab.c"
    break;

  case 23:
#line 168 "src/sin_analyser.y"
        { (yyval.treeNode) = (yyvsp[0].treeNode); }
#line 1924 "src/sin_analyser.tab.c"
    break;

  case 24:
#line 170 "src/sin_analyser.y"
               { (yyval.treeNode) = (yyvsp[-1].treeNode); }
#line 1930 "src/sin_analyser.tab.c"
    break;

  case 25:
#line 174 "src/sin_analyser.y"
           { (yyval.treeNode) = (yyvsp[0].treeNode); }
#line 1936 "src/sin_analyser.tab.c"
    break;

  case 26:
#line 176 "src/sin_analyser.y"
              { (yyval.treeNode) = (yyvsp[0].treeNode); }
#line 1942 "src/sin_analyser.tab.c"
    break;

  case 27:
#line 178 "src/sin_analyser.y"
           { (yyval.treeNode) = (yyvsp[0].treeNode); }
#line 1948 "src/sin_analyser.tab.c"
    break;

  case 28:
#line 180 "src/sin_analyser.y"
          { (yyval.treeNode) = (yyvsp[0].treeNode); }
#line 1954 "src/sin_analyser.tab.c"
    break;

  case 29:
#line 182 "src/sin_analyser.y"
           { (yyval.treeNode) = (yyvsp[0].treeNode); }
#line 1960 "src/sin_analyser.tab.c"
    break;

  case 30:
#line 184 "src/sin_analyser.y"
            { (yyval.treeNode) = (yyvsp[0].treeNode); }
#line 1966 "src/sin_analyser.tab.c"
    break;

  case 31:
#line 186 "src/sin_analyser.y"
              { (yyval.treeNode) = (yyvsp[0].treeNode); }
#line 1972 "src/sin_analyser.tab.c"
    break;

  case 32:
#line 190 "src/sin_analyser.y"
             { (yyval.treeNode) = (yyvsp[0].treeNode); }
#line 1978 "src/sin_analyser.tab.c"
    break;

  case 33:
#line 192 "src/sin_analyser.y"
              { (yyval.treeNode) = (yyvsp[0].treeNode); }
#line 1984 "src/sin_analyser.tab.c"
    break;

  case 34:
#line 196 "src/sin_analyser.y"
                                            {
        (yyval.treeNode) = newNode("IF");
        (yyval.treeNode)->subtree1 = (yyvsp[-2].treeNode);
        (yyval.treeNode)->subtree2 = (yyvsp[0].treeNode);
    }
#line 1994 "src/sin_analyser.tab.c"
    break;

  case 35:
#line 202 "src/sin_analyser.y"
                                                {
        (yyval.treeNode) = newNode("IF ELSE");
        (yyval.treeNode)->subtree1 = (yyvsp[-4].treeNode);
        (yyval.treeNode)->subtree2 = (yyvsp[-2].treeNode);
        (yyval.treeNode)->subtree3 = (yyvsp[0].treeNode);
    }
#line 2005 "src/sin_analyser.tab.c"
    break;

  case 36:
#line 209 "src/sin_analyser.y"
                  { }
#line 2011 "src/sin_analyser.tab.c"
    break;

  case 37:
#line 213 "src/sin_analyser.y"
                                                        {
        (yyval.treeNode) = newNode("FOR");
        (yyval.treeNode)->subtree1 = (yyvsp[-6].treeNode);
        (yyval.treeNode)->subtree2 = (yyvsp[-4].treeNode);
        (yyval.treeNode)->subtree3 = (yyvsp[-2].treeNode);
        (yyval.treeNode)->subtree4 = (yyvsp[0].treeNode);
    }
#line 2023 "src/sin_analyser.tab.c"
    break;

  case 38:
#line 221 "src/sin_analyser.y"
               {  }
#line 2029 "src/sin_analyser.tab.c"
    break;

  case 39:
#line 225 "src/sin_analyser.y"
                {
        (yyval.treeNode) = newNode("RETURN");
        (yyval.treeNode)->subtree1 = (yyvsp[0].treeNode);
    }
#line 2038 "src/sin_analyser.tab.c"
    break;

  case 40:
#line 232 "src/sin_analyser.y"
                   {
        (yyval.treeNode) = newNode("ASSIGN");
        (yyval.treeNode)->subtree1 = (yyvsp[-2].treeNode);
        (yyval.treeNode)->subtree2 = (yyvsp[0].treeNode);
    }
#line 2048 "src/sin_analyser.tab.c"
    break;

  case 41:
#line 240 "src/sin_analyser.y"
                     {
        (yyval.treeNode) = newNode("LIST OP");
        (yyval.treeNode)->subtree1 = (yyvsp[-2].treeNode);
        (yyval.treeNode)->subtree2 = (yyvsp[0].treeNode);
    }
#line 2058 "src/sin_analyser.tab.c"
    break;

  case 42:
#line 248 "src/sin_analyser.y"
                  {
        (yyval.treeNode) = newNode("LIST OP");
        (yyval.treeNode)->subtree1 = (yyvsp[0].treeNode);
    }
#line 2067 "src/sin_analyser.tab.c"
    break;

  case 43:
#line 255 "src/sin_analyser.y"
                      {
        (yyval.treeNode) = newNode("LIST FUNC");
        (yyval.treeNode)->subtree1 = (yyvsp[-2].treeNode);
        (yyval.treeNode)->subtree2 = (yyvsp[0].treeNode);
    }
#line 2077 "src/sin_analyser.tab.c"
    break;

  case 44:
#line 263 "src/sin_analyser.y"
           { (yyval.treeNode) = (yyvsp[0].treeNode); }
#line 2083 "src/sin_analyser.tab.c"
    break;

  case 45:
#line 267 "src/sin_analyser.y"
                {
        (yyval.treeNode) = newNode("IN");
        (yyval.treeNode)->subtree1 = (yyvsp[-1].treeNode);
    }
#line 2092 "src/sin_analyser.tab.c"
    break;

  case 46:
#line 274 "src/sin_analyser.y"
                  {
        (yyval.treeNode) = newNode("OUT");
        (yyval.treeNode)->subtree1 = (yyvsp[-1].treeNode);
    }
#line 2101 "src/sin_analyser.tab.c"
    break;

  case 47:
#line 281 "src/sin_analyser.y"
                           {
        (yyval.treeNode) = newNode("LOG OP");
        (yyval.treeNode)->subtree1 = (yyvsp[-2].treeNode);
        (yyval.treeNode)->subtree2 = (yyvsp[0].treeNode);
    }
#line 2111 "src/sin_analyser.tab.c"
    break;

  case 48:
#line 287 "src/sin_analyser.y"
            { (yyval.treeNode) = (yyvsp[0].treeNode); }
#line 2117 "src/sin_analyser.tab.c"
    break;

  case 49:
#line 291 "src/sin_analyser.y"
                   {
        (yyval.treeNode) = newNode("LOG OP");
        (yyval.treeNode)->subtree1 = (yyvsp[0].treeNode);
    }
#line 2126 "src/sin_analyser.tab.c"
    break;

  case 50:
#line 296 "src/sin_analyser.y"
           { (yyval.treeNode) = (yyvsp[0].treeNode); }
#line 2132 "src/sin_analyser.tab.c"
    break;

  case 51:
#line 300 "src/sin_analyser.y"
                         {
        (yyval.treeNode) = newNode("REL OP");
        (yyval.treeNode)->subtree1 = (yyvsp[-2].treeNode);
        (yyval.treeNode)->subtree2 = (yyvsp[0].treeNode);
    }
#line 2142 "src/sin_analyser.tab.c"
    break;

  case 52:
#line 306 "src/sin_analyser.y"
           { (yyval.treeNode) = (yyvsp[0].treeNode); }
#line 2148 "src/sin_analyser.tab.c"
    break;

  case 53:
#line 310 "src/sin_analyser.y"
                       {
        (yyval.treeNode) = newNode("ARI OP");
        (yyval.treeNode)->subtree1 = (yyvsp[-2].treeNode);
        (yyval.treeNode)->subtree2 = (yyvsp[0].treeNode);
    }
#line 2158 "src/sin_analyser.tab.c"
    break;

  case 54:
#line 316 "src/sin_analyser.y"
          { (yyval.treeNode) = (yyvsp[0].treeNode); }
#line 2164 "src/sin_analyser.tab.c"
    break;

  case 55:
#line 320 "src/sin_analyser.y"
                    {
        (yyval.treeNode) = newNode("ARI OP");
        (yyval.treeNode)->subtree1 = (yyvsp[-2].treeNode);
        (yyval.treeNode)->subtree2 = (yyvsp[0].treeNode);
    }
#line 2174 "src/sin_analyser.tab.c"
    break;

  case 56:
#line 326 "src/sin_analyser.y"
              {
        (yyval.treeNode) = newNode("NEGATIVE");
        (yyval.treeNode)->subtree1 = (yyvsp[0].treeNode);
    }
#line 2183 "src/sin_analyser.tab.c"
    break;

  case 57:
#line 331 "src/sin_analyser.y"
        { (yyval.treeNode) = (yyvsp[0].treeNode); }
#line 2189 "src/sin_analyser.tab.c"
    break;

  case 58:
#line 335 "src/sin_analyser.y"
       { (yyval.treeNode) = (yyvsp[0].treeNode); }
#line 2195 "src/sin_analyser.tab.c"
    break;

  case 59:
#line 337 "src/sin_analyser.y"
              { (yyval.treeNode) = (yyvsp[0].treeNode); }
#line 2201 "src/sin_analyser.tab.c"
    break;

  case 60:
#line 339 "src/sin_analyser.y"
                    { (yyval.treeNode) = (yyvsp[-1].treeNode); }
#line 2207 "src/sin_analyser.tab.c"
    break;

  case 61:
#line 341 "src/sin_analyser.y"
        { (yyval.treeNode) = newNode((yyvsp[0].lex).id); }
#line 2213 "src/sin_analyser.tab.c"
    break;

  case 62:
#line 343 "src/sin_analyser.y"
          { (yyval.treeNode) = newNode((yyvsp[0].lex).id); }
#line 2219 "src/sin_analyser.tab.c"
    break;

  case 63:
#line 345 "src/sin_analyser.y"
        { (yyval.treeNode) = newNode("NIL"); }
#line 2225 "src/sin_analyser.tab.c"
    break;

  case 64:
#line 347 "src/sin_analyser.y"
            { (yyval.treeNode) = newNode((yyvsp[0].lex).id); }
#line 2231 "src/sin_analyser.tab.c"
    break;

  case 65:
#line 349 "src/sin_analyser.y"
              { (yyval.treeNode) = (yyvsp[0].treeNode); }
#line 2237 "src/sin_analyser.tab.c"
    break;

  case 66:
#line 353 "src/sin_analyser.y"
                         {
        (yyval.treeNode) = newNode("CALL");
        (yyval.treeNode)->subtree1 = (yyvsp[-3].treeNode);
        (yyval.treeNode)->subtree2 = (yyvsp[-1].treeNode);
    }
#line 2247 "src/sin_analyser.tab.c"
    break;

  case 67:
#line 359 "src/sin_analyser.y"
             {
        (yyval.treeNode) = newNode("CALL");
        (yyval.treeNode)->subtree2 = (yyvsp[-2].treeNode);
    }
#line 2256 "src/sin_analyser.tab.c"
    break;

  case 68:
#line 364 "src/sin_analyser.y"
          { }
#line 2262 "src/sin_analyser.tab.c"
    break;

  case 69:
#line 368 "src/sin_analyser.y"
       { (yyval.treeNode) = newNode((yyvsp[0].lex).id); }
#line 2268 "src/sin_analyser.tab.c"
    break;

  case 70:
#line 372 "src/sin_analyser.y"
                            {
        (yyval.treeNode) = newNode("PARAMS");
        (yyval.treeNode)->subtree1 = (yyvsp[-2].treeNode);
        (yyval.treeNode)->subtree2 = (yyvsp[0].treeNode);
    }
#line 2278 "src/sin_analyser.tab.c"
    break;

  case 71:
#line 378 "src/sin_analyser.y"
       { (yyval.treeNode) = (yyvsp[0].treeNode); }
#line 2284 "src/sin_analyser.tab.c"
    break;


#line 2288 "src/sin_analyser.tab.c"

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
    printf("Syntax analysis finished with %d errors.\n", errors);
    
    if(!errors){
        showTree(syntaxTree, 0);
    }

    showTable(table);
    destroyTree();

    fclose(yyin);
    yylex_destroy();

    return 0;
}

extern void yyerror(const char* error) {
    printf("\n%s [%d, %d]\n", error, line, col);
    errors++;
}
