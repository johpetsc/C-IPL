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
    int param = 0;
    int params = 0;
    int args_ret = 0;
    int call_scope;
    int id_scope;
    int param_error = 0;
    int args = 0;
    char reg_num[5];
    char str_num[5];
    char loop_num[5];
    char for_loop1[5];
    char for_loop2[5];
    char for_loop3[5];
    char list_loop1[5];
    char list_loop2[5];
    char list_loop3[5];
    char list_loop4[5];
    char if_loop[5];
    char else_loop[5];
    char end_loop[5];
    char finish_loop[5];
    char tac[100];
    int main_found = 0;
    int sin_errors = 0;
    int sem_errors = 0;
    char list_int[1000] = "{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}";
    char list_float[1000] = "{.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0}";
    /*Symbol table*/
    extern symbol table[10000];
    /*Syntax Tree*/
    extern treeNode* treeNodes[10000];
    extern treeNode* syntaxTree;

#line 127 "src/sin_analyser.tab.c"

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
#line 63 "src/sin_analyser.y"

    /*Token structure*/
    struct lexToken {
        char id[200];
        int line;
        int col;
    } lex;
    /*Tree node reference*/
    struct treeNode* treeNode;

#line 220 "src/sin_analyser.tab.c"

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
#define YYLAST   2222

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  30
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  41
/* YYNRULES -- Number of rules.  */
#define YYNRULES  80
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  261

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
       0,   108,   108,   112,   118,   120,   124,   126,   130,   132,
     130,   180,   182,   180,   230,   237,   244,   250,   258,   274,
     300,   314,   330,   338,   346,   348,   350,   354,   356,   358,
     358,   365,   369,   371,   373,   377,   379,   381,   385,   387,
     389,   389,   411,   415,   428,   428,   463,   473,   463,   500,
     511,   523,   567,   727,   731,   770,   774,   825,   829,   933,
     982,   986,  1025,  1044,  1048,  1087,  1091,  1182,  1186,  1188,
    1190,  1192,  1194,  1196,  1198,  1213,  1213,  1239,  1256,  1275,
    1290
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
  "$@8", "$@9", "return", "input", "output", "ass_op", "operation",
  "log_op", "rel_op", "list_op", "ari_op", "md_op", "un_op", "val",
  "func_call", "$@10", "id", "func_params", YY_NULLPTR
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

#define YYPACT_NINF (-185)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-81)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      34,     9,    99,    49,    95,   128,   135,   145,    33,   -13,
      66,  -185,   223,     3,   280,    54,    83,    71,   281,   202,
      97,   117,    78,   158,   107,    83,   120,   640,   304,   305,
     103,   670,   670,  1102,  1886,  1896,   238,  1861,   136,   155,
    1667,   165,   176,    22,  1906,    22,  1916,   694,  1680,  1126,
    1150,  1174,  1198,   193,  1222,  1246,   199,   225,   237,   255,
     256,     1,    94,   125,   101,  1926,  1936,  1946,  1956,  1876,
    1270,   284,   296,   252,  1680,   310,   289,  1966,  1680,   315,
    1976,  1986,   670,   308,   282,  1294,  1318,  1342,  1366,  1390,
    1667,  1667,    22,  1667,  1667,    22,  1667,   309,   313,  1996,
    1693,   329,   318,   351,   366,   359,   367,  1414,  2006,   148,
     231,  2016,   260,   283,  2026,   368,   324,   325,   550,  1706,
     372,   374,  1438,  2036,  1693,   718,   742,   377,   766,   381,
    1667,   328,   670,   790,  1606,   814,   384,  1462,  1630,   388,
     838,  1486,   310,   391,  1630,  1510,   215,  2060,  2069,  2046,
     400,  2078,   400,  2087,  1680,    48,    92,   209,   411,  2096,
    2105,  2114,  2123,  2132,  1534,   395,  1558,    52,   522,     5,
     562,  1719,   562,  1728,  1680,    17,    60,    67,  1845,  1737,
    1746,  1755,  1764,  1773,   403,   405,   862,   886,   396,   414,
     323,  2141,  2150,   407,  1680,  1680,   400,  1680,  1680,   400,
     387,  1782,  1791,   409,  1693,  1693,   562,  1693,  1693,   562,
    1680,   310,   910,  1680,  2159,  1693,  2168,   244,   331,  2177,
     344,   371,  2186,  1800,  1693,  1809,   167,   190,  1818,   235,
     274,  1827,   410,   417,   420,   341,   353,   550,  1706,  2195,
    1836,   934,  1667,  1606,   384,  1654,   428,   694,   958,   982,
     429,   431,   310,   670,  1006,  1030,   421,  1582,  1654,  1054,
    1078
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
       0
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -185,  -185,  -185,   458,  -185,  -185,  -185,  -185,  -185,  -185,
     439,     0,  -185,   -31,   -47,   219,  -107,  -106,   230,  -185,
     -55,   227,   -40,   236,   224,   -25,  -185,  -185,   -57,    25,
     115,   455,   398,   423,   100,   168,   245,   311,  -184,   -38,
    -177
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     3,     4,     5,     6,    16,    26,    17,    31,    20,
      21,    49,     8,    50,    51,    82,    52,    53,   128,   132,
      54,   138,    55,   130,   139,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,   100,    69,
     117
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
       7,    70,    77,    86,     7,    77,   215,    77,    -8,    -5,
     163,   126,   127,   -20,    -5,    14,   224,    90,   103,   -78,
     -78,   -78,   -78,    86,   -78,    34,    35,   -78,   146,   -53,
     -11,   200,   -78,   204,   -78,     1,   163,   104,   235,     2,
     163,   106,    44,    45,   -53,    46,   -53,   236,    48,    11,
      85,   107,    77,    77,    77,    77,    77,    77,    77,    13,
      86,   129,   183,   186,   194,    76,   -71,   -71,   -71,   -71,
      85,   -71,    15,    83,   -71,   -53,   -55,   205,   187,   -71,
     -21,   -71,    18,   -57,   -57,   143,   183,   -55,    19,   -55,
      86,   141,    77,   188,   -57,    -2,   -57,   145,    22,   101,
       2,   137,    27,   105,   189,     9,    10,    85,   -55,   195,
     -55,    91,   163,    28,   163,    92,   163,   -60,   -60,   -55,
      93,   115,   -55,    94,    -9,   116,    25,    32,    -4,   -60,
     126,   127,   183,    -4,   183,    -7,   163,    85,   249,   250,
      -7,   -57,   -57,    80,   -15,    -6,   -15,    30,   159,   131,
      -6,   249,   250,   -57,   233,   136,   163,   163,   163,   163,
     163,   163,    74,   155,   -54,    91,   183,   183,   183,   183,
     183,   183,   163,   104,   159,   163,   -54,   183,   159,   193,
     129,    75,   186,   -54,   205,   -16,   183,   -16,   251,   155,
     186,    78,   111,   155,   -54,   256,   -54,   187,   248,   203,
     179,   251,    79,   186,    77,   187,   -56,   -56,    23,    24,
      86,   260,   188,    81,   189,   175,   160,   -56,   187,   -56,
     188,    87,   257,    -3,   179,   -57,   -57,    88,    -3,   -78,
     -78,   -78,   -78,   188,   -78,   232,   -57,   -78,   234,   175,
     116,    73,   160,   -78,    71,    72,   160,   -56,   -56,   116,
     191,   -58,   -58,   -36,   159,   -75,   -75,    85,   -75,   -56,
     -54,   195,   -58,   114,   -58,   -37,   -75,   244,   180,   155,
     201,   -54,   -75,   -75,   159,   -75,   -58,   -58,   -75,    99,
     -18,   -19,   -13,    89,   -35,   -18,   -19,   -13,   -58,   155,
     -59,   -59,   180,   161,   159,   159,   219,   159,   159,   -59,
     -59,   -59,    98,   -59,   179,   179,   228,   179,   179,   -10,
     159,   -59,   164,   159,   -10,   179,   102,   -49,   160,   161,
     192,   165,   160,   161,   179,   155,   -75,   -75,   155,   -75,
     175,   -17,   -14,   -17,   -14,   108,   -78,   -75,   180,   175,
     202,   166,   160,   -75,   -75,   181,   -75,   -56,   -56,   -75,
     214,   -80,   123,   -80,   124,   -79,   118,   -79,   -56,   162,
     -58,   -58,   160,   160,   160,   160,   160,   222,   239,   181,
     124,   -58,   180,   180,   180,   180,   180,   231,   160,   119,
     240,   160,   124,   180,    96,   162,   120,   -59,   -59,   162,
     -75,   -75,   180,   -75,   121,   161,   -52,   161,   -59,   161,
     -51,   -75,   -50,   147,   148,   133,   149,   -75,   -75,   135,
     -75,   182,   -47,   -75,   223,   181,   142,   181,   144,   161,
     151,   152,   -78,   153,   212,   196,   154,   -60,   -60,   210,
     197,   211,   213,   198,   216,   182,   225,   237,   -60,   161,
     161,   161,   161,   161,   161,   238,   157,   -52,   258,   181,
     181,   181,   181,   181,   181,   161,   252,   254,   161,   255,
     181,   162,    12,   162,    29,   162,   253,   241,   246,   181,
     245,   158,   157,     0,   242,     0,   157,     0,     0,     0,
       0,   182,     0,   182,     0,   162,     0,     0,     0,   110,
       0,   112,   113,     0,     0,     0,     0,   158,   177,     0,
       0,   158,     0,   156,     0,   162,   162,   162,   162,   162,
     162,     0,     0,     0,     0,   182,   182,   182,   182,   182,
     182,   162,   177,   178,   162,     0,   182,     0,     0,   156,
       0,     0,     0,   156,     0,   182,   -72,   -72,   -72,   -72,
       0,   -72,     0,     0,   -72,   109,     0,   178,     0,   -72,
       0,   -72,   157,    34,    35,   176,    37,     0,   184,     0,
     185,    40,    41,    42,    43,   167,   168,     0,   169,     0,
      44,    45,   157,    46,   125,     0,    48,   158,     0,   176,
       0,     0,   171,   172,     0,   173,     0,     0,   174,     0,
       0,     0,   157,   218,     0,   220,   221,   158,     0,     0,
       0,     0,   177,   227,     0,   229,   230,     0,   157,   156,
       0,   157,     0,   177,     0,     0,     0,   158,   158,     0,
     158,   158,   177,     0,     0,     0,     0,   178,   178,   156,
     178,   178,     0,   158,     0,     0,   158,     0,   178,     0,
       0,   -12,     0,   -12,   -12,   -12,   -12,   178,   -12,   217,
     -12,   -12,   -12,   -12,   -12,     0,     0,     0,     0,   226,
     -12,   -12,     0,   -12,   -12,   156,   -12,     0,   156,     0,
     176,    33,     0,    34,    35,    36,    37,     0,    38,   176,
      39,    40,    41,    42,    43,     0,     0,     0,     0,     0,
      44,    45,     0,    46,    47,   -29,    48,   -29,   -29,   -29,
     -29,     0,   -29,     0,   -29,   -29,   -29,   -29,   -29,     0,
       0,     0,     0,     0,   -29,   -29,     0,   -29,   -29,   -40,
     -29,   -40,   -40,   -40,   -40,     0,   -40,     0,   -40,   -40,
     -40,   -40,   -40,     0,     0,     0,     0,     0,   -40,   -40,
       0,   -40,   -40,     0,   -40,   -42,   -42,   -42,   -42,     0,
     -42,   -42,   -42,   -42,   -42,   -42,   -42,     0,     0,     0,
       0,     0,   -42,   -42,     0,   -42,   -42,   -42,   -42,   -43,
     -43,   -43,   -43,     0,   -43,   134,   -43,   -43,   -43,   -43,
     -43,     0,     0,     0,     0,     0,   -43,   -43,     0,   -43,
     -43,   -43,   -43,   -38,   -38,   -38,   -38,     0,   -38,   -38,
     -38,   -38,   -38,   -38,   -38,     0,     0,     0,     0,     0,
     -38,   -38,     0,   -38,   -38,   -38,   -38,   -39,   -39,   -39,
     -39,     0,   -39,   -39,   -39,   -39,   -39,   -39,   -39,     0,
       0,     0,     0,     0,   -39,   -39,     0,   -39,   -39,   -39,
     -39,   -41,   -41,   -41,   -41,     0,   -41,   -41,   -41,   -41,
     -41,   -41,   -41,     0,     0,     0,     0,     0,   -41,   -41,
       0,   -41,   -41,   -41,   -41,   -32,   -32,   -32,   -32,     0,
     -32,   -32,   -32,   -32,   -32,   -32,   -32,     0,     0,     0,
       0,     0,   -32,   -32,     0,   -32,   -32,   -32,   -32,   -33,
     -33,   -33,   -33,     0,   -33,   -33,   -33,   -33,   -33,   -33,
     -33,     0,     0,     0,     0,     0,   -33,   -33,     0,   -33,
     -33,   -33,   -33,   -34,   -34,   -34,   -34,     0,   -34,   -34,
     -34,   -34,   -34,   -34,   -34,     0,     0,     0,     0,     0,
     -34,   -34,     0,   -34,   -34,   -34,   -34,   -43,   -43,   -43,
     -43,     0,   -43,   243,   -43,   -43,   -43,   -43,   -43,     0,
       0,     0,     0,     0,   -43,   -43,     0,   -43,   -43,   -43,
     -43,   -45,   -45,   -45,   -45,     0,   -45,   -45,   -45,   -45,
     -45,   -45,   -45,     0,     0,     0,     0,     0,   -45,   -45,
       0,   -45,   -45,   -45,   -45,   -31,   -31,   -31,   -31,     0,
     -31,   -31,   -31,   -31,   -31,   -31,   -31,     0,     0,     0,
       0,     0,   -31,   -31,     0,   -31,   -31,   -31,   -31,   -27,
     -27,   -27,   -27,     0,   -27,   -27,   -27,   -27,   -27,   -27,
     -27,     0,     0,     0,     0,     0,   -27,   -27,     0,   -27,
     -27,   -27,   -27,   -28,   -28,   -28,   -28,     0,   -28,   -28,
     -28,   -28,   -28,   -28,   -28,     0,     0,     0,     0,     0,
     -28,   -28,     0,   -28,   -28,   -28,   -28,   -30,   -30,   -30,
     -30,     0,   -30,   -30,   -30,   -30,   -30,   -30,   -30,     0,
       0,     0,     0,     0,   -30,   -30,     0,   -30,   -30,   -30,
     -30,   -48,   -48,   -48,   -48,     0,   -48,   -48,   -48,   -48,
     -48,   -48,   -48,     0,     0,     0,     0,     0,   -48,   -48,
       0,   -48,   -48,   -48,   -48,   -26,   -26,   -26,   -26,     0,
     -26,     0,   -26,   -26,   -26,   -26,   -26,     0,     0,     0,
       0,     0,   -26,   -26,     0,   -26,   -26,   -26,   -26,   -25,
     -25,   -25,   -25,     0,   -25,     0,   -25,   -25,   -25,   -25,
     -25,     0,     0,     0,     0,     0,   -25,   -25,     0,   -25,
     -25,   -25,   -25,    34,    35,    36,    37,     0,    38,     0,
      39,    40,    41,    42,    43,     0,     0,     0,     0,     0,
      44,    45,     0,    46,    47,    84,    48,   -24,   -24,   -24,
     -24,     0,   -24,     0,   -24,   -24,   -24,   -24,   -24,     0,
       0,     0,     0,     0,   -24,   -24,     0,   -24,   -24,   -24,
     -24,   -31,   -31,   -31,   -31,     0,   -31,     0,   -31,   -31,
     -31,   -31,   -31,     0,     0,     0,     0,     0,   -31,   -31,
       0,   -31,   -31,   -31,   -31,   -32,   -32,   -32,   -32,     0,
     -32,     0,   -32,   -32,   -32,   -32,   -32,     0,     0,     0,
       0,     0,   -32,   -32,     0,   -32,   -32,   -32,   -32,   -33,
     -33,   -33,   -33,     0,   -33,     0,   -33,   -33,   -33,   -33,
     -33,     0,     0,     0,     0,     0,   -33,   -33,     0,   -33,
     -33,   -33,   -33,    34,    35,    36,    37,     0,    38,     0,
      39,    40,    41,    42,    43,     0,     0,     0,     0,     0,
      44,    45,     0,    46,    47,    97,    48,   -23,   -23,   -23,
     -23,     0,   -23,     0,   -23,   -23,   -23,   -23,   -23,     0,
       0,     0,     0,     0,   -23,   -23,     0,   -23,   -23,   -23,
     -23,   -22,   -22,   -22,   -22,     0,   -22,     0,   -22,   -22,
     -22,   -22,   -22,     0,     0,     0,     0,     0,   -22,   -22,
       0,   -22,   -22,   -22,   -22,   -27,   -27,   -27,   -27,     0,
     -27,     0,   -27,   -27,   -27,   -27,   -27,     0,     0,     0,
       0,     0,   -27,   -27,     0,   -27,   -27,   -27,   -27,   -34,
     -34,   -34,   -34,     0,   -34,     0,   -34,   -34,   -34,   -34,
     -34,     0,     0,     0,     0,     0,   -34,   -34,     0,   -34,
     -34,   -34,   -34,   -28,   -28,   -28,   -28,     0,   -28,     0,
     -28,   -28,   -28,   -28,   -28,     0,     0,     0,     0,     0,
     -28,   -28,     0,   -28,   -28,   -28,   -28,    34,    35,    36,
      37,     0,    38,     0,    39,    40,    41,    42,    43,     0,
       0,     0,     0,     0,    44,    45,     0,    46,    47,   122,
      48,   -30,   -30,   -30,   -30,     0,   -30,     0,   -30,   -30,
     -30,   -30,   -30,     0,     0,     0,     0,     0,   -30,   -30,
       0,   -30,   -30,   -30,   -30,    34,    35,    36,    37,     0,
      38,     0,    39,    40,    41,    42,    43,     0,     0,     0,
       0,     0,    44,    45,     0,    46,    47,   140,    48,   -45,
     -45,   -45,   -45,     0,   -45,     0,   -45,   -45,   -45,   -45,
     -45,     0,     0,     0,     0,     0,   -45,   -45,     0,   -45,
     -45,   -45,   -45,   -48,   -48,   -48,   -48,     0,   -48,     0,
     -48,   -48,   -48,   -48,   -48,     0,     0,     0,     0,     0,
     -48,   -48,     0,   -48,   -48,   -48,   -48,   -18,   -18,   -18,
     -18,     0,   -18,     0,   -18,   -18,   -18,   -18,   -18,     0,
       0,     0,     0,     0,   -18,   -18,     0,   -18,   -18,   -18,
     -18,   -19,   -19,   -19,   -19,     0,   -19,     0,   -19,   -19,
     -19,   -19,   -19,     0,     0,     0,     0,     0,   -19,   -19,
       0,   -19,   -19,   -19,   -19,    34,    35,    36,    37,     0,
      38,     0,    39,    40,    41,    42,    43,     0,     0,     0,
       0,     0,    44,    45,     0,    46,    47,   259,    48,   -44,
     -44,     0,   -44,     0,   -44,     0,   -44,   -44,   -44,   -44,
     -44,     0,     0,     0,     0,     0,   -44,   -44,     0,   -44,
     -44,     0,   -44,    34,    35,     0,    37,     0,    38,     0,
      39,    40,    41,    42,    43,     0,     0,     0,     0,     0,
      44,    45,     0,    46,    47,     0,    48,    34,    35,     0,
      37,     0,   184,     0,   185,    40,    41,    42,    43,     0,
      34,    35,     0,   146,    44,    45,     0,    46,   247,     0,
      48,    43,     0,   147,   148,     0,   149,    44,    45,     0,
      46,     0,     0,    48,   150,     0,   167,   168,     0,   169,
     151,   152,     0,   153,     0,     0,   154,   170,     0,   -46,
     -46,     0,   -46,   171,   172,     0,   173,     0,     0,   174,
     -46,     0,     0,     0,     0,     0,   -46,   -46,     0,   -46,
       0,     0,   -46,   -73,   -73,   -73,   -73,     0,   -73,     0,
       0,   -73,   -74,   -74,   -74,   -74,   -73,   -74,   -73,     0,
     -74,   -63,   209,   -63,   -63,   -74,   -63,   -74,     0,   -63,
     -65,   -65,   -65,   -65,   -63,   -65,   -63,     0,   -65,   -67,
     -67,   -67,   -67,   -65,   -67,   -65,     0,   -67,   -69,   -69,
     -69,   -69,   -67,   -69,   -67,     0,   -69,   -68,   -68,   -68,
     -68,   -69,   -68,   -69,     0,   -68,   -62,   209,   -62,   -62,
     -68,   -62,   -68,     0,   -62,   -66,   -66,   -66,   -66,   -62,
     -66,   -62,     0,   -66,   -77,   -77,   -77,   -77,   -66,   -77,
     -66,     0,   -77,   -70,   -70,   -70,   -70,   -77,   -70,   -77,
       0,   -70,   -61,   209,   -61,   -61,   -70,   -61,   -70,     0,
     -61,   -64,   -64,   -64,   -64,   -61,   -64,   -61,     0,   -64,
     -76,   -76,   -76,   -76,   -64,   -76,   -64,     0,   -76,   206,
       0,   -60,   -60,   -76,   207,   -76,     0,   208,     0,     0,
       0,     0,   -60,     0,   -60,   -78,   -78,   -78,   -78,   -78,
     -78,     0,     0,   -78,     0,     0,     0,    73,     0,   -78,
     -68,   -68,   -68,   -68,    96,   -68,     0,     0,   -68,     0,
     -71,   -71,   -71,   -71,   -68,   -71,     0,     0,   -71,     0,
     -72,   -72,   -72,   -72,   -71,   -72,     0,     0,   -72,     0,
     -73,   -73,   -73,   -73,   -72,   -73,     0,     0,   -73,     0,
     -74,   -74,   -74,   -74,   -73,   -74,     0,     0,   -74,     0,
     -63,    95,   -63,   -63,   -74,   -63,     0,     0,   -63,     0,
     -65,   -65,   -65,   -65,   -63,   -65,     0,     0,   -65,     0,
     -67,   -67,   -67,   -67,   -65,   -67,     0,     0,   -67,     0,
     -69,   -69,   -69,   -69,   -67,   -69,     0,     0,   -69,     0,
     -68,   -68,   -68,   -68,   -69,   -68,     0,     0,   -68,     0,
     -62,    95,   -62,   -62,   -68,   -62,     0,     0,   -62,     0,
     -66,   -66,   -66,   -66,   -62,   -66,     0,     0,   -66,     0,
     -77,   -77,   -77,   -77,   -66,   -77,     0,     0,   -77,     0,
     -70,   -70,   -70,   -70,   -77,   -70,     0,     0,   -70,     0,
     -61,    95,   -61,   -61,   -70,   -61,     0,     0,   -61,     0,
     -64,   -64,   -64,   -64,   -61,   -64,     0,     0,   -64,     0,
     -76,   -76,   -76,   -76,   -64,   -76,     0,     0,   -76,     0,
     -78,   -78,   -78,   -78,   -76,   -78,     0,     0,   -78,     0,
       0,     0,   190,   -78,   -71,   -71,   -71,   -71,     0,   -71,
       0,     0,   -71,   -72,   -72,   -72,   -72,   -71,   -72,     0,
       0,   -72,   -73,   -73,   -73,   -73,   -72,   -73,     0,     0,
     -73,   -74,   -74,   -74,   -74,   -73,   -74,     0,     0,   -74,
     -63,   199,   -63,   -63,   -74,   -63,     0,     0,   -63,   -65,
     -65,   -65,   -65,   -63,   -65,     0,     0,   -65,   -67,   -67,
     -67,   -67,   -65,   -67,     0,     0,   -67,   -69,   -69,   -69,
     -69,   -67,   -69,     0,     0,   -69,   -68,   -68,   -68,   -68,
     -69,   -68,     0,     0,   -68,   -62,   199,   -62,   -62,   -68,
     -62,     0,     0,   -62,   -66,   -66,   -66,   -66,   -62,   -66,
       0,     0,   -66,   -77,   -77,   -77,   -77,   -66,   -77,     0,
       0,   -77,   -70,   -70,   -70,   -70,   -77,   -70,     0,     0,
     -70,   -61,   199,   -61,   -61,   -70,   -61,     0,     0,   -61,
     -64,   -64,   -64,   -64,   -61,   -64,     0,     0,   -64,   -76,
     -76,   -76,   -76,   -64,   -76,     0,     0,   -76,     0,     0,
       0,     0,   -76
};

static const yytype_int16 yycheck[] =
{
       0,    32,    40,    50,     4,    43,   190,    45,     5,     0,
      48,   118,   118,    26,     5,    28,   200,    16,    75,    14,
      15,    16,    17,    70,    19,     3,     4,    22,     6,    28,
      27,    26,    27,    16,    29,     1,    74,    75,   215,     5,
      78,    79,    20,    21,    27,    23,    29,   224,    26,     0,
      50,    82,    90,    91,    92,    93,    94,    95,    96,    26,
     107,   118,   100,   118,    16,    40,    14,    15,    16,    17,
      70,    19,     6,    48,    22,    27,    16,    17,   118,    27,
      26,    29,    28,    16,    17,   142,   124,    27,     5,    29,
     137,   138,   130,   118,    27,     0,    29,   144,    27,    74,
       5,   132,    24,    78,   142,     6,     7,   107,    16,    17,
      16,    17,   150,     6,   152,    14,   154,    16,    17,    27,
      19,    96,    28,    22,    27,   100,    29,    24,     0,    28,
     237,   237,   170,     5,   172,     0,   174,   137,   245,   245,
       5,    16,    17,    43,    27,     0,    29,    27,    48,   124,
       5,   258,   258,    28,   211,   130,   194,   195,   196,   197,
     198,   199,    26,    48,    16,    17,   204,   205,   206,   207,
     208,   209,   210,   211,    74,   213,    28,   215,    78,   154,
     237,    26,   237,    16,    17,    27,   224,    29,   245,    74,
     245,    26,    92,    78,    27,   252,    29,   237,   245,   174,
     100,   258,    26,   258,   242,   245,    16,    17,     6,     7,
     257,   258,   237,    45,   252,   100,    48,    27,   258,    29,
     245,    28,   253,     0,   124,    16,    17,    28,     5,    14,
      15,    16,    17,   258,    19,   210,    27,    22,   213,   124,
     215,    26,    74,    28,     6,     7,    78,    16,    17,   224,
     150,    16,    17,    28,   154,     3,     4,   257,     6,    28,
      16,    17,    27,    95,    29,    28,    14,   242,   100,   154,
     170,    27,    20,    21,   174,    23,    16,    17,    26,    27,
       0,     0,     0,    28,    28,     5,     5,     5,    28,   174,
      16,    17,   124,    48,   194,   195,   196,   197,   198,    16,
      17,    27,     6,    29,   204,   205,   206,   207,   208,     0,
     210,    28,    28,   213,     5,   215,     6,    28,   150,    74,
     152,     6,   154,    78,   224,   210,     3,     4,   213,     6,
     215,    27,    27,    29,    29,    27,    18,    14,   170,   224,
     172,    28,   174,    20,    21,   100,    23,    16,    17,    26,
      27,    27,    27,    29,    29,    27,    27,    29,    27,    48,
      16,    17,   194,   195,   196,   197,   198,   199,    27,   124,
      29,    27,   204,   205,   206,   207,   208,   209,   210,    28,
      27,   213,    29,   215,    18,    74,    27,    16,    17,    78,
       3,     4,   224,     6,    27,   150,    28,   152,    27,   154,
      28,    14,    28,     3,     4,    28,     6,    20,    21,    28,
      23,   100,    28,    26,    27,   170,    28,   172,    27,   174,
      20,    21,    27,    23,    28,    14,    26,    16,    17,    26,
      19,    26,    18,    22,    27,   124,    27,    27,    27,   194,
     195,   196,   197,   198,   199,    28,    48,    27,    27,   204,
     205,   206,   207,   208,   209,   210,    28,    28,   213,    28,
     215,   150,     4,   152,    25,   154,   247,   237,   244,   224,
     243,    48,    74,    -1,   238,    -1,    78,    -1,    -1,    -1,
      -1,   170,    -1,   172,    -1,   174,    -1,    -1,    -1,    91,
      -1,    93,    94,    -1,    -1,    -1,    -1,    74,   100,    -1,
      -1,    78,    -1,    48,    -1,   194,   195,   196,   197,   198,
     199,    -1,    -1,    -1,    -1,   204,   205,   206,   207,   208,
     209,   210,   124,   100,   213,    -1,   215,    -1,    -1,    74,
      -1,    -1,    -1,    78,    -1,   224,    14,    15,    16,    17,
      -1,    19,    -1,    -1,    22,    90,    -1,   124,    -1,    27,
      -1,    29,   154,     3,     4,   100,     6,    -1,     8,    -1,
      10,    11,    12,    13,    14,     3,     4,    -1,     6,    -1,
      20,    21,   174,    23,    24,    -1,    26,   154,    -1,   124,
      -1,    -1,    20,    21,    -1,    23,    -1,    -1,    26,    -1,
      -1,    -1,   194,   195,    -1,   197,   198,   174,    -1,    -1,
      -1,    -1,   204,   205,    -1,   207,   208,    -1,   210,   154,
      -1,   213,    -1,   215,    -1,    -1,    -1,   194,   195,    -1,
     197,   198,   224,    -1,    -1,    -1,    -1,   204,   205,   174,
     207,   208,    -1,   210,    -1,    -1,   213,    -1,   215,    -1,
      -1,     1,    -1,     3,     4,     5,     6,   224,     8,   194,
      10,    11,    12,    13,    14,    -1,    -1,    -1,    -1,   204,
      20,    21,    -1,    23,    24,   210,    26,    -1,   213,    -1,
     215,     1,    -1,     3,     4,     5,     6,    -1,     8,   224,
      10,    11,    12,    13,    14,    -1,    -1,    -1,    -1,    -1,
      20,    21,    -1,    23,    24,     1,    26,     3,     4,     5,
       6,    -1,     8,    -1,    10,    11,    12,    13,    14,    -1,
      -1,    -1,    -1,    -1,    20,    21,    -1,    23,    24,     1,
      26,     3,     4,     5,     6,    -1,     8,    -1,    10,    11,
      12,    13,    14,    -1,    -1,    -1,    -1,    -1,    20,    21,
      -1,    23,    24,    -1,    26,     3,     4,     5,     6,    -1,
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
       4,    -1,     6,    -1,     8,    -1,    10,    11,    12,    13,
      14,    -1,    -1,    -1,    -1,    -1,    20,    21,    -1,    23,
      24,    -1,    26,     3,     4,    -1,     6,    -1,     8,    -1,
      10,    11,    12,    13,    14,    -1,    -1,    -1,    -1,    -1,
      20,    21,    -1,    23,    24,    -1,    26,     3,     4,    -1,
       6,    -1,     8,    -1,    10,    11,    12,    13,    14,    -1,
       3,     4,    -1,     6,    20,    21,    -1,    23,    24,    -1,
      26,    14,    -1,     3,     4,    -1,     6,    20,    21,    -1,
      23,    -1,    -1,    26,    14,    -1,     3,     4,    -1,     6,
      20,    21,    -1,    23,    -1,    -1,    26,    14,    -1,     3,
       4,    -1,     6,    20,    21,    -1,    23,    -1,    -1,    26,
      14,    -1,    -1,    -1,    -1,    -1,    20,    21,    -1,    23,
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
      -1,    16,    17,    27,    19,    29,    -1,    22,    -1,    -1,
      -1,    -1,    27,    -1,    29,    14,    15,    16,    17,    18,
      19,    -1,    -1,    22,    -1,    -1,    -1,    26,    -1,    28,
      14,    15,    16,    17,    18,    19,    -1,    -1,    22,    -1,
      14,    15,    16,    17,    28,    19,    -1,    -1,    22,    -1,
      14,    15,    16,    17,    28,    19,    -1,    -1,    22,    -1,
      14,    15,    16,    17,    28,    19,    -1,    -1,    22,    -1,
      14,    15,    16,    17,    28,    19,    -1,    -1,    22,    -1,
      14,    15,    16,    17,    28,    19,    -1,    -1,    22,    -1,
      14,    15,    16,    17,    28,    19,    -1,    -1,    22,    -1,
      14,    15,    16,    17,    28,    19,    -1,    -1,    22,    -1,
      14,    15,    16,    17,    28,    19,    -1,    -1,    22,    -1,
      14,    15,    16,    17,    28,    19,    -1,    -1,    22,    -1,
      14,    15,    16,    17,    28,    19,    -1,    -1,    22,    -1,
      14,    15,    16,    17,    28,    19,    -1,    -1,    22,    -1,
      14,    15,    16,    17,    28,    19,    -1,    -1,    22,    -1,
      14,    15,    16,    17,    28,    19,    -1,    -1,    22,    -1,
      14,    15,    16,    17,    28,    19,    -1,    -1,    22,    -1,
      14,    15,    16,    17,    28,    19,    -1,    -1,    22,    -1,
      14,    15,    16,    17,    28,    19,    -1,    -1,    22,    -1,
      14,    15,    16,    17,    28,    19,    -1,    -1,    22,    -1,
      -1,    -1,    26,    27,    14,    15,    16,    17,    -1,    19,
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
      -1,    22,    14,    15,    16,    17,    27,    19,    -1,    -1,
      22,    14,    15,    16,    17,    27,    19,    -1,    -1,    22,
      14,    15,    16,    17,    27,    19,    -1,    -1,    22,    14,
      15,    16,    17,    27,    19,    -1,    -1,    22,    -1,    -1,
      -1,    -1,    27
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     1,     5,    31,    32,    33,    34,    41,    42,     6,
       7,     0,    33,    26,    28,     6,    35,    37,    28,     5,
      39,    40,    27,     6,     7,    29,    36,    24,     6,    40,
      27,    38,    24,     1,     3,     4,     5,     6,     8,    10,
      11,    12,    13,    14,    20,    21,    23,    24,    26,    41,
      43,    44,    46,    47,    50,    52,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    69,
      43,     6,     7,    26,    26,    26,    59,    69,    26,    26,
      64,    65,    45,    59,    25,    41,    44,    28,    28,    28,
      16,    17,    14,    19,    22,    15,    18,    25,     6,    27,
      68,    59,     6,    58,    69,    59,    69,    43,    27,    61,
      62,    64,    62,    62,    65,    59,    59,    70,    27,    28,
      27,    27,    25,    27,    29,    24,    46,    47,    48,    58,
      53,    59,    49,    28,     9,    28,    59,    43,    51,    54,
      25,    44,    28,    58,    27,    44,     6,     3,     4,     6,
      14,    20,    21,    23,    26,    60,    61,    62,    63,    64,
      65,    66,    67,    69,    28,     6,    28,     3,     4,     6,
      14,    20,    21,    23,    26,    60,    61,    62,    63,    64,
      65,    66,    67,    69,     8,    10,    50,    52,    55,    69,
      26,    64,    65,    59,    16,    17,    14,    19,    22,    15,
      26,    64,    65,    59,    16,    17,    14,    19,    22,    15,
      26,    26,    28,    18,    27,    68,    27,    61,    62,    64,
      62,    62,    65,    27,    68,    27,    61,    62,    64,    62,
      62,    65,    59,    58,    59,    70,    70,    27,    28,    27,
      27,    48,    53,     9,    59,    51,    54,    24,    44,    46,
      47,    58,    28,    45,    28,    28,    58,    43,    27,    25,
      44
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    30,    31,    32,    32,    32,    33,    33,    35,    36,
      34,    37,    38,    34,    39,    39,    40,    40,    41,    41,
      42,    42,    43,    43,    43,    43,    43,    44,    44,    45,
      44,    44,    46,    46,    46,    47,    47,    47,    48,    48,
      49,    48,    48,    50,    51,    50,    53,    54,    52,    55,
      56,    57,    58,    59,    60,    60,    61,    61,    62,    62,
      62,    63,    63,    63,    64,    64,    65,    65,    66,    66,
      66,    66,    66,    66,    66,    68,    67,    67,    69,    70,
      70
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     1,     1,     1,     1,     0,     0,
       9,     0,     0,     8,     3,     1,     2,     3,     3,     4,
       2,     3,     2,     2,     1,     1,     1,     2,     2,     0,
       4,     1,     1,     1,     2,     1,     1,     1,     2,     2,
       0,     4,     1,     5,     0,     8,     0,     0,    11,     2,
       4,     4,     3,     1,     3,     1,     3,     1,     3,     3,
       1,     3,     2,     1,     3,     1,     2,     1,     1,     1,
       3,     1,     1,     1,     1,     0,     5,     3,     1,     3,
       1
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
#line 108 "src/sin_analyser.y"
            { syntaxTree = (yyval.treeNode); }
#line 1949 "src/sin_analyser.tab.c"
    break;

  case 3:
#line 112 "src/sin_analyser.y"
                          {
        (yyval.treeNode) = newNode("PROGRAM", 0, 0, " ");
        (yyval.treeNode)->subtree1 = (yyvsp[-1].treeNode);
        (yyval.treeNode)->subtree2 = (yyvsp[0].treeNode);
    }
#line 1959 "src/sin_analyser.tab.c"
    break;

  case 4:
#line 118 "src/sin_analyser.y"
                  { (yyval.treeNode) = (yyvsp[0].treeNode); }
#line 1965 "src/sin_analyser.tab.c"
    break;

  case 5:
#line 120 "src/sin_analyser.y"
          { (yyval.treeNode) = newNode("ERROR", 0, 0, " "); }
#line 1971 "src/sin_analyser.tab.c"
    break;

  case 6:
#line 124 "src/sin_analyser.y"
           { (yyval.treeNode) = (yyvsp[0].treeNode); }
#line 1977 "src/sin_analyser.tab.c"
    break;

  case 7:
#line 126 "src/sin_analyser.y"
              { (yyval.treeNode) = (yyvsp[0].treeNode); }
#line 1983 "src/sin_analyser.tab.c"
    break;

  case 8:
#line 130 "src/sin_analyser.y"
           {
        changeScope(1);
    }
#line 1991 "src/sin_analyser.tab.c"
    break;

  case 9:
#line 132 "src/sin_analyser.y"
             {
        updateParams(table, params);
        params = 0;
    }
#line 2000 "src/sin_analyser.tab.c"
    break;

  case 10:
#line 135 "src/sin_analyser.y"
                     {
        (yyval.treeNode) = newNode("FUNCTION", 0, 0, " ");
        (yyval.treeNode)->subtree1 = (yyvsp[-8].treeNode);
        (yyval.treeNode)->subtree2 = (yyvsp[-5].treeNode);
        (yyval.treeNode)->subtree3 = (yyvsp[-1].treeNode);
        if((yyval.treeNode)->subtree3->ret){
            if((yyval.treeNode)->subtree1->type == 1){
                if((yyval.treeNode)->subtree3->type == 1){
                    (yyval.treeNode)->type = (yyval.treeNode)->subtree1->type;
                }else if((yyval.treeNode)->subtree3->type == 2){
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
        }
        changeScope(0);
    }
#line 2049 "src/sin_analyser.tab.c"
    break;

  case 11:
#line 180 "src/sin_analyser.y"
            {
        updateParams(table, params);
    }
#line 2057 "src/sin_analyser.tab.c"
    break;

  case 12:
#line 182 "src/sin_analyser.y"
            {
        changeScope(1);
    }
#line 2065 "src/sin_analyser.tab.c"
    break;

  case 13:
#line 184 "src/sin_analyser.y"
               {
        (yyval.treeNode) = newNode("FUNCTION", 0, 0, " ");
        (yyval.treeNode)->subtree1 = (yyvsp[-7].treeNode);
        (yyval.treeNode)->subtree2 = (yyvsp[-1].treeNode);
        if((yyval.treeNode)->subtree2->ret){
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
        }else{
            strcat(tacCode, "return\n");
        }
        changeScope(0);
    }
#line 2113 "src/sin_analyser.tab.c"
    break;

  case 14:
#line 230 "src/sin_analyser.y"
                           {
        params++;
        (yyval.treeNode) = newNode("PARAMS", 0, 0, " ");
        (yyval.treeNode)->subtree1 = (yyvsp[-2].treeNode);
        (yyval.treeNode)->subtree2 = (yyvsp[0].treeNode);
    }
#line 2124 "src/sin_analyser.tab.c"
    break;

  case 15:
#line 237 "src/sin_analyser.y"
          { 
        params++;
        (yyval.treeNode) = (yyvsp[0].treeNode);
    }
#line 2133 "src/sin_analyser.tab.c"
    break;

  case 16:
#line 244 "src/sin_analyser.y"
            {
        // reg++;
        newSymbol(table, (yyvsp[0].lex).id, (yyvsp[-1].lex).id, "PAR      ", (yyvsp[0].lex).line, (yyvsp[0].lex).col, stack[scope_pos], params+1, reg);   
        (yyval.treeNode) = newNode(strcat(strcat((yyvsp[-1].lex).id," var "), (yyvsp[0].lex).id), checkType(table, (yyvsp[0].lex).id, stack[scope_pos], 1), 0, " ");
    }
#line 2143 "src/sin_analyser.tab.c"
    break;

  case 17:
#line 250 "src/sin_analyser.y"
                 {
        // reg++;
        newSymbol(table, (yyvsp[0].lex).id, strcat((yyvsp[-2].lex).id," list"), "LIST PAR ",(yyvsp[0].lex).line, (yyvsp[0].lex).col, stack[scope_pos], params+1, reg);
        (yyval.treeNode) = newNode(strcat(strcat((yyvsp[-2].lex).id," "), (yyvsp[0].lex).id), checkType(table, (yyvsp[0].lex).id, stack[scope_pos], 1), 0, " ");
    }
#line 2153 "src/sin_analyser.tab.c"
    break;

  case 18:
#line 258 "src/sin_analyser.y"
               {
        strcat(tacTable, (yyvsp[-2].lex).id);
        strcat(tacTable, " ");
        strcat(tacTable, (yyvsp[-1].lex).id);
        strcat(tacTable, "_");
        sprintf(reg_num, "s%d", stack[scope_pos]);
        strcat(tacTable, reg_num);
        strcat(tacTable, "\n");
        if(searchTable(table, (yyvsp[-1].lex).id, 0, 1, stack, scope_pos)){
            printf("SEMANTIC ERROR: Variable %s already declared [%d, %d]\n", (yyvsp[-1].lex).id, (yyvsp[-1].lex).line, (yyvsp[-1].lex).col);
            sem_errors++;
        }
        newSymbol(table, (yyvsp[-1].lex).id, (yyvsp[-2].lex).id, "VAR      ", (yyvsp[-1].lex).line, (yyvsp[-1].lex).col, stack[scope_pos], 0, reg);   
        (yyval.treeNode) = newNode(strcat(strcat((yyvsp[-2].lex).id," var "), (yyvsp[-1].lex).id), checkType(table, (yyvsp[-1].lex).id, stack[scope_pos], 1), 0, " ");
    }
#line 2173 "src/sin_analyser.tab.c"
    break;

  case 19:
#line 274 "src/sin_analyser.y"
                    {
        strcat(tacTable, (yyvsp[-3].lex).id);
        strcat(tacTable, " ");
        strcat(tacTable, (yyvsp[-1].lex).id);
        strcat(tacTable, "_");
        sprintf(reg_num, "s%d", stack[scope_pos]);
        strcat(tacTable, reg_num);
        strcat(tacTable, "[100] = ");
        if(!strcmp((yyvsp[-3].lex).id, "int")) strcat(tacTable, list_int);
        else strcat(tacTable, list_float);
        strcat(tacTable, "\nint ");
        strcat(tacTable, (yyvsp[-1].lex).id);
        strcat(tacTable, "_");
        sprintf(reg_num, "s%d", stack[scope_pos]);
        strcat(tacTable, reg_num);
        strcat(tacTable, "_size = 0\n");
        if(searchTable(table, (yyvsp[-1].lex).id, 0, 1, stack, scope_pos)) {
            printf("SEMANTIC ERROR: Variable %s already declared [%d, %d]\n", (yyvsp[-1].lex).id, (yyvsp[-1].lex).line, (yyvsp[-1].lex).col);
            sem_errors++;
        }
        newSymbol(table, (yyvsp[-1].lex).id, strcat((yyvsp[-3].lex).id," list"), "LIST VAR ",(yyvsp[-1].lex).line, (yyvsp[-1].lex).col, stack[scope_pos], 0, reg);
        (yyval.treeNode) = newNode(strcat(strcat((yyvsp[-3].lex).id," "), (yyvsp[-1].lex).id), checkType(table, (yyvsp[-1].lex).id, stack[scope_pos], 1), 0, " ");
    }
#line 2201 "src/sin_analyser.tab.c"
    break;

  case 20:
#line 300 "src/sin_analyser.y"
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
        (yyval.treeNode) = newNode(strcat(strcat((yyvsp[-1].lex).id," function "), (yyvsp[0].lex).id), checkType(table, (yyvsp[0].lex).id, stack[scope_pos], 1), 0, " ");
    }
#line 2219 "src/sin_analyser.tab.c"
    break;

  case 21:
#line 314 "src/sin_analyser.y"
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
        (yyval.treeNode) = newNode(strcat(strcat((yyvsp[-2].lex).id," function list "), (yyvsp[0].lex).id), checkType(table, (yyvsp[0].lex).id, stack[scope_pos], 1), 0, " ");
    }
#line 2237 "src/sin_analyser.tab.c"
    break;

  case 22:
#line 330 "src/sin_analyser.y"
                    {
        (yyval.treeNode) = newNode("BLOCK", 0, 0, " ");
        (yyval.treeNode)->subtree1 = (yyvsp[-1].treeNode);
        (yyval.treeNode)->subtree2 = (yyvsp[0].treeNode);
        if((yyval.treeNode)->subtree1->ret || (yyval.treeNode)->subtree2->ret) (yyval.treeNode)->ret = 1;
        (yyval.treeNode)->type = (yyval.treeNode)->subtree2->type;
    }
#line 2249 "src/sin_analyser.tab.c"
    break;

  case 23:
#line 338 "src/sin_analyser.y"
                 {
        (yyval.treeNode) = newNode("BLOCK", 0, 0, " ");
        (yyval.treeNode)->subtree1 = (yyvsp[-1].treeNode);
        (yyval.treeNode)->subtree2 = (yyvsp[0].treeNode);
        if((yyval.treeNode)->subtree1->ret || (yyval.treeNode)->subtree2->ret) (yyval.treeNode)->ret = 1;
        (yyval.treeNode)->type = (yyval.treeNode)->subtree2->type;
    }
#line 2261 "src/sin_analyser.tab.c"
    break;

  case 24:
#line 346 "src/sin_analyser.y"
              { (yyval.treeNode) = (yyvsp[0].treeNode); }
#line 2267 "src/sin_analyser.tab.c"
    break;

  case 25:
#line 348 "src/sin_analyser.y"
           { (yyval.treeNode) = (yyvsp[0].treeNode); }
#line 2273 "src/sin_analyser.tab.c"
    break;

  case 26:
#line 350 "src/sin_analyser.y"
          { (yyval.treeNode) = newNode("ERROR", 0, 0, " "); }
#line 2279 "src/sin_analyser.tab.c"
    break;

  case 27:
#line 354 "src/sin_analyser.y"
             { (yyval.treeNode) = (yyvsp[-1].treeNode); }
#line 2285 "src/sin_analyser.tab.c"
    break;

  case 28:
#line 356 "src/sin_analyser.y"
              { (yyval.treeNode) = (yyvsp[-1].treeNode); }
#line 2291 "src/sin_analyser.tab.c"
    break;

  case 29:
#line 358 "src/sin_analyser.y"
       {
        changeScope(1);
    }
#line 2299 "src/sin_analyser.tab.c"
    break;

  case 30:
#line 360 "src/sin_analyser.y"
               { 
        (yyval.treeNode) = (yyvsp[-1].treeNode);
        changeScope(0);
    }
#line 2308 "src/sin_analyser.tab.c"
    break;

  case 31:
#line 365 "src/sin_analyser.y"
             { (yyval.treeNode) = (yyvsp[0].treeNode); }
#line 2314 "src/sin_analyser.tab.c"
    break;

  case 32:
#line 369 "src/sin_analyser.y"
            { (yyval.treeNode) = (yyvsp[0].treeNode); }
#line 2320 "src/sin_analyser.tab.c"
    break;

  case 33:
#line 371 "src/sin_analyser.y"
        { (yyval.treeNode) = (yyvsp[0].treeNode); }
#line 2326 "src/sin_analyser.tab.c"
    break;

  case 34:
#line 373 "src/sin_analyser.y"
               { (yyval.treeNode) = (yyvsp[-1].treeNode); }
#line 2332 "src/sin_analyser.tab.c"
    break;

  case 35:
#line 377 "src/sin_analyser.y"
              { (yyval.treeNode) = (yyvsp[0].treeNode); }
#line 2338 "src/sin_analyser.tab.c"
    break;

  case 36:
#line 379 "src/sin_analyser.y"
          { (yyval.treeNode) = (yyvsp[0].treeNode); }
#line 2344 "src/sin_analyser.tab.c"
    break;

  case 37:
#line 381 "src/sin_analyser.y"
           { (yyval.treeNode) = (yyvsp[0].treeNode); }
#line 2350 "src/sin_analyser.tab.c"
    break;

  case 38:
#line 385 "src/sin_analyser.y"
             { (yyval.treeNode) = (yyvsp[-1].treeNode); }
#line 2356 "src/sin_analyser.tab.c"
    break;

  case 39:
#line 387 "src/sin_analyser.y"
              { (yyval.treeNode) = (yyvsp[-1].treeNode); }
#line 2362 "src/sin_analyser.tab.c"
    break;

  case 40:
#line 389 "src/sin_analyser.y"
       {
        strcat(tacCode, "// if\n");
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
#line 2385 "src/sin_analyser.tab.c"
    break;

  case 41:
#line 406 "src/sin_analyser.y"
               { 
        (yyval.treeNode) = (yyvsp[-1].treeNode);
        changeScope(0);
    }
#line 2394 "src/sin_analyser.tab.c"
    break;

  case 42:
#line 411 "src/sin_analyser.y"
             { (yyval.treeNode) = (yyvsp[0].treeNode); }
#line 2400 "src/sin_analyser.tab.c"
    break;

  case 43:
#line 415 "src/sin_analyser.y"
                                               {
        (yyval.treeNode) = newNode("IF", 0, 0, " ");
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
#line 2417 "src/sin_analyser.tab.c"
    break;

  case 44:
#line 428 "src/sin_analyser.y"
                                         {
        strcat(tacCode, "// if\n");
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
#line 2434 "src/sin_analyser.tab.c"
    break;

  case 45:
#line 439 "src/sin_analyser.y"
                {
        (yyval.treeNode) = newNode("IF ELSE", 0, 0, " ");
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
#line 2460 "src/sin_analyser.tab.c"
    break;

  case 46:
#line 463 "src/sin_analyser.y"
                     {
        strcat(tacCode, "// for\n");
        sprintf(for_loop1, "L%d", loop);
        loop++;
        sprintf(for_loop2, "L%d", loop);
        loop++;
        sprintf(for_loop3, "L%d", loop);
        loop++;
        strcat(tacCode, for_loop1);
        strcat(tacCode, ":\n");
    }
#line 2476 "src/sin_analyser.tab.c"
    break;

  case 47:
#line 473 "src/sin_analyser.y"
                {
        strcat(tacCode, "jump ");
        strcat(tacCode, for_loop2);
        strcat(tacCode, "\n");
        strcat(tacCode, for_loop3);
        strcat(tacCode, ":\n");
    }
#line 2488 "src/sin_analyser.tab.c"
    break;

  case 48:
#line 479 "src/sin_analyser.y"
                              {
        (yyval.treeNode) = newNode("FOR", 0, 0, " ");
        (yyval.treeNode)->subtree1 = (yyvsp[-8].treeNode);
        (yyval.treeNode)->subtree2 = (yyvsp[-5].treeNode);
        (yyval.treeNode)->subtree3 = (yyvsp[-2].treeNode);
        (yyval.treeNode)->subtree4 = (yyvsp[0].treeNode);
        (yyval.treeNode)->type = (yyval.treeNode)->subtree4->type;
        strcat(tacCode, "jump ");
        strcat(tacCode, for_loop1);
        strcat(tacCode, "\n");
        strcat(tacCode, for_loop2);
        strcat(tacCode, ":\n");
        strcat(tacCode, "brnz ");
        strcat(tacCode, for_loop3);
        strcat(tacCode, ", ");
        strcat(tacCode, (yyval.treeNode)->subtree2->tac);
        strcat(tacCode, "\n");
    }
#line 2511 "src/sin_analyser.tab.c"
    break;

  case 49:
#line 500 "src/sin_analyser.y"
                     {
        (yyval.treeNode) = newNode("RETURN", 0, 1, " ");
        (yyval.treeNode)->subtree1 = (yyvsp[0].treeNode);
        (yyval.treeNode)->type = (yyval.treeNode)->subtree1->type;
        strcat(tacCode, "return ");
        strcat(tacCode, (yyval.treeNode)->subtree1->tac);
        strcat(tacCode, "\n");
    }
#line 2524 "src/sin_analyser.tab.c"
    break;

  case 50:
#line 511 "src/sin_analyser.y"
                {
        (yyval.treeNode) = newNode("IN", 0, 0, " ");
        (yyval.treeNode)->subtree1 = (yyvsp[-1].treeNode);
        strcat(tacCode, "// in\n");
        if((yyval.treeNode)->subtree1->type == 1) strcat(tacCode, "scani ");
        else strcat(tacCode, "scanf ");
        strcat(tacCode, (yyval.treeNode)->subtree1->tac);
        strcat(tacCode, "\n");
    }
#line 2538 "src/sin_analyser.tab.c"
    break;

  case 51:
#line 523 "src/sin_analyser.y"
                        { 
        (yyval.treeNode) = newNode("OUT", 0, 0, " ");
        (yyval.treeNode)->subtree1 = (yyvsp[-1].treeNode);
        strcat(tacCode, "// out\n");
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
#line 2584 "src/sin_analyser.tab.c"
    break;

  case 52:
#line 567 "src/sin_analyser.y"
                        {
        (yyval.treeNode) = newNode("ASSIGN", 0, 0, " ");
        (yyval.treeNode)->subtree1 = (yyvsp[-2].treeNode);
        (yyval.treeNode)->subtree2 = (yyvsp[0].treeNode);
        
        if((yyval.treeNode)->subtree1->type == 1){
            if((yyval.treeNode)->subtree2->type == 1){
                strcat(tacCode, "mov ");
                strcat(tacCode, (yyval.treeNode)->subtree1->tac);
                strcat(tacCode, ", ");
                strcat(tacCode, (yyval.treeNode)->subtree2->tac);
                strcat(tacCode, "\n");
                (yyval.treeNode)->type = (yyval.treeNode)->subtree1->type;
            }else if((yyval.treeNode)->subtree2->type == 2){
                strcat(tacCode, "mov $700, ");
                strcat(tacCode, (yyval.treeNode)->subtree2->tac);
                strcat(tacCode, "\n");
                strcat(tacCode, "fltoint $700, $700\n");
                strcat(tacCode, "mov ");
                strcat(tacCode, (yyval.treeNode)->subtree1->tac);
                strcat(tacCode, ", $700\n");
                (yyval.treeNode)->type = (yyval.treeNode)->subtree1->type;
            }else{
                printf("SEMANTIC ERROR: Type error when assigning %d to %d. [%d, %d]\n", (yyval.treeNode)->subtree2->type, (yyval.treeNode)->subtree1->type, (yyvsp[-1].lex).line, (yyvsp[-1].lex).col);
                sem_errors++;
            }
        } else if((yyval.treeNode)->subtree1->type == 2){
            if((yyval.treeNode)->subtree2->type == 1){
                strcat(tacCode, "mov ");
                strcat(tacCode, (yyval.treeNode)->subtree1->tac);
                strcat(tacCode, ", ");
                strcat(tacCode, (yyval.treeNode)->subtree2->tac);
                strcat(tacCode, "\n");
                (yyval.treeNode)->type = (yyval.treeNode)->subtree1->type;
            }else if((yyval.treeNode)->subtree2->type == 2){
                strcat(tacCode, "mov $700, ");
                strcat(tacCode, (yyval.treeNode)->subtree2->tac);
                strcat(tacCode, "\n");
                strcat(tacCode, "inttofl $700, $700\n");
                strcat(tacCode, "mov ");
                strcat(tacCode, (yyval.treeNode)->subtree1->tac);
                strcat(tacCode, ", $700\n");
                (yyval.treeNode)->type = (yyval.treeNode)->subtree2->type;
            }else{
                printf("SEMANTIC ERROR: Type error when assigning %d to %d. [%d, %d]\n", (yyval.treeNode)->subtree2->type, (yyval.treeNode)->subtree1->type, (yyvsp[-1].lex).line, (yyvsp[-1].lex).col);
                sem_errors++;
            }
        } else if((yyval.treeNode)->subtree1->type == 3){
            if((yyval.treeNode)->subtree2->type == 3){
                strcat(tacCode, "mov $400, &");
                strcat(tacCode, (yyval.treeNode)->subtree1->tac);
                strcat(tacCode, "\nmov $500, &");
                strcat(tacCode, (yyval.treeNode)->subtree2->tac);
                strcat(tacCode, "\nmov $600, 0\n");
                strcat(tacCode, "\nmov $601, ");
                strcat(tacCode, (yyval.treeNode)->subtree2->tac);
                strcat(tacCode, "_size\n");
                sprintf(loop_num, "L%d", loop);
                loop++;
                strcat(tacCode, loop_num);
                strcat(tacCode, ":\n");
                strcat(tacCode, "mov $603, $500[$600]\n");
                strcat(tacCode, "mov $400[$600], $603\n");
                strcat(tacCode, "add $600, $600, 1\n");
                strcat(tacCode, "sub $602, $601, $600\n");
                strcat(tacCode, "brnz ");
                strcat(tacCode, loop_num);
                strcat(tacCode, ", $602\n");
                strcat(tacCode, "mov ");
                strcat(tacCode, (yyval.treeNode)->subtree1->tac);
                strcat(tacCode, "_size, $601\n");
                (yyval.treeNode)->type = (yyval.treeNode)->subtree1->type;
            }else if((yyval.treeNode)->subtree2->type == 4){
                strcat(tacCode, "mov $400, &");
                strcat(tacCode, (yyval.treeNode)->subtree1->tac);
                strcat(tacCode, "\nmov $500, &");
                strcat(tacCode, (yyval.treeNode)->subtree2->tac);
                strcat(tacCode, "\nmov $600, 0\n");
                strcat(tacCode, "\nmov $601, ");
                strcat(tacCode, (yyval.treeNode)->subtree2->tac);
                strcat(tacCode, "_size\n");
                sprintf(loop_num, "L%d", loop);
                loop++;
                strcat(tacCode, loop_num);
                strcat(tacCode, ":\n");
                strcat(tacCode, "mov $603, $500[$600]\n");
                strcat(tacCode, "fltoint $603, $603\n");
                strcat(tacCode, "mov $400[$600], $603\n");
                strcat(tacCode, "add $600, $600, 1\n");
                strcat(tacCode, "sub $602, $601, $600\n");
                strcat(tacCode, "brnz ");
                strcat(tacCode, loop_num);
                strcat(tacCode, ", $602\n");
                strcat(tacCode, "mov ");
                strcat(tacCode, (yyval.treeNode)->subtree1->tac);
                strcat(tacCode, "_size, $601\n");
                (yyval.treeNode)->type = (yyval.treeNode)->subtree1->type;
            }else{
                printf("SEMANTIC ERROR: Type error when assigning %d to %d. [%d, %d]\n", (yyval.treeNode)->subtree2->type, (yyval.treeNode)->subtree1->type, (yyvsp[-1].lex).line, (yyvsp[-1].lex).col);
                sem_errors++;
            }
        } else if((yyval.treeNode)->subtree1->type == 4){
            if((yyval.treeNode)->subtree2->type == 3){
                strcat(tacCode, "mov $400, &");
                strcat(tacCode, (yyval.treeNode)->subtree1->tac);
                strcat(tacCode, "\nmov $500, &");
                strcat(tacCode, (yyval.treeNode)->subtree2->tac);
                strcat(tacCode, "\nmov $600, 0\n");
                strcat(tacCode, "\nmov $601, ");
                strcat(tacCode, (yyval.treeNode)->subtree2->tac);
                strcat(tacCode, "_size\n");
                sprintf(loop_num, "L%d", loop);
                loop++;
                strcat(tacCode, loop_num);
                strcat(tacCode, ":\n");
                strcat(tacCode, "mov $603, $500[$600]\n");
                strcat(tacCode, "inttofl $603, $603\n");
                strcat(tacCode, "mov $400[$600], $603\n");
                strcat(tacCode, "add $600, $600, 1\n");
                strcat(tacCode, "sub $602, $601, $600\n");
                strcat(tacCode, "brnz ");
                strcat(tacCode, loop_num);
                strcat(tacCode, ", $602\n");
                strcat(tacCode, "mov ");
                strcat(tacCode, (yyval.treeNode)->subtree1->tac);
                strcat(tacCode, "_size, $601\n");
                (yyval.treeNode)->type = (yyval.treeNode)->subtree1->type;
            }else if((yyval.treeNode)->subtree2->type == 4){
                strcat(tacCode, "mov $400, &");
                strcat(tacCode, (yyval.treeNode)->subtree1->tac);
                strcat(tacCode, "\nmov $500, &");
                strcat(tacCode, (yyval.treeNode)->subtree2->tac);
                strcat(tacCode, "\nmov $600, 0\n");
                strcat(tacCode, "\nmov $601, ");
                strcat(tacCode, (yyval.treeNode)->subtree2->tac);
                strcat(tacCode, "_size\n");
                sprintf(loop_num, "L%d", loop);
                loop++;
                strcat(tacCode, loop_num);
                strcat(tacCode, ":\n");
                strcat(tacCode, "mov $603, $500[$600]\n");
                strcat(tacCode, "mov $400[$600], $603\n");
                strcat(tacCode, "add $600, $600, 1\n");
                strcat(tacCode, "sub $602, $601, $600\n");
                strcat(tacCode, "brnz ");
                strcat(tacCode, loop_num);
                strcat(tacCode, ", $602\n");
                strcat(tacCode, "mov ");
                strcat(tacCode, (yyval.treeNode)->subtree1->tac);
                strcat(tacCode, "_size, $601\n");
                (yyval.treeNode)->type = (yyval.treeNode)->subtree2->type;
            }else{
                printf("SEMANTIC ERROR: Type error when assigning %d to %d. [%d, %d]\n", (yyval.treeNode)->subtree2->type, (yyval.treeNode)->subtree1->type, (yyvsp[-1].lex).line, (yyvsp[-1].lex).col);
                sem_errors++;
            }
        }
    }
#line 2746 "src/sin_analyser.tab.c"
    break;

  case 53:
#line 727 "src/sin_analyser.y"
           { (yyval.treeNode) = (yyvsp[0].treeNode); }
#line 2752 "src/sin_analyser.tab.c"
    break;

  case 54:
#line 731 "src/sin_analyser.y"
                          {
        (yyval.treeNode) = newNode("LOG OP", 0, 0, " ");
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
#line 2795 "src/sin_analyser.tab.c"
    break;

  case 55:
#line 770 "src/sin_analyser.y"
           { (yyval.treeNode) = (yyvsp[0].treeNode); }
#line 2801 "src/sin_analyser.tab.c"
    break;

  case 56:
#line 774 "src/sin_analyser.y"
                          {
        (yyval.treeNode) = newNode("REL OP", 0, 0, " ");
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
#line 2856 "src/sin_analyser.tab.c"
    break;

  case 57:
#line 825 "src/sin_analyser.y"
            { (yyval.treeNode) = (yyvsp[0].treeNode); }
#line 2862 "src/sin_analyser.tab.c"
    break;

  case 58:
#line 829 "src/sin_analyser.y"
                             {
        (yyval.treeNode) = newNode("LIST FUNC", 0, 0, " ");
        (yyval.treeNode)->subtree1 = (yyvsp[-2].treeNode);
        (yyval.treeNode)->subtree2 = (yyvsp[0].treeNode);
        if(!strcmp((yyvsp[-1].lex).id, ">>")){
            strcat(tacCode, "// map\n");
            strcat(tacCode, "mov $500, &");
            strcat(tacCode, (yyval.treeNode)->subtree2->tac);
            strcat(tacCode, "\nmov $600, 0\n");
            strcat(tacCode, "mov $601, ");
            strcat(tacCode, (yyval.treeNode)->subtree2->tac);
            strcat(tacCode, "_size\n");
            sprintf(loop_num, "L%d", loop);
            loop++;
            strcat(tacCode, loop_num);
            strcat(tacCode, ":\n");
            strcat(tacCode, "mov $603, $500[$600]\n");
            strcat(tacCode, "param $603\n");
            strcat(tacCode, "call _");
            strcat(tacCode, (yyval.treeNode)->subtree1->value);
            strcat(tacCode, ", 1\npop $605\n");
            strcat(tacCode, "mov $500[$600], $605\n");
            strcat(tacCode, "add $600, $600, 1\n");
            strcat(tacCode, "sub $602, $601, $600\n");
            strcat(tacCode, "brnz ");
            strcat(tacCode, loop_num);
            strcat(tacCode, ", $602\n");
        }else{
            strcat(tacCode, "// filter\n");
            strcat(tacCode, "mov $500, &");
            strcat(tacCode, (yyval.treeNode)->subtree2->tac);
            strcat(tacCode, "\nmov $600, 0\n");
            strcat(tacCode, "mov $601, ");
            strcat(tacCode, (yyval.treeNode)->subtree2->tac);
            strcat(tacCode, "_size\n");
            sprintf(list_loop1, "L%d", loop);
            loop++;
            sprintf(loop_num, "L%d", loop);
            loop++;
            sprintf(list_loop2, "L%d", loop);
            loop++;
            sprintf(list_loop3, "L%d", loop);
            loop++;
            sprintf(list_loop4, "L%d", loop);
            loop++;
            strcat(tacCode, list_loop1);
            strcat(tacCode, ":\n");
            strcat(tacCode, "mov $603, $500[$600]\n");
            strcat(tacCode, "param $603\n");
            strcat(tacCode, "call _");
            strcat(tacCode, (yyval.treeNode)->subtree1->value);
            strcat(tacCode, ", 1\npop $605\n");
            strcat(tacCode, "brnz ");
            strcat(tacCode, list_loop2);
            strcat(tacCode, ", $605\n");
            strcat(tacCode, "add $600, $600, 1\n");
            strcat(tacCode, list_loop3);
            strcat(tacCode, ":\n");
            strcat(tacCode, "sub $602, $601, $600\n");
            strcat(tacCode, "brnz ");
            strcat(tacCode, list_loop1);
            strcat(tacCode, ", $602\n");
            strcat(tacCode, "jump ");
            strcat(tacCode, list_loop4);
            strcat(tacCode, "\n");
            strcat(tacCode, list_loop2);
            strcat(tacCode, ":\nmov $610, $600\n");
            strcat(tacCode, "add $611, $610, 1\n");
            strcat(tacCode, loop_num);
            strcat(tacCode, ":\n");
            strcat(tacCode, "mov $613, $500[$611]\n");
            strcat(tacCode, "mov $500[$610], $613\n");
            strcat(tacCode, "add $610, $610, 1\n");
            strcat(tacCode, "add $611, $611, 1\n");
            strcat(tacCode, "sub $612, $601, $610\n");
            strcat(tacCode, "brnz "); 
            strcat(tacCode, loop_num);
            strcat(tacCode, ", $612\n");
            strcat(tacCode, "sub $601, $601, 1\n");
            strcat(tacCode, "sub ");
            strcat(tacCode, (yyval.treeNode)->subtree2->tac);
            strcat(tacCode, "_size, ");
            strcat(tacCode, (yyval.treeNode)->subtree2->tac);
            strcat(tacCode, "_size, 1\n");
            strcat(tacCode, "jump ");
            strcat(tacCode, list_loop3);
            strcat(tacCode, "\n");
            strcat(tacCode, list_loop4);
            strcat(tacCode, ":\n");
        }
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
        strcpy((yyval.treeNode)->tac, (yyval.treeNode)->subtree2->tac);
    }
#line 2970 "src/sin_analyser.tab.c"
    break;

  case 59:
#line 933 "src/sin_analyser.y"
                            {
        (yyval.treeNode) = newNode("LIST OP", 0, 0, " ");
        (yyval.treeNode)->subtree1 = (yyvsp[-2].treeNode);
        (yyval.treeNode)->subtree2 = (yyvsp[0].treeNode);
        sprintf(loop_num, "L%d", loop);
        loop++;
        sprintf(list_loop1, "L%d", loop);
        loop++;
        strcat(tacCode, "mov $500, &");
        strcat(tacCode, (yyval.treeNode)->subtree2->tac);
        strcat(tacCode, "\nmov $601, ");
        strcat(tacCode, (yyval.treeNode)->subtree2->tac);
        strcat(tacCode, "_size\n");
        strcat(tacCode, "brz "); 
        strcat(tacCode, list_loop1);
        strcat(tacCode, ", $601\n");
        strcat(tacCode, "sub $602, $601, 1\n");
        strcat(tacCode, loop_num);
        strcat(tacCode, ":\n");
        strcat(tacCode, "mov $604, $500[$602]\n");
        strcat(tacCode, "mov $500[$601], $604\n");
        strcat(tacCode, "sub $602, $602, 1\n");
        strcat(tacCode, "sub $601, $601, 1\n");
        strcat(tacCode, "brnz "); 
        strcat(tacCode, loop_num);
        strcat(tacCode, ", $601\n");
        strcat(tacCode, list_loop1);
        strcat(tacCode, ":\n");
        strcat(tacCode, "mov $500[0], ");
        strcat(tacCode, (yyval.treeNode)->subtree1->tac);
        strcat(tacCode, "\nadd ");
        strcat(tacCode, (yyval.treeNode)->subtree2->tac);
        strcat(tacCode, "_size, ");
        strcat(tacCode, (yyval.treeNode)->subtree2->tac);
        strcat(tacCode, "_size, 1\n");
        strcpy((yyval.treeNode)->tac, (yyval.treeNode)->subtree2->tac);
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
#line 3023 "src/sin_analyser.tab.c"
    break;

  case 60:
#line 982 "src/sin_analyser.y"
           { (yyval.treeNode) = (yyvsp[0].treeNode); }
#line 3029 "src/sin_analyser.tab.c"
    break;

  case 61:
#line 986 "src/sin_analyser.y"
                       {
        (yyval.treeNode) = newNode("ARI SS OP", 0, 0, " ");
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
#line 3072 "src/sin_analyser.tab.c"
    break;

  case 62:
#line 1025 "src/sin_analyser.y"
                {
        (yyval.treeNode) = newNode("NEGATIVE", 0, 0, " ");
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
#line 3095 "src/sin_analyser.tab.c"
    break;

  case 63:
#line 1044 "src/sin_analyser.y"
          { (yyval.treeNode) = (yyvsp[0].treeNode); }
#line 3101 "src/sin_analyser.tab.c"
    break;

  case 64:
#line 1048 "src/sin_analyser.y"
                      {
        (yyval.treeNode) = newNode("ARI MD OP", 0, 0, " ");
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
#line 3144 "src/sin_analyser.tab.c"
    break;

  case 65:
#line 1087 "src/sin_analyser.y"
          { (yyval.treeNode) = (yyvsp[0].treeNode); }
#line 3150 "src/sin_analyser.tab.c"
    break;

  case 66:
#line 1091 "src/sin_analyser.y"
                {
        (yyval.treeNode) = newNode("UNARY OP", 0, 0, " ");
        (yyval.treeNode)->subtree1 = (yyvsp[0].treeNode);
        sprintf(reg_num, "$%d", reg);
        strcpy((yyval.treeNode)->tac, reg_num);
        reg++;
        if((yyval.treeNode)->subtree1->type != 0){
            if(!strcmp((yyvsp[-1].lex).id, "!")){
                if((yyval.treeNode)->subtree1->type < 3){
                    (yyval.treeNode)->type = 1;
                    strcat(tacCode, "// not\n");
                    strcat(tacCode, "not ");
                    strcat(tacCode, reg_num);
                    strcat(tacCode, (yyval.treeNode)->subtree1->tac);
                }else{
                    strcat(tacCode, "// tail\n");
                    strcat(tacCode, "mov $500, &");
                    strcat(tacCode, (yyval.treeNode)->subtree1->tac);
                    strcat(tacCode, "\nmov $600, 0\n");
                    strcat(tacCode, "mov $605, 1\n");
                    strcat(tacCode, "mov $601, ");
                    strcat(tacCode, (yyval.treeNode)->subtree1->tac);
                    strcat(tacCode, "_size\n");
                    sprintf(loop_num, "L%d", loop);
                    loop++;
                    strcat(tacCode, loop_num);
                    strcat(tacCode, ":\n");
                    strcat(tacCode, "mov $603, $500[$605]\n");
                    strcat(tacCode, "mov $500[$600], $603\n");
                    strcat(tacCode, "add $600, $600, 1\n");
                    strcat(tacCode, "add $605, $605, 1\n");
                    strcat(tacCode, "sub $602, $601, $600\n");
                    strcat(tacCode, "brnz ");
                    strcat(tacCode, loop_num);
                    strcat(tacCode, ", $602\n");
                    strcat(tacCode, "sub ");
                    strcat(tacCode, (yyval.treeNode)->subtree1->tac);
                    strcat(tacCode, "_size, ");
                    strcat(tacCode, (yyval.treeNode)->subtree1->tac);
                    strcat(tacCode, "_size, 1\n");
                    strcpy((yyval.treeNode)->tac, (yyval.treeNode)->subtree1->tac);
                    (yyval.treeNode)->type = (yyval.treeNode)->subtree1->type;
                }
            }else{
                if((yyval.treeNode)->subtree1->type < 3){
                    printf("SEMANTIC ERROR: Type error in unary operator with type %d. [%d, %d]\n", (yyval.treeNode)->subtree1->type, (yyvsp[-1].lex).line, (yyvsp[-1].lex).col);
                    sem_errors++;
                }else if(!strcmp((yyvsp[-1].lex).id, "%")){
                    strcat(tacCode, "// tail\n");
                    strcat(tacCode, "mov $500, &");
                    strcat(tacCode, (yyval.treeNode)->subtree1->tac);
                    strcat(tacCode, "\nmov $600, 0\n");
                    strcat(tacCode, "mov $605, 1\n");
                    strcat(tacCode, "mov $601, ");
                    strcat(tacCode, (yyval.treeNode)->subtree1->tac);
                    strcat(tacCode, "_size\n");
                    sprintf(loop_num, "L%d", loop);
                    loop++;
                    strcat(tacCode, loop_num);
                    strcat(tacCode, ":\n");
                    strcat(tacCode, "mov $603, $500[$605]\n");
                    strcat(tacCode, "mov $500[$600], $603\n");
                    strcat(tacCode, "add $600, $600, 1\n");
                    strcat(tacCode, "add $605, $605, 1\n");
                    strcat(tacCode, "sub $602, $601, $600\n");
                    strcat(tacCode, "brnz ");
                    strcat(tacCode, loop_num);
                    strcat(tacCode, ", $602\n");
                    strcat(tacCode, "sub ");
                    strcat(tacCode, (yyval.treeNode)->subtree1->tac);
                    strcat(tacCode, "_size, ");
                    strcat(tacCode, (yyval.treeNode)->subtree1->tac);
                    strcat(tacCode, "_size, 1\n");
                    strcpy((yyval.treeNode)->tac, (yyval.treeNode)->subtree1->tac);
                    (yyval.treeNode)->type = (yyval.treeNode)->subtree1->type;
                }else{
                    strcat(tacCode, "// head\n");
                    strcat(tacCode, "mov $500, &");
                    strcat(tacCode, (yyval.treeNode)->subtree1->tac);
                    strcat(tacCode, "\nmov ");
                    strcat(tacCode, reg_num);
                    strcat(tacCode, ", $500[0]\n");
                    (yyval.treeNode)->type = (yyval.treeNode)->subtree1->type-2;
                }
            }
        } else{
            printf("SEMANTIC ERROR: Type error in unary operator with type %d. [%d, %d]\n", (yyval.treeNode)->subtree1->type, (yyvsp[-1].lex).line, (yyvsp[-1].lex).col);
            sem_errors++;
        }
    }
#line 3245 "src/sin_analyser.tab.c"
    break;

  case 67:
#line 1182 "src/sin_analyser.y"
        { (yyval.treeNode) = (yyvsp[0].treeNode); }
#line 3251 "src/sin_analyser.tab.c"
    break;

  case 68:
#line 1186 "src/sin_analyser.y"
       { (yyval.treeNode) = (yyvsp[0].treeNode); }
#line 3257 "src/sin_analyser.tab.c"
    break;

  case 69:
#line 1188 "src/sin_analyser.y"
              { (yyval.treeNode) = (yyvsp[0].treeNode); }
#line 3263 "src/sin_analyser.tab.c"
    break;

  case 70:
#line 1190 "src/sin_analyser.y"
                    { (yyval.treeNode) = (yyvsp[-1].treeNode); }
#line 3269 "src/sin_analyser.tab.c"
    break;

  case 71:
#line 1192 "src/sin_analyser.y"
        { (yyval.treeNode) = newNode((yyvsp[0].lex).id, 1, 0, (yyvsp[0].lex).id); }
#line 3275 "src/sin_analyser.tab.c"
    break;

  case 72:
#line 1194 "src/sin_analyser.y"
          { (yyval.treeNode) = newNode((yyvsp[0].lex).id, 2, 0, (yyvsp[0].lex).id); }
#line 3281 "src/sin_analyser.tab.c"
    break;

  case 73:
#line 1196 "src/sin_analyser.y"
        { (yyval.treeNode) = newNode("NIL", 3, 0, (yyvsp[0].lex).id); }
#line 3287 "src/sin_analyser.tab.c"
    break;

  case 74:
#line 1198 "src/sin_analyser.y"
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
        (yyval.treeNode) = newNode((yyvsp[0].lex).id, 0, 0, str_num); 
    }
#line 3304 "src/sin_analyser.tab.c"
    break;

  case 75:
#line 1213 "src/sin_analyser.y"
          {
        call_scope = searchTable(table, (yyvsp[-1].lex).id, 1, 1, stack, scope_pos);
    }
#line 3312 "src/sin_analyser.tab.c"
    break;

  case 76:
#line 1215 "src/sin_analyser.y"
                     {
        if(!call_scope){
            printf("SEMANTIC ERROR: Function '%s' not declared [%d, %d]\n", (yyvsp[-4].lex).id, (yyvsp[-4].lex).line, (yyvsp[-4].lex).col);
            sem_errors++;
        }else if(checkParams(table, (yyvsp[-4].lex).id, -1) != args){
            printf("SEMANTIC ERROR: Function '%s' calls for different number of parameters [%d, %d]\n", (yyvsp[-4].lex).id, (yyvsp[-4].lex).line, (yyvsp[-4].lex).col);
            sem_errors++;
        }else if(param_error){
            printf("SEMANTIC ERROR: Function '%s' incorrect parameter type [%d, %d]\n", (yyvsp[-4].lex).id, (yyvsp[-3].lex).line, (yyvsp[-3].lex).col);
            param_error = 0;
            sem_errors++;
        }
        (yyval.treeNode) = newNode("CALL", checkType(table, (yyvsp[-4].lex).id, stack[scope_pos], 0), 0, " ");
        (yyval.treeNode)->subtree2 = (yyvsp[-1].treeNode);
        strcat(tacCode, "call _");
        strcat(tacCode, (yyvsp[-4].lex).id);
        strcat(tacCode, ", ");
        sprintf(str_num, "%d", args);
        strcat(tacCode, str_num);
        strcat(tacCode, "\n");
        args = 0;

    }
#line 3340 "src/sin_analyser.tab.c"
    break;

  case 77:
#line 1239 "src/sin_analyser.y"
             {
        if(!searchTable(table, (yyvsp[-2].lex).id, 1, 1, stack, scope_pos)){
            printf("SEMANTIC ERROR: Function %s not declared [%d, %d]\n", (yyvsp[-2].lex).id, (yyvsp[-2].lex).line, (yyvsp[-2].lex).col);
            sem_errors++;
        }else if(checkParams(table, (yyvsp[-2].lex).id, -1) != args){
            printf("SEMANTIC ERROR: Function %s calls for different number of parameters [%d, %d]\n", (yyvsp[-2].lex).id, (yyvsp[-2].lex).line, (yyvsp[-2].lex).col);
            sem_errors++;
        }
        args = 0;
        (yyval.treeNode) = newNode("CALL", checkType(table, (yyvsp[-2].lex).id, stack[scope_pos], 0), 0, " ");
        strcat(tacCode, "call _");
        strcat(tacCode, (yyvsp[-2].lex).id);
        strcat(tacCode, ", 0\n");
    }
#line 3359 "src/sin_analyser.tab.c"
    break;

  case 78:
#line 1256 "src/sin_analyser.y"
       { 
        if(!searchTable(table, (yyvsp[0].lex).id, 0, 0, stack, scope_pos)){
            printf("SEMANTIC ERROR: Variable %s not declared [%d, %d]\n", (yyvsp[0].lex).id, (yyvsp[0].lex).line, (yyvsp[0].lex).col);
            sem_errors++;
        }
        param = checkParams(table, (yyvsp[0].lex).id, stack[scope_pos]);
        sprintf(reg_num, "#%d", param-1);
        id_scope = checkScope(table, (yyvsp[0].lex).id, stack[scope_pos]);
        sprintf(str_num, "_s%d", id_scope);
        strcpy(tac, (yyvsp[0].lex).id);
        strcat(tac, str_num);
        if(param)
            (yyval.treeNode) = newNode((yyvsp[0].lex).id, checkType(table, (yyvsp[0].lex).id, stack[scope_pos], 1), 0, reg_num); 
        else
            (yyval.treeNode) = newNode((yyvsp[0].lex).id, checkType(table, (yyvsp[0].lex).id, stack[scope_pos], 1), 0, tac); 
    }
#line 3380 "src/sin_analyser.tab.c"
    break;

  case 79:
#line 1275 "src/sin_analyser.y"
                                   {
        args++;
        (yyval.treeNode) = newNode("PARAMS", 0, 0, " ");
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
#line 3399 "src/sin_analyser.tab.c"
    break;

  case 80:
#line 1290 "src/sin_analyser.y"
              { 
        args++;
        (yyval.treeNode) = newNode("PARAMS", 0, 0, " ");
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
#line 3417 "src/sin_analyser.tab.c"
    break;


#line 3421 "src/sin_analyser.tab.c"

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
#line 1305 "src/sin_analyser.y"


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
    
    int i = 0; // Pula os primeiros caracteres "tests/"
    while(++i){
        tacFile[i-1] = argv[1][i-1];
        if(tacFile[i-1] == '.' || i > 100) break;
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
    strcat(tacTable, "int NIL[100] = ");
    strcat(tacTable, list_int);
    strcat(tacTable, "\n");
    strcat(tacTable, "int NIL_size = 0\n");
    if(!(sem_errors+sin_errors+lex_errors)) intermediateCode(tacFile, tacTable, tacCode);

    fclose(yyin);
    yylex_destroy();

    return 0;
}

void yyerror(const char* error) {
    printf("\nSYNTAX ERROR: %s [%d, %d]\n", error, line, col);
    sin_errors++;
}
