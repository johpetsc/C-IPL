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
    char tacTable[10000];
    char tacCode[100000];
    char tacFile[100];
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
    char for_loop[5];
    char if_loop[5];
    char else_loop[5];
    char end_loop[5];
    char finish_loop[5];
    char tac[100];
    int main_found = 0;
    int sin_errors = 0;
    int sem_errors = 0;

#line 112 "src/sin_analyser.tab.c"

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
#line 48 "src/sin_analyser.y"

    /*Token structure*/
    struct lexToken {
        char id[200];
        int line;
        int col;
    } lex;
    /*Tree node reference*/
    struct treeNode* treeNode;

#line 205 "src/sin_analyser.tab.c"

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
#define YYLAST   2122

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  30
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  40
/* YYNRULES -- Number of rules.  */
#define YYNRULES  78
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  255

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
       0,    93,    93,    97,   103,   105,   109,   111,   115,   117,
     115,   161,   163,   161,   207,   214,   221,   227,   235,   256,
     280,   294,   310,   317,   319,   323,   325,   327,   327,   334,
     338,   340,   342,   346,   348,   350,   352,   356,   358,   360,
     360,   381,   385,   398,   398,   432,   432,   453,   464,   475,
     518,   566,   570,   609,   613,   664,   668,   685,   702,   706,
     745,   764,   768,   807,   811,   822,   826,   828,   830,   832,
     834,   836,   838,   853,   853,   879,   896,   906,   921
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
  "flow_ctr", "expr", "if_statement", "$@6", "if_else", "$@7", "for",
  "$@8", "return", "input", "output", "ass_op", "operation", "log_op",
  "rel_op", "list_op", "ari_op", "md_op", "un_op", "val", "func_call",
  "$@9", "id", "func_params", YY_NULLPTR
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

#define YYPACT_NINF (-201)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-79)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      85,    69,   265,    36,    97,   120,   129,    44,    82,   -15,
     106,  -201,   140,   186,    -3,   126,   113,   111,   280,   138,
     156,   117,   179,   147,   113,   139,   617,   205,   217,   169,
     665,   665,  1097,   324,   396,   295,    63,   173,   187,   466,
     194,   202,    19,   524,    19,  1762,   689,   541,   203,  1121,
    1145,  1169,   215,  1193,  1217,   220,   239,   247,   264,   272,
      18,   -13,   514,   294,  1772,  1782,  1792,  1802,    13,  1241,
     290,   314,   236,   541,   315,   296,  1812,   541,   320,  1822,
    1832,   665,   301,   209,  1265,  1289,  1313,  1337,   466,   466,
     466,   466,    19,    19,   466,   216,   302,  1842,   630,   309,
     326,   319,   335,   329,   337,  1361,  1852,    67,  2088,  1889,
    1899,  1862,  1872,   338,   225,   231,  1505,  1590,   355,   366,
    1385,  1882,   630,   713,   737,   368,   761,   369,   466,   241,
     665,   785,  1529,   809,   370,  1409,  1553,   315,   833,  1433,
     361,  1553,  1457,  1747,  1923,  1932,  1909,    50,  1941,    50,
    1950,   541,    10,   131,   477,   645,  1959,  1968,  1977,  1986,
    1995,   364,   559,  1603,   262,   107,  1612,   107,  1621,   541,
      22,   -11,    87,   208,  1630,  1639,  1648,  1657,  1666,   374,
     376,   857,   881,   381,   386,   328,  2004,  2013,   393,   541,
     541,   541,   541,    50,    50,   402,  1675,  1684,   399,   630,
     630,   630,   630,   107,   107,   541,   315,   905,   541,  2022,
     630,  2031,   178,  2095,  2065,  2072,  2040,  2049,  1693,   630,
    1702,   171,  2079,   363,  1738,  1711,  1720,   403,   404,   407,
     253,   256,  1505,  1590,  2058,  1729,   929,   466,  1529,   408,
    1577,   315,   689,   953,   977,   411,   412,   421,   665,  1001,
    1025,  1577,  1481,  1049,  1073
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
       0,     0,     0,     0,     0
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -201,  -201,  -201,   423,  -201,  -201,  -201,  -201,  -201,  -201,
     426,    96,  -201,   -31,   -48,   189,  -109,  -108,   227,  -201,
     -96,   197,   -83,   228,   -50,  -201,  -201,   -22,    28,   455,
     176,   360,   400,   104,   168,   252,   316,  -130,   -30,  -200
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     3,     4,     5,     6,    16,    25,    17,    30,    19,
      20,    48,     8,    49,    50,    81,    51,    52,   126,   130,
      53,   136,    54,   128,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    98,    68,   115
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      69,    84,    -8,   -53,    89,   -53,   200,   124,   125,    76,
     230,   -20,    76,   -18,    76,   -53,   -53,   160,   -53,   231,
     181,    84,    33,    34,   -11,   143,   189,   -66,   -66,   -66,
     -66,    94,   -66,   182,    88,   -66,    11,   -51,   199,    43,
      44,   -66,    45,   160,   102,    47,   -51,   160,   104,   -51,
     105,   -51,   101,   144,   145,   210,   146,    84,    76,    76,
      76,    76,    76,    76,    76,   219,   183,    75,   178,    -5,
     148,   149,    13,   150,    -5,    82,   151,   -76,   -76,   -76,
     -76,   -76,   -76,   -52,    89,   -76,     1,    84,   139,    72,
       2,   -76,   178,   142,   127,   -52,     7,    -2,    76,   135,
       7,    99,     2,   -55,   -55,   103,   201,   184,    14,   202,
     162,   163,    15,   164,   -55,   140,   -55,   160,    18,   160,
      -4,   160,   113,   124,   125,    -4,   114,   166,   167,    -7,
     168,   244,   245,   169,    -7,   178,   181,   178,    21,   160,
      -3,    26,   244,   245,   181,    -3,    79,   -53,   190,   182,
     129,   156,   -21,    27,   -19,   181,   134,   182,   -53,   160,
     160,   160,   160,   160,   160,    -9,    29,    24,   182,   178,
     178,   178,   178,   178,   178,   160,   102,   156,   160,   188,
     178,   156,   183,   -15,   228,   -15,    -6,   -52,   200,   178,
     183,    -6,   243,    31,   -52,   190,   111,   198,   -52,    73,
     -52,   183,   174,   253,    84,   -52,   -16,    76,   -16,   -13,
     127,   184,    80,    74,   -13,   157,   -10,   252,   246,   247,
      77,   -10,   203,   153,   -58,   -58,   174,   -58,    78,   246,
     -58,   -34,   -17,   227,   -17,   -58,   229,   -58,   114,   -73,
     -73,   157,   -73,    85,   -14,   157,   -14,   114,    86,   153,
     -73,   186,   -78,   153,   -78,   156,   -73,   -73,   121,   -73,
     122,   112,   -73,    97,   107,   239,   175,   -35,   -77,   196,
     -77,     9,    10,   156,   171,   -36,   -76,   -76,   -76,   -76,
     234,   -76,   122,   235,   -76,   122,    22,    23,   195,   -76,
     175,   -76,    87,   156,   156,   156,   156,   216,   171,   158,
     -33,    70,    71,   174,   174,   174,   174,   225,    92,   156,
     -58,   -58,   156,   -58,   174,   157,   -58,   187,   -18,   157,
      96,   100,   -58,   174,   -47,   158,   161,   153,   106,   158,
     -19,   -73,   -73,   175,   -73,   197,   116,   157,   -69,   -69,
     -69,   -69,   -73,   -69,   -76,   153,   -69,   117,   -73,   -73,
     176,   -73,   -69,    94,   -73,   209,   118,   157,   157,   157,
     157,   157,   217,   159,   119,   212,   -50,   175,   175,   175,
     175,   175,   226,   157,   176,   221,   157,   203,   175,   -56,
     -56,   153,   -56,   -49,   153,   -56,   171,   175,   141,   159,
     -56,   -76,   -56,   159,   -48,   171,   131,   133,   137,   158,
     205,   158,   206,   158,   208,   -73,   -73,   154,   -73,   207,
     -70,   -70,   -70,   -70,   177,   -70,   -73,   176,   -70,   176,
     211,   158,   -73,   -73,   -70,   -73,   220,    12,   -73,   218,
     232,   248,   233,   154,   -50,   240,   241,   154,   177,   249,
     250,   158,   158,   158,   158,   158,   158,   155,   251,   108,
      28,   176,   176,   176,   176,   176,   176,   158,   172,   236,
     158,   237,   176,   159,     0,   159,     0,   159,     0,    33,
      34,   176,   143,   155,     0,     0,     0,   155,     0,     0,
      42,   177,   172,   177,     0,   159,    43,    44,     0,    45,
     109,   110,    47,   -55,   -55,     0,   191,     0,   173,   192,
       0,     0,   152,     0,   -55,   159,   159,   159,   159,   159,
     159,   154,     0,     0,     0,   177,   177,   177,   177,   177,
     177,   159,   173,     0,   159,     0,   177,     0,   152,   154,
     -55,   -55,   152,    90,     0,   177,    91,     0,   -71,   -71,
     -71,   -71,   -55,   -71,   144,   145,   -71,   146,     0,   154,
     213,   155,   -71,   170,     0,   147,     0,     0,     0,   172,
     222,   148,   149,     0,   150,   154,     0,   151,   154,   155,
     172,     0,     0,   -69,   -69,   -69,   -69,   170,   -69,   172,
       0,   -69,     0,     0,     0,     0,   -69,     0,   -69,   155,
     155,   214,   215,     0,     0,     0,     0,     0,     0,   173,
     173,   223,   224,     0,     0,   155,   152,     0,   155,     0,
     173,     0,     0,     0,     0,     0,     0,     0,   -12,   173,
     -12,   -12,   -12,   -12,   152,   -12,     0,   -12,   -12,   -12,
     -12,   -12,     0,   162,   163,     0,   164,   -12,   -12,     0,
     -12,   -12,     0,   -12,   165,     0,     0,     0,     0,     0,
     166,   167,     0,   168,     0,     0,   169,     0,     0,   193,
     152,   -58,   -58,   152,   -58,   170,    32,   -58,    33,    34,
      35,    36,   -58,    37,   170,    38,    39,    40,    41,    42,
       0,     0,     0,     0,     0,    43,    44,     0,    45,    46,
     -27,    47,   -27,   -27,   -27,   -27,     0,   -27,     0,   -27,
     -27,   -27,   -27,   -27,     0,     0,     0,     0,     0,   -27,
     -27,     0,   -27,   -27,   -39,   -27,   -39,   -39,   -39,   -39,
       0,   -39,     0,   -39,   -39,   -39,   -39,   -39,     0,     0,
       0,     0,     0,   -39,   -39,     0,   -39,   -39,     0,   -39,
     -41,   -41,   -41,   -41,     0,   -41,   -41,   -41,   -41,   -41,
     -41,   -41,     0,     0,     0,     0,     0,   -41,   -41,     0,
     -41,   -41,   -41,   -41,   -42,   -42,   -42,   -42,     0,   -42,
     132,   -42,   -42,   -42,   -42,   -42,     0,     0,     0,     0,
       0,   -42,   -42,     0,   -42,   -42,   -42,   -42,   -37,   -37,
     -37,   -37,     0,   -37,   -37,   -37,   -37,   -37,   -37,   -37,
       0,     0,     0,     0,     0,   -37,   -37,     0,   -37,   -37,
     -37,   -37,   -38,   -38,   -38,   -38,     0,   -38,   -38,   -38,
     -38,   -38,   -38,   -38,     0,     0,     0,     0,     0,   -38,
     -38,     0,   -38,   -38,   -38,   -38,   -40,   -40,   -40,   -40,
       0,   -40,   -40,   -40,   -40,   -40,   -40,   -40,     0,     0,
       0,     0,     0,   -40,   -40,     0,   -40,   -40,   -40,   -40,
     -30,   -30,   -30,   -30,     0,   -30,   -30,   -30,   -30,   -30,
     -30,   -30,     0,     0,     0,     0,     0,   -30,   -30,     0,
     -30,   -30,   -30,   -30,   -31,   -31,   -31,   -31,     0,   -31,
     -31,   -31,   -31,   -31,   -31,   -31,     0,     0,     0,     0,
       0,   -31,   -31,     0,   -31,   -31,   -31,   -31,   -32,   -32,
     -32,   -32,     0,   -32,   -32,   -32,   -32,   -32,   -32,   -32,
       0,     0,     0,     0,     0,   -32,   -32,     0,   -32,   -32,
     -32,   -32,   -42,   -42,   -42,   -42,     0,   -42,   238,   -42,
     -42,   -42,   -42,   -42,     0,     0,     0,     0,     0,   -42,
     -42,     0,   -42,   -42,   -42,   -42,   -44,   -44,   -44,   -44,
       0,   -44,   -44,   -44,   -44,   -44,   -44,   -44,     0,     0,
       0,     0,     0,   -44,   -44,     0,   -44,   -44,   -44,   -44,
     -29,   -29,   -29,   -29,     0,   -29,   -29,   -29,   -29,   -29,
     -29,   -29,     0,     0,     0,     0,     0,   -29,   -29,     0,
     -29,   -29,   -29,   -29,   -25,   -25,   -25,   -25,     0,   -25,
     -25,   -25,   -25,   -25,   -25,   -25,     0,     0,     0,     0,
       0,   -25,   -25,     0,   -25,   -25,   -25,   -25,   -26,   -26,
     -26,   -26,     0,   -26,   -26,   -26,   -26,   -26,   -26,   -26,
       0,     0,     0,     0,     0,   -26,   -26,     0,   -26,   -26,
     -26,   -26,   -46,   -46,   -46,   -46,     0,   -46,   -46,   -46,
     -46,   -46,   -46,   -46,     0,     0,     0,     0,     0,   -46,
     -46,     0,   -46,   -46,   -46,   -46,   -28,   -28,   -28,   -28,
       0,   -28,   -28,   -28,   -28,   -28,   -28,   -28,     0,     0,
       0,     0,     0,   -28,   -28,     0,   -28,   -28,   -28,   -28,
     -24,   -24,   -24,   -24,     0,   -24,     0,   -24,   -24,   -24,
     -24,   -24,     0,     0,     0,     0,     0,   -24,   -24,     0,
     -24,   -24,   -24,   -24,    33,    34,    35,    36,     0,    37,
       0,    38,    39,    40,    41,    42,     0,     0,     0,     0,
       0,    43,    44,     0,    45,    46,    83,    47,   -23,   -23,
     -23,   -23,     0,   -23,     0,   -23,   -23,   -23,   -23,   -23,
       0,     0,     0,     0,     0,   -23,   -23,     0,   -23,   -23,
     -23,   -23,   -29,   -29,   -29,   -29,     0,   -29,     0,   -29,
     -29,   -29,   -29,   -29,     0,     0,     0,     0,     0,   -29,
     -29,     0,   -29,   -29,   -29,   -29,   -30,   -30,   -30,   -30,
       0,   -30,     0,   -30,   -30,   -30,   -30,   -30,     0,     0,
       0,     0,     0,   -30,   -30,     0,   -30,   -30,   -30,   -30,
     -31,   -31,   -31,   -31,     0,   -31,     0,   -31,   -31,   -31,
     -31,   -31,     0,     0,     0,     0,     0,   -31,   -31,     0,
     -31,   -31,   -31,   -31,    33,    34,    35,    36,     0,    37,
       0,    38,    39,    40,    41,    42,     0,     0,     0,     0,
       0,    43,    44,     0,    45,    46,    95,    47,   -22,   -22,
     -22,   -22,     0,   -22,     0,   -22,   -22,   -22,   -22,   -22,
       0,     0,     0,     0,     0,   -22,   -22,     0,   -22,   -22,
     -22,   -22,   -25,   -25,   -25,   -25,     0,   -25,     0,   -25,
     -25,   -25,   -25,   -25,     0,     0,     0,     0,     0,   -25,
     -25,     0,   -25,   -25,   -25,   -25,   -32,   -32,   -32,   -32,
       0,   -32,     0,   -32,   -32,   -32,   -32,   -32,     0,     0,
       0,     0,     0,   -32,   -32,     0,   -32,   -32,   -32,   -32,
     -26,   -26,   -26,   -26,     0,   -26,     0,   -26,   -26,   -26,
     -26,   -26,     0,     0,     0,     0,     0,   -26,   -26,     0,
     -26,   -26,   -26,   -26,    33,    34,    35,    36,     0,    37,
       0,    38,    39,    40,    41,    42,     0,     0,     0,     0,
       0,    43,    44,     0,    45,    46,   120,    47,   -28,   -28,
     -28,   -28,     0,   -28,     0,   -28,   -28,   -28,   -28,   -28,
       0,     0,     0,     0,     0,   -28,   -28,     0,   -28,   -28,
     -28,   -28,    33,    34,    35,    36,     0,    37,     0,    38,
      39,    40,    41,    42,     0,     0,     0,     0,     0,    43,
      44,     0,    45,    46,   138,    47,   -44,   -44,   -44,   -44,
       0,   -44,     0,   -44,   -44,   -44,   -44,   -44,     0,     0,
       0,     0,     0,   -44,   -44,     0,   -44,   -44,   -44,   -44,
     -46,   -46,   -46,   -46,     0,   -46,     0,   -46,   -46,   -46,
     -46,   -46,     0,     0,     0,     0,     0,   -46,   -46,     0,
     -46,   -46,   -46,   -46,    33,    34,    35,    36,     0,    37,
       0,    38,    39,    40,    41,    42,     0,     0,     0,     0,
       0,    43,    44,     0,    45,    46,   254,    47,    33,    34,
      35,    36,     0,   179,     0,   180,    39,    40,    41,    42,
       0,     0,     0,     0,     0,    43,    44,     0,    45,   123,
       0,    47,   -43,   -43,   -43,   -43,     0,   -43,     0,   -43,
     -43,   -43,   -43,   -43,     0,     0,     0,     0,     0,   -43,
     -43,     0,   -43,   -43,     0,   -43,    33,    34,    35,    36,
       0,    37,     0,    38,    39,    40,    41,    42,     0,     0,
       0,     0,     0,    43,    44,     0,    45,    46,     0,    47,
      33,    34,    35,    36,     0,   179,     0,   180,    39,    40,
      41,    42,     0,   -45,   -45,     0,   -45,    43,    44,     0,
      45,   242,     0,    47,   -45,     0,     0,     0,     0,     0,
     -45,   -45,     0,   -45,     0,     0,   -45,   -70,   -70,   -70,
     -70,     0,   -70,     0,     0,   -70,   -71,   -71,   -71,   -71,
     -70,   -71,   -70,     0,   -71,   -72,   -72,   -72,   -72,   -71,
     -72,   -71,     0,   -72,   -61,   204,   -61,   -61,   -72,   -61,
     -72,     0,   -61,   -63,   -63,   -63,   -63,   -61,   -63,   -61,
       0,   -63,   -65,   -65,   -65,   -65,   -63,   -65,   -63,     0,
     -65,   -67,   -67,   -67,   -67,   -65,   -67,   -65,     0,   -67,
     -66,   -66,   -66,   -66,   -67,   -66,   -67,     0,   -66,   -60,
     204,   -60,   -60,   -66,   -60,   -66,     0,   -60,   -64,   -64,
     -64,   -64,   -60,   -64,   -60,     0,   -64,   -75,   -75,   -75,
     -75,   -64,   -75,   -64,     0,   -75,   -68,   -68,   -68,   -68,
     -75,   -68,   -75,     0,   -68,   -59,   204,   -59,   -59,   -68,
     -59,   -68,     0,   -59,   -62,   -62,   -62,   -62,   -59,   -62,
     -59,     0,   -62,   -74,   -74,   -74,   -74,   -62,   -74,   -62,
       0,   -74,   203,     0,   -57,   -57,   -74,   -57,   -74,     0,
     -57,   -76,   -76,   -76,   -76,   -57,   -76,   -57,     0,   -76,
       0,     0,     0,    72,     0,   -76,   -72,   -72,   -72,   -72,
       0,   -72,     0,     0,   -72,     0,   -61,    93,   -61,   -61,
     -72,   -61,     0,     0,   -61,     0,   -63,   -63,   -63,   -63,
     -61,   -63,     0,     0,   -63,     0,   -65,   -65,   -65,   -65,
     -63,   -65,     0,     0,   -65,     0,   -67,   -67,   -67,   -67,
     -65,   -67,     0,     0,   -67,     0,   -66,   -66,   -66,   -66,
     -67,   -66,     0,     0,   -66,     0,   -60,    93,   -60,   -60,
     -66,   -60,     0,     0,   -60,     0,   -64,   -64,   -64,   -64,
     -60,   -64,     0,     0,   -64,     0,   -75,   -75,   -75,   -75,
     -64,   -75,     0,     0,   -75,     0,   -68,   -68,   -68,   -68,
     -75,   -68,     0,     0,   -68,     0,   -59,    93,   -59,   -59,
     -68,   -59,     0,     0,   -59,     0,   -62,   -62,   -62,   -62,
     -59,   -62,     0,     0,   -62,     0,   -74,   -74,   -74,   -74,
     -62,   -74,     0,    92,   -74,   -56,   -56,     0,   -56,     0,
     -74,   -56,     0,    92,     0,   -57,   -57,   -56,   -57,     0,
       0,   -57,     0,   -76,   -76,   -76,   -76,   -57,   -76,     0,
       0,   -76,     0,     0,     0,   185,   -76,   -69,   -69,   -69,
     -69,     0,   -69,     0,     0,   -69,   -70,   -70,   -70,   -70,
     -69,   -70,     0,     0,   -70,   -71,   -71,   -71,   -71,   -70,
     -71,     0,     0,   -71,   -72,   -72,   -72,   -72,   -71,   -72,
       0,     0,   -72,   -61,   194,   -61,   -61,   -72,   -61,     0,
       0,   -61,   -63,   -63,   -63,   -63,   -61,   -63,     0,     0,
     -63,   -65,   -65,   -65,   -65,   -63,   -65,     0,     0,   -65,
     -67,   -67,   -67,   -67,   -65,   -67,     0,     0,   -67,   -66,
     -66,   -66,   -66,   -67,   -66,     0,     0,   -66,   -60,   194,
     -60,   -60,   -66,   -60,     0,     0,   -60,   -64,   -64,   -64,
     -64,   -60,   -64,     0,     0,   -64,   -75,   -75,   -75,   -75,
     -64,   -75,     0,     0,   -75,   -68,   -68,   -68,   -68,   -75,
     -68,     0,     0,   -68,   -59,   194,   -59,   -59,   -68,   -59,
       0,     0,   -59,   -62,   -62,   -62,   -62,   -59,   -62,     0,
       0,   -62,   -74,   -74,   -74,   -74,   -62,   -74,     0,   193,
     -74,   -56,   -56,     0,   -56,   -74,   193,   -56,   -57,   -57,
       0,   -57,   -56,     0,   -57,   -54,   -54,     0,   201,   -57,
       0,   202,     0,     0,   -54,   -54,   -54,    90,   -54,     0,
      91,   -54,   -54,     0,   191,     0,   -54,   192,     0,     0,
       0,     0,   -54
};

static const yytype_int16 yycheck[] =
{
      31,    49,     5,    16,    17,    16,    17,   116,   116,    39,
     210,    26,    42,    28,    44,    28,    27,    47,    29,   219,
     116,    69,     3,     4,    27,     6,    16,    14,    15,    16,
      17,    18,    19,   116,    16,    22,     0,    27,    16,    20,
      21,    28,    23,    73,    74,    26,    28,    77,    78,    27,
      81,    29,    74,     3,     4,   185,     6,   105,    88,    89,
      90,    91,    92,    93,    94,   195,   116,    39,    98,     0,
      20,    21,    28,    23,     5,    47,    26,    14,    15,    16,
      17,    18,    19,    16,    17,    22,     1,   135,   136,    26,
       5,    28,   122,   141,   116,    28,     0,     0,   128,   130,
       4,    73,     5,    16,    17,    77,    19,   137,    26,    22,
       3,     4,     6,     6,    27,   137,    29,   147,     5,   149,
       0,   151,    94,   232,   232,     5,    98,    20,    21,     0,
      23,   240,   240,    26,     5,   165,   232,   167,    27,   169,
       0,    24,   251,   251,   240,     5,    42,    16,    17,   232,
     122,    47,    26,     6,    28,   251,   128,   240,    27,   189,
     190,   191,   192,   193,   194,    27,    27,    29,   251,   199,
     200,   201,   202,   203,   204,   205,   206,    73,   208,   151,
     210,    77,   232,    27,   206,    29,     0,    16,    17,   219,
     240,     5,   240,    24,    16,    17,    92,   169,    27,    26,
      29,   251,    98,   251,   252,    27,    27,   237,    29,     0,
     232,   241,    44,    26,     5,    47,     0,   248,   240,   241,
      26,     5,    14,    47,    16,    17,   122,    19,    26,   251,
      22,    28,    27,   205,    29,    27,   208,    29,   210,     3,
       4,    73,     6,    28,    27,    77,    29,   219,    28,    73,
      14,   147,    27,    77,    29,   151,    20,    21,    27,    23,
      29,    93,    26,    27,    88,   237,    98,    28,    27,   165,
      29,     6,     7,   169,    98,    28,    14,    15,    16,    17,
      27,    19,    29,    27,    22,    29,     6,     7,    26,    27,
     122,    29,    28,   189,   190,   191,   192,   193,   122,    47,
      28,     6,     7,   199,   200,   201,   202,   203,    14,   205,
      16,    17,   208,    19,   210,   147,    22,   149,    28,   151,
       6,     6,    28,   219,    28,    73,     6,   151,    27,    77,
      28,     3,     4,   165,     6,   167,    27,   169,    14,    15,
      16,    17,    14,    19,    18,   169,    22,    28,    20,    21,
      98,    23,    28,    18,    26,    27,    27,   189,   190,   191,
     192,   193,   194,    47,    27,   189,    28,   199,   200,   201,
     202,   203,   204,   205,   122,   199,   208,    14,   210,    16,
      17,   205,    19,    28,   208,    22,   210,   219,    27,    73,
      27,    27,    29,    77,    28,   219,    28,    28,    28,   147,
      26,   149,    26,   151,    18,     3,     4,    47,     6,    28,
      14,    15,    16,    17,    98,    19,    14,   165,    22,   167,
      27,   169,    20,    21,    28,    23,    27,     4,    26,    27,
      27,   242,    28,    73,    27,   238,    28,    77,   122,    28,
      28,   189,   190,   191,   192,   193,   194,    47,    27,    89,
      24,   199,   200,   201,   202,   203,   204,   205,    98,   232,
     208,   233,   210,   147,    -1,   149,    -1,   151,    -1,     3,
       4,   219,     6,    73,    -1,    -1,    -1,    77,    -1,    -1,
      14,   165,   122,   167,    -1,   169,    20,    21,    -1,    23,
      90,    91,    26,    16,    17,    -1,    19,    -1,    98,    22,
      -1,    -1,    47,    -1,    27,   189,   190,   191,   192,   193,
     194,   151,    -1,    -1,    -1,   199,   200,   201,   202,   203,
     204,   205,   122,    -1,   208,    -1,   210,    -1,    73,   169,
      16,    17,    77,    19,    -1,   219,    22,    -1,    14,    15,
      16,    17,    28,    19,     3,     4,    22,     6,    -1,   189,
     190,   151,    28,    98,    -1,    14,    -1,    -1,    -1,   199,
     200,    20,    21,    -1,    23,   205,    -1,    26,   208,   169,
     210,    -1,    -1,    14,    15,    16,    17,   122,    19,   219,
      -1,    22,    -1,    -1,    -1,    -1,    27,    -1,    29,   189,
     190,   191,   192,    -1,    -1,    -1,    -1,    -1,    -1,   199,
     200,   201,   202,    -1,    -1,   205,   151,    -1,   208,    -1,
     210,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     1,   219,
       3,     4,     5,     6,   169,     8,    -1,    10,    11,    12,
      13,    14,    -1,     3,     4,    -1,     6,    20,    21,    -1,
      23,    24,    -1,    26,    14,    -1,    -1,    -1,    -1,    -1,
      20,    21,    -1,    23,    -1,    -1,    26,    -1,    -1,    14,
     205,    16,    17,   208,    19,   210,     1,    22,     3,     4,
       5,     6,    27,     8,   219,    10,    11,    12,    13,    14,
      -1,    -1,    -1,    -1,    -1,    20,    21,    -1,    23,    24,
       1,    26,     3,     4,     5,     6,    -1,     8,    -1,    10,
      11,    12,    13,    14,    -1,    -1,    -1,    -1,    -1,    20,
      21,    -1,    23,    24,     1,    26,     3,     4,     5,     6,
      -1,     8,    -1,    10,    11,    12,    13,    14,    -1,    -1,
      -1,    -1,    -1,    20,    21,    -1,    23,    24,    -1,    26,
       3,     4,     5,     6,    -1,     8,     9,    10,    11,    12,
      13,    14,    -1,    -1,    -1,    -1,    -1,    20,    21,    -1,
      23,    24,    25,    26,     3,     4,     5,     6,    -1,     8,
       9,    10,    11,    12,    13,    14,    -1,    -1,    -1,    -1,
      -1,    20,    21,    -1,    23,    24,    25,    26,     3,     4,
       5,     6,    -1,     8,     9,    10,    11,    12,    13,    14,
      -1,    -1,    -1,    -1,    -1,    20,    21,    -1,    23,    24,
      25,    26,     3,     4,     5,     6,    -1,     8,     9,    10,
      11,    12,    13,    14,    -1,    -1,    -1,    -1,    -1,    20,
      21,    -1,    23,    24,    25,    26,     3,     4,     5,     6,
      -1,     8,     9,    10,    11,    12,    13,    14,    -1,    -1,
      -1,    -1,    -1,    20,    21,    -1,    23,    24,    25,    26,
       3,     4,     5,     6,    -1,     8,     9,    10,    11,    12,
      13,    14,    -1,    -1,    -1,    -1,    -1,    20,    21,    -1,
      23,    24,    25,    26,     3,     4,     5,     6,    -1,     8,
       9,    10,    11,    12,    13,    14,    -1,    -1,    -1,    -1,
      -1,    20,    21,    -1,    23,    24,    25,    26,     3,     4,
       5,     6,    -1,     8,     9,    10,    11,    12,    13,    14,
      -1,    -1,    -1,    -1,    -1,    20,    21,    -1,    23,    24,
      25,    26,     3,     4,     5,     6,    -1,     8,     9,    10,
      11,    12,    13,    14,    -1,    -1,    -1,    -1,    -1,    20,
      21,    -1,    23,    24,    25,    26,     3,     4,     5,     6,
      -1,     8,     9,    10,    11,    12,    13,    14,    -1,    -1,
      -1,    -1,    -1,    20,    21,    -1,    23,    24,    25,    26,
       3,     4,     5,     6,    -1,     8,     9,    10,    11,    12,
      13,    14,    -1,    -1,    -1,    -1,    -1,    20,    21,    -1,
      23,    24,    25,    26,     3,     4,     5,     6,    -1,     8,
       9,    10,    11,    12,    13,    14,    -1,    -1,    -1,    -1,
      -1,    20,    21,    -1,    23,    24,    25,    26,     3,     4,
       5,     6,    -1,     8,     9,    10,    11,    12,    13,    14,
      -1,    -1,    -1,    -1,    -1,    20,    21,    -1,    23,    24,
      25,    26,     3,     4,     5,     6,    -1,     8,     9,    10,
      11,    12,    13,    14,    -1,    -1,    -1,    -1,    -1,    20,
      21,    -1,    23,    24,    25,    26,     3,     4,     5,     6,
      -1,     8,     9,    10,    11,    12,    13,    14,    -1,    -1,
      -1,    -1,    -1,    20,    21,    -1,    23,    24,    25,    26,
       3,     4,     5,     6,    -1,     8,    -1,    10,    11,    12,
      13,    14,    -1,    -1,    -1,    -1,    -1,    20,    21,    -1,
      23,    24,    25,    26,     3,     4,     5,     6,    -1,     8,
      -1,    10,    11,    12,    13,    14,    -1,    -1,    -1,    -1,
      -1,    20,    21,    -1,    23,    24,    25,    26,     3,     4,
       5,     6,    -1,     8,    -1,    10,    11,    12,    13,    14,
      -1,    -1,    -1,    -1,    -1,    20,    21,    -1,    23,    24,
      25,    26,     3,     4,     5,     6,    -1,     8,    -1,    10,
      11,    12,    13,    14,    -1,    -1,    -1,    -1,    -1,    20,
      21,    -1,    23,    24,    25,    26,     3,     4,     5,     6,
      -1,     8,    -1,    10,    11,    12,    13,    14,    -1,    -1,
      -1,    -1,    -1,    20,    21,    -1,    23,    24,    25,    26,
       3,     4,     5,     6,    -1,     8,    -1,    10,    11,    12,
      13,    14,    -1,    -1,    -1,    -1,    -1,    20,    21,    -1,
      23,    24,    25,    26,     3,     4,     5,     6,    -1,     8,
      -1,    10,    11,    12,    13,    14,    -1,    -1,    -1,    -1,
      -1,    20,    21,    -1,    23,    24,    25,    26,     3,     4,
       5,     6,    -1,     8,    -1,    10,    11,    12,    13,    14,
      -1,    -1,    -1,    -1,    -1,    20,    21,    -1,    23,    24,
      25,    26,     3,     4,     5,     6,    -1,     8,    -1,    10,
      11,    12,    13,    14,    -1,    -1,    -1,    -1,    -1,    20,
      21,    -1,    23,    24,    25,    26,     3,     4,     5,     6,
      -1,     8,    -1,    10,    11,    12,    13,    14,    -1,    -1,
      -1,    -1,    -1,    20,    21,    -1,    23,    24,    25,    26,
       3,     4,     5,     6,    -1,     8,    -1,    10,    11,    12,
      13,    14,    -1,    -1,    -1,    -1,    -1,    20,    21,    -1,
      23,    24,    25,    26,     3,     4,     5,     6,    -1,     8,
      -1,    10,    11,    12,    13,    14,    -1,    -1,    -1,    -1,
      -1,    20,    21,    -1,    23,    24,    25,    26,     3,     4,
       5,     6,    -1,     8,    -1,    10,    11,    12,    13,    14,
      -1,    -1,    -1,    -1,    -1,    20,    21,    -1,    23,    24,
      25,    26,     3,     4,     5,     6,    -1,     8,    -1,    10,
      11,    12,    13,    14,    -1,    -1,    -1,    -1,    -1,    20,
      21,    -1,    23,    24,    25,    26,     3,     4,     5,     6,
      -1,     8,    -1,    10,    11,    12,    13,    14,    -1,    -1,
      -1,    -1,    -1,    20,    21,    -1,    23,    24,    25,    26,
       3,     4,     5,     6,    -1,     8,    -1,    10,    11,    12,
      13,    14,    -1,    -1,    -1,    -1,    -1,    20,    21,    -1,
      23,    24,    25,    26,     3,     4,     5,     6,    -1,     8,
      -1,    10,    11,    12,    13,    14,    -1,    -1,    -1,    -1,
      -1,    20,    21,    -1,    23,    24,    25,    26,     3,     4,
       5,     6,    -1,     8,    -1,    10,    11,    12,    13,    14,
      -1,    -1,    -1,    -1,    -1,    20,    21,    -1,    23,    24,
      -1,    26,     3,     4,     5,     6,    -1,     8,    -1,    10,
      11,    12,    13,    14,    -1,    -1,    -1,    -1,    -1,    20,
      21,    -1,    23,    24,    -1,    26,     3,     4,     5,     6,
      -1,     8,    -1,    10,    11,    12,    13,    14,    -1,    -1,
      -1,    -1,    -1,    20,    21,    -1,    23,    24,    -1,    26,
       3,     4,     5,     6,    -1,     8,    -1,    10,    11,    12,
      13,    14,    -1,     3,     4,    -1,     6,    20,    21,    -1,
      23,    24,    -1,    26,    14,    -1,    -1,    -1,    -1,    -1,
      20,    21,    -1,    23,    -1,    -1,    26,    14,    15,    16,
      17,    -1,    19,    -1,    -1,    22,    14,    15,    16,    17,
      27,    19,    29,    -1,    22,    14,    15,    16,    17,    27,
      19,    29,    -1,    22,    14,    15,    16,    17,    27,    19,
      29,    -1,    22,    14,    15,    16,    17,    27,    19,    29,
      -1,    22,    14,    15,    16,    17,    27,    19,    29,    -1,
      22,    14,    15,    16,    17,    27,    19,    29,    -1,    22,
      14,    15,    16,    17,    27,    19,    29,    -1,    22,    14,
      15,    16,    17,    27,    19,    29,    -1,    22,    14,    15,
      16,    17,    27,    19,    29,    -1,    22,    14,    15,    16,
      17,    27,    19,    29,    -1,    22,    14,    15,    16,    17,
      27,    19,    29,    -1,    22,    14,    15,    16,    17,    27,
      19,    29,    -1,    22,    14,    15,    16,    17,    27,    19,
      29,    -1,    22,    14,    15,    16,    17,    27,    19,    29,
      -1,    22,    14,    -1,    16,    17,    27,    19,    29,    -1,
      22,    14,    15,    16,    17,    27,    19,    29,    -1,    22,
      -1,    -1,    -1,    26,    -1,    28,    14,    15,    16,    17,
      -1,    19,    -1,    -1,    22,    -1,    14,    15,    16,    17,
      28,    19,    -1,    -1,    22,    -1,    14,    15,    16,    17,
      28,    19,    -1,    -1,    22,    -1,    14,    15,    16,    17,
      28,    19,    -1,    -1,    22,    -1,    14,    15,    16,    17,
      28,    19,    -1,    -1,    22,    -1,    14,    15,    16,    17,
      28,    19,    -1,    -1,    22,    -1,    14,    15,    16,    17,
      28,    19,    -1,    -1,    22,    -1,    14,    15,    16,    17,
      28,    19,    -1,    -1,    22,    -1,    14,    15,    16,    17,
      28,    19,    -1,    -1,    22,    -1,    14,    15,    16,    17,
      28,    19,    -1,    -1,    22,    -1,    14,    15,    16,    17,
      28,    19,    -1,    -1,    22,    -1,    14,    15,    16,    17,
      28,    19,    -1,    -1,    22,    -1,    14,    15,    16,    17,
      28,    19,    -1,    14,    22,    16,    17,    -1,    19,    -1,
      28,    22,    -1,    14,    -1,    16,    17,    28,    19,    -1,
      -1,    22,    -1,    14,    15,    16,    17,    28,    19,    -1,
      -1,    22,    -1,    -1,    -1,    26,    27,    14,    15,    16,
      17,    -1,    19,    -1,    -1,    22,    14,    15,    16,    17,
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
      -1,    22,    14,    15,    16,    17,    27,    19,    -1,    14,
      22,    16,    17,    -1,    19,    27,    14,    22,    16,    17,
      -1,    19,    27,    -1,    22,    16,    17,    -1,    19,    27,
      -1,    22,    -1,    -1,    16,    17,    27,    19,    29,    -1,
      22,    16,    17,    -1,    19,    -1,    28,    22,    -1,    -1,
      -1,    -1,    27
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
      44,    46,    47,    50,    52,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    68,    43,
       6,     7,    26,    26,    26,    58,    68,    26,    26,    63,
      64,    45,    58,    25,    44,    28,    28,    28,    16,    17,
      19,    22,    14,    15,    18,    25,     6,    27,    67,    58,
       6,    57,    68,    58,    68,    43,    27,    60,    61,    62,
      62,    63,    64,    58,    58,    69,    27,    28,    27,    27,
      25,    27,    29,    24,    46,    47,    48,    57,    53,    58,
      49,    28,     9,    28,    58,    43,    51,    28,    25,    44,
      57,    27,    44,     6,     3,     4,     6,    14,    20,    21,
      23,    26,    59,    60,    61,    62,    63,    64,    65,    66,
      68,     6,     3,     4,     6,    14,    20,    21,    23,    26,
      59,    60,    61,    62,    63,    64,    65,    66,    68,     8,
      10,    50,    52,    54,    68,    26,    63,    64,    58,    16,
      17,    19,    22,    14,    15,    26,    63,    64,    58,    16,
      17,    19,    22,    14,    15,    26,    26,    28,    18,    27,
      67,    27,    60,    61,    62,    62,    63,    64,    27,    67,
      27,    60,    61,    62,    62,    63,    64,    58,    57,    58,
      69,    69,    27,    28,    27,    27,    48,    53,     9,    58,
      51,    28,    24,    44,    46,    47,    57,    57,    45,    28,
      28,    27,    43,    44,    25
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    30,    31,    32,    32,    32,    33,    33,    35,    36,
      34,    37,    38,    34,    39,    39,    40,    40,    41,    41,
      42,    42,    43,    43,    43,    44,    44,    45,    44,    44,
      46,    46,    46,    47,    47,    47,    47,    48,    48,    49,
      48,    48,    50,    51,    50,    53,    52,    54,    55,    56,
      57,    58,    59,    59,    60,    60,    61,    61,    61,    62,
      62,    62,    63,    63,    64,    64,    65,    65,    65,    65,
      65,    65,    65,    67,    66,    66,    68,    69,    69
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     1,     1,     2,     1,     0,     0,
       9,     0,     0,     8,     3,     1,     2,     3,     2,     3,
       2,     3,     2,     1,     1,     2,     2,     0,     4,     1,
       1,     1,     2,     1,     1,     1,     1,     2,     2,     0,
       4,     1,     5,     0,     8,     0,    10,     2,     4,     4,
       3,     1,     3,     1,     3,     1,     3,     3,     1,     3,
       2,     1,     3,     1,     2,     1,     1,     1,     3,     1,
       1,     1,     1,     0,     5,     3,     1,     3,     1
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
#line 93 "src/sin_analyser.y"
            { syntaxTree = (yyval.treeNode); }
#line 1906 "src/sin_analyser.tab.c"
    break;

  case 3:
#line 97 "src/sin_analyser.y"
                          {
        (yyval.treeNode) = newNode("PROGRAM", 0, " ");
        (yyval.treeNode)->subtree1 = (yyvsp[-1].treeNode);
        (yyval.treeNode)->subtree2 = (yyvsp[0].treeNode);
    }
#line 1916 "src/sin_analyser.tab.c"
    break;

  case 4:
#line 103 "src/sin_analyser.y"
                  { (yyval.treeNode) = (yyvsp[0].treeNode); }
#line 1922 "src/sin_analyser.tab.c"
    break;

  case 5:
#line 105 "src/sin_analyser.y"
          { (yyval.treeNode) = newNode("ERROR", 0, " "); }
#line 1928 "src/sin_analyser.tab.c"
    break;

  case 6:
#line 109 "src/sin_analyser.y"
               { (yyval.treeNode) = (yyvsp[-1].treeNode); }
#line 1934 "src/sin_analyser.tab.c"
    break;

  case 7:
#line 111 "src/sin_analyser.y"
              { (yyval.treeNode) = (yyvsp[0].treeNode); }
#line 1940 "src/sin_analyser.tab.c"
    break;

  case 8:
#line 115 "src/sin_analyser.y"
           {
        changeScope(1);
    }
#line 1948 "src/sin_analyser.tab.c"
    break;

  case 9:
#line 117 "src/sin_analyser.y"
             {
        updateParams(table, params);
        params = 0;
    }
#line 1957 "src/sin_analyser.tab.c"
    break;

  case 10:
#line 120 "src/sin_analyser.y"
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
#line 2002 "src/sin_analyser.tab.c"
    break;

  case 11:
#line 161 "src/sin_analyser.y"
            {
        updateParams(table, params);
    }
#line 2010 "src/sin_analyser.tab.c"
    break;

  case 12:
#line 163 "src/sin_analyser.y"
            {
        changeScope(1);
    }
#line 2018 "src/sin_analyser.tab.c"
    break;

  case 13:
#line 165 "src/sin_analyser.y"
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
#line 2062 "src/sin_analyser.tab.c"
    break;

  case 14:
#line 207 "src/sin_analyser.y"
                           {
        params++;
        (yyval.treeNode) = newNode("PARAMS", 0, " ");
        (yyval.treeNode)->subtree1 = (yyvsp[-2].treeNode);
        (yyval.treeNode)->subtree2 = (yyvsp[0].treeNode);
    }
#line 2073 "src/sin_analyser.tab.c"
    break;

  case 15:
#line 214 "src/sin_analyser.y"
          { 
        params++;
        (yyval.treeNode) = (yyvsp[0].treeNode);
    }
#line 2082 "src/sin_analyser.tab.c"
    break;

  case 16:
#line 221 "src/sin_analyser.y"
            {
        // reg++;
        newSymbol(table, (yyvsp[0].lex).id, (yyvsp[-1].lex).id, "PAR      ", (yyvsp[0].lex).line, (yyvsp[0].lex).col, stack[scope_pos], params+1, reg);   
        (yyval.treeNode) = newNode(strcat(strcat((yyvsp[-1].lex).id," var "), (yyvsp[0].lex).id), checkType(table, (yyvsp[0].lex).id, stack[scope_pos], 1), " ");
    }
#line 2092 "src/sin_analyser.tab.c"
    break;

  case 17:
#line 227 "src/sin_analyser.y"
                 {
        // reg++;
        newSymbol(table, (yyvsp[0].lex).id, strcat((yyvsp[-2].lex).id," list"), "LIST PAR ",(yyvsp[0].lex).line, (yyvsp[0].lex).col, stack[scope_pos], params+1, reg);
        (yyval.treeNode) = newNode(strcat(strcat((yyvsp[-2].lex).id," "), (yyvsp[0].lex).id), checkType(table, (yyvsp[0].lex).id, stack[scope_pos], 1), " ");
    }
#line 2102 "src/sin_analyser.tab.c"
    break;

  case 18:
#line 235 "src/sin_analyser.y"
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
#line 2127 "src/sin_analyser.tab.c"
    break;

  case 19:
#line 256 "src/sin_analyser.y"
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
#line 2153 "src/sin_analyser.tab.c"
    break;

  case 20:
#line 280 "src/sin_analyser.y"
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
#line 2171 "src/sin_analyser.tab.c"
    break;

  case 21:
#line 294 "src/sin_analyser.y"
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
#line 2189 "src/sin_analyser.tab.c"
    break;

  case 22:
#line 310 "src/sin_analyser.y"
                    {
        (yyval.treeNode) = newNode("BLOCK", 0, " ");
        (yyval.treeNode)->subtree1 = (yyvsp[-1].treeNode);
        (yyval.treeNode)->subtree2 = (yyvsp[0].treeNode);
        (yyval.treeNode)->type = (yyval.treeNode)->subtree2->type;
    }
#line 2200 "src/sin_analyser.tab.c"
    break;

  case 23:
#line 317 "src/sin_analyser.y"
              { (yyval.treeNode) = (yyvsp[0].treeNode); }
#line 2206 "src/sin_analyser.tab.c"
    break;

  case 24:
#line 319 "src/sin_analyser.y"
          { (yyval.treeNode) = newNode("ERROR", 0, " "); }
#line 2212 "src/sin_analyser.tab.c"
    break;

  case 25:
#line 323 "src/sin_analyser.y"
             { (yyval.treeNode) = (yyvsp[-1].treeNode); }
#line 2218 "src/sin_analyser.tab.c"
    break;

  case 26:
#line 325 "src/sin_analyser.y"
              { (yyval.treeNode) = (yyvsp[-1].treeNode); }
#line 2224 "src/sin_analyser.tab.c"
    break;

  case 27:
#line 327 "src/sin_analyser.y"
       {
        changeScope(1);
    }
#line 2232 "src/sin_analyser.tab.c"
    break;

  case 28:
#line 329 "src/sin_analyser.y"
               { 
        (yyval.treeNode) = (yyvsp[-1].treeNode);
        changeScope(0);
    }
#line 2241 "src/sin_analyser.tab.c"
    break;

  case 29:
#line 334 "src/sin_analyser.y"
             { (yyval.treeNode) = (yyvsp[0].treeNode); }
#line 2247 "src/sin_analyser.tab.c"
    break;

  case 30:
#line 338 "src/sin_analyser.y"
            { (yyval.treeNode) = (yyvsp[0].treeNode); }
#line 2253 "src/sin_analyser.tab.c"
    break;

  case 31:
#line 340 "src/sin_analyser.y"
        { (yyval.treeNode) = (yyvsp[0].treeNode); }
#line 2259 "src/sin_analyser.tab.c"
    break;

  case 32:
#line 342 "src/sin_analyser.y"
               { (yyval.treeNode) = (yyvsp[-1].treeNode); }
#line 2265 "src/sin_analyser.tab.c"
    break;

  case 33:
#line 346 "src/sin_analyser.y"
              { (yyval.treeNode) = (yyvsp[0].treeNode); }
#line 2271 "src/sin_analyser.tab.c"
    break;

  case 34:
#line 348 "src/sin_analyser.y"
           { (yyval.treeNode) = (yyvsp[0].treeNode); }
#line 2277 "src/sin_analyser.tab.c"
    break;

  case 35:
#line 350 "src/sin_analyser.y"
          { (yyval.treeNode) = (yyvsp[0].treeNode); }
#line 2283 "src/sin_analyser.tab.c"
    break;

  case 36:
#line 352 "src/sin_analyser.y"
           { (yyval.treeNode) = (yyvsp[0].treeNode); }
#line 2289 "src/sin_analyser.tab.c"
    break;

  case 37:
#line 356 "src/sin_analyser.y"
             { (yyval.treeNode) = (yyvsp[-1].treeNode); }
#line 2295 "src/sin_analyser.tab.c"
    break;

  case 38:
#line 358 "src/sin_analyser.y"
              { (yyval.treeNode) = (yyvsp[-1].treeNode); }
#line 2301 "src/sin_analyser.tab.c"
    break;

  case 39:
#line 360 "src/sin_analyser.y"
       {
        sprintf(if_loop, "L%d", loop);
        loop++;
        sprintf(end_loop, "L%d", loop);
        loop++;
        strcat(tacCode, "jump ");
        strcat(tacCode, end_loop);
        strcat(tacCode, "\n");
        strcat(tacCode, if_loop);
        strcat(tacCode, ":\n");
        strcat(tacCode, "not ");
        strcat(tacCode, reg_num);
        strcat(tacCode, ", ");
        strcat(tacCode, reg_num);
        strcat(tacCode, "\n");
        changeScope(1);
    }
#line 2323 "src/sin_analyser.tab.c"
    break;

  case 40:
#line 376 "src/sin_analyser.y"
               { 
        (yyval.treeNode) = (yyvsp[-1].treeNode);
        changeScope(0);
    }
#line 2332 "src/sin_analyser.tab.c"
    break;

  case 41:
#line 381 "src/sin_analyser.y"
             { (yyval.treeNode) = (yyvsp[0].treeNode); }
#line 2338 "src/sin_analyser.tab.c"
    break;

  case 42:
#line 385 "src/sin_analyser.y"
                                               {
        (yyval.treeNode) = newNode("IF", 0, " ");
        (yyval.treeNode)->subtree1 = (yyvsp[-2].treeNode);
        (yyval.treeNode)->subtree2 = (yyvsp[0].treeNode);
        (yyval.treeNode)->type = (yyval.treeNode)->subtree2->type;
        strcat(tacCode, end_loop);
        strcat(tacCode, ":\nbrnz ");
        strcat(tacCode, if_loop);
        strcat(tacCode, ", ");
        strcat(tacCode, (yyval.treeNode)->subtree1->tac);
        strcat(tacCode, "\n");
    }
#line 2355 "src/sin_analyser.tab.c"
    break;

  case 43:
#line 398 "src/sin_analyser.y"
                                         {
        sprintf(else_loop, "L%d", loop);
        loop++;
        sprintf(finish_loop, "L%d", loop);
        loop++;
        strcat(tacCode, "jump ");
        strcat(tacCode, finish_loop);
        strcat(tacCode, "\n");
        strcat(tacCode, else_loop);
        strcat(tacCode, ":\n");
    }
#line 2371 "src/sin_analyser.tab.c"
    break;

  case 44:
#line 408 "src/sin_analyser.y"
                {
        (yyval.treeNode) = newNode("IF ELSE", 0, " ");
        (yyval.treeNode)->subtree1 = (yyvsp[-5].treeNode);
        (yyval.treeNode)->subtree2 = (yyvsp[-3].treeNode);
        (yyval.treeNode)->subtree3 = (yyvsp[0].treeNode);
        (yyval.treeNode)->type = (yyval.treeNode)->subtree3->type;
        strcat(tacCode, "jump ");
        strcat(tacCode, finish_loop);
        strcat(tacCode, "\n");
        strcat(tacCode, end_loop);
        strcat(tacCode, ":\nbrnz ");
        strcat(tacCode, if_loop);
        strcat(tacCode, ", ");
        strcat(tacCode, (yyval.treeNode)->subtree1->tac);
        strcat(tacCode, "\n");
        strcat(tacCode, "jump ");
        strcat(tacCode, else_loop);
        strcat(tacCode, "\n");
        strcat(tacCode, finish_loop);
        strcat(tacCode, ":\n");
    }
#line 2397 "src/sin_analyser.tab.c"
    break;

  case 45:
#line 432 "src/sin_analyser.y"
                     {
        sprintf(for_loop, "L%d", loop);
        loop++;
        strcat(tacCode, for_loop);
        strcat(tacCode, ":\n");
    }
#line 2408 "src/sin_analyser.tab.c"
    break;

  case 46:
#line 437 "src/sin_analyser.y"
                                        {
        (yyval.treeNode) = newNode("FOR", 0, " ");
        (yyval.treeNode)->subtree1 = (yyvsp[-7].treeNode);
        (yyval.treeNode)->subtree2 = (yyvsp[-4].treeNode);
        (yyval.treeNode)->subtree3 = (yyvsp[-2].treeNode);
        (yyval.treeNode)->subtree4 = (yyvsp[0].treeNode);
        (yyval.treeNode)->type = (yyval.treeNode)->subtree4->type;
        strcat(tacCode, "brnz ");
        strcat(tacCode, for_loop);
        strcat(tacCode, ", ");
        strcat(tacCode, (yyval.treeNode)->subtree2->tac);
        strcat(tacCode, "\n");
    }
#line 2426 "src/sin_analyser.tab.c"
    break;

  case 47:
#line 453 "src/sin_analyser.y"
                     {
        (yyval.treeNode) = newNode("RETURN", 0, " ");
        (yyval.treeNode)->subtree1 = (yyvsp[0].treeNode);
        (yyval.treeNode)->type = (yyval.treeNode)->subtree1->type;
        strcat(tacCode, "return ");
        strcat(tacCode, (yyval.treeNode)->subtree1->tac);
        strcat(tacCode, "\n");
    }
#line 2439 "src/sin_analyser.tab.c"
    break;

  case 48:
#line 464 "src/sin_analyser.y"
                {
        (yyval.treeNode) = newNode("IN", 0, " ");
        (yyval.treeNode)->subtree1 = (yyvsp[-1].treeNode);
        if((yyval.treeNode)->subtree1->type == 1) strcat(tacCode, "scani ");
        else strcat(tacCode, "scanf ");
        strcat(tacCode, (yyval.treeNode)->subtree1->tac);
        strcat(tacCode, "\n");
    }
#line 2452 "src/sin_analyser.tab.c"
    break;

  case 49:
#line 475 "src/sin_analyser.y"
                        { 
        (yyval.treeNode) = newNode("OUT", 0, " ");
        (yyval.treeNode)->subtree1 = (yyvsp[-1].treeNode);
        if((yyval.treeNode)->subtree1->type == 0){ // Cria um loop para printar cada caracter de um literal.
            sprintf(loop_num, "L%d", loop);
            loop++;
            sprintf(reg_num, "$%d", reg);
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
#line 2497 "src/sin_analyser.tab.c"
    break;

  case 50:
#line 518 "src/sin_analyser.y"
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
#line 2547 "src/sin_analyser.tab.c"
    break;

  case 51:
#line 566 "src/sin_analyser.y"
           { (yyval.treeNode) = (yyvsp[0].treeNode); }
#line 2553 "src/sin_analyser.tab.c"
    break;

  case 52:
#line 570 "src/sin_analyser.y"
                          {
        (yyval.treeNode) = newNode("LOG OP", 0, " ");
        (yyval.treeNode)->subtree1 = (yyvsp[-2].treeNode);
        (yyval.treeNode)->subtree2 = (yyvsp[0].treeNode);
        if(!strcmp((yyvsp[-1].lex).id, "&&")) strcat(tacCode, "and ");
        else strcat(tacCode, "or ");
        sprintf(reg_num, "$%d", reg);
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
#line 2596 "src/sin_analyser.tab.c"
    break;

  case 53:
#line 609 "src/sin_analyser.y"
           { (yyval.treeNode) = (yyvsp[0].treeNode); }
#line 2602 "src/sin_analyser.tab.c"
    break;

  case 54:
#line 613 "src/sin_analyser.y"
                          {
        (yyval.treeNode) = newNode("REL OP", 0, " ");
        (yyval.treeNode)->subtree1 = (yyvsp[-2].treeNode);
        (yyval.treeNode)->subtree2 = (yyvsp[0].treeNode);
        if(!strcmp((yyvsp[-1].lex).id, "==") || !strcmp((yyvsp[-1].lex).id, "!=")) strcat(tacCode, "seq ");
        else if(!strcmp((yyvsp[-1].lex).id, ">=") || !strcmp((yyvsp[-1].lex).id, "<")) strcat(tacCode, "slt ");
        else strcat(tacCode, "sleq ");
        sprintf(reg_num, "$%d", reg);
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
#line 2657 "src/sin_analyser.tab.c"
    break;

  case 55:
#line 664 "src/sin_analyser.y"
            { (yyval.treeNode) = (yyvsp[0].treeNode); }
#line 2663 "src/sin_analyser.tab.c"
    break;

  case 56:
#line 668 "src/sin_analyser.y"
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
#line 2684 "src/sin_analyser.tab.c"
    break;

  case 57:
#line 685 "src/sin_analyser.y"
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
#line 2705 "src/sin_analyser.tab.c"
    break;

  case 58:
#line 702 "src/sin_analyser.y"
           { (yyval.treeNode) = (yyvsp[0].treeNode); }
#line 2711 "src/sin_analyser.tab.c"
    break;

  case 59:
#line 706 "src/sin_analyser.y"
                       {
        (yyval.treeNode) = newNode("ARI SS OP", 0, " ");
        (yyval.treeNode)->subtree1 = (yyvsp[-2].treeNode);
        (yyval.treeNode)->subtree2 = (yyvsp[0].treeNode);
        if(!strcmp((yyvsp[-1].lex).id, "+")) strcat(tacCode, "add ");
        else strcat(tacCode, "sub ");
        sprintf(reg_num, "$%d", reg);
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
#line 2754 "src/sin_analyser.tab.c"
    break;

  case 60:
#line 745 "src/sin_analyser.y"
                {
        (yyval.treeNode) = newNode("NEGATIVE", 0, " ");
        (yyval.treeNode)->subtree1 = (yyvsp[0].treeNode);
        sprintf(reg_num, "$%d", reg);
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
#line 2777 "src/sin_analyser.tab.c"
    break;

  case 61:
#line 764 "src/sin_analyser.y"
          { (yyval.treeNode) = (yyvsp[0].treeNode); }
#line 2783 "src/sin_analyser.tab.c"
    break;

  case 62:
#line 768 "src/sin_analyser.y"
                      {
        (yyval.treeNode) = newNode("ARI MD OP", 0, " ");
        (yyval.treeNode)->subtree1 = (yyvsp[-2].treeNode);
        (yyval.treeNode)->subtree2 = (yyvsp[0].treeNode);
        if(!strcmp((yyvsp[-1].lex).id, "*")) strcat(tacCode, "mul ");
        else strcat(tacCode, "div ");
        sprintf(reg_num, "$%d", reg);
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
#line 2826 "src/sin_analyser.tab.c"
    break;

  case 63:
#line 807 "src/sin_analyser.y"
          { (yyval.treeNode) = (yyvsp[0].treeNode); }
#line 2832 "src/sin_analyser.tab.c"
    break;

  case 64:
#line 811 "src/sin_analyser.y"
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
#line 2847 "src/sin_analyser.tab.c"
    break;

  case 65:
#line 822 "src/sin_analyser.y"
        { (yyval.treeNode) = (yyvsp[0].treeNode); }
#line 2853 "src/sin_analyser.tab.c"
    break;

  case 66:
#line 826 "src/sin_analyser.y"
       { (yyval.treeNode) = (yyvsp[0].treeNode); }
#line 2859 "src/sin_analyser.tab.c"
    break;

  case 67:
#line 828 "src/sin_analyser.y"
              { (yyval.treeNode) = (yyvsp[0].treeNode); }
#line 2865 "src/sin_analyser.tab.c"
    break;

  case 68:
#line 830 "src/sin_analyser.y"
                    { (yyval.treeNode) = (yyvsp[-1].treeNode); }
#line 2871 "src/sin_analyser.tab.c"
    break;

  case 69:
#line 832 "src/sin_analyser.y"
        { (yyval.treeNode) = newNode((yyvsp[0].lex).id, 1, (yyvsp[0].lex).id); }
#line 2877 "src/sin_analyser.tab.c"
    break;

  case 70:
#line 834 "src/sin_analyser.y"
          { (yyval.treeNode) = newNode((yyvsp[0].lex).id, 2, (yyvsp[0].lex).id); }
#line 2883 "src/sin_analyser.tab.c"
    break;

  case 71:
#line 836 "src/sin_analyser.y"
        { (yyval.treeNode) = newNode("NIL", 3, (yyvsp[0].lex).id); }
#line 2889 "src/sin_analyser.tab.c"
    break;

  case 72:
#line 838 "src/sin_analyser.y"
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
#line 2906 "src/sin_analyser.tab.c"
    break;

  case 73:
#line 853 "src/sin_analyser.y"
          {
        call_scope = searchTable(table, (yyvsp[-1].lex).id, 1, 1, stack, scope_pos);
    }
#line 2914 "src/sin_analyser.tab.c"
    break;

  case 74:
#line 855 "src/sin_analyser.y"
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
#line 2942 "src/sin_analyser.tab.c"
    break;

  case 75:
#line 879 "src/sin_analyser.y"
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
#line 2961 "src/sin_analyser.tab.c"
    break;

  case 76:
#line 896 "src/sin_analyser.y"
       { 
        if(!searchTable(table, (yyvsp[0].lex).id, 0, 0, stack, scope_pos)){
            printf("SEMANTIC ERROR: Variable %s not declared [%d, %d]\n", (yyvsp[0].lex).id, (yyvsp[0].lex).line, (yyvsp[0].lex).col);
            sem_errors++;
        }
        (yyval.treeNode) = newNode((yyvsp[0].lex).id, checkType(table, (yyvsp[0].lex).id, stack[scope_pos], 1), (yyvsp[0].lex).id); 
    }
#line 2973 "src/sin_analyser.tab.c"
    break;

  case 77:
#line 906 "src/sin_analyser.y"
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
#line 2992 "src/sin_analyser.tab.c"
    break;

  case 78:
#line 921 "src/sin_analyser.y"
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
#line 3010 "src/sin_analyser.tab.c"
    break;


#line 3014 "src/sin_analyser.tab.c"

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
#line 936 "src/sin_analyser.y"


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
    
    if(!sin_errors) showTree(syntaxTree, 0);

    showTable(table);
    destroyTree();

    strcat(tacCode, "\n");
    strcat(tacCode, "main:");
    strcat(tacCode, "\n");
    strcat(tacCode, "call _main, 0");
    strcat(tacCode, "\n");
    if(!(sem_errors+sin_errors+lex_errors)) intermediateCode(tacFile, tacTable, tacCode);

    fclose(yyin);
    yylex_destroy();

    return 0;
}

void yyerror(const char* error) {
    printf("\nSYNTAX ERROR: %s [%d, %d]\n", error, line, col);
    sin_errors++;
}
