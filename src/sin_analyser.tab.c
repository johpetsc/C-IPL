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
    char list_int[1000] = "{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}";
    char list_float[1000] = "{.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0}";
    /*Symbol table*/
    extern symbol table[10000];
    /*Syntax Tree*/
    extern treeNode* treeNodes[10000];
    extern treeNode* syntaxTree;

#line 120 "src/sin_analyser.tab.c"

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
#line 56 "src/sin_analyser.y"

    /*Token structure*/
    struct lexToken {
        char id[200];
        int line;
        int col;
    } lex;
    /*Tree node reference*/
    struct treeNode* treeNode;

#line 213 "src/sin_analyser.tab.c"

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
#define YYLAST   2200

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  30
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  40
/* YYNRULES -- Number of rules.  */
#define YYNRULES  79
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  259

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
       0,   101,   101,   105,   111,   113,   117,   119,   123,   125,
     123,   173,   175,   173,   223,   230,   237,   243,   251,   264,
     284,   298,   314,   322,   330,   332,   334,   338,   340,   342,
     342,   349,   353,   355,   357,   361,   363,   365,   369,   371,
     373,   373,   395,   399,   412,   412,   447,   447,   469,   480,
     492,   536,   584,   588,   627,   631,   682,   686,   726,   755,
     759,   798,   817,   821,   860,   864,   951,   955,   957,   959,
     961,   963,   965,   967,   982,   982,  1008,  1025,  1040,  1055
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

#define YYPACT_NINF (-189)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-80)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      47,     5,   136,     6,    34,    56,   114,   151,    12,   131,
      48,  -189,   169,    -2,   259,   204,    53,    41,   278,   166,
     222,   240,    60,   248,    59,    53,    45,   595,   264,   286,
      63,   672,   672,  1104,   330,  1883,   404,  1853,    72,   103,
     386,   109,   124,    43,  1893,    43,  1903,   696,   428,  1128,
    1152,  1176,  1200,   135,  1224,  1248,   138,   149,   164,   191,
     203,    16,    -5,    76,    66,  1913,  1923,  1933,  1943,   641,
    1272,   205,   192,    10,   428,   247,   243,  1953,   428,   279,
    1963,  1973,   672,   268,   303,  1296,  1320,  1344,  1368,  1392,
     386,   386,    43,   386,   386,    43,   386,   304,   273,  1983,
     461,   290,   306,   299,   312,   315,   323,  1416,  1993,    80,
      83,  2003,   116,   132,  2013,   305,   291,   324,  1608,   565,
     331,   352,  1440,  2023,   461,   720,   744,   360,   768,   363,
     386,   343,   672,   792,  1632,   816,   380,  1464,  1656,   247,
     840,  1488,   335,  1656,  1512,  1868,   537,  2047,  2033,   517,
    2056,   517,  2065,   428,    13,   189,   196,   241,  2074,  2083,
    2092,  2101,  2110,  1536,   344,  1560,  1693,  1702,   481,   626,
    1711,   626,  1720,   428,    46,    -9,    26,  1837,  1729,  1738,
    1747,  1756,  1765,   372,   387,   864,   888,   388,   396,   308,
    2119,  2128,   391,   428,   428,   517,   428,   428,   517,   334,
    1774,  1783,   392,   461,   461,   626,   461,   461,   626,   428,
     247,   912,   428,  2137,   461,  2146,   257,   265,  2155,   309,
     370,  2164,  1792,   461,  1801,    86,   101,  1810,   172,   193,
    1819,   393,   394,   397,   367,   375,  1608,   565,  2173,  1828,
     936,   386,  1632,   395,  1680,   247,   696,   960,   984,   405,
     422,   425,   672,  1008,  1032,  1680,  1584,  1056,  1080
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
       0,     0,     0,     0,     0,     0,     0,     0,     0
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -189,  -189,  -189,   411,  -189,  -189,  -189,  -189,  -189,  -189,
     432,     0,  -189,   -31,   -48,   207,   -97,   -91,   220,  -189,
     -90,   216,   -61,   224,   -41,  -189,  -189,   -58,    38,   -33,
     458,   369,   431,    93,   170,   232,   321,  -180,    31,  -188
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     3,     4,     5,     6,    16,    26,    17,    31,    20,
      21,    49,     8,    50,    51,    82,    52,    53,   128,   132,
      54,   138,    55,   130,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,   100,    69,   117
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
       7,    70,    86,    -8,     7,    -5,    11,   -54,   204,   214,
      -5,   -54,    91,   -74,   -74,   154,   -74,   103,   -54,   223,
     -54,   126,    86,   -54,   -74,   -11,   234,   127,   185,   193,
     -74,   -74,    90,   -74,    -2,   235,   -74,    99,    13,     2,
     -52,   154,   -56,   -56,   -52,   154,    34,    35,     1,   145,
      85,   107,     2,   -56,    15,   -56,    -4,   186,    19,    86,
     129,    -4,   203,    44,    45,    28,    46,   174,    22,    48,
      85,    77,    30,   -52,    77,   -52,    77,   187,    76,   162,
      92,   142,   -59,   -59,    27,    93,    83,    32,    94,    86,
     141,   174,   -56,   -56,   -59,   144,   -53,    91,    74,   -55,
     -55,   137,   -53,   204,   -56,   162,   104,    85,   -53,   162,
     106,   -55,   101,   -53,    -7,   -53,   105,   -55,   -55,    -7,
     154,    77,    77,    77,    77,    77,    77,    77,   -55,    75,
     -55,   182,   -57,   -57,   115,    78,    80,    85,   116,   126,
     154,   158,     9,    10,   -57,   127,   185,   248,   -58,   -58,
      79,    -6,   232,   249,   185,   182,    -6,   -20,   248,    14,
     -58,    77,   131,    87,   249,   185,    88,   158,   136,    -3,
     188,   158,    23,    24,    -3,   186,   154,   -36,   129,   154,
     162,   174,   162,   186,   162,   111,   250,   251,   -57,   -57,
     174,   192,   -37,   178,   186,   187,   247,   250,    98,   -57,
     182,   -57,   182,   187,   162,   -54,   194,   257,    86,   -58,
     -58,   202,   -56,   -56,   187,    81,   -54,   178,   159,    89,
     -58,   256,   -58,   -56,   162,   162,   162,   162,   162,   162,
     -21,   -35,    18,   163,   182,   182,   182,   182,   182,   182,
     162,   104,   190,   162,   159,   182,   158,   231,   159,    -9,
     233,    25,   116,   102,   182,   195,    85,   -59,   -59,   -18,
     196,   116,   200,   197,   -18,   114,   158,   -15,   -59,   -15,
     179,   -48,    77,   -53,   194,   -16,   188,   -16,   -19,   243,
     160,   -55,   -55,   -19,   -53,   164,   158,   158,   218,   158,
     158,   -17,   -55,   -17,   179,   108,   178,   178,   227,   178,
     178,   165,   158,   -13,   -10,   158,   160,   178,   -13,   -10,
     160,   -74,   -74,   -14,   -74,   -14,   178,   118,   -79,   159,
     -79,   191,   -74,   159,   -77,   -57,   -57,   119,   -74,   -74,
      96,   -74,   180,   -51,   -74,   213,   -57,   -74,   -74,   179,
     -74,   201,   120,   159,   -70,   -70,   -70,   -70,   -74,   -70,
     121,   123,   -70,   124,   -74,   -74,   180,   -74,   -70,   -50,
     -74,   222,   143,   159,   159,   159,   159,   159,   221,   161,
     -78,   -77,   -78,   179,   179,   179,   179,   179,   230,   159,
     -49,   160,   159,   160,   179,   160,   -58,   -58,   133,    34,
      35,   135,   145,   179,   238,   161,   124,   -58,   209,   161,
      43,   180,   239,   180,   124,   160,    44,    45,   139,    46,
      71,    72,    48,   210,   212,    12,   211,   156,   215,   224,
     236,   181,   237,   245,   -51,   160,   160,   160,   160,   160,
     160,   146,   147,   253,   148,   180,   180,   180,   180,   180,
     180,   160,   149,   156,   160,   181,   180,   156,   150,   151,
     254,   152,   255,   252,   153,   180,   240,    29,   244,     0,
     110,   241,   112,   113,   166,   167,     0,   168,     0,   176,
     161,     0,   161,     0,   161,   169,     0,     0,     0,   157,
       0,   170,   171,     0,   172,     0,     0,   173,     0,     0,
     181,     0,   181,   176,   161,   -77,   -77,   -77,   -77,     0,
     -77,     0,     0,   -77,     0,   157,   155,   199,   -77,   157,
     -77,     0,     0,     0,   161,   161,   161,   161,   161,   161,
     146,   147,   156,   148,   181,   181,   181,   181,   181,   181,
     161,   177,   155,   161,     0,   181,   155,   150,   151,     0,
     152,     0,   156,   153,   181,     0,     0,     0,   109,     0,
       0,   -70,   -70,   -70,   -70,   177,   -70,     0,   175,   -70,
       0,     0,   156,   217,   -70,   219,   220,     0,   -46,   -46,
       0,   -46,   176,   226,     0,   228,   229,     0,   156,   -46,
       0,   156,   175,   176,   157,   -46,   -46,     0,   -46,     0,
       0,   -46,   176,     0,     0,     0,   -12,     0,   -12,   -12,
     -12,   -12,     0,   -12,   157,   -12,   -12,   -12,   -12,   -12,
       0,   155,     0,     0,     0,   -12,   -12,     0,   -12,   -12,
       0,   -12,     0,     0,   157,   157,     0,   157,   157,   166,
     167,   155,   168,     0,   177,   177,     0,   177,   177,     0,
     157,     0,     0,   157,     0,   177,   170,   171,     0,   172,
       0,   216,   173,     0,   177,   -67,   -67,   -67,   -67,    96,
     -67,   225,     0,   -67,     0,     0,     0,   155,     0,   -67,
     155,     0,   175,    33,     0,    34,    35,    36,    37,     0,
      38,   175,    39,    40,    41,    42,    43,     0,     0,     0,
       0,     0,    44,    45,     0,    46,    47,   -29,    48,   -29,
     -29,   -29,   -29,     0,   -29,     0,   -29,   -29,   -29,   -29,
     -29,     0,     0,     0,     0,     0,   -29,   -29,     0,   -29,
     -29,   -40,   -29,   -40,   -40,   -40,   -40,     0,   -40,     0,
     -40,   -40,   -40,   -40,   -40,     0,     0,     0,     0,     0,
     -40,   -40,     0,   -40,   -40,     0,   -40,   -42,   -42,   -42,
     -42,     0,   -42,   -42,   -42,   -42,   -42,   -42,   -42,     0,
       0,     0,     0,     0,   -42,   -42,     0,   -42,   -42,   -42,
     -42,   -43,   -43,   -43,   -43,     0,   -43,   134,   -43,   -43,
     -43,   -43,   -43,     0,     0,     0,     0,     0,   -43,   -43,
       0,   -43,   -43,   -43,   -43,   -38,   -38,   -38,   -38,     0,
     -38,   -38,   -38,   -38,   -38,   -38,   -38,     0,     0,     0,
       0,     0,   -38,   -38,     0,   -38,   -38,   -38,   -38,   -39,
     -39,   -39,   -39,     0,   -39,   -39,   -39,   -39,   -39,   -39,
     -39,     0,     0,     0,     0,     0,   -39,   -39,     0,   -39,
     -39,   -39,   -39,   -41,   -41,   -41,   -41,     0,   -41,   -41,
     -41,   -41,   -41,   -41,   -41,     0,     0,     0,     0,     0,
     -41,   -41,     0,   -41,   -41,   -41,   -41,   -32,   -32,   -32,
     -32,     0,   -32,   -32,   -32,   -32,   -32,   -32,   -32,     0,
       0,     0,     0,     0,   -32,   -32,     0,   -32,   -32,   -32,
     -32,   -33,   -33,   -33,   -33,     0,   -33,   -33,   -33,   -33,
     -33,   -33,   -33,     0,     0,     0,     0,     0,   -33,   -33,
       0,   -33,   -33,   -33,   -33,   -34,   -34,   -34,   -34,     0,
     -34,   -34,   -34,   -34,   -34,   -34,   -34,     0,     0,     0,
       0,     0,   -34,   -34,     0,   -34,   -34,   -34,   -34,   -43,
     -43,   -43,   -43,     0,   -43,   242,   -43,   -43,   -43,   -43,
     -43,     0,     0,     0,     0,     0,   -43,   -43,     0,   -43,
     -43,   -43,   -43,   -45,   -45,   -45,   -45,     0,   -45,   -45,
     -45,   -45,   -45,   -45,   -45,     0,     0,     0,     0,     0,
     -45,   -45,     0,   -45,   -45,   -45,   -45,   -31,   -31,   -31,
     -31,     0,   -31,   -31,   -31,   -31,   -31,   -31,   -31,     0,
       0,     0,     0,     0,   -31,   -31,     0,   -31,   -31,   -31,
     -31,   -27,   -27,   -27,   -27,     0,   -27,   -27,   -27,   -27,
     -27,   -27,   -27,     0,     0,     0,     0,     0,   -27,   -27,
       0,   -27,   -27,   -27,   -27,   -28,   -28,   -28,   -28,     0,
     -28,   -28,   -28,   -28,   -28,   -28,   -28,     0,     0,     0,
       0,     0,   -28,   -28,     0,   -28,   -28,   -28,   -28,   -47,
     -47,   -47,   -47,     0,   -47,   -47,   -47,   -47,   -47,   -47,
     -47,     0,     0,     0,     0,     0,   -47,   -47,     0,   -47,
     -47,   -47,   -47,   -30,   -30,   -30,   -30,     0,   -30,   -30,
     -30,   -30,   -30,   -30,   -30,     0,     0,     0,     0,     0,
     -30,   -30,     0,   -30,   -30,   -30,   -30,   -26,   -26,   -26,
     -26,     0,   -26,     0,   -26,   -26,   -26,   -26,   -26,     0,
       0,     0,     0,     0,   -26,   -26,     0,   -26,   -26,   -26,
     -26,   -25,   -25,   -25,   -25,     0,   -25,     0,   -25,   -25,
     -25,   -25,   -25,     0,     0,     0,     0,     0,   -25,   -25,
       0,   -25,   -25,   -25,   -25,    34,    35,    36,    37,     0,
      38,     0,    39,    40,    41,    42,    43,     0,     0,     0,
       0,     0,    44,    45,     0,    46,    47,    84,    48,   -24,
     -24,   -24,   -24,     0,   -24,     0,   -24,   -24,   -24,   -24,
     -24,     0,     0,     0,     0,     0,   -24,   -24,     0,   -24,
     -24,   -24,   -24,   -31,   -31,   -31,   -31,     0,   -31,     0,
     -31,   -31,   -31,   -31,   -31,     0,     0,     0,     0,     0,
     -31,   -31,     0,   -31,   -31,   -31,   -31,   -32,   -32,   -32,
     -32,     0,   -32,     0,   -32,   -32,   -32,   -32,   -32,     0,
       0,     0,     0,     0,   -32,   -32,     0,   -32,   -32,   -32,
     -32,   -33,   -33,   -33,   -33,     0,   -33,     0,   -33,   -33,
     -33,   -33,   -33,     0,     0,     0,     0,     0,   -33,   -33,
       0,   -33,   -33,   -33,   -33,    34,    35,    36,    37,     0,
      38,     0,    39,    40,    41,    42,    43,     0,     0,     0,
       0,     0,    44,    45,     0,    46,    47,    97,    48,   -23,
     -23,   -23,   -23,     0,   -23,     0,   -23,   -23,   -23,   -23,
     -23,     0,     0,     0,     0,     0,   -23,   -23,     0,   -23,
     -23,   -23,   -23,   -22,   -22,   -22,   -22,     0,   -22,     0,
     -22,   -22,   -22,   -22,   -22,     0,     0,     0,     0,     0,
     -22,   -22,     0,   -22,   -22,   -22,   -22,   -27,   -27,   -27,
     -27,     0,   -27,     0,   -27,   -27,   -27,   -27,   -27,     0,
       0,     0,     0,     0,   -27,   -27,     0,   -27,   -27,   -27,
     -27,   -34,   -34,   -34,   -34,     0,   -34,     0,   -34,   -34,
     -34,   -34,   -34,     0,     0,     0,     0,     0,   -34,   -34,
       0,   -34,   -34,   -34,   -34,   -28,   -28,   -28,   -28,     0,
     -28,     0,   -28,   -28,   -28,   -28,   -28,     0,     0,     0,
       0,     0,   -28,   -28,     0,   -28,   -28,   -28,   -28,    34,
      35,    36,    37,     0,    38,     0,    39,    40,    41,    42,
      43,     0,     0,     0,     0,     0,    44,    45,     0,    46,
      47,   122,    48,   -30,   -30,   -30,   -30,     0,   -30,     0,
     -30,   -30,   -30,   -30,   -30,     0,     0,     0,     0,     0,
     -30,   -30,     0,   -30,   -30,   -30,   -30,    34,    35,    36,
      37,     0,    38,     0,    39,    40,    41,    42,    43,     0,
       0,     0,     0,     0,    44,    45,     0,    46,    47,   140,
      48,   -45,   -45,   -45,   -45,     0,   -45,     0,   -45,   -45,
     -45,   -45,   -45,     0,     0,     0,     0,     0,   -45,   -45,
       0,   -45,   -45,   -45,   -45,   -47,   -47,   -47,   -47,     0,
     -47,     0,   -47,   -47,   -47,   -47,   -47,     0,     0,     0,
       0,     0,   -47,   -47,     0,   -47,   -47,   -47,   -47,   -18,
     -18,   -18,   -18,     0,   -18,     0,   -18,   -18,   -18,   -18,
     -18,     0,     0,     0,     0,     0,   -18,   -18,     0,   -18,
     -18,   -18,   -18,   -19,   -19,   -19,   -19,     0,   -19,     0,
     -19,   -19,   -19,   -19,   -19,     0,     0,     0,     0,     0,
     -19,   -19,     0,   -19,   -19,   -19,   -19,    34,    35,    36,
      37,     0,    38,     0,    39,    40,    41,    42,    43,     0,
       0,     0,     0,     0,    44,    45,     0,    46,    47,   258,
      48,    34,    35,     0,    37,     0,   183,     0,   184,    40,
      41,    42,    43,     0,     0,     0,     0,     0,    44,    45,
       0,    46,   125,     0,    48,   -44,   -44,     0,   -44,     0,
     -44,     0,   -44,   -44,   -44,   -44,   -44,     0,     0,     0,
       0,     0,   -44,   -44,     0,   -44,   -44,     0,   -44,    34,
      35,     0,    37,     0,    38,     0,    39,    40,    41,    42,
      43,     0,     0,     0,     0,     0,    44,    45,     0,    46,
      47,     0,    48,    34,    35,     0,    37,     0,   183,     0,
     184,    40,    41,    42,    43,     0,     0,     0,     0,     0,
      44,    45,     0,    46,   246,     0,    48,   -70,   -70,   -70,
     -70,     0,   -70,     0,     0,   -70,   -71,   -71,   -71,   -71,
     -70,   -71,   -70,     0,   -71,   -72,   -72,   -72,   -72,   -71,
     -72,   -71,     0,   -72,   -73,   -73,   -73,   -73,   -72,   -73,
     -72,     0,   -73,   -62,   208,   -62,   -62,   -73,   -62,   -73,
       0,   -62,   -64,   -64,   -64,   -64,   -62,   -64,   -62,     0,
     -64,   -66,   -66,   -66,   -66,   -64,   -66,   -64,     0,   -66,
     -68,   -68,   -68,   -68,   -66,   -68,   -66,     0,   -68,   -67,
     -67,   -67,   -67,   -68,   -67,   -68,     0,   -67,   -61,   208,
     -61,   -61,   -67,   -61,   -67,     0,   -61,   -65,   -65,   -65,
     -65,   -61,   -65,   -61,     0,   -65,   -76,   -76,   -76,   -76,
     -65,   -76,   -65,     0,   -76,   -69,   -69,   -69,   -69,   -76,
     -69,   -76,     0,   -69,   -60,   208,   -60,   -60,   -69,   -60,
     -69,     0,   -60,   -63,   -63,   -63,   -63,   -60,   -63,   -60,
       0,   -63,   -75,   -75,   -75,   -75,   -63,   -75,   -63,     0,
     -75,   205,     0,   -59,   -59,   -75,   206,   -75,     0,   207,
       0,     0,     0,     0,   -59,     0,   -59,   -77,   -77,   -77,
     -77,   -77,   -77,     0,     0,   -77,     0,     0,     0,    73,
       0,   -77,   -77,   -77,   -77,   -77,     0,   -77,     0,     0,
     -77,     0,     0,     0,    73,     0,   -77,   -71,   -71,   -71,
     -71,     0,   -71,     0,     0,   -71,     0,   -72,   -72,   -72,
     -72,   -71,   -72,     0,     0,   -72,     0,   -73,   -73,   -73,
     -73,   -72,   -73,     0,     0,   -73,     0,   -62,    95,   -62,
     -62,   -73,   -62,     0,     0,   -62,     0,   -64,   -64,   -64,
     -64,   -62,   -64,     0,     0,   -64,     0,   -66,   -66,   -66,
     -66,   -64,   -66,     0,     0,   -66,     0,   -68,   -68,   -68,
     -68,   -66,   -68,     0,     0,   -68,     0,   -67,   -67,   -67,
     -67,   -68,   -67,     0,     0,   -67,     0,   -61,    95,   -61,
     -61,   -67,   -61,     0,     0,   -61,     0,   -65,   -65,   -65,
     -65,   -61,   -65,     0,     0,   -65,     0,   -76,   -76,   -76,
     -76,   -65,   -76,     0,     0,   -76,     0,   -69,   -69,   -69,
     -69,   -76,   -69,     0,     0,   -69,     0,   -60,    95,   -60,
     -60,   -69,   -60,     0,     0,   -60,     0,   -63,   -63,   -63,
     -63,   -60,   -63,     0,     0,   -63,     0,   -75,   -75,   -75,
     -75,   -63,   -75,     0,     0,   -75,     0,   -77,   -77,   -77,
     -77,   -75,   -77,     0,     0,   -77,     0,     0,     0,   189,
     -77,   -71,   -71,   -71,   -71,     0,   -71,     0,     0,   -71,
     -72,   -72,   -72,   -72,   -71,   -72,     0,     0,   -72,   -73,
     -73,   -73,   -73,   -72,   -73,     0,     0,   -73,   -62,   198,
     -62,   -62,   -73,   -62,     0,     0,   -62,   -64,   -64,   -64,
     -64,   -62,   -64,     0,     0,   -64,   -66,   -66,   -66,   -66,
     -64,   -66,     0,     0,   -66,   -68,   -68,   -68,   -68,   -66,
     -68,     0,     0,   -68,   -67,   -67,   -67,   -67,   -68,   -67,
       0,     0,   -67,   -61,   198,   -61,   -61,   -67,   -61,     0,
       0,   -61,   -65,   -65,   -65,   -65,   -61,   -65,     0,     0,
     -65,   -76,   -76,   -76,   -76,   -65,   -76,     0,     0,   -76,
     -69,   -69,   -69,   -69,   -76,   -69,     0,     0,   -69,   -60,
     198,   -60,   -60,   -69,   -60,     0,     0,   -60,   -63,   -63,
     -63,   -63,   -60,   -63,     0,     0,   -63,   -75,   -75,   -75,
     -75,   -63,   -75,     0,     0,   -75,     0,     0,     0,     0,
     -75
};

static const yytype_int16 yycheck[] =
{
       0,    32,    50,     5,     4,     0,     0,    16,    17,   189,
       5,    16,    17,     3,     4,    48,     6,    75,    27,   199,
      29,   118,    70,    28,    14,    27,   214,   118,   118,    16,
      20,    21,    16,    23,     0,   223,    26,    27,    26,     5,
      27,    74,    16,    17,    28,    78,     3,     4,     1,     6,
      50,    82,     5,    27,     6,    29,     0,   118,     5,   107,
     118,     5,    16,    20,    21,     6,    23,   100,    27,    26,
      70,    40,    27,    27,    43,    29,    45,   118,    40,    48,
      14,   139,    16,    17,    24,    19,    48,    24,    22,   137,
     138,   124,    16,    17,    28,   143,    16,    17,    26,    16,
      17,   132,    16,    17,    28,    74,    75,   107,    28,    78,
      79,    28,    74,    27,     0,    29,    78,    16,    17,     5,
     153,    90,    91,    92,    93,    94,    95,    96,    27,    26,
      29,   100,    16,    17,    96,    26,    43,   137,   100,   236,
     173,    48,     6,     7,    28,   236,   236,   244,    16,    17,
      26,     0,   210,   244,   244,   124,     5,    26,   255,    28,
      28,   130,   124,    28,   255,   255,    28,    74,   130,     0,
     139,    78,     6,     7,     5,   236,   209,    28,   236,   212,
     149,   214,   151,   244,   153,    92,   244,   245,    16,    17,
     223,   153,    28,   100,   255,   236,   244,   255,     6,    27,
     169,    29,   171,   244,   173,    16,    17,   255,   256,    16,
      17,   173,    16,    17,   255,    45,    27,   124,    48,    28,
      27,   252,    29,    27,   193,   194,   195,   196,   197,   198,
      26,    28,    28,    28,   203,   204,   205,   206,   207,   208,
     209,   210,   149,   212,    74,   214,   153,   209,    78,    27,
     212,    29,   214,     6,   223,    14,   256,    16,    17,     0,
      19,   223,   169,    22,     5,    95,   173,    27,    27,    29,
     100,    28,   241,    16,    17,    27,   245,    29,     0,   241,
      48,    16,    17,     5,    27,     6,   193,   194,   195,   196,
     197,    27,    27,    29,   124,    27,   203,   204,   205,   206,
     207,    28,   209,     0,     0,   212,    74,   214,     5,     5,
      78,     3,     4,    27,     6,    29,   223,    27,    27,   149,
      29,   151,    14,   153,    18,    16,    17,    28,    20,    21,
      18,    23,   100,    28,    26,    27,    27,     3,     4,   169,
       6,   171,    27,   173,    14,    15,    16,    17,    14,    19,
      27,    27,    22,    29,    20,    21,   124,    23,    28,    28,
      26,    27,    27,   193,   194,   195,   196,   197,   198,    48,
      27,    27,    29,   203,   204,   205,   206,   207,   208,   209,
      28,   149,   212,   151,   214,   153,    16,    17,    28,     3,
       4,    28,     6,   223,    27,    74,    29,    27,    26,    78,
      14,   169,    27,   171,    29,   173,    20,    21,    28,    23,
       6,     7,    26,    26,    18,     4,    28,    48,    27,    27,
      27,   100,    28,    28,    27,   193,   194,   195,   196,   197,
     198,     3,     4,    28,     6,   203,   204,   205,   206,   207,
     208,   209,    14,    74,   212,   124,   214,    78,    20,    21,
      28,    23,    27,   246,    26,   223,   236,    25,   242,    -1,
      91,   237,    93,    94,     3,     4,    -1,     6,    -1,   100,
     149,    -1,   151,    -1,   153,    14,    -1,    -1,    -1,    48,
      -1,    20,    21,    -1,    23,    -1,    -1,    26,    -1,    -1,
     169,    -1,   171,   124,   173,    14,    15,    16,    17,    -1,
      19,    -1,    -1,    22,    -1,    74,    48,    26,    27,    78,
      29,    -1,    -1,    -1,   193,   194,   195,   196,   197,   198,
       3,     4,   153,     6,   203,   204,   205,   206,   207,   208,
     209,   100,    74,   212,    -1,   214,    78,    20,    21,    -1,
      23,    -1,   173,    26,   223,    -1,    -1,    -1,    90,    -1,
      -1,    14,    15,    16,    17,   124,    19,    -1,   100,    22,
      -1,    -1,   193,   194,    27,   196,   197,    -1,     3,     4,
      -1,     6,   203,   204,    -1,   206,   207,    -1,   209,    14,
      -1,   212,   124,   214,   153,    20,    21,    -1,    23,    -1,
      -1,    26,   223,    -1,    -1,    -1,     1,    -1,     3,     4,
       5,     6,    -1,     8,   173,    10,    11,    12,    13,    14,
      -1,   153,    -1,    -1,    -1,    20,    21,    -1,    23,    24,
      -1,    26,    -1,    -1,   193,   194,    -1,   196,   197,     3,
       4,   173,     6,    -1,   203,   204,    -1,   206,   207,    -1,
     209,    -1,    -1,   212,    -1,   214,    20,    21,    -1,    23,
      -1,   193,    26,    -1,   223,    14,    15,    16,    17,    18,
      19,   203,    -1,    22,    -1,    -1,    -1,   209,    -1,    28,
     212,    -1,   214,     1,    -1,     3,     4,     5,     6,    -1,
       8,   223,    10,    11,    12,    13,    14,    -1,    -1,    -1,
      -1,    -1,    20,    21,    -1,    23,    24,     1,    26,     3,
       4,     5,     6,    -1,     8,    -1,    10,    11,    12,    13,
      14,    -1,    -1,    -1,    -1,    -1,    20,    21,    -1,    23,
      24,     1,    26,     3,     4,     5,     6,    -1,     8,    -1,
      10,    11,    12,    13,    14,    -1,    -1,    -1,    -1,    -1,
      20,    21,    -1,    23,    24,    -1,    26,     3,     4,     5,
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
       8,     9,    10,    11,    12,    13,    14,    -1,    -1,    -1,
      -1,    -1,    20,    21,    -1,    23,    24,    25,    26,     3,
       4,     5,     6,    -1,     8,     9,    10,    11,    12,    13,
      14,    -1,    -1,    -1,    -1,    -1,    20,    21,    -1,    23,
      24,    25,    26,     3,     4,     5,     6,    -1,     8,     9,
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
       4,     5,     6,    -1,     8,    -1,    10,    11,    12,    13,
      14,    -1,    -1,    -1,    -1,    -1,    20,    21,    -1,    23,
      24,    25,    26,     3,     4,     5,     6,    -1,     8,    -1,
      10,    11,    12,    13,    14,    -1,    -1,    -1,    -1,    -1,
      20,    21,    -1,    23,    24,    25,    26,     3,     4,     5,
       6,    -1,     8,    -1,    10,    11,    12,    13,    14,    -1,
      -1,    -1,    -1,    -1,    20,    21,    -1,    23,    24,    25,
      26,     3,     4,    -1,     6,    -1,     8,    -1,    10,    11,
      12,    13,    14,    -1,    -1,    -1,    -1,    -1,    20,    21,
      -1,    23,    24,    -1,    26,     3,     4,    -1,     6,    -1,
       8,    -1,    10,    11,    12,    13,    14,    -1,    -1,    -1,
      -1,    -1,    20,    21,    -1,    23,    24,    -1,    26,     3,
       4,    -1,     6,    -1,     8,    -1,    10,    11,    12,    13,
      14,    -1,    -1,    -1,    -1,    -1,    20,    21,    -1,    23,
      24,    -1,    26,     3,     4,    -1,     6,    -1,     8,    -1,
      10,    11,    12,    13,    14,    -1,    -1,    -1,    -1,    -1,
      20,    21,    -1,    23,    24,    -1,    26,    14,    15,    16,
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
      -1,    22,    14,    15,    16,    17,    27,    19,    29,    -1,
      22,    14,    -1,    16,    17,    27,    19,    29,    -1,    22,
      -1,    -1,    -1,    -1,    27,    -1,    29,    14,    15,    16,
      17,    18,    19,    -1,    -1,    22,    -1,    -1,    -1,    26,
      -1,    28,    14,    15,    16,    17,    -1,    19,    -1,    -1,
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
      17,    28,    19,    -1,    -1,    22,    -1,    14,    15,    16,
      17,    28,    19,    -1,    -1,    22,    -1,    -1,    -1,    26,
      27,    14,    15,    16,    17,    -1,    19,    -1,    -1,    22,
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
      15,    16,    17,    27,    19,    -1,    -1,    22,    14,    15,
      16,    17,    27,    19,    -1,    -1,    22,    14,    15,    16,
      17,    27,    19,    -1,    -1,    22,    -1,    -1,    -1,    -1,
      27
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
      43,    44,    46,    47,    50,    52,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    68,
      43,     6,     7,    26,    26,    26,    58,    68,    26,    26,
      63,    64,    45,    58,    25,    41,    44,    28,    28,    28,
      16,    17,    14,    19,    22,    15,    18,    25,     6,    27,
      67,    58,     6,    57,    68,    58,    68,    43,    27,    60,
      61,    63,    61,    61,    64,    58,    58,    69,    27,    28,
      27,    27,    25,    27,    29,    24,    46,    47,    48,    57,
      53,    58,    49,    28,     9,    28,    58,    43,    51,    28,
      25,    44,    57,    27,    44,     6,     3,     4,     6,    14,
      20,    21,    23,    26,    59,    60,    61,    62,    63,    64,
      65,    66,    68,    28,     6,    28,     3,     4,     6,    14,
      20,    21,    23,    26,    59,    60,    61,    62,    63,    64,
      65,    66,    68,     8,    10,    50,    52,    54,    68,    26,
      63,    64,    58,    16,    17,    14,    19,    22,    15,    26,
      63,    64,    58,    16,    17,    14,    19,    22,    15,    26,
      26,    28,    18,    27,    67,    27,    60,    61,    63,    61,
      61,    64,    27,    67,    27,    60,    61,    63,    61,    61,
      64,    58,    57,    58,    69,    69,    27,    28,    27,    27,
      48,    53,     9,    58,    51,    28,    24,    44,    46,    47,
      57,    57,    45,    28,    28,    27,    43,    44,    25
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    30,    31,    32,    32,    32,    33,    33,    35,    36,
      34,    37,    38,    34,    39,    39,    40,    40,    41,    41,
      42,    42,    43,    43,    43,    43,    43,    44,    44,    45,
      44,    44,    46,    46,    46,    47,    47,    47,    48,    48,
      49,    48,    48,    50,    51,    50,    53,    52,    54,    55,
      56,    57,    58,    59,    59,    60,    60,    61,    61,    61,
      62,    62,    62,    63,    63,    64,    64,    65,    65,    65,
      65,    65,    65,    65,    67,    66,    66,    68,    69,    69
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     1,     1,     1,     1,     0,     0,
       9,     0,     0,     8,     3,     1,     2,     3,     3,     4,
       2,     3,     2,     2,     1,     1,     1,     2,     2,     0,
       4,     1,     1,     1,     2,     1,     1,     1,     2,     2,
       0,     4,     1,     5,     0,     8,     0,    10,     2,     4,
       4,     3,     1,     3,     1,     3,     1,     3,     3,     1,
       3,     2,     1,     3,     1,     2,     1,     1,     1,     3,
       1,     1,     1,     1,     0,     5,     3,     1,     3,     1
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
#line 101 "src/sin_analyser.y"
            { syntaxTree = (yyval.treeNode); }
#line 1930 "src/sin_analyser.tab.c"
    break;

  case 3:
#line 105 "src/sin_analyser.y"
                          {
        (yyval.treeNode) = newNode("PROGRAM", 0, 0, " ");
        (yyval.treeNode)->subtree1 = (yyvsp[-1].treeNode);
        (yyval.treeNode)->subtree2 = (yyvsp[0].treeNode);
    }
#line 1940 "src/sin_analyser.tab.c"
    break;

  case 4:
#line 111 "src/sin_analyser.y"
                  { (yyval.treeNode) = (yyvsp[0].treeNode); }
#line 1946 "src/sin_analyser.tab.c"
    break;

  case 5:
#line 113 "src/sin_analyser.y"
          { (yyval.treeNode) = newNode("ERROR", 0, 0, " "); }
#line 1952 "src/sin_analyser.tab.c"
    break;

  case 6:
#line 117 "src/sin_analyser.y"
           { (yyval.treeNode) = (yyvsp[0].treeNode); }
#line 1958 "src/sin_analyser.tab.c"
    break;

  case 7:
#line 119 "src/sin_analyser.y"
              { (yyval.treeNode) = (yyvsp[0].treeNode); }
#line 1964 "src/sin_analyser.tab.c"
    break;

  case 8:
#line 123 "src/sin_analyser.y"
           {
        changeScope(1);
    }
#line 1972 "src/sin_analyser.tab.c"
    break;

  case 9:
#line 125 "src/sin_analyser.y"
             {
        updateParams(table, params);
        params = 0;
    }
#line 1981 "src/sin_analyser.tab.c"
    break;

  case 10:
#line 128 "src/sin_analyser.y"
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
#line 2030 "src/sin_analyser.tab.c"
    break;

  case 11:
#line 173 "src/sin_analyser.y"
            {
        updateParams(table, params);
    }
#line 2038 "src/sin_analyser.tab.c"
    break;

  case 12:
#line 175 "src/sin_analyser.y"
            {
        changeScope(1);
    }
#line 2046 "src/sin_analyser.tab.c"
    break;

  case 13:
#line 177 "src/sin_analyser.y"
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
#line 2094 "src/sin_analyser.tab.c"
    break;

  case 14:
#line 223 "src/sin_analyser.y"
                           {
        params++;
        (yyval.treeNode) = newNode("PARAMS", 0, 0, " ");
        (yyval.treeNode)->subtree1 = (yyvsp[-2].treeNode);
        (yyval.treeNode)->subtree2 = (yyvsp[0].treeNode);
    }
#line 2105 "src/sin_analyser.tab.c"
    break;

  case 15:
#line 230 "src/sin_analyser.y"
          { 
        params++;
        (yyval.treeNode) = (yyvsp[0].treeNode);
    }
#line 2114 "src/sin_analyser.tab.c"
    break;

  case 16:
#line 237 "src/sin_analyser.y"
            {
        // reg++;
        newSymbol(table, (yyvsp[0].lex).id, (yyvsp[-1].lex).id, "PAR      ", (yyvsp[0].lex).line, (yyvsp[0].lex).col, stack[scope_pos], params+1, reg);   
        (yyval.treeNode) = newNode(strcat(strcat((yyvsp[-1].lex).id," var "), (yyvsp[0].lex).id), checkType(table, (yyvsp[0].lex).id, stack[scope_pos], 1), 0, " ");
    }
#line 2124 "src/sin_analyser.tab.c"
    break;

  case 17:
#line 243 "src/sin_analyser.y"
                 {
        // reg++;
        newSymbol(table, (yyvsp[0].lex).id, strcat((yyvsp[-2].lex).id," list"), "LIST PAR ",(yyvsp[0].lex).line, (yyvsp[0].lex).col, stack[scope_pos], params+1, reg);
        (yyval.treeNode) = newNode(strcat(strcat((yyvsp[-2].lex).id," "), (yyvsp[0].lex).id), checkType(table, (yyvsp[0].lex).id, stack[scope_pos], 1), 0, " ");
    }
#line 2134 "src/sin_analyser.tab.c"
    break;

  case 18:
#line 251 "src/sin_analyser.y"
               {
        strcat(tacTable, (yyvsp[-2].lex).id);
        strcat(tacTable, " ");
        strcat(tacTable, (yyvsp[-1].lex).id);
        strcat(tacTable, "\n");
        if(searchTable(table, (yyvsp[-1].lex).id, 0, 1, stack, scope_pos)){
            printf("SEMANTIC ERROR: Variable %s already declared [%d, %d]\n", (yyvsp[-1].lex).id, (yyvsp[-1].lex).line, (yyvsp[-1].lex).col);
            sem_errors++;
        }
        newSymbol(table, (yyvsp[-1].lex).id, (yyvsp[-2].lex).id, "VAR      ", (yyvsp[-1].lex).line, (yyvsp[-1].lex).col, stack[scope_pos], 0, reg);   
        (yyval.treeNode) = newNode(strcat(strcat((yyvsp[-2].lex).id," var "), (yyvsp[-1].lex).id), checkType(table, (yyvsp[-1].lex).id, stack[scope_pos], 1), 0, " ");
    }
#line 2151 "src/sin_analyser.tab.c"
    break;

  case 19:
#line 264 "src/sin_analyser.y"
                    {
        strcat(tacTable, (yyvsp[-3].lex).id);
        strcat(tacTable, " ");
        strcat(tacTable, (yyvsp[-1].lex).id);
        strcat(tacTable, "[100] = ");
        if(!strcmp((yyvsp[-3].lex).id, "int")) strcat(tacTable, list_int);
        else strcat(tacTable, list_float);
        strcat(tacTable, "\nint ");
        strcat(tacTable, (yyvsp[-1].lex).id);
        strcat(tacTable, "_size = 0\n");
        if(searchTable(table, (yyvsp[-1].lex).id, 0, 1, stack, scope_pos)) {
            printf("SEMANTIC ERROR: Variable %s already declared [%d, %d]\n", (yyvsp[-1].lex).id, (yyvsp[-1].lex).line, (yyvsp[-1].lex).col);
            sem_errors++;
        }
        newSymbol(table, (yyvsp[-1].lex).id, strcat((yyvsp[-3].lex).id," list"), "LIST VAR ",(yyvsp[-1].lex).line, (yyvsp[-1].lex).col, stack[scope_pos], 0, reg);
        (yyval.treeNode) = newNode(strcat(strcat((yyvsp[-3].lex).id," "), (yyvsp[-1].lex).id), checkType(table, (yyvsp[-1].lex).id, stack[scope_pos], 1), 0, " ");
    }
#line 2173 "src/sin_analyser.tab.c"
    break;

  case 20:
#line 284 "src/sin_analyser.y"
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
#line 2191 "src/sin_analyser.tab.c"
    break;

  case 21:
#line 298 "src/sin_analyser.y"
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
#line 2209 "src/sin_analyser.tab.c"
    break;

  case 22:
#line 314 "src/sin_analyser.y"
                    {
        (yyval.treeNode) = newNode("BLOCK", 0, 0, " ");
        (yyval.treeNode)->subtree1 = (yyvsp[-1].treeNode);
        (yyval.treeNode)->subtree2 = (yyvsp[0].treeNode);
        if((yyval.treeNode)->subtree1->ret || (yyval.treeNode)->subtree2->ret) (yyval.treeNode)->ret = 1;
        (yyval.treeNode)->type = (yyval.treeNode)->subtree2->type;
    }
#line 2221 "src/sin_analyser.tab.c"
    break;

  case 23:
#line 322 "src/sin_analyser.y"
                 {
        (yyval.treeNode) = newNode("BLOCK", 0, 0, " ");
        (yyval.treeNode)->subtree1 = (yyvsp[-1].treeNode);
        (yyval.treeNode)->subtree2 = (yyvsp[0].treeNode);
        if((yyval.treeNode)->subtree1->ret || (yyval.treeNode)->subtree2->ret) (yyval.treeNode)->ret = 1;
        (yyval.treeNode)->type = (yyval.treeNode)->subtree2->type;
    }
#line 2233 "src/sin_analyser.tab.c"
    break;

  case 24:
#line 330 "src/sin_analyser.y"
              { (yyval.treeNode) = (yyvsp[0].treeNode); }
#line 2239 "src/sin_analyser.tab.c"
    break;

  case 25:
#line 332 "src/sin_analyser.y"
           { (yyval.treeNode) = (yyvsp[0].treeNode); }
#line 2245 "src/sin_analyser.tab.c"
    break;

  case 26:
#line 334 "src/sin_analyser.y"
          { (yyval.treeNode) = newNode("ERROR", 0, 0, " "); }
#line 2251 "src/sin_analyser.tab.c"
    break;

  case 27:
#line 338 "src/sin_analyser.y"
             { (yyval.treeNode) = (yyvsp[-1].treeNode); }
#line 2257 "src/sin_analyser.tab.c"
    break;

  case 28:
#line 340 "src/sin_analyser.y"
              { (yyval.treeNode) = (yyvsp[-1].treeNode); }
#line 2263 "src/sin_analyser.tab.c"
    break;

  case 29:
#line 342 "src/sin_analyser.y"
       {
        changeScope(1);
    }
#line 2271 "src/sin_analyser.tab.c"
    break;

  case 30:
#line 344 "src/sin_analyser.y"
               { 
        (yyval.treeNode) = (yyvsp[-1].treeNode);
        changeScope(0);
    }
#line 2280 "src/sin_analyser.tab.c"
    break;

  case 31:
#line 349 "src/sin_analyser.y"
             { (yyval.treeNode) = (yyvsp[0].treeNode); }
#line 2286 "src/sin_analyser.tab.c"
    break;

  case 32:
#line 353 "src/sin_analyser.y"
            { (yyval.treeNode) = (yyvsp[0].treeNode); }
#line 2292 "src/sin_analyser.tab.c"
    break;

  case 33:
#line 355 "src/sin_analyser.y"
        { (yyval.treeNode) = (yyvsp[0].treeNode); }
#line 2298 "src/sin_analyser.tab.c"
    break;

  case 34:
#line 357 "src/sin_analyser.y"
               { (yyval.treeNode) = (yyvsp[-1].treeNode); }
#line 2304 "src/sin_analyser.tab.c"
    break;

  case 35:
#line 361 "src/sin_analyser.y"
              { (yyval.treeNode) = (yyvsp[0].treeNode); }
#line 2310 "src/sin_analyser.tab.c"
    break;

  case 36:
#line 363 "src/sin_analyser.y"
          { (yyval.treeNode) = (yyvsp[0].treeNode); }
#line 2316 "src/sin_analyser.tab.c"
    break;

  case 37:
#line 365 "src/sin_analyser.y"
           { (yyval.treeNode) = (yyvsp[0].treeNode); }
#line 2322 "src/sin_analyser.tab.c"
    break;

  case 38:
#line 369 "src/sin_analyser.y"
             { (yyval.treeNode) = (yyvsp[-1].treeNode); }
#line 2328 "src/sin_analyser.tab.c"
    break;

  case 39:
#line 371 "src/sin_analyser.y"
              { (yyval.treeNode) = (yyvsp[-1].treeNode); }
#line 2334 "src/sin_analyser.tab.c"
    break;

  case 40:
#line 373 "src/sin_analyser.y"
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
#line 2357 "src/sin_analyser.tab.c"
    break;

  case 41:
#line 390 "src/sin_analyser.y"
               { 
        (yyval.treeNode) = (yyvsp[-1].treeNode);
        changeScope(0);
    }
#line 2366 "src/sin_analyser.tab.c"
    break;

  case 42:
#line 395 "src/sin_analyser.y"
             { (yyval.treeNode) = (yyvsp[0].treeNode); }
#line 2372 "src/sin_analyser.tab.c"
    break;

  case 43:
#line 399 "src/sin_analyser.y"
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
#line 2389 "src/sin_analyser.tab.c"
    break;

  case 44:
#line 412 "src/sin_analyser.y"
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
#line 2406 "src/sin_analyser.tab.c"
    break;

  case 45:
#line 423 "src/sin_analyser.y"
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
#line 2432 "src/sin_analyser.tab.c"
    break;

  case 46:
#line 447 "src/sin_analyser.y"
                     {
        strcat(tacCode, "// for\n");
        sprintf(for_loop, "L%d", loop);
        loop++;
        strcat(tacCode, for_loop);
        strcat(tacCode, ":\n");
    }
#line 2444 "src/sin_analyser.tab.c"
    break;

  case 47:
#line 453 "src/sin_analyser.y"
                                        {
        (yyval.treeNode) = newNode("FOR", 0, 0, " ");
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
#line 2462 "src/sin_analyser.tab.c"
    break;

  case 48:
#line 469 "src/sin_analyser.y"
                     {
        (yyval.treeNode) = newNode("RETURN", 0, 1, " ");
        (yyval.treeNode)->subtree1 = (yyvsp[0].treeNode);
        (yyval.treeNode)->type = (yyval.treeNode)->subtree1->type;
        strcat(tacCode, "return ");
        strcat(tacCode, (yyval.treeNode)->subtree1->tac);
        strcat(tacCode, "\n");
    }
#line 2475 "src/sin_analyser.tab.c"
    break;

  case 49:
#line 480 "src/sin_analyser.y"
                {
        (yyval.treeNode) = newNode("IN", 0, 0, " ");
        (yyval.treeNode)->subtree1 = (yyvsp[-1].treeNode);
        strcat(tacCode, "// in\n");
        if((yyval.treeNode)->subtree1->type == 1) strcat(tacCode, "scani ");
        else strcat(tacCode, "scanf ");
        strcat(tacCode, (yyval.treeNode)->subtree1->tac);
        strcat(tacCode, "\n");
    }
#line 2489 "src/sin_analyser.tab.c"
    break;

  case 50:
#line 492 "src/sin_analyser.y"
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
#line 2535 "src/sin_analyser.tab.c"
    break;

  case 51:
#line 536 "src/sin_analyser.y"
                        {
        (yyval.treeNode) = newNode("ASSIGN", 0, 0, " ");
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
#line 2585 "src/sin_analyser.tab.c"
    break;

  case 52:
#line 584 "src/sin_analyser.y"
           { (yyval.treeNode) = (yyvsp[0].treeNode); }
#line 2591 "src/sin_analyser.tab.c"
    break;

  case 53:
#line 588 "src/sin_analyser.y"
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
#line 2634 "src/sin_analyser.tab.c"
    break;

  case 54:
#line 627 "src/sin_analyser.y"
           { (yyval.treeNode) = (yyvsp[0].treeNode); }
#line 2640 "src/sin_analyser.tab.c"
    break;

  case 55:
#line 631 "src/sin_analyser.y"
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
#line 2695 "src/sin_analyser.tab.c"
    break;

  case 56:
#line 682 "src/sin_analyser.y"
            { (yyval.treeNode) = (yyvsp[0].treeNode); }
#line 2701 "src/sin_analyser.tab.c"
    break;

  case 57:
#line 686 "src/sin_analyser.y"
                             {
        (yyval.treeNode) = newNode("LIST FUNC", 0, 0, " ");
        (yyval.treeNode)->subtree1 = (yyvsp[-2].treeNode);
        (yyval.treeNode)->subtree2 = (yyvsp[0].treeNode);
        if(!strcmp((yyvsp[-1].lex).id, ">>")){
            strcat(tacCode, "mov $500, &");
            strcat(tacCode, (yyval.treeNode)->subtree2->tac);
            strcat(tacCode, "\nmov $600, 0\n");
            strcat(tacCode, "mov $601, ");
            strcat(tacCode, (yyval.treeNode)->subtree2->tac);
            strcat(tacCode, "_size\n");
            sprintf(for_loop, "L%d", loop);
            loop++;
            strcat(tacCode, for_loop);
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
            strcat(tacCode, for_loop);
            strcat(tacCode, ", $602\n//");
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
    }
#line 2745 "src/sin_analyser.tab.c"
    break;

  case 58:
#line 726 "src/sin_analyser.y"
                            {
        (yyval.treeNode) = newNode("LIST OP", 0, 0, " ");
        (yyval.treeNode)->subtree1 = (yyvsp[-2].treeNode);
        (yyval.treeNode)->subtree2 = (yyvsp[0].treeNode);
        strcat(tacCode, "mov $500, &");
        strcat(tacCode, (yyval.treeNode)->subtree2->tac);
        strcat(tacCode, "\nmov $500[");
        strcat(tacCode, (yyval.treeNode)->subtree2->tac);
        strcat(tacCode, "_size], ");
        strcat(tacCode, (yyval.treeNode)->subtree1->tac);
        strcat(tacCode, "\nadd ");
        strcat(tacCode, (yyval.treeNode)->subtree2->tac);
        strcat(tacCode, "_size, ");
        strcat(tacCode, (yyval.treeNode)->subtree2->tac);
        strcat(tacCode, "_size, 1\n//");
        strcpy((yyval.treeNode)->tac, "$500");
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
#line 2778 "src/sin_analyser.tab.c"
    break;

  case 59:
#line 755 "src/sin_analyser.y"
           { (yyval.treeNode) = (yyvsp[0].treeNode); }
#line 2784 "src/sin_analyser.tab.c"
    break;

  case 60:
#line 759 "src/sin_analyser.y"
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
#line 2827 "src/sin_analyser.tab.c"
    break;

  case 61:
#line 798 "src/sin_analyser.y"
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
#line 2850 "src/sin_analyser.tab.c"
    break;

  case 62:
#line 817 "src/sin_analyser.y"
          { (yyval.treeNode) = (yyvsp[0].treeNode); }
#line 2856 "src/sin_analyser.tab.c"
    break;

  case 63:
#line 821 "src/sin_analyser.y"
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
#line 2899 "src/sin_analyser.tab.c"
    break;

  case 64:
#line 860 "src/sin_analyser.y"
          { (yyval.treeNode) = (yyvsp[0].treeNode); }
#line 2905 "src/sin_analyser.tab.c"
    break;

  case 65:
#line 864 "src/sin_analyser.y"
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
                    strcat(tacCode, "not ");
                    strcat(tacCode, reg_num);
                    strcat(tacCode, (yyval.treeNode)->subtree1->tac);
                }else{
                    strcat(tacCode, "mov $500, &");
                    strcat(tacCode, (yyval.treeNode)->subtree1->tac);
                    strcat(tacCode, "\nmov $600, 0\n");
                    strcat(tacCode, "mov $605, 1\n");
                    strcat(tacCode, "mov $601, ");
                    strcat(tacCode, (yyval.treeNode)->subtree1->tac);
                    strcat(tacCode, "_size\n");
                    sprintf(for_loop, "L%d", loop);
                    loop++;
                    strcat(tacCode, for_loop);
                    strcat(tacCode, ":\n");
                    strcat(tacCode, "mov $603, $500[$605]\n");
                    strcat(tacCode, "mov $500[$600], $603\n");
                    strcat(tacCode, "sub ");
                    strcat(tacCode, (yyval.treeNode)->subtree1->tac);
                    strcat(tacCode, "_size, ");
                    strcat(tacCode, (yyval.treeNode)->subtree1->tac);
                    strcat(tacCode, "_size, 1\n");
                    strcat(tacCode, "add $600, $600, 1\n");
                    strcat(tacCode, "add $605, $605, 1\n");
                    strcat(tacCode, "sub $602, $601, $600\n");
                    strcat(tacCode, "brnz ");
                    strcat(tacCode, for_loop);
                    strcat(tacCode, ", $602\n//");
                    strcpy((yyval.treeNode)->tac, "$500");
                    (yyval.treeNode)->type = (yyval.treeNode)->subtree1->type;
                }
            }else{
                if((yyval.treeNode)->subtree1->type < 3){
                    printf("SEMANTIC ERROR: Type error in unary operator with type %d. [%d, %d]\n", (yyval.treeNode)->subtree1->type, (yyvsp[-1].lex).line, (yyvsp[-1].lex).col);
                    sem_errors++;
                }else if(!strcmp((yyvsp[-1].lex).id, "%")){
                    strcat(tacCode, "mov $500, &");
                    strcat(tacCode, (yyval.treeNode)->subtree1->tac);
                    strcat(tacCode, "\nmov $600, 0\n");
                    strcat(tacCode, "mov $605, 1\n");
                    strcat(tacCode, "mov $601, ");
                    strcat(tacCode, (yyval.treeNode)->subtree1->tac);
                    strcat(tacCode, "_size\n");
                    sprintf(for_loop, "L%d", loop);
                    loop++;
                    strcat(tacCode, for_loop);
                    strcat(tacCode, ":\n");
                    strcat(tacCode, "mov $603, $500[$605]\n");
                    strcat(tacCode, "mov $500[$600], $603\n");
                    strcat(tacCode, "sub ");
                    strcat(tacCode, (yyval.treeNode)->subtree1->tac);
                    strcat(tacCode, "_size, ");
                    strcat(tacCode, (yyval.treeNode)->subtree1->tac);
                    strcat(tacCode, "_size, 1\n");
                    strcat(tacCode, "add $600, $600, 1\n");
                    strcat(tacCode, "add $605, $605, 1\n");
                    strcat(tacCode, "sub $602, $601, $600\n");
                    strcat(tacCode, "brnz ");
                    strcat(tacCode, for_loop);
                    strcat(tacCode, ", $602\n//");
                    strcpy((yyval.treeNode)->tac, "$500");
                    (yyval.treeNode)->type = (yyval.treeNode)->subtree1->type;
                }else{
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
#line 2996 "src/sin_analyser.tab.c"
    break;

  case 66:
#line 951 "src/sin_analyser.y"
        { (yyval.treeNode) = (yyvsp[0].treeNode); }
#line 3002 "src/sin_analyser.tab.c"
    break;

  case 67:
#line 955 "src/sin_analyser.y"
       { (yyval.treeNode) = (yyvsp[0].treeNode); }
#line 3008 "src/sin_analyser.tab.c"
    break;

  case 68:
#line 957 "src/sin_analyser.y"
              { (yyval.treeNode) = (yyvsp[0].treeNode); }
#line 3014 "src/sin_analyser.tab.c"
    break;

  case 69:
#line 959 "src/sin_analyser.y"
                    { (yyval.treeNode) = (yyvsp[-1].treeNode); }
#line 3020 "src/sin_analyser.tab.c"
    break;

  case 70:
#line 961 "src/sin_analyser.y"
        { (yyval.treeNode) = newNode((yyvsp[0].lex).id, 1, 0, (yyvsp[0].lex).id); }
#line 3026 "src/sin_analyser.tab.c"
    break;

  case 71:
#line 963 "src/sin_analyser.y"
          { (yyval.treeNode) = newNode((yyvsp[0].lex).id, 2, 0, (yyvsp[0].lex).id); }
#line 3032 "src/sin_analyser.tab.c"
    break;

  case 72:
#line 965 "src/sin_analyser.y"
        { (yyval.treeNode) = newNode("NIL", 3, 0, (yyvsp[0].lex).id); }
#line 3038 "src/sin_analyser.tab.c"
    break;

  case 73:
#line 967 "src/sin_analyser.y"
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
#line 3055 "src/sin_analyser.tab.c"
    break;

  case 74:
#line 982 "src/sin_analyser.y"
          {
        call_scope = searchTable(table, (yyvsp[-1].lex).id, 1, 1, stack, scope_pos);
    }
#line 3063 "src/sin_analyser.tab.c"
    break;

  case 75:
#line 984 "src/sin_analyser.y"
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
#line 3091 "src/sin_analyser.tab.c"
    break;

  case 76:
#line 1008 "src/sin_analyser.y"
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
#line 3110 "src/sin_analyser.tab.c"
    break;

  case 77:
#line 1025 "src/sin_analyser.y"
       { 
        if(!searchTable(table, (yyvsp[0].lex).id, 0, 0, stack, scope_pos)){
            printf("SEMANTIC ERROR: Variable %s not declared [%d, %d]\n", (yyvsp[0].lex).id, (yyvsp[0].lex).line, (yyvsp[0].lex).col);
            sem_errors++;
        }
        param = checkParams(table, (yyvsp[0].lex).id, stack[scope_pos]);
        sprintf(reg_num, "#%d", param-1);
        if(param)
            (yyval.treeNode) = newNode((yyvsp[0].lex).id, checkType(table, (yyvsp[0].lex).id, stack[scope_pos], 1), 0, reg_num); 
        else
            (yyval.treeNode) = newNode((yyvsp[0].lex).id, checkType(table, (yyvsp[0].lex).id, stack[scope_pos], 1), 0, (yyvsp[0].lex).id); 
    }
#line 3127 "src/sin_analyser.tab.c"
    break;

  case 78:
#line 1040 "src/sin_analyser.y"
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
#line 3146 "src/sin_analyser.tab.c"
    break;

  case 79:
#line 1055 "src/sin_analyser.y"
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
#line 3164 "src/sin_analyser.tab.c"
    break;


#line 3168 "src/sin_analyser.tab.c"

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
#line 1070 "src/sin_analyser.y"


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
    if(!(sem_errors+sin_errors+lex_errors)) intermediateCode(tacFile, tacTable, tacCode);

    fclose(yyin);
    yylex_destroy();

    return 0;
}

void yyerror(const char* error) {
    printf("\nSYNTAX ERROR: %s [%d, %d]\n", error, line, col);
    sin_errors++;
}
