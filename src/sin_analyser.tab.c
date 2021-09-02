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
#define YYFINAL  10
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1505

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  31
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  32
/* YYNRULES -- Number of rules.  */
#define YYNRULES  66
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  223

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
     116,   120,   125,   132,   137,   144,   150,   154,   156,   158,
     162,   164,   166,   170,   172,   174,   176,   178,   180,   182,
     186,   188,   192,   198,   207,   217,   224,   232,   240,   247,
     255,   259,   266,   273,   279,   283,   288,   292,   298,   302,
     308,   312,   318,   323,   327,   329,   331,   333,   335,   337,
     339,   341,   345,   351,   358,   362,   368
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

#define YYPACT_NINF (-167)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-67)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
       9,    73,    18,     7,    25,    32,    -5,     8,    59,    36,
    -167,    56,    57,     1,    84,    83,    13,   115,   119,   126,
      39,  1098,    24,    65,   127,    78,   123,   309,    47,    68,
     263,    71,    85,    81,    81,   159,   263,   339,  1098,  1152,
      54,   461,   773,   798,    91,    97,   823,   848,   106,   136,
     139,   147,   151,   495,   176,   184,  1128,  1184,  1190,  1196,
    1202,  1208,  1214,  1167,  1098,   161,  1152,   196,   203,  1152,
     202,  1220,  1226,   229,  1232,   210,   873,   283,    66,   898,
     923,   948,    81,    81,    81,    81,   263,   263,   263,    -1,
     973,  1321,   217,   110,  1327,   197,   998,  1238,  1244,  1250,
    1256,  1262,   220,   226,   228,  1268,   162,   173,    72,  1123,
      81,   230,   242,  1274,   267,   523,  1280,   181,  1098,   196,
    1023,   249,  1098,  1048,   155,   419,  1333,  1339,  1304,  1152,
    1152,  1345,  1351,  1152,  1357,  1363,  1369,  1375,  1381,  1387,
    1393,  1310,   259,  1399,   252,   186,   254,   255,  1098,   548,
     260,   573,   598,   262,   269,   264,   286,  1405,  1411,  1417,
    1152,  1152,  1152,  1152,    15,  1152,   196,  1073,   623,   648,
    1148,   265,  1423,  1429,  1435,  1441,  1447,  1453,   187,  1459,
     266,   673,   246,   208,   277,   278,  1148,   289,   291,   293,
     297,   302,   305,   306,  1465,   307,   315,  1293,  1471,  1123,
      81,   323,   314,  1152,   202,   328,  1148,  1148,   698,  1286,
     331,  1477,   332,   341,   342,  1123,   196,   344,   347,   723,
     350,  1123,   748
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       1,     0,     0,     0,     0,     0,     0,     0,     0,     0,
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
    -167,  -167,  -167,   376,  -167,  -167,     0,  -167,   -16,   -40,
    -100,   -28,  -166,   -93,   -90,   -75,   -56,  -160,  -155,  -153,
     100,  -142,  -131,   298,   244,   185,   233,   292,   179,   360,
      34,   216
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     2,     3,     4,     5,    17,    40,     7,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,   107
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
       6,    79,    68,     6,   189,   145,    15,    -2,    75,   149,
     191,    92,     1,    18,     1,   192,   151,   193,    10,   152,
     189,   145,    76,    65,    12,    -4,   191,   105,   195,    16,
      -4,   192,    -6,   193,   153,    13,    79,    -6,    21,   196,
     189,   189,    14,   177,   195,    24,   191,   191,    90,    64,
      79,   192,   192,   193,   193,   196,    -3,    -5,   102,   103,
     104,    -3,    -5,   121,   195,   195,    -8,    73,    73,   115,
      15,    -8,    -7,   141,    66,   196,   196,    -7,   120,     8,
       9,   150,   123,   -25,    25,    26,   -13,   125,   -11,    19,
      20,   -57,   -57,   -57,    33,    67,   -57,    34,    69,   149,
     141,    93,    35,   141,    95,    37,   151,   -57,    39,   152,
     180,   -14,    70,   -12,   190,   149,    73,    73,    73,    73,
      80,   149,   151,   106,   153,   152,   -28,    79,   151,    86,
     190,   152,   167,    71,    71,    81,   -58,   -58,   -58,    77,
     153,   -58,   188,    22,    73,    23,   153,   -10,   117,   -10,
     190,   190,   -58,   154,   -11,   -12,   -11,   -12,   205,   208,
     220,   155,   156,   141,   141,   -23,    91,   141,   -30,   143,
     187,   150,   -59,   -59,   -59,   219,   -31,   -59,   213,   214,
     -29,   222,    71,    71,    71,    71,   187,   150,   -59,    -9,
     -66,    -9,   -66,   150,   141,   141,   141,   141,   106,   141,
      93,   113,   142,   114,   197,   -26,   187,   187,   144,   -65,
     116,   -65,    72,   -27,   -64,   198,   -64,   114,   139,    74,
     197,   -64,   -64,   -64,   136,   112,   -64,   -64,   -64,   143,
     143,   -64,   -35,   159,    73,   -64,   -64,   141,   212,   -38,
     197,   197,   -54,   -54,   -54,   139,   110,   -54,    94,   -36,
     154,   136,   201,   202,   136,   -39,    89,   -37,   -54,   -42,
     143,   143,   143,   143,   101,   179,    25,    26,   124,    27,
     194,   -41,   137,   145,    31,    32,    33,   122,   -64,    34,
     -64,   165,   166,   135,    35,    36,   194,    37,   170,   168,
      39,   169,   171,   -11,   -12,   200,   -61,   -61,   -61,   137,
     209,   -61,   137,   143,   203,   204,   194,   194,   157,   139,
     135,    97,   139,   135,   136,   158,    99,   -25,   136,   -36,
     210,   -28,   -64,   -64,   -64,   -23,    98,   -64,   -64,   -64,
     -30,   138,   -64,   -31,   -29,   -26,   -64,   134,   -64,   139,
     139,   139,   176,   -27,   139,   136,   136,   136,   136,   139,
     136,   -11,   -60,   -60,   -60,   136,   -38,   -60,   138,   -12,
     218,   138,   137,   137,   134,   139,   137,   134,   -60,   -39,
     -37,   136,   -42,   135,   135,   -41,   100,   135,   221,    11,
     178,     0,   211,     0,     0,   139,   139,     0,   136,     0,
       0,   136,   136,   137,   174,   137,   137,     0,   137,   140,
       0,     0,     0,   137,   173,   135,   135,   135,     0,   135,
       0,     0,     0,     0,   135,     0,     0,     0,     0,   137,
       0,   138,   138,     0,     0,   138,   140,   134,   134,   140,
     135,   134,   -64,   -64,   -64,     0,   137,   -64,     0,   137,
     137,     0,     0,     0,     0,     0,   -64,   135,   -64,     0,
     135,   135,   138,   138,   175,   138,     0,   138,   134,   134,
     134,   134,   138,   134,    25,    26,   124,    27,   134,    28,
      29,    30,    31,    32,    33,     0,     0,    34,   138,     0,
       0,     0,    35,    36,   134,    37,    38,    78,    39,   140,
     140,     0,     0,   140,     0,   138,     0,     0,   138,   138,
       0,   134,     0,     0,   134,   134,     0,     0,   -61,   -61,
     -61,     0,     0,   -61,     0,     0,     0,     0,     0,     0,
     140,   140,   140,   140,   -24,   140,   -32,   -32,   -32,   -32,
     140,   -32,   -32,   -32,   -32,   -32,   -32,     0,     0,   -32,
     118,     0,     0,     0,   -32,   -32,   140,   -32,   -32,   -32,
     -32,   -19,   -19,   -19,   -19,     0,   -19,   -19,   -19,   -19,
     -19,   -19,     0,   140,   -19,   -19,   140,   140,     0,   -19,
     -19,     0,   -19,   -19,   -19,   -19,   -20,   -20,   -20,   -20,
       0,   -20,   -20,   -20,   -20,   -20,   -20,     0,     0,   -20,
     -20,     0,     0,     0,   -20,   -20,     0,   -20,   -20,   -20,
     -20,   -21,   -21,   -21,   -21,     0,   -21,   -21,   -21,   -21,
     -21,   -21,     0,     0,   -21,   -21,     0,     0,     0,   -21,
     -21,     0,   -21,   -21,   -21,   -21,   -17,   -17,   -17,   -17,
       0,   -17,   -17,   -17,   -17,   -17,   -17,     0,     0,   -17,
     -17,     0,     0,     0,   -17,   -17,     0,   -17,   -17,   -17,
     -17,   -22,   -22,   -22,   -22,     0,   -22,   -22,   -22,   -22,
     -22,   -22,     0,     0,   -22,   -22,     0,     0,     0,   -22,
     -22,     0,   -22,   -22,   -22,   -22,   -18,   -18,   -18,   -18,
       0,   -18,   -18,   -18,   -18,   -18,   -18,     0,     0,   -18,
     -18,     0,     0,     0,   -18,   -18,     0,   -18,   -18,   -18,
     -18,   -32,   -32,   -32,   -32,     0,   -32,   -32,   -32,   -32,
     -32,   -32,     0,     0,   -32,   215,     0,     0,     0,   -32,
     -32,     0,   -32,   -32,   -32,   -32,   -33,   -33,   -33,   -33,
       0,   -33,   -33,   -33,   -33,   -33,   -33,     0,     0,   -33,
     -33,     0,     0,     0,   -33,   -33,     0,   -33,   -33,   -33,
     -33,   -34,   -34,   -34,   -34,     0,   -34,   -34,   -34,   -34,
     -34,   -34,     0,     0,   -34,   -34,     0,     0,     0,   -34,
     -34,     0,   -34,   -34,   -34,   -34,   -16,   -16,   -16,   -16,
       0,   -16,   -16,   -16,   -16,   -16,   -16,     0,     0,   -16,
       0,     0,     0,     0,   -16,   -16,     0,   -16,   -16,   -16,
     -16,   -19,   -19,   -19,   -19,     0,   -19,   -19,   -19,   -19,
     -19,   -19,     0,     0,   -19,     0,     0,     0,     0,   -19,
     -19,     0,   -19,   -19,   -19,   -19,   -20,   -20,   -20,   -20,
       0,   -20,   -20,   -20,   -20,   -20,   -20,     0,     0,   -20,
       0,     0,     0,     0,   -20,   -20,     0,   -20,   -20,   -20,
     -20,   -21,   -21,   -21,   -21,     0,   -21,   -21,   -21,   -21,
     -21,   -21,     0,     0,   -21,     0,     0,     0,     0,   -21,
     -21,     0,   -21,   -21,   -21,   -21,    25,    26,   124,    27,
       0,    28,    29,    30,    31,    32,    33,     0,     0,    34,
       0,     0,     0,     0,    35,    36,     0,    37,    38,    96,
      39,   -15,   -15,   -15,   -15,     0,   -15,   -15,   -15,   -15,
     -15,   -15,     0,     0,   -15,     0,     0,     0,     0,   -15,
     -15,     0,   -15,   -15,   -15,   -15,   -17,   -17,   -17,   -17,
       0,   -17,   -17,   -17,   -17,   -17,   -17,     0,     0,   -17,
       0,     0,     0,     0,   -17,   -17,     0,   -17,   -17,   -17,
     -17,   -22,   -22,   -22,   -22,     0,   -22,   -22,   -22,   -22,
     -22,   -22,     0,     0,   -22,     0,     0,     0,     0,   -22,
     -22,     0,   -22,   -22,   -22,   -22,    25,    26,   124,    27,
       0,    28,    29,    30,    31,    32,    33,     0,     0,    34,
       0,     0,     0,     0,    35,    36,     0,    37,    38,   108,
      39,   -18,   -18,   -18,   -18,     0,   -18,   -18,   -18,   -18,
     -18,   -18,     0,     0,   -18,     0,     0,     0,     0,   -18,
     -18,     0,   -18,   -18,   -18,   -18,   -33,   -33,   -33,   -33,
       0,   -33,   -33,   -33,   -33,   -33,   -33,     0,     0,   -33,
       0,     0,     0,     0,   -33,   -33,     0,   -33,   -33,   -33,
     -33,   -34,   -34,   -34,   -34,     0,   -34,   -34,   -34,   -34,
     -34,   -34,     0,     0,   -34,     0,     0,     0,     0,   -34,
     -34,     0,   -34,   -34,   -34,   -34,    25,    26,   124,    27,
       0,    28,    29,    30,    31,    32,    33,     0,     0,    34,
       0,     0,     0,     0,    35,    36,     0,    37,    38,   181,
      39,    25,    26,   124,    27,     0,    28,    29,    30,    31,
      32,    33,     0,     0,    34,     0,     0,     0,     0,    35,
      36,     0,    37,    38,     0,    39,    25,    26,   124,    27,
       0,   146,   147,    30,    31,    32,    33,     0,     0,    34,
       0,   -40,   -40,    82,    35,    36,   -40,    37,   148,     0,
      39,   126,   127,   182,   183,   126,   127,   -40,   128,   184,
     185,   129,     0,     0,   130,   129,     0,     0,   130,   131,
     186,     0,   132,   131,     0,   133,   132,     0,     0,   133,
     -54,   -54,   -54,     0,     0,   -54,    86,    87,     0,     0,
      88,     0,     0,     0,    89,     0,   -54,   -44,   -44,   -44,
       0,     0,   -44,   -46,   -46,   -46,     0,     0,    83,    84,
     -48,   -48,     0,   -44,   -48,   -50,    85,   -50,     0,   -46,
     -50,   -53,   -53,   -53,     0,   -48,   -53,   -55,   -55,   -55,
       0,   -50,   -55,   -61,   -61,   -61,     0,   -53,   -61,   -52,
     -52,   -52,     0,   -55,   -52,   -45,   -45,   -45,     0,   -61,
      83,   -56,   -56,   -56,     0,   -52,   -56,   -43,   -43,   -43,
       0,   -45,   -43,    84,   -47,   -47,     0,   -56,   -47,   -49,
     -49,   -49,     0,   -43,   -49,   -51,   -51,   -51,     0,   -47,
     -51,   -63,   -63,   -63,     0,   -49,   -63,   -62,   -62,   -62,
       0,   -51,   -62,   -61,   -61,   -61,     0,   -63,   -61,   -61,
     -61,   -61,     0,   -62,   -61,     0,   -54,   -54,   -54,   119,
       0,   -54,   170,   206,     0,   216,   207,   -64,   -64,   -64,
     164,   -54,   -64,   -54,   -54,   -54,     0,     0,   -54,     0,
       0,   -64,   -64,     0,   -61,   -61,   -61,   164,   -54,   -61,
     -53,   -53,   -53,     0,     0,   -53,   -57,   -57,   -57,   109,
       0,   -57,   -58,   -58,   -58,   111,     0,   -58,   -59,   -59,
     -59,   -57,     0,   -59,   -60,   -60,   -60,   -58,     0,   -60,
     -40,   -40,   160,   -59,     0,   -40,   -44,   -44,   -44,   -60,
       0,   -44,   -46,   -46,   -46,   -40,     0,   161,   162,   -48,
     -48,   -44,     0,   -48,   -50,   163,   -50,   -46,     0,   -50,
     -53,   -53,   -53,   -48,     0,   -53,   -55,   -55,   -55,   -50,
       0,   -55,   -61,   -61,   -61,   -53,     0,   -61,   -52,   -52,
     -52,   -55,     0,   -52,   -45,   -45,   -45,   -61,     0,   161,
     -61,   -61,   -61,   -52,     0,   -61,   -56,   -56,   -56,   -45,
       0,   -56,   -43,   -43,   -43,   172,     0,   -43,   162,   -47,
     -47,   -56,     0,   -47,   -49,   -49,   -49,   -43,     0,   -49,
     -51,   -51,   -51,   -47,     0,   -51,   -63,   -63,   -63,   -49,
       0,   -63,   -61,   -61,   -61,   -51,     0,   -61,   -61,   -61,
     -61,   -63,     0,   -61,   -62,   -62,   -62,   199,     0,   -62,
     -53,   -53,   -53,   -24,     0,   -53,     0,     0,     0,   -62,
       0,     0,     0,     0,     0,   217
};

static const yytype_int16 yycheck[] =
{
       0,    41,    30,     3,   170,     6,     5,     0,    36,   109,
     170,    67,     5,    13,     5,   170,   109,   170,     0,   109,
     186,     6,    38,    23,    29,     0,   186,    28,   170,    28,
       5,   186,     0,   186,   109,    27,    76,     5,    25,   170,
     206,   207,     6,    28,   186,     6,   206,   207,    64,    25,
      90,   206,   207,   206,   207,   186,     0,     0,    86,    87,
      88,     5,     5,   119,   206,   207,     0,    33,    34,   109,
       5,     5,     0,    39,    27,   206,   207,     5,   118,     6,
       7,   109,   122,    29,     3,     4,    27,     6,    29,     6,
       7,    13,    14,    15,    13,    27,    18,    16,    27,   199,
      66,    67,    21,    69,    70,    24,   199,    29,    27,   199,
     166,    27,    27,    29,   170,   215,    82,    83,    84,    85,
      29,   221,   215,    89,   199,   215,    29,   167,   221,    19,
     186,   221,   148,    33,    34,    29,    13,    14,    15,    39,
     215,    18,   170,    28,   110,    30,   221,    28,   114,    30,
     206,   207,    29,   119,    28,    28,    30,    30,   186,   199,
     216,     6,     7,   129,   130,    29,    66,   133,    29,    69,
     170,   199,    13,    14,    15,   215,    29,    18,   206,   207,
      29,   221,    82,    83,    84,    85,   186,   215,    29,    28,
      28,    30,    30,   221,   160,   161,   162,   163,   164,   165,
     166,    28,     6,    30,   170,    29,   206,   207,     6,    28,
     110,    30,    33,    29,    28,    28,    30,    30,    39,    34,
     186,    13,    14,    15,    39,    28,    18,    19,    20,   129,
     130,    23,    29,   133,   200,    27,    28,   203,   204,    29,
     206,   207,    13,    14,    15,    66,    29,    18,    69,    29,
     216,    66,     6,     7,    69,    29,    27,    29,    29,    29,
     160,   161,   162,   163,    85,   165,     3,     4,     5,     6,
     170,    29,    39,     6,    11,    12,    13,    28,    19,    16,
      28,    27,    27,    39,    21,    22,   186,    24,    19,    29,
      27,    29,     6,    29,    29,    29,    13,    14,    15,    66,
     200,    18,    69,   203,    27,    27,   206,   207,   129,   130,
      66,    28,   133,    69,   129,   130,    83,    28,   133,    28,
       6,    28,    13,    14,    15,    28,    82,    18,    19,    20,
      28,    39,    23,    28,    28,    28,    27,    39,    29,   160,
     161,   162,   163,    28,   165,   160,   161,   162,   163,   170,
     165,    28,    13,    14,    15,   170,    28,    18,    66,    28,
      28,    69,   129,   130,    66,   186,   133,    69,    29,    28,
      28,   186,    28,   129,   130,    28,    84,   133,    28,     3,
     164,    -1,   203,    -1,    -1,   206,   207,    -1,   203,    -1,
      -1,   206,   207,   160,   161,   162,   163,    -1,   165,    39,
      -1,    -1,    -1,   170,   160,   161,   162,   163,    -1,   165,
      -1,    -1,    -1,    -1,   170,    -1,    -1,    -1,    -1,   186,
      -1,   129,   130,    -1,    -1,   133,    66,   129,   130,    69,
     186,   133,    13,    14,    15,    -1,   203,    18,    -1,   206,
     207,    -1,    -1,    -1,    -1,    -1,    27,   203,    29,    -1,
     206,   207,   160,   161,   162,   163,    -1,   165,   160,   161,
     162,   163,   170,   165,     3,     4,     5,     6,   170,     8,
       9,    10,    11,    12,    13,    -1,    -1,    16,   186,    -1,
      -1,    -1,    21,    22,   186,    24,    25,    26,    27,   129,
     130,    -1,    -1,   133,    -1,   203,    -1,    -1,   206,   207,
      -1,   203,    -1,    -1,   206,   207,    -1,    -1,    13,    14,
      15,    -1,    -1,    18,    -1,    -1,    -1,    -1,    -1,    -1,
     160,   161,   162,   163,    29,   165,     3,     4,     5,     6,
     170,     8,     9,    10,    11,    12,    13,    -1,    -1,    16,
      17,    -1,    -1,    -1,    21,    22,   186,    24,    25,    26,
      27,     3,     4,     5,     6,    -1,     8,     9,    10,    11,
      12,    13,    -1,   203,    16,    17,   206,   207,    -1,    21,
      22,    -1,    24,    25,    26,    27,     3,     4,     5,     6,
      -1,     8,     9,    10,    11,    12,    13,    -1,    -1,    16,
      17,    -1,    -1,    -1,    21,    22,    -1,    24,    25,    26,
      27,     3,     4,     5,     6,    -1,     8,     9,    10,    11,
      12,    13,    -1,    -1,    16,    17,    -1,    -1,    -1,    21,
      22,    -1,    24,    25,    26,    27,     3,     4,     5,     6,
      -1,     8,     9,    10,    11,    12,    13,    -1,    -1,    16,
      17,    -1,    -1,    -1,    21,    22,    -1,    24,    25,    26,
      27,     3,     4,     5,     6,    -1,     8,     9,    10,    11,
      12,    13,    -1,    -1,    16,    17,    -1,    -1,    -1,    21,
      22,    -1,    24,    25,    26,    27,     3,     4,     5,     6,
      -1,     8,     9,    10,    11,    12,    13,    -1,    -1,    16,
      17,    -1,    -1,    -1,    21,    22,    -1,    24,    25,    26,
      27,     3,     4,     5,     6,    -1,     8,     9,    10,    11,
      12,    13,    -1,    -1,    16,    17,    -1,    -1,    -1,    21,
      22,    -1,    24,    25,    26,    27,     3,     4,     5,     6,
      -1,     8,     9,    10,    11,    12,    13,    -1,    -1,    16,
      17,    -1,    -1,    -1,    21,    22,    -1,    24,    25,    26,
      27,     3,     4,     5,     6,    -1,     8,     9,    10,    11,
      12,    13,    -1,    -1,    16,    17,    -1,    -1,    -1,    21,
      22,    -1,    24,    25,    26,    27,     3,     4,     5,     6,
      -1,     8,     9,    10,    11,    12,    13,    -1,    -1,    16,
      -1,    -1,    -1,    -1,    21,    22,    -1,    24,    25,    26,
      27,     3,     4,     5,     6,    -1,     8,     9,    10,    11,
      12,    13,    -1,    -1,    16,    -1,    -1,    -1,    -1,    21,
      22,    -1,    24,    25,    26,    27,     3,     4,     5,     6,
      -1,     8,     9,    10,    11,    12,    13,    -1,    -1,    16,
      -1,    -1,    -1,    -1,    21,    22,    -1,    24,    25,    26,
      27,     3,     4,     5,     6,    -1,     8,     9,    10,    11,
      12,    13,    -1,    -1,    16,    -1,    -1,    -1,    -1,    21,
      22,    -1,    24,    25,    26,    27,     3,     4,     5,     6,
      -1,     8,     9,    10,    11,    12,    13,    -1,    -1,    16,
      -1,    -1,    -1,    -1,    21,    22,    -1,    24,    25,    26,
      27,     3,     4,     5,     6,    -1,     8,     9,    10,    11,
      12,    13,    -1,    -1,    16,    -1,    -1,    -1,    -1,    21,
      22,    -1,    24,    25,    26,    27,     3,     4,     5,     6,
      -1,     8,     9,    10,    11,    12,    13,    -1,    -1,    16,
      -1,    -1,    -1,    -1,    21,    22,    -1,    24,    25,    26,
      27,     3,     4,     5,     6,    -1,     8,     9,    10,    11,
      12,    13,    -1,    -1,    16,    -1,    -1,    -1,    -1,    21,
      22,    -1,    24,    25,    26,    27,     3,     4,     5,     6,
      -1,     8,     9,    10,    11,    12,    13,    -1,    -1,    16,
      -1,    -1,    -1,    -1,    21,    22,    -1,    24,    25,    26,
      27,     3,     4,     5,     6,    -1,     8,     9,    10,    11,
      12,    13,    -1,    -1,    16,    -1,    -1,    -1,    -1,    21,
      22,    -1,    24,    25,    26,    27,     3,     4,     5,     6,
      -1,     8,     9,    10,    11,    12,    13,    -1,    -1,    16,
      -1,    -1,    -1,    -1,    21,    22,    -1,    24,    25,    26,
      27,     3,     4,     5,     6,    -1,     8,     9,    10,    11,
      12,    13,    -1,    -1,    16,    -1,    -1,    -1,    -1,    21,
      22,    -1,    24,    25,    26,    27,     3,     4,     5,     6,
      -1,     8,     9,    10,    11,    12,    13,    -1,    -1,    16,
      -1,    -1,    -1,    -1,    21,    22,    -1,    24,    25,    26,
      27,     3,     4,     5,     6,    -1,     8,     9,    10,    11,
      12,    13,    -1,    -1,    16,    -1,    -1,    -1,    -1,    21,
      22,    -1,    24,    25,    -1,    27,     3,     4,     5,     6,
      -1,     8,     9,    10,    11,    12,    13,    -1,    -1,    16,
      -1,    13,    14,    15,    21,    22,    18,    24,    25,    -1,
      27,     3,     4,     5,     6,     3,     4,    29,     6,    11,
      12,    13,    -1,    -1,    16,    13,    -1,    -1,    16,    21,
      22,    -1,    24,    21,    -1,    27,    24,    -1,    -1,    27,
      13,    14,    15,    -1,    -1,    18,    19,    20,    -1,    -1,
      23,    -1,    -1,    -1,    27,    -1,    29,    13,    14,    15,
      -1,    -1,    18,    13,    14,    15,    -1,    -1,    18,    13,
      14,    15,    -1,    29,    18,    13,    14,    15,    -1,    29,
      18,    13,    14,    15,    -1,    29,    18,    13,    14,    15,
      -1,    29,    18,    13,    14,    15,    -1,    29,    18,    13,
      14,    15,    -1,    29,    18,    13,    14,    15,    -1,    29,
      18,    13,    14,    15,    -1,    29,    18,    13,    14,    15,
      -1,    29,    18,    13,    14,    15,    -1,    29,    18,    13,
      14,    15,    -1,    29,    18,    13,    14,    15,    -1,    29,
      18,    13,    14,    15,    -1,    29,    18,    13,    14,    15,
      -1,    29,    18,    13,    14,    15,    -1,    29,    18,    13,
      14,    15,    -1,    29,    18,    -1,    13,    14,    15,    29,
      -1,    18,    19,    20,    -1,    29,    23,    13,    14,    15,
      27,    28,    18,    13,    14,    15,    -1,    -1,    18,    -1,
      -1,    27,    28,    -1,    13,    14,    15,    27,    28,    18,
      13,    14,    15,    -1,    -1,    18,    13,    14,    15,    28,
      -1,    18,    13,    14,    15,    28,    -1,    18,    13,    14,
      15,    28,    -1,    18,    13,    14,    15,    28,    -1,    18,
      13,    14,    15,    28,    -1,    18,    13,    14,    15,    28,
      -1,    18,    13,    14,    15,    28,    -1,    18,    13,    14,
      15,    28,    -1,    18,    13,    14,    15,    28,    -1,    18,
      13,    14,    15,    28,    -1,    18,    13,    14,    15,    28,
      -1,    18,    13,    14,    15,    28,    -1,    18,    13,    14,
      15,    28,    -1,    18,    13,    14,    15,    28,    -1,    18,
      13,    14,    15,    28,    -1,    18,    13,    14,    15,    28,
      -1,    18,    13,    14,    15,    28,    -1,    18,    13,    14,
      15,    28,    -1,    18,    13,    14,    15,    28,    -1,    18,
      13,    14,    15,    28,    -1,    18,    13,    14,    15,    28,
      -1,    18,    13,    14,    15,    28,    -1,    18,    13,    14,
      15,    28,    -1,    18,    13,    14,    15,    28,    -1,    18,
      13,    14,    15,    28,    -1,    18,    -1,    -1,    -1,    28,
      -1,    -1,    -1,    -1,    -1,    28
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     5,    32,    33,    34,    35,    37,    38,     6,     7,
       0,    34,    29,    27,     6,     5,    28,    36,    37,     6,
       7,    25,    28,    30,     6,     3,     4,     6,     8,     9,
      10,    11,    12,    13,    16,    21,    22,    24,    25,    27,
      37,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    25,    37,    27,    27,    42,    27,
      27,    51,    59,    61,    56,    42,    39,    51,    26,    40,
      29,    29,    15,    18,    13,    14,    19,    20,    23,    27,
      39,    51,    47,    61,    59,    61,    26,    28,    55,    57,
      58,    59,    42,    42,    42,    28,    61,    62,    26,    28,
      29,    28,    28,    28,    30,    40,    51,    61,    17,    29,
      40,    47,    28,    40,     5,     6,     3,     4,     6,    13,
      16,    21,    24,    27,    54,    55,    56,    57,    58,    59,
      60,    61,     6,    51,     6,     6,     8,     9,    25,    41,
      42,    44,    45,    46,    61,     6,     7,    59,    56,    51,
      15,    18,    13,    14,    27,    27,    27,    39,    29,    29,
      19,     6,    28,    55,    57,    58,    59,    28,    62,    51,
      47,    26,     5,     6,    11,    12,    22,    37,    42,    43,
      47,    48,    49,    50,    51,    52,    53,    61,    28,    28,
      29,     6,     7,    27,    27,    42,    20,    23,    40,    51,
       6,    59,    61,    42,    42,    17,    29,    28,    28,    40,
      47,    28,    40
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    31,    32,    33,    33,    34,    34,    35,    35,    36,
      36,    37,    37,    38,    38,    39,    39,    40,    40,    40,
      41,    41,    41,    42,    42,    42,    42,    42,    42,    42,
      43,    43,    44,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    54,    55,    55,    56,    56,    57,
      57,    58,    58,    58,    59,    59,    59,    59,    59,    59,
      59,    59,    60,    60,    61,    62,    62
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     1,     2,     1,     7,     6,     3,
       1,     2,     3,     2,     3,     2,     1,     2,     3,     1,
       1,     1,     2,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     5,     7,     9,     2,     3,     3,     2,     3,
       1,     4,     4,     3,     1,     2,     1,     3,     1,     3,
       1,     3,     2,     1,     1,     1,     3,     1,     1,     1,
       1,     1,     4,     3,     1,     3,     1
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
#line 1741 "src/sin_analyser.tab.c"
    break;

  case 3:
#line 79 "src/sin_analyser.y"
                          {
        (yyval.treeNode) = newNode("PROGRAM");
        (yyval.treeNode)->subtree1 = (yyvsp[-1].treeNode);
        (yyval.treeNode)->subtree2 = (yyvsp[0].treeNode);
    }
#line 1751 "src/sin_analyser.tab.c"
    break;

  case 4:
#line 85 "src/sin_analyser.y"
                  { (yyval.treeNode) = (yyvsp[0].treeNode); }
#line 1757 "src/sin_analyser.tab.c"
    break;

  case 5:
#line 89 "src/sin_analyser.y"
               { (yyval.treeNode) = (yyvsp[-1].treeNode); }
#line 1763 "src/sin_analyser.tab.c"
    break;

  case 6:
#line 91 "src/sin_analyser.y"
              { (yyval.treeNode) = (yyvsp[0].treeNode); }
#line 1769 "src/sin_analyser.tab.c"
    break;

  case 7:
#line 95 "src/sin_analyser.y"
                                  {
        (yyval.treeNode) = newNode("FUNCTION");
        (yyval.treeNode)->subtree1 = (yyvsp[-6].treeNode);
        (yyval.treeNode)->subtree2 = (yyvsp[-4].treeNode);
        (yyval.treeNode)->subtree3 = (yyvsp[-1].treeNode);
    }
#line 1780 "src/sin_analyser.tab.c"
    break;

  case 8:
#line 102 "src/sin_analyser.y"
                           {
        (yyval.treeNode) = newNode("FUNCTION");
        (yyval.treeNode)->subtree1 = (yyvsp[-5].treeNode);
        (yyval.treeNode)->subtree2 = (yyvsp[-1].treeNode);
    }
#line 1790 "src/sin_analyser.tab.c"
    break;

  case 9:
#line 110 "src/sin_analyser.y"
                            {
        (yyval.treeNode) = newNode("PARAMS");
        (yyval.treeNode)->subtree1 = (yyvsp[-2].treeNode);
        (yyval.treeNode)->subtree2 = (yyvsp[0].treeNode);
    }
#line 1800 "src/sin_analyser.tab.c"
    break;

  case 10:
#line 116 "src/sin_analyser.y"
           { (yyval.treeNode) = (yyvsp[0].treeNode); }
#line 1806 "src/sin_analyser.tab.c"
    break;

  case 11:
#line 120 "src/sin_analyser.y"
            {
        newSymbol(table, (yyvsp[0].lex).id, (yyvsp[-1].lex).id, "VAR      ", (yyvsp[0].lex).line, (yyvsp[0].lex).col);      
        (yyval.treeNode) = newNode(strcat(strcat((yyvsp[-1].lex).id," "), (yyvsp[0].lex).id));
    }
#line 1815 "src/sin_analyser.tab.c"
    break;

  case 12:
#line 125 "src/sin_analyser.y"
                 {
        newSymbol(table, (yyvsp[0].lex).id, (yyvsp[-2].lex).id, "LIST VAR ",(yyvsp[0].lex).line, (yyvsp[0].lex).col);
        (yyval.treeNode) = newNode(strcat(strcat((yyvsp[-2].lex).id," list "), (yyvsp[0].lex).id));
    }
#line 1824 "src/sin_analyser.tab.c"
    break;

  case 13:
#line 132 "src/sin_analyser.y"
            {
        newSymbol(table, (yyvsp[0].lex).id, (yyvsp[-1].lex).id, "FUNC     ", (yyvsp[0].lex).line, (yyvsp[0].lex).col);
        (yyval.treeNode) = newNode(strcat(strcat((yyvsp[-1].lex).id," function "), (yyvsp[0].lex).id));
    }
#line 1833 "src/sin_analyser.tab.c"
    break;

  case 14:
#line 137 "src/sin_analyser.y"
                 {
        newSymbol(table, (yyvsp[-1].lex).id, (yyvsp[-2].lex).id, "LIST FUNC", (yyvsp[-1].lex).line, (yyvsp[-1].lex).col);
        (yyval.treeNode) = newNode(strcat(strcat((yyvsp[-2].lex).id," function list "), (yyvsp[0].lex).id));
    }
#line 1842 "src/sin_analyser.tab.c"
    break;

  case 15:
#line 144 "src/sin_analyser.y"
                    {
        (yyval.treeNode) = newNode("BLOCK");
        (yyval.treeNode)->subtree1 = (yyvsp[-1].treeNode);
        (yyval.treeNode)->subtree2 = (yyvsp[0].treeNode);
    }
#line 1852 "src/sin_analyser.tab.c"
    break;

  case 16:
#line 150 "src/sin_analyser.y"
              { (yyval.treeNode) = (yyvsp[0].treeNode); }
#line 1858 "src/sin_analyser.tab.c"
    break;

  case 17:
#line 154 "src/sin_analyser.y"
             { (yyval.treeNode) = (yyvsp[-1].treeNode); }
#line 1864 "src/sin_analyser.tab.c"
    break;

  case 18:
#line 156 "src/sin_analyser.y"
                { (yyval.treeNode) = (yyvsp[-1].treeNode); }
#line 1870 "src/sin_analyser.tab.c"
    break;

  case 19:
#line 158 "src/sin_analyser.y"
             { (yyval.treeNode) = (yyvsp[0].treeNode); }
#line 1876 "src/sin_analyser.tab.c"
    break;

  case 20:
#line 162 "src/sin_analyser.y"
            { (yyval.treeNode) = (yyvsp[0].treeNode); }
#line 1882 "src/sin_analyser.tab.c"
    break;

  case 21:
#line 164 "src/sin_analyser.y"
        { (yyval.treeNode) = (yyvsp[0].treeNode); }
#line 1888 "src/sin_analyser.tab.c"
    break;

  case 22:
#line 166 "src/sin_analyser.y"
               { (yyval.treeNode) = (yyvsp[-1].treeNode); }
#line 1894 "src/sin_analyser.tab.c"
    break;

  case 23:
#line 170 "src/sin_analyser.y"
           { (yyval.treeNode) = (yyvsp[0].treeNode); }
#line 1900 "src/sin_analyser.tab.c"
    break;

  case 24:
#line 172 "src/sin_analyser.y"
              { (yyval.treeNode) = (yyvsp[0].treeNode); }
#line 1906 "src/sin_analyser.tab.c"
    break;

  case 25:
#line 174 "src/sin_analyser.y"
           { (yyval.treeNode) = (yyvsp[0].treeNode); }
#line 1912 "src/sin_analyser.tab.c"
    break;

  case 26:
#line 176 "src/sin_analyser.y"
          { (yyval.treeNode) = (yyvsp[0].treeNode); }
#line 1918 "src/sin_analyser.tab.c"
    break;

  case 27:
#line 178 "src/sin_analyser.y"
           { (yyval.treeNode) = (yyvsp[0].treeNode); }
#line 1924 "src/sin_analyser.tab.c"
    break;

  case 28:
#line 180 "src/sin_analyser.y"
            { (yyval.treeNode) = (yyvsp[0].treeNode); }
#line 1930 "src/sin_analyser.tab.c"
    break;

  case 29:
#line 182 "src/sin_analyser.y"
              { (yyval.treeNode) = (yyvsp[0].treeNode); }
#line 1936 "src/sin_analyser.tab.c"
    break;

  case 30:
#line 186 "src/sin_analyser.y"
             { (yyval.treeNode) = (yyvsp[0].treeNode); }
#line 1942 "src/sin_analyser.tab.c"
    break;

  case 31:
#line 188 "src/sin_analyser.y"
              { (yyval.treeNode) = (yyvsp[0].treeNode); }
#line 1948 "src/sin_analyser.tab.c"
    break;

  case 32:
#line 192 "src/sin_analyser.y"
                                            {
        (yyval.treeNode) = newNode("IF");
        (yyval.treeNode)->subtree1 = (yyvsp[-2].treeNode);
        (yyval.treeNode)->subtree2 = (yyvsp[0].treeNode);
    }
#line 1958 "src/sin_analyser.tab.c"
    break;

  case 33:
#line 198 "src/sin_analyser.y"
                                                {
        (yyval.treeNode) = newNode("IF ELSE");
        (yyval.treeNode)->subtree1 = (yyvsp[-4].treeNode);
        (yyval.treeNode)->subtree2 = (yyvsp[-2].treeNode);
        (yyval.treeNode)->subtree3 = (yyvsp[0].treeNode);
    }
#line 1969 "src/sin_analyser.tab.c"
    break;

  case 34:
#line 207 "src/sin_analyser.y"
                                                        {
        (yyval.treeNode) = newNode("FOR");
        (yyval.treeNode)->subtree1 = (yyvsp[-6].treeNode);
        (yyval.treeNode)->subtree2 = (yyvsp[-4].treeNode);
        (yyval.treeNode)->subtree3 = (yyvsp[-2].treeNode);
        (yyval.treeNode)->subtree4 = (yyvsp[0].treeNode);
    }
#line 1981 "src/sin_analyser.tab.c"
    break;

  case 35:
#line 217 "src/sin_analyser.y"
                {
        (yyval.treeNode) = newNode("RETURN");
        (yyval.treeNode)->subtree1 = (yyvsp[0].treeNode);
    }
#line 1990 "src/sin_analyser.tab.c"
    break;

  case 36:
#line 224 "src/sin_analyser.y"
                   {
        (yyval.treeNode) = newNode("ASSIGN");
        (yyval.treeNode)->subtree1 = (yyvsp[-2].treeNode);
        (yyval.treeNode)->subtree2 = (yyvsp[0].treeNode);
    }
#line 2000 "src/sin_analyser.tab.c"
    break;

  case 37:
#line 232 "src/sin_analyser.y"
                     {
        (yyval.treeNode) = newNode("LIST OP");
        (yyval.treeNode)->subtree1 = (yyvsp[-2].treeNode);
        (yyval.treeNode)->subtree2 = (yyvsp[0].treeNode);
    }
#line 2010 "src/sin_analyser.tab.c"
    break;

  case 38:
#line 240 "src/sin_analyser.y"
                  {
        (yyval.treeNode) = newNode("LIST OP");
        (yyval.treeNode)->subtree1 = (yyvsp[0].treeNode);
    }
#line 2019 "src/sin_analyser.tab.c"
    break;

  case 39:
#line 247 "src/sin_analyser.y"
                      {
        (yyval.treeNode) = newNode("LIST FUNC");
        (yyval.treeNode)->subtree1 = (yyvsp[-2].treeNode);
        (yyval.treeNode)->subtree2 = (yyvsp[0].treeNode);
    }
#line 2029 "src/sin_analyser.tab.c"
    break;

  case 40:
#line 255 "src/sin_analyser.y"
           { (yyval.treeNode) = (yyvsp[0].treeNode); }
#line 2035 "src/sin_analyser.tab.c"
    break;

  case 41:
#line 259 "src/sin_analyser.y"
                {
        (yyval.treeNode) = newNode("IN");
        (yyval.treeNode)->subtree1 = (yyvsp[-1].treeNode);
    }
#line 2044 "src/sin_analyser.tab.c"
    break;

  case 42:
#line 266 "src/sin_analyser.y"
                  {
        (yyval.treeNode) = newNode("OUT");
        (yyval.treeNode)->subtree1 = (yyvsp[-1].treeNode);
    }
#line 2053 "src/sin_analyser.tab.c"
    break;

  case 43:
#line 273 "src/sin_analyser.y"
                           {
        (yyval.treeNode) = newNode("LOG OP");
        (yyval.treeNode)->subtree1 = (yyvsp[-2].treeNode);
        (yyval.treeNode)->subtree2 = (yyvsp[0].treeNode);
    }
#line 2063 "src/sin_analyser.tab.c"
    break;

  case 44:
#line 279 "src/sin_analyser.y"
            { (yyval.treeNode) = (yyvsp[0].treeNode); }
#line 2069 "src/sin_analyser.tab.c"
    break;

  case 45:
#line 283 "src/sin_analyser.y"
                   {
        (yyval.treeNode) = newNode("LOG OP");
        (yyval.treeNode)->subtree1 = (yyvsp[0].treeNode);
    }
#line 2078 "src/sin_analyser.tab.c"
    break;

  case 46:
#line 288 "src/sin_analyser.y"
           { (yyval.treeNode) = (yyvsp[0].treeNode); }
#line 2084 "src/sin_analyser.tab.c"
    break;

  case 47:
#line 292 "src/sin_analyser.y"
                         {
        (yyval.treeNode) = newNode("REL OP");
        (yyval.treeNode)->subtree1 = (yyvsp[-2].treeNode);
        (yyval.treeNode)->subtree2 = (yyvsp[0].treeNode);
    }
#line 2094 "src/sin_analyser.tab.c"
    break;

  case 48:
#line 298 "src/sin_analyser.y"
           { (yyval.treeNode) = (yyvsp[0].treeNode); }
#line 2100 "src/sin_analyser.tab.c"
    break;

  case 49:
#line 302 "src/sin_analyser.y"
                       {
        (yyval.treeNode) = newNode("ARI OP");
        (yyval.treeNode)->subtree1 = (yyvsp[-2].treeNode);
        (yyval.treeNode)->subtree2 = (yyvsp[0].treeNode);
    }
#line 2110 "src/sin_analyser.tab.c"
    break;

  case 50:
#line 308 "src/sin_analyser.y"
          { (yyval.treeNode) = (yyvsp[0].treeNode); }
#line 2116 "src/sin_analyser.tab.c"
    break;

  case 51:
#line 312 "src/sin_analyser.y"
                    {
        (yyval.treeNode) = newNode("ARI OP");
        (yyval.treeNode)->subtree1 = (yyvsp[-2].treeNode);
        (yyval.treeNode)->subtree2 = (yyvsp[0].treeNode);
    }
#line 2126 "src/sin_analyser.tab.c"
    break;

  case 52:
#line 318 "src/sin_analyser.y"
              {
        (yyval.treeNode) = newNode("NEGATIVE");
        (yyval.treeNode)->subtree1 = (yyvsp[0].treeNode);
    }
#line 2135 "src/sin_analyser.tab.c"
    break;

  case 53:
#line 323 "src/sin_analyser.y"
        { (yyval.treeNode) = (yyvsp[0].treeNode); }
#line 2141 "src/sin_analyser.tab.c"
    break;

  case 54:
#line 327 "src/sin_analyser.y"
       { (yyval.treeNode) = (yyvsp[0].treeNode); }
#line 2147 "src/sin_analyser.tab.c"
    break;

  case 55:
#line 329 "src/sin_analyser.y"
              { (yyval.treeNode) = (yyvsp[0].treeNode); }
#line 2153 "src/sin_analyser.tab.c"
    break;

  case 56:
#line 331 "src/sin_analyser.y"
                    { (yyval.treeNode) = (yyvsp[-1].treeNode); }
#line 2159 "src/sin_analyser.tab.c"
    break;

  case 57:
#line 333 "src/sin_analyser.y"
        { (yyval.treeNode) = newNode((yyvsp[0].lex).id); }
#line 2165 "src/sin_analyser.tab.c"
    break;

  case 58:
#line 335 "src/sin_analyser.y"
          { (yyval.treeNode) = newNode((yyvsp[0].lex).id); }
#line 2171 "src/sin_analyser.tab.c"
    break;

  case 59:
#line 337 "src/sin_analyser.y"
        { (yyval.treeNode) = newNode("NIL"); }
#line 2177 "src/sin_analyser.tab.c"
    break;

  case 60:
#line 339 "src/sin_analyser.y"
            { (yyval.treeNode) = newNode((yyvsp[0].lex).id); }
#line 2183 "src/sin_analyser.tab.c"
    break;

  case 61:
#line 341 "src/sin_analyser.y"
              { (yyval.treeNode) = (yyvsp[0].treeNode); }
#line 2189 "src/sin_analyser.tab.c"
    break;

  case 62:
#line 345 "src/sin_analyser.y"
                         {
        (yyval.treeNode) = newNode("CALL");
        (yyval.treeNode)->subtree1 = (yyvsp[-3].treeNode);
        (yyval.treeNode)->subtree2 = (yyvsp[-1].treeNode);
    }
#line 2199 "src/sin_analyser.tab.c"
    break;

  case 63:
#line 351 "src/sin_analyser.y"
             {
        (yyval.treeNode) = newNode("CALL");
        (yyval.treeNode)->subtree2 = (yyvsp[-2].treeNode);
    }
#line 2208 "src/sin_analyser.tab.c"
    break;

  case 64:
#line 358 "src/sin_analyser.y"
       { (yyval.treeNode) = newNode((yyvsp[0].lex).id); }
#line 2214 "src/sin_analyser.tab.c"
    break;

  case 65:
#line 362 "src/sin_analyser.y"
                            {
        (yyval.treeNode) = newNode("PARAMS");
        (yyval.treeNode)->subtree1 = (yyvsp[-2].treeNode);
        (yyval.treeNode)->subtree2 = (yyvsp[0].treeNode);
    }
#line 2224 "src/sin_analyser.tab.c"
    break;

  case 66:
#line 368 "src/sin_analyser.y"
       { (yyval.treeNode) = (yyvsp[0].treeNode); }
#line 2230 "src/sin_analyser.tab.c"
    break;


#line 2234 "src/sin_analyser.tab.c"

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
#line 371 "src/sin_analyser.y"


int main(int argc, char **argv){
    printf("────────────────────────────────────────\n");
    printf("Syntax analysis in file '%s'", argv[1]);
    printf("\n────────────────────────────────────────");

    yyin = fopen(argv[1], "r");

    yyparse();

    printf("\n");
    printf("Syntax analysis finished with %d errors.\n", errors);

    showTree(syntaxTree, 0);

    showTable(table);
    destroyTree();

    fclose(yyin);
    yylex_destroy();

    return 0;
}

extern void yyerror(const char* error) {
    printf("%s [%d, %d]", error, line, col);
    errors++;
}
