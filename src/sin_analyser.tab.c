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
    int reg, str, loop, scope_pos, scope, param, params, args_ret, call_scope, id_scope, param_error, args, return_type;
    int ifs, if_start, main_found, sin_errors, sem_errors;
    char reg_num[5], str_num[5], loop_num[5];
    char for_loop1[5], for_loop2[5], for_loop3[5], for_loop4[5];
    char list_loop1[5], list_loop2[5], list_loop3[5], list_loop4[5];
    char if_loop[5], else_loop[5], finish_loop[5];
    char end_loop1[5], end_loop2[5], end_loop3[5], end_loop4[5];
    char tac[100];
    char current_return[100];
    char list_int[1000] = "{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}";
    char list_float[1000] = "{.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0}";
    /*Symbol table*/
    extern symbol table[10000];
    /*Syntax Tree*/
    extern treeNode* treeNodes[10000];
    extern treeNode* syntaxTree;

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
#define YYLAST   2050

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  30
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  41
/* YYNRULES -- Number of rules.  */
#define YYNRULES  77
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  256

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
     109,   159,   161,   159,   209,   216,   223,   229,   237,   253,
     279,   293,   309,   317,   325,   327,   329,   333,   335,   337,
     337,   344,   348,   348,   356,   358,   362,   364,   366,   370,
     380,   380,   431,   443,   449,   431,   476,   491,   504,   548,
     708,   726,   806,   810,  1156,  1160,  1264,  1313,  1317,  1395,
    1414,  1418,  1496,  1500,  1609,  1613,  1615,  1617,  1619,  1621,
    1623,  1625,  1638,  1638,  1674,  1691,  1710,  1725
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
  "flow_ctr", "$@6", "expr", "if_else", "$@7", "for", "$@8", "$@9", "$@10",
  "return", "input", "output", "ass_op", "operation", "log_op", "rel_op",
  "list_op", "ari_op", "md_op", "un_op", "val", "func_call", "$@11", "id",
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
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284
};
# endif

#define YYPACT_NINF (-180)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-78)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     100,   109,   154,    10,   159,   162,   163,   190,   -13,    14,
      35,  -180,   197,    -2,   218,    58,    51,    48,   238,   266,
      92,    93,    57,   178,   105,    51,   102,   676,   235,   319,
     113,   702,   702,  1014,  1714,  1724,   378,   516,   114,   291,
     143,   175,   487,  1734,   487,  1744,   726,   352,  1038,  1062,
    1086,  1110,   208,   194,  1134,   207,   220,   249,   252,   258,
      16,    55,   111,   165,  1754,  1764,  1774,  1784,   634,  1158,
     268,   298,    31,   301,   288,  1794,   352,   356,  1804,  1814,
     702,   341,   310,  1182,  1206,   348,  1230,  1254,  1278,  1302,
     291,   291,   487,   291,   291,   487,   291,   320,   358,  1824,
     423,   376,   368,   379,   377,   390,  1326,  1834,   352,   182,
     272,  1844,   285,   307,  1854,   392,   323,   330,   427,   395,
     396,  1350,   398,  1864,   423,   291,  1494,   340,   400,   750,
     411,  1518,   301,  1542,   413,  1374,  1566,  1542,  1398,   393,
    1888,  1897,  1874,   576,  1906,   576,  1915,   352,    32,   127,
     265,   591,  1924,  1933,  1942,  1951,  1960,  1422,   415,  1446,
      63,  1579,   613,   583,  1588,   583,  1597,   352,    -5,    81,
      96,     4,  1606,  1615,  1624,  1633,  1642,   419,   726,   774,
     397,   424,   798,   426,   428,   433,   226,  1969,  1978,   430,
     352,   352,   576,   352,   352,   576,   264,  1651,  1660,   431,
     423,   423,   583,   423,   423,   583,   301,   702,   429,   822,
     846,   870,   894,   352,  1987,   423,  1996,   315,   317,  2005,
     337,   360,  2014,  1669,   423,  1678,   210,   234,  1687,   242,
     292,  1696,   432,  1470,   352,   442,   353,   354,   427,   918,
     443,  2023,  1705,   291,  1494,   400,   942,   449,  1518,   301,
    1494,   451,   966,  1566,  1494,   990
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
       0,     0,     0,     0,     0,     0
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -180,  -180,  -180,   475,  -180,  -180,  -180,  -180,  -180,  -180,
     455,     0,  -180,   -27,   -33,   303,  -120,  -118,   -99,   302,
     237,   -98,   250,   244,   239,   -97,  -180,  -180,   -58,    -9,
      42,    41,   421,   470,   136,   198,   271,   359,  -179,   -30,
    -169
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     3,     4,     5,     6,    16,    26,    17,    31,    20,
      21,    48,     8,    49,    50,    80,    51,    52,    53,    86,
     133,    54,   125,   130,   137,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,   100,   156,
     117
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
       7,    68,    68,    -8,     7,    69,   179,   215,   180,    75,
      11,   200,    75,    13,    75,   102,    84,   224,   202,    68,
     -57,   -57,   -50,   203,   -50,   -11,   204,   181,   182,   183,
      74,   -57,    90,   -57,   -72,   -72,    84,   -72,    81,    68,
     -20,    15,    14,   103,   -50,   -72,   236,   105,   190,    83,
      68,   -72,   -72,   106,   -72,   237,    19,   -72,    99,   -50,
      75,    75,    75,    75,    75,    75,    75,   104,   184,    83,
     176,   -52,    91,    84,   134,    22,    68,   -68,   -68,   -68,
     -68,    27,   -68,   -52,   -21,   -68,    18,   115,   149,   148,
     -68,   116,   -68,   129,   176,    75,    68,   -52,   201,   122,
     135,     1,   185,    68,   138,     2,    83,    68,   -52,    -5,
     -52,    28,   -54,   -54,    -5,   127,   128,   149,   148,    -9,
     -15,    25,   -15,   -54,   179,   -54,   180,   -54,   -54,    30,
     179,   109,   180,   176,   179,   176,   180,    32,   189,   -54,
      73,   169,   168,   -52,   191,   181,   182,   183,   232,   149,
     148,   181,   182,   183,   -52,   181,   182,   183,   199,    -2,
       9,    10,    -4,    -7,     2,   169,   168,    -4,    -7,    76,
     176,   176,   176,   176,   176,   176,   103,    68,    78,    92,
     233,   -57,   -57,   152,    93,   176,   184,    94,   149,   148,
      -6,   251,   184,   -57,   176,    -6,   184,    -3,   -51,    91,
      84,    77,    -3,    68,   235,   -16,   116,   -16,   149,   148,
     -51,   246,   152,    75,    68,   116,    85,   252,   -18,   185,
      68,   255,    87,   -18,    68,   240,   -51,   201,   111,   -72,
     -72,   217,   -72,    83,   245,    88,   172,   -51,   -19,   -51,
     -72,   226,    79,   -19,   152,   153,   -72,   -72,   -37,   -72,
     -53,   -53,   -72,   214,   149,   148,   169,   168,   -55,   -55,
     172,   -53,   -17,   -53,   -17,   169,   168,   -72,   -72,   -55,
     -72,   -55,    23,    24,   153,   149,   148,   -38,   -72,   187,
      89,   -54,   -54,   152,   -72,   -72,   -36,   -72,   -53,   -53,
     -72,   223,   -54,   114,    34,    35,   157,   139,   173,   197,
     -53,   -55,   -55,   152,    98,    42,   153,   101,   -56,   -56,
     -13,    43,    44,   -55,    45,   -13,   -46,    47,   154,   -56,
     -10,   -56,   173,   -56,   -56,   -10,   152,   152,   219,   152,
     152,   -51,   191,   -53,   -53,   -56,   172,   172,   228,   172,
     172,   153,   -51,   188,   -53,   153,   -14,   154,   -14,   152,
     -77,   172,   -77,   -55,   -55,   140,   141,   123,   142,   124,
     172,   173,   158,   198,   -55,   153,   143,   -76,   107,   -76,
     152,   174,   144,   145,   108,   146,   -56,   -56,   147,   154,
     241,   242,   124,   124,    70,    71,   159,   -56,   153,   153,
     153,   153,   153,   222,   -75,   174,   118,    96,   173,   173,
     173,   173,   173,   231,   119,   208,   155,   -75,   -75,   -75,
     -75,   153,   -75,   173,   154,   -75,   154,   120,   154,    72,
     -49,   -75,   173,   -48,   -47,   126,   160,   161,   -43,   162,
     -42,   -42,   153,   -42,   174,   155,   174,   163,   154,   132,
     136,   -42,   -75,   164,   165,   206,   166,   -42,   -42,   167,
     -42,   213,   210,   -42,   211,   234,   212,   216,   225,   175,
     238,   154,   154,   154,   154,   154,   154,   155,   150,   -49,
     244,   174,   174,   174,   174,   174,   174,   249,   253,    12,
      29,   207,   209,   175,   154,   250,   174,     0,   243,   247,
      34,    35,   254,   139,     0,   174,     0,   150,     0,     0,
       0,     0,   155,     0,   155,   154,   155,    43,    44,     0,
      45,     0,   110,    47,   112,   113,     0,   151,     0,     0,
       0,   170,   175,     0,   175,     0,   155,     0,     0,   150,
     -75,   -75,   -75,   -75,   -75,   -75,     0,     0,   -75,     0,
       0,     0,    72,     0,   -75,   170,   151,     0,     0,   155,
     155,   155,   155,   155,   155,     0,     0,     0,     0,   175,
     175,   175,   175,   175,   175,     0,     0,     0,   150,     0,
     171,     0,   155,     0,   175,     0,     0,     0,   151,   140,
     141,     0,   142,   175,     0,     0,   160,   161,   150,   162,
       0,     0,     0,   155,   171,     0,   144,   145,     0,   146,
       0,     0,   147,   164,   165,   192,   166,   -57,   -57,   167,
     193,   150,   218,   194,   220,   221,     0,   151,   -57,     0,
       0,   170,   227,     0,   229,   230,     0,   -75,   -75,   -75,
     -75,     0,   -75,     0,   150,   -75,   170,   151,     0,   196,
     -75,     0,   -75,     0,     0,   170,     0,     0,   -65,   -65,
     -65,   -65,    96,   -65,     0,   150,   -65,     0,     0,     0,
     151,   151,   -65,   151,   151,     0,     0,     0,     0,     0,
     171,   171,     0,   171,   171,     0,     0,   -12,     0,   -12,
     -12,   -12,   -12,   151,   -12,   171,   -12,   -12,   -12,   -12,
     -12,     0,     0,     0,   171,     0,   -12,   -12,     0,   -12,
     -12,     0,   -12,    33,   151,    34,    35,    36,    37,     0,
     -32,     0,    38,    39,    40,    41,    42,     0,     0,     0,
       0,     0,    43,    44,     0,    45,    46,   -29,    47,   -29,
     -29,   -29,   -29,     0,   -29,     0,   -29,   -29,   -29,   -29,
     -29,     0,     0,     0,     0,     0,   -29,   -29,     0,   -29,
     -29,     0,   -29,   -39,   -39,   -39,   -39,     0,   -39,   131,
     -39,   -39,   -39,   -39,   -39,     0,     0,     0,     0,     0,
     -39,   -39,     0,   -39,   -39,   -39,   -39,   -31,   -31,   -31,
     -31,     0,   -31,   -31,   -31,   -31,   -31,   -31,   -31,     0,
       0,     0,     0,     0,   -31,   -31,     0,   -31,   -31,   -31,
     -31,   -34,   -34,   -34,   -34,     0,   -34,   -34,   -34,   -34,
     -34,   -34,   -34,     0,     0,     0,     0,     0,   -34,   -34,
       0,   -34,   -34,   -34,   -34,   -33,   -33,   -33,   -33,     0,
     -33,   -33,   -33,   -33,   -33,   -33,   -33,     0,     0,     0,
       0,     0,   -33,   -33,     0,   -33,   -33,   -33,   -33,   -27,
     -27,   -27,   -27,     0,   -27,   -27,   -27,   -27,   -27,   -27,
     -27,     0,     0,     0,     0,     0,   -27,   -27,     0,   -27,
     -27,   -27,   -27,   -35,   -35,   -35,   -35,     0,   -35,   -35,
     -35,   -35,   -35,   -35,   -35,     0,     0,     0,     0,     0,
     -35,   -35,     0,   -35,   -35,   -35,   -35,   -28,   -28,   -28,
     -28,     0,   -28,   -28,   -28,   -28,   -28,   -28,   -28,     0,
       0,     0,     0,     0,   -28,   -28,     0,   -28,   -28,   -28,
     -28,   -30,   -30,   -30,   -30,     0,   -30,   -30,   -30,   -30,
     -30,   -30,   -30,     0,     0,     0,     0,     0,   -30,   -30,
       0,   -30,   -30,   -30,   -30,   -39,   -39,   -39,   -39,     0,
     -39,   248,   -39,   -39,   -39,   -39,   -39,     0,     0,     0,
       0,     0,   -39,   -39,     0,   -39,   -39,   -39,   -39,   -41,
     -41,   -41,   -41,     0,   -41,   -41,   -41,   -41,   -41,   -41,
     -41,     0,     0,     0,     0,     0,   -41,   -41,     0,   -41,
     -41,   -41,   -41,   -45,   -45,   -45,   -45,     0,   -45,   -45,
     -45,   -45,   -45,   -45,   -45,     0,     0,     0,     0,     0,
     -45,   -45,     0,   -45,   -45,   -45,   -45,   -26,   -26,   -26,
     -26,     0,   -26,     0,   -26,   -26,   -26,   -26,   -26,     0,
       0,     0,     0,     0,   -26,   -26,     0,   -26,   -26,   -26,
     -26,   -25,   -25,   -25,   -25,     0,   -25,     0,   -25,   -25,
     -25,   -25,   -25,     0,     0,     0,     0,     0,   -25,   -25,
       0,   -25,   -25,   -25,   -25,    34,    35,    36,    37,     0,
     -32,     0,    38,    39,    40,    41,    42,     0,     0,     0,
       0,     0,    43,    44,     0,    45,    46,    82,    47,   -24,
     -24,   -24,   -24,     0,   -24,     0,   -24,   -24,   -24,   -24,
     -24,     0,     0,     0,     0,     0,   -24,   -24,     0,   -24,
     -24,   -24,   -24,   -31,   -31,   -31,   -31,     0,   -31,     0,
     -31,   -31,   -31,   -31,   -31,     0,     0,     0,     0,     0,
     -31,   -31,     0,   -31,   -31,   -31,   -31,   -34,   -34,   -34,
     -34,     0,   -34,     0,   -34,   -34,   -34,   -34,   -34,     0,
       0,     0,     0,     0,   -34,   -34,     0,   -34,   -34,   -34,
     -34,    34,    35,    36,    37,     0,   -32,     0,    38,    39,
      40,    41,    42,     0,     0,     0,     0,     0,    43,    44,
       0,    45,    46,    97,    47,   -23,   -23,   -23,   -23,     0,
     -23,     0,   -23,   -23,   -23,   -23,   -23,     0,     0,     0,
       0,     0,   -23,   -23,     0,   -23,   -23,   -23,   -23,   -22,
     -22,   -22,   -22,     0,   -22,     0,   -22,   -22,   -22,   -22,
     -22,     0,     0,     0,     0,     0,   -22,   -22,     0,   -22,
     -22,   -22,   -22,   -33,   -33,   -33,   -33,     0,   -33,     0,
     -33,   -33,   -33,   -33,   -33,     0,     0,     0,     0,     0,
     -33,   -33,     0,   -33,   -33,   -33,   -33,   -27,   -27,   -27,
     -27,     0,   -27,     0,   -27,   -27,   -27,   -27,   -27,     0,
       0,     0,     0,     0,   -27,   -27,     0,   -27,   -27,   -27,
     -27,   -35,   -35,   -35,   -35,     0,   -35,     0,   -35,   -35,
     -35,   -35,   -35,     0,     0,     0,     0,     0,   -35,   -35,
       0,   -35,   -35,   -35,   -35,   -28,   -28,   -28,   -28,     0,
     -28,     0,   -28,   -28,   -28,   -28,   -28,     0,     0,     0,
       0,     0,   -28,   -28,     0,   -28,   -28,   -28,   -28,    34,
      35,    36,    37,     0,   -32,     0,    38,    39,    40,    41,
      42,     0,     0,     0,     0,     0,    43,    44,     0,    45,
      46,   121,    47,   -30,   -30,   -30,   -30,     0,   -30,     0,
     -30,   -30,   -30,   -30,   -30,     0,     0,     0,     0,     0,
     -30,   -30,     0,   -30,   -30,   -30,   -30,   -41,   -41,   -41,
     -41,     0,   -41,     0,   -41,   -41,   -41,   -41,   -41,     0,
       0,     0,     0,     0,   -41,   -41,     0,   -41,   -41,   -41,
     -41,   -45,   -45,   -45,   -45,     0,   -45,     0,   -45,   -45,
     -45,   -45,   -45,     0,     0,     0,     0,     0,   -45,   -45,
       0,   -45,   -45,   -45,   -45,   -18,   -18,   -18,   -18,     0,
     -18,     0,   -18,   -18,   -18,   -18,   -18,     0,     0,     0,
       0,     0,   -18,   -18,     0,   -18,   -18,   -18,   -18,   -19,
     -19,   -19,   -19,     0,   -19,     0,   -19,   -19,   -19,   -19,
     -19,     0,     0,     0,     0,     0,   -19,   -19,     0,   -19,
     -19,   -19,   -19,    34,    35,    36,    37,     0,   -32,     0,
      38,    39,    40,    41,    42,     0,     0,     0,     0,     0,
      43,    44,     0,    45,    46,   239,    47,    34,    35,     0,
      37,     0,   -32,     0,   177,    39,    40,    41,    42,     0,
       0,     0,     0,     0,    43,    44,     0,    45,   178,     0,
      47,   -40,   -40,     0,   -40,     0,   -40,     0,   -40,   -40,
     -40,   -40,   -40,     0,     0,     0,     0,     0,   -40,   -40,
       0,   -40,   -40,     0,   -40,    34,    35,     0,    37,     0,
     -32,     0,    38,    39,    40,    41,    42,     0,     0,     0,
       0,     0,    43,    44,     0,    45,    46,     0,    47,   -44,
     -44,     0,   -44,     0,   -44,     0,   -44,   -44,   -44,   -44,
     -44,     0,     0,     0,     0,     0,   -44,   -44,     0,   -44,
     -44,     0,   -44,   -69,   -69,   -69,   -69,     0,   -69,     0,
       0,   -69,   -70,   -70,   -70,   -70,   -69,   -70,   -69,     0,
     -70,   -71,   -71,   -71,   -71,   -70,   -71,   -70,     0,   -71,
     -60,   205,   -60,   -60,   -71,   -60,   -71,     0,   -60,   -62,
     -62,   -62,   -62,   -60,   -62,   -60,     0,   -62,   -64,   -64,
     -64,   -64,   -62,   -64,   -62,     0,   -64,   -66,   -66,   -66,
     -66,   -64,   -66,   -64,     0,   -66,   -65,   -65,   -65,   -65,
     -66,   -65,   -66,     0,   -65,   -59,   205,   -59,   -59,   -65,
     -59,   -65,     0,   -59,   -63,   -63,   -63,   -63,   -59,   -63,
     -59,     0,   -63,   -74,   -74,   -74,   -74,   -63,   -74,   -63,
       0,   -74,   -67,   -67,   -67,   -67,   -74,   -67,   -74,     0,
     -67,   -58,   205,   -58,   -58,   -67,   -58,   -67,     0,   -58,
     -61,   -61,   -61,   -61,   -58,   -61,   -58,     0,   -61,   -73,
     -73,   -73,   -73,   -61,   -73,   -61,     0,   -73,   -68,   -68,
     -68,   -68,   -73,   -68,   -73,     0,   -68,     0,   -69,   -69,
     -69,   -69,   -68,   -69,     0,     0,   -69,     0,   -70,   -70,
     -70,   -70,   -69,   -70,     0,     0,   -70,     0,   -71,   -71,
     -71,   -71,   -70,   -71,     0,     0,   -71,     0,   -60,    95,
     -60,   -60,   -71,   -60,     0,     0,   -60,     0,   -62,   -62,
     -62,   -62,   -60,   -62,     0,     0,   -62,     0,   -64,   -64,
     -64,   -64,   -62,   -64,     0,     0,   -64,     0,   -66,   -66,
     -66,   -66,   -64,   -66,     0,     0,   -66,     0,   -65,   -65,
     -65,   -65,   -66,   -65,     0,     0,   -65,     0,   -59,    95,
     -59,   -59,   -65,   -59,     0,     0,   -59,     0,   -63,   -63,
     -63,   -63,   -59,   -63,     0,     0,   -63,     0,   -74,   -74,
     -74,   -74,   -63,   -74,     0,     0,   -74,     0,   -67,   -67,
     -67,   -67,   -74,   -67,     0,     0,   -67,     0,   -58,    95,
     -58,   -58,   -67,   -58,     0,     0,   -58,     0,   -61,   -61,
     -61,   -61,   -58,   -61,     0,     0,   -61,     0,   -73,   -73,
     -73,   -73,   -61,   -73,     0,     0,   -73,     0,   -75,   -75,
     -75,   -75,   -73,   -75,     0,     0,   -75,     0,     0,     0,
     186,   -75,   -68,   -68,   -68,   -68,     0,   -68,     0,     0,
     -68,   -69,   -69,   -69,   -69,   -68,   -69,     0,     0,   -69,
     -70,   -70,   -70,   -70,   -69,   -70,     0,     0,   -70,   -71,
     -71,   -71,   -71,   -70,   -71,     0,     0,   -71,   -60,   195,
     -60,   -60,   -71,   -60,     0,     0,   -60,   -62,   -62,   -62,
     -62,   -60,   -62,     0,     0,   -62,   -64,   -64,   -64,   -64,
     -62,   -64,     0,     0,   -64,   -66,   -66,   -66,   -66,   -64,
     -66,     0,     0,   -66,   -65,   -65,   -65,   -65,   -66,   -65,
       0,     0,   -65,   -59,   195,   -59,   -59,   -65,   -59,     0,
       0,   -59,   -63,   -63,   -63,   -63,   -59,   -63,     0,     0,
     -63,   -74,   -74,   -74,   -74,   -63,   -74,     0,     0,   -74,
     -67,   -67,   -67,   -67,   -74,   -67,     0,     0,   -67,   -58,
     195,   -58,   -58,   -67,   -58,     0,     0,   -58,   -61,   -61,
     -61,   -61,   -58,   -61,     0,     0,   -61,   -73,   -73,   -73,
     -73,   -61,   -73,     0,     0,   -73,     0,     0,     0,     0,
     -73
};

static const yytype_int16 yycheck[] =
{
       0,    31,    32,     5,     4,    32,   126,   186,   126,    39,
       0,    16,    42,    26,    44,    73,    49,   196,    14,    49,
      16,    17,    27,    19,    29,    27,    22,   126,   126,   126,
      39,    27,    16,    29,     3,     4,    69,     6,    47,    69,
      26,     6,    28,    73,    28,    14,   215,    77,    16,    49,
      80,    20,    21,    80,    23,   224,     5,    26,    27,    27,
      90,    91,    92,    93,    94,    95,    96,    76,   126,    69,
     100,    16,    17,   106,   132,    27,   106,    14,    15,    16,
      17,    24,    19,    28,    26,    22,    28,    96,    47,    47,
      27,   100,    29,   126,   124,   125,   126,    16,    17,   108,
     133,     1,   132,   133,   137,     5,   106,   137,    27,     0,
      29,     6,    16,    17,     5,   124,   125,    76,    76,    27,
      27,    29,    29,    27,   244,    29,   244,    16,    17,    27,
     250,    90,   250,   163,   254,   165,   254,    24,   147,    28,
      26,   100,   100,    16,    17,   244,   244,   244,   206,   108,
     108,   250,   250,   250,    27,   254,   254,   254,   167,     0,
       6,     7,     0,     0,     5,   124,   124,     5,     5,    26,
     200,   201,   202,   203,   204,   205,   206,   207,    42,    14,
     207,    16,    17,    47,    19,   215,   244,    22,   147,   147,
       0,   249,   250,    28,   224,     5,   254,     0,    16,    17,
     233,    26,     5,   233,   213,    27,   215,    29,   167,   167,
      28,   244,    76,   243,   244,   224,     8,   250,     0,   249,
     250,   254,    28,     5,   254,   234,    16,    17,    92,     3,
       4,   190,     6,   233,   243,    28,   100,    27,     0,    29,
      14,   200,    44,     5,   108,    47,    20,    21,    28,    23,
      16,    17,    26,    27,   213,   213,   215,   215,    16,    17,
     124,    27,    27,    29,    29,   224,   224,     3,     4,    27,
       6,    29,     6,     7,    76,   234,   234,    28,    14,   143,
      28,    16,    17,   147,    20,    21,    28,    23,    16,    17,
      26,    27,    27,    95,     3,     4,    28,     6,   100,   163,
      28,    16,    17,   167,     6,    14,   108,     6,    16,    17,
       0,    20,    21,    28,    23,     5,    28,    26,    47,    27,
       0,    29,   124,    16,    17,     5,   190,   191,   192,   193,
     194,    16,    17,    16,    17,    28,   200,   201,   202,   203,
     204,   143,    27,   145,    27,   147,    27,    76,    29,   213,
      27,   215,    29,    16,    17,     3,     4,    27,     6,    29,
     224,   163,     6,   165,    27,   167,    14,    27,    27,    29,
     234,   100,    20,    21,    26,    23,    16,    17,    26,   108,
      27,    27,    29,    29,     6,     7,    28,    27,   190,   191,
     192,   193,   194,   195,    18,   124,    28,    18,   200,   201,
     202,   203,   204,   205,    27,     8,    47,    14,    15,    16,
      17,   213,    19,   215,   143,    22,   145,    27,   147,    26,
      28,    28,   224,    28,    28,    27,     3,     4,    28,     6,
       3,     4,   234,     6,   163,    76,   165,    14,   167,    28,
      27,    14,    27,    20,    21,    26,    23,    20,    21,    26,
      23,    18,    28,    26,    28,    26,    28,    27,    27,   100,
      28,   190,   191,   192,   193,   194,   195,   108,    47,    27,
      27,   200,   201,   202,   203,   204,   205,    28,    27,     4,
      25,   178,   180,   124,   213,   248,   215,    -1,   238,   245,
       3,     4,   253,     6,    -1,   224,    -1,    76,    -1,    -1,
      -1,    -1,   143,    -1,   145,   234,   147,    20,    21,    -1,
      23,    -1,    91,    26,    93,    94,    -1,    47,    -1,    -1,
      -1,   100,   163,    -1,   165,    -1,   167,    -1,    -1,   108,
      14,    15,    16,    17,    18,    19,    -1,    -1,    22,    -1,
      -1,    -1,    26,    -1,    28,   124,    76,    -1,    -1,   190,
     191,   192,   193,   194,   195,    -1,    -1,    -1,    -1,   200,
     201,   202,   203,   204,   205,    -1,    -1,    -1,   147,    -1,
     100,    -1,   213,    -1,   215,    -1,    -1,    -1,   108,     3,
       4,    -1,     6,   224,    -1,    -1,     3,     4,   167,     6,
      -1,    -1,    -1,   234,   124,    -1,    20,    21,    -1,    23,
      -1,    -1,    26,    20,    21,    14,    23,    16,    17,    26,
      19,   190,   191,    22,   193,   194,    -1,   147,    27,    -1,
      -1,   200,   201,    -1,   203,   204,    -1,    14,    15,    16,
      17,    -1,    19,    -1,   213,    22,   215,   167,    -1,    26,
      27,    -1,    29,    -1,    -1,   224,    -1,    -1,    14,    15,
      16,    17,    18,    19,    -1,   234,    22,    -1,    -1,    -1,
     190,   191,    28,   193,   194,    -1,    -1,    -1,    -1,    -1,
     200,   201,    -1,   203,   204,    -1,    -1,     1,    -1,     3,
       4,     5,     6,   213,     8,   215,    10,    11,    12,    13,
      14,    -1,    -1,    -1,   224,    -1,    20,    21,    -1,    23,
      24,    -1,    26,     1,   234,     3,     4,     5,     6,    -1,
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
      20,    21,    -1,    23,    24,    25,    26,     3,     4,    -1,
       6,    -1,     8,    -1,    10,    11,    12,    13,    14,    -1,
      -1,    -1,    -1,    -1,    20,    21,    -1,    23,    24,    -1,
      26,     3,     4,    -1,     6,    -1,     8,    -1,    10,    11,
      12,    13,    14,    -1,    -1,    -1,    -1,    -1,    20,    21,
      -1,    23,    24,    -1,    26,     3,     4,    -1,     6,    -1,
       8,    -1,    10,    11,    12,    13,    14,    -1,    -1,    -1,
      -1,    -1,    20,    21,    -1,    23,    24,    -1,    26,     3,
       4,    -1,     6,    -1,     8,    -1,    10,    11,    12,    13,
      14,    -1,    -1,    -1,    -1,    -1,    20,    21,    -1,    23,
      24,    -1,    26,    14,    15,    16,    17,    -1,    19,    -1,
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
      16,    17,    27,    19,    29,    -1,    22,    -1,    14,    15,
      16,    17,    28,    19,    -1,    -1,    22,    -1,    14,    15,
      16,    17,    28,    19,    -1,    -1,    22,    -1,    14,    15,
      16,    17,    28,    19,    -1,    -1,    22,    -1,    14,    15,
      16,    17,    28,    19,    -1,    -1,    22,    -1,    14,    15,
      16,    17,    28,    19,    -1,    -1,    22,    -1,    14,    15,
      16,    17,    28,    19,    -1,    -1,    22,    -1,    14,    15,
      16,    17,    28,    19,    -1,    -1,    22,    -1,    14,    15,
      16,    17,    28,    19,    -1,    -1,    22,    -1,    14,    15,
      16,    17,    28,    19,    -1,    -1,    22,    -1,    14,    15,
      16,    17,    28,    19,    -1,    -1,    22,    -1,    14,    15,
      16,    17,    28,    19,    -1,    -1,    22,    -1,    14,    15,
      16,    17,    28,    19,    -1,    -1,    22,    -1,    14,    15,
      16,    17,    28,    19,    -1,    -1,    22,    -1,    14,    15,
      16,    17,    28,    19,    -1,    -1,    22,    -1,    14,    15,
      16,    17,    28,    19,    -1,    -1,    22,    -1,    14,    15,
      16,    17,    28,    19,    -1,    -1,    22,    -1,    -1,    -1,
      26,    27,    14,    15,    16,    17,    -1,    19,    -1,    -1,
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
      27,    38,    24,     1,     3,     4,     5,     6,    10,    11,
      12,    13,    14,    20,    21,    23,    24,    26,    41,    43,
      44,    46,    47,    48,    51,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    69,    43,
       6,     7,    26,    26,    59,    69,    26,    26,    64,    65,
      45,    59,    25,    41,    44,     8,    49,    28,    28,    28,
      16,    17,    14,    19,    22,    15,    18,    25,     6,    27,
      68,     6,    58,    69,    59,    69,    43,    27,    26,    61,
      62,    64,    62,    62,    65,    59,    59,    70,    28,    27,
      27,    25,    59,    27,    29,    52,    27,    59,    59,    44,
      53,     9,    28,    50,    58,    44,    27,    54,    44,     6,
       3,     4,     6,    14,    20,    21,    23,    26,    60,    61,
      62,    63,    64,    65,    66,    67,    69,    28,     6,    28,
       3,     4,     6,    14,    20,    21,    23,    26,    60,    61,
      62,    63,    64,    65,    66,    67,    69,    10,    24,    46,
      47,    48,    51,    55,    58,    69,    26,    64,    65,    59,
      16,    17,    14,    19,    22,    15,    26,    64,    65,    59,
      16,    17,    14,    19,    22,    15,    26,    45,     8,    49,
      28,    28,    28,    18,    27,    68,    27,    61,    62,    64,
      62,    62,    65,    27,    68,    27,    61,    62,    64,    62,
      62,    65,    58,    43,    26,    59,    70,    70,    28,    25,
      59,    27,    27,    52,    27,    59,    44,    53,     9,    28,
      50,    58,    44,    27,    54,    44
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    30,    31,    32,    32,    32,    33,    33,    35,    36,
      34,    37,    38,    34,    39,    39,    40,    40,    41,    41,
      42,    42,    43,    43,    43,    43,    43,    44,    44,    45,
      44,    44,    47,    46,    46,    46,    48,    48,    48,    49,
      50,    49,    52,    53,    54,    51,    55,    56,    57,    58,
      59,    60,    60,    61,    61,    62,    62,    62,    63,    63,
      63,    64,    64,    65,    65,    66,    66,    66,    66,    66,
      66,    66,    68,    67,    67,    69,    70,    70
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     1,     1,     1,     1,     0,     0,
       9,     0,     0,     8,     3,     1,     2,     3,     3,     4,
       2,     3,     2,     2,     1,     1,     1,     2,     2,     0,
       4,     1,     0,     2,     1,     2,     1,     1,     1,     5,
       0,     8,     0,     0,     0,    12,     2,     4,     4,     3,
       1,     3,     1,     3,     1,     3,     3,     1,     3,     2,
       1,     3,     1,     2,     1,     1,     1,     3,     1,     1,
       1,     1,     0,     5,     3,     1,     3,     1
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
#line 1888 "src/sin_analyser.tab.c"
    break;

  case 3:
#line 91 "src/sin_analyser.y"
                          {
        (yyval.treeNode) = newNode("PROGRAM", 0, 0, " ");
        (yyval.treeNode)->subtree1 = (yyvsp[-1].treeNode);
        (yyval.treeNode)->subtree2 = (yyvsp[0].treeNode);
    }
#line 1898 "src/sin_analyser.tab.c"
    break;

  case 4:
#line 97 "src/sin_analyser.y"
                  { (yyval.treeNode) = (yyvsp[0].treeNode); }
#line 1904 "src/sin_analyser.tab.c"
    break;

  case 5:
#line 99 "src/sin_analyser.y"
          { (yyval.treeNode) = newNode("ERROR", 0, 0, " "); }
#line 1910 "src/sin_analyser.tab.c"
    break;

  case 6:
#line 103 "src/sin_analyser.y"
           { (yyval.treeNode) = (yyvsp[0].treeNode); }
#line 1916 "src/sin_analyser.tab.c"
    break;

  case 7:
#line 105 "src/sin_analyser.y"
              { (yyval.treeNode) = (yyvsp[0].treeNode); }
#line 1922 "src/sin_analyser.tab.c"
    break;

  case 8:
#line 109 "src/sin_analyser.y"
           {
        changeScope(1);
    }
#line 1930 "src/sin_analyser.tab.c"
    break;

  case 9:
#line 111 "src/sin_analyser.y"
             {
        updateParams(table, params);
        params = 0;
    }
#line 1939 "src/sin_analyser.tab.c"
    break;

  case 10:
#line 114 "src/sin_analyser.y"
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
#line 1988 "src/sin_analyser.tab.c"
    break;

  case 11:
#line 159 "src/sin_analyser.y"
            {
        updateParams(table, params);
    }
#line 1996 "src/sin_analyser.tab.c"
    break;

  case 12:
#line 161 "src/sin_analyser.y"
            {
        changeScope(1);
    }
#line 2004 "src/sin_analyser.tab.c"
    break;

  case 13:
#line 163 "src/sin_analyser.y"
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
#line 2052 "src/sin_analyser.tab.c"
    break;

  case 14:
#line 209 "src/sin_analyser.y"
                           {
        params++;
        (yyval.treeNode) = newNode("PARAMS", 0, 0, " ");
        (yyval.treeNode)->subtree1 = (yyvsp[-2].treeNode);
        (yyval.treeNode)->subtree2 = (yyvsp[0].treeNode);
    }
#line 2063 "src/sin_analyser.tab.c"
    break;

  case 15:
#line 216 "src/sin_analyser.y"
          { 
        params++;
        (yyval.treeNode) = (yyvsp[0].treeNode);
    }
#line 2072 "src/sin_analyser.tab.c"
    break;

  case 16:
#line 223 "src/sin_analyser.y"
            {
        // reg++;
        newSymbol(table, (yyvsp[0].lex).id, (yyvsp[-1].lex).id, "PAR      ", (yyvsp[0].lex).line, (yyvsp[0].lex).col, stack[scope_pos], params+1, reg);   
        (yyval.treeNode) = newNode(strcat(strcat((yyvsp[-1].lex).id," var "), (yyvsp[0].lex).id), checkType(table, (yyvsp[0].lex).id, stack[scope_pos], 1), 0, " ");
    }
#line 2082 "src/sin_analyser.tab.c"
    break;

  case 17:
#line 229 "src/sin_analyser.y"
                 {
        // reg++;
        newSymbol(table, (yyvsp[0].lex).id, strcat((yyvsp[-2].lex).id," list"), "LIST PAR ",(yyvsp[0].lex).line, (yyvsp[0].lex).col, stack[scope_pos], params+1, reg);
        (yyval.treeNode) = newNode(strcat(strcat((yyvsp[-2].lex).id," "), (yyvsp[0].lex).id), checkType(table, (yyvsp[0].lex).id, stack[scope_pos], 1), 0, " ");
    }
#line 2092 "src/sin_analyser.tab.c"
    break;

  case 18:
#line 237 "src/sin_analyser.y"
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
#line 2112 "src/sin_analyser.tab.c"
    break;

  case 19:
#line 253 "src/sin_analyser.y"
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
#line 2140 "src/sin_analyser.tab.c"
    break;

  case 20:
#line 279 "src/sin_analyser.y"
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
#line 2158 "src/sin_analyser.tab.c"
    break;

  case 21:
#line 293 "src/sin_analyser.y"
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
#line 2176 "src/sin_analyser.tab.c"
    break;

  case 22:
#line 309 "src/sin_analyser.y"
                    {
        (yyval.treeNode) = newNode("BLOCK", 0, 0, " ");
        (yyval.treeNode)->subtree1 = (yyvsp[-1].treeNode);
        (yyval.treeNode)->subtree2 = (yyvsp[0].treeNode);
        if((yyval.treeNode)->subtree1->ret || (yyval.treeNode)->subtree2->ret) (yyval.treeNode)->ret = 1;
        (yyval.treeNode)->type = (yyval.treeNode)->subtree2->type;
    }
#line 2188 "src/sin_analyser.tab.c"
    break;

  case 23:
#line 317 "src/sin_analyser.y"
                 {
        (yyval.treeNode) = newNode("BLOCK", 0, 0, " ");
        (yyval.treeNode)->subtree1 = (yyvsp[-1].treeNode);
        (yyval.treeNode)->subtree2 = (yyvsp[0].treeNode);
        if((yyval.treeNode)->subtree1->ret || (yyval.treeNode)->subtree2->ret) (yyval.treeNode)->ret = 1;
        (yyval.treeNode)->type = (yyval.treeNode)->subtree2->type;
    }
#line 2200 "src/sin_analyser.tab.c"
    break;

  case 24:
#line 325 "src/sin_analyser.y"
              { (yyval.treeNode) = (yyvsp[0].treeNode); }
#line 2206 "src/sin_analyser.tab.c"
    break;

  case 25:
#line 327 "src/sin_analyser.y"
           { (yyval.treeNode) = (yyvsp[0].treeNode); }
#line 2212 "src/sin_analyser.tab.c"
    break;

  case 26:
#line 329 "src/sin_analyser.y"
          { (yyval.treeNode) = newNode("ERROR", 0, 0, " "); }
#line 2218 "src/sin_analyser.tab.c"
    break;

  case 27:
#line 333 "src/sin_analyser.y"
             { (yyval.treeNode) = (yyvsp[-1].treeNode); }
#line 2224 "src/sin_analyser.tab.c"
    break;

  case 28:
#line 335 "src/sin_analyser.y"
              { (yyval.treeNode) = (yyvsp[-1].treeNode); }
#line 2230 "src/sin_analyser.tab.c"
    break;

  case 29:
#line 337 "src/sin_analyser.y"
       {
        changeScope(1);
    }
#line 2238 "src/sin_analyser.tab.c"
    break;

  case 30:
#line 339 "src/sin_analyser.y"
               { 
        (yyval.treeNode) = (yyvsp[-1].treeNode);
        changeScope(0);
    }
#line 2247 "src/sin_analyser.tab.c"
    break;

  case 31:
#line 344 "src/sin_analyser.y"
             { (yyval.treeNode) = (yyvsp[0].treeNode); }
#line 2253 "src/sin_analyser.tab.c"
    break;

  case 32:
#line 348 "src/sin_analyser.y"
    {
        strcat(tacCode, "// if\n");
        sprintf(if_loop, "L%d", loop);
        ifs++;
        loop++;
        if_start = 1;
    }
#line 2265 "src/sin_analyser.tab.c"
    break;

  case 33:
#line 354 "src/sin_analyser.y"
             { (yyval.treeNode) = (yyvsp[0].treeNode); }
#line 2271 "src/sin_analyser.tab.c"
    break;

  case 34:
#line 356 "src/sin_analyser.y"
        { (yyval.treeNode) = (yyvsp[0].treeNode); }
#line 2277 "src/sin_analyser.tab.c"
    break;

  case 35:
#line 358 "src/sin_analyser.y"
               { (yyval.treeNode) = (yyvsp[-1].treeNode); }
#line 2283 "src/sin_analyser.tab.c"
    break;

  case 36:
#line 362 "src/sin_analyser.y"
              { (yyval.treeNode) = (yyvsp[0].treeNode); }
#line 2289 "src/sin_analyser.tab.c"
    break;

  case 37:
#line 364 "src/sin_analyser.y"
          { (yyval.treeNode) = (yyvsp[0].treeNode); }
#line 2295 "src/sin_analyser.tab.c"
    break;

  case 38:
#line 366 "src/sin_analyser.y"
           { (yyval.treeNode) = (yyvsp[0].treeNode); }
#line 2301 "src/sin_analyser.tab.c"
    break;

  case 39:
#line 370 "src/sin_analyser.y"
                                            {
        (yyval.treeNode) = newNode("IF", 0, 0, " ");
        (yyval.treeNode)->subtree1 = (yyvsp[-2].treeNode);
        (yyval.treeNode)->subtree2 = (yyvsp[0].treeNode);
        (yyval.treeNode)->type = (yyval.treeNode)->subtree2->type;
        strcat(tacCode, if_loop);
        strcat(tacCode, ":\n");
        ifs--;
    }
#line 2315 "src/sin_analyser.tab.c"
    break;

  case 40:
#line 380 "src/sin_analyser.y"
                                      {
        if(ifs == 0){
            sprintf(end_loop1, "L%d", loop);
            loop++;
            strcat(tacCode, "jump ");
            strcat(tacCode, end_loop1);
            strcat(tacCode, "\n");
            strcat(tacCode, if_loop);
            strcat(tacCode, ":\n");
        }else if(ifs == 1){
            sprintf(end_loop2, "L%d", loop);
            loop++;
            strcat(tacCode, "jump ");
            strcat(tacCode, end_loop2);
            strcat(tacCode, "\n");
            strcat(tacCode, if_loop);
            strcat(tacCode, ":\n");
        }else if(ifs == 2){
            sprintf(end_loop3, "L%d", loop);
            loop++;
            strcat(tacCode, "jump ");
            strcat(tacCode, end_loop3);
            strcat(tacCode, "\n");
            strcat(tacCode, if_loop);
            strcat(tacCode, ":\n");
        }else {
            sprintf(end_loop4, "L%d", loop);
            loop++;
            strcat(tacCode, "jump ");
            strcat(tacCode, end_loop4);
            strcat(tacCode, "\n");
            strcat(tacCode, if_loop);
            strcat(tacCode, ":\n");
        }
    }
#line 2355 "src/sin_analyser.tab.c"
    break;

  case 41:
#line 414 "src/sin_analyser.y"
                {
        (yyval.treeNode) = newNode("IF ELSE", 0, 0, " ");
        (yyval.treeNode)->subtree1 = (yyvsp[-5].treeNode);
        (yyval.treeNode)->subtree2 = (yyvsp[-3].treeNode);
        (yyval.treeNode)->subtree3 = (yyvsp[0].treeNode);
        (yyval.treeNode)->type = (yyval.treeNode)->subtree3->type;
        if(ifs == 0) strcat(tacCode, end_loop1);
        else if(ifs == 1) strcat(tacCode, end_loop2);
        else if(ifs == 2) strcat(tacCode, end_loop3);
        else strcat(tacCode, end_loop4);
        strcat(tacCode, ":\n");
        ifs--;
        
    }
#line 2374 "src/sin_analyser.tab.c"
    break;

  case 42:
#line 431 "src/sin_analyser.y"
                     {
        strcat(tacCode, "// for\n");
        sprintf(for_loop1, "L%d", loop);
        loop++;
        sprintf(for_loop2, "L%d", loop);
        loop++;
        sprintf(for_loop3, "L%d", loop);
        loop++;
        sprintf(for_loop4, "L%d", loop);
        loop++;
        strcat(tacCode, for_loop1);
        strcat(tacCode, ":\n");
    }
#line 2392 "src/sin_analyser.tab.c"
    break;

  case 43:
#line 443 "src/sin_analyser.y"
                {
        strcat(tacCode, "jump ");
        strcat(tacCode, for_loop2);
        strcat(tacCode, "\n");
        strcat(tacCode, for_loop4);
        strcat(tacCode, ":\n");
    }
#line 2404 "src/sin_analyser.tab.c"
    break;

  case 44:
#line 449 "src/sin_analyser.y"
                    {
        strcat(tacCode, "jump ");
        strcat(tacCode, for_loop1);
        strcat(tacCode, "\n");
        strcat(tacCode, for_loop3);
        strcat(tacCode, ":\n");
    }
#line 2416 "src/sin_analyser.tab.c"
    break;

  case 45:
#line 455 "src/sin_analyser.y"
               {
        (yyval.treeNode) = newNode("FOR", 0, 0, " ");
        (yyval.treeNode)->subtree1 = (yyvsp[-9].treeNode);
        (yyval.treeNode)->subtree2 = (yyvsp[-6].treeNode);
        (yyval.treeNode)->subtree3 = (yyvsp[-3].treeNode);
        (yyval.treeNode)->subtree4 = (yyvsp[0].treeNode);
        (yyval.treeNode)->type = (yyval.treeNode)->subtree4->type;
        strcat(tacCode, "jump ");
        strcat(tacCode, for_loop4);
        strcat(tacCode, "\n");
        strcat(tacCode, for_loop2);
        strcat(tacCode, ":\n");
        strcat(tacCode, "brnz ");
        strcat(tacCode, for_loop3);
        strcat(tacCode, ", ");
        strcat(tacCode, (yyval.treeNode)->subtree2->tac);
        strcat(tacCode, "\n");
    }
#line 2439 "src/sin_analyser.tab.c"
    break;

  case 46:
#line 476 "src/sin_analyser.y"
                     {
        (yyval.treeNode) = newNode("RETURN", 0, 1, " ");
        (yyval.treeNode)->subtree1 = (yyvsp[0].treeNode);
        (yyval.treeNode)->type = (yyval.treeNode)->subtree1->type;
        strcat(tacCode, "return ");
        strcat(tacCode, (yyval.treeNode)->subtree1->tac);
        strcat(tacCode, "\n");
        if((yyval.treeNode)->subtree1->type > 2){
            strcpy(current_return, (yyval.treeNode)->subtree1->tac);
            return_type = (yyval.treeNode)->subtree1->type;
        }
    }
#line 2456 "src/sin_analyser.tab.c"
    break;

  case 47:
#line 491 "src/sin_analyser.y"
                {
        (yyval.treeNode) = newNode("IN", 0, 0, " ");
        (yyval.treeNode)->subtree1 = (yyvsp[-1].treeNode);
        strcat(tacCode, "// in\n");
        strcat(tacCode, "scanf $665\n");
        if((yyval.treeNode)->subtree1->type == 1) strcat(tacCode, "fltoint $665, $665\n");
         strcat(tacCode, "mov ");
        strcat(tacCode, (yyval.treeNode)->subtree1->tac);
        strcat(tacCode, ", $665\n");
    }
#line 2471 "src/sin_analyser.tab.c"
    break;

  case 48:
#line 504 "src/sin_analyser.y"
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
#line 2517 "src/sin_analyser.tab.c"
    break;

  case 49:
#line 548 "src/sin_analyser.y"
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
                strcat(tacCode, "mov $700, ");
                strcat(tacCode, (yyval.treeNode)->subtree2->tac);
                strcat(tacCode, "\n");
                strcat(tacCode, "inttofl $700, $700\n");
                strcat(tacCode, "mov ");
                strcat(tacCode, (yyval.treeNode)->subtree1->tac);
                strcat(tacCode, ", $700\n");
                (yyval.treeNode)->type = (yyval.treeNode)->subtree1->type;
            }else if((yyval.treeNode)->subtree2->type == 2){
                strcat(tacCode, "mov ");
                strcat(tacCode, (yyval.treeNode)->subtree1->tac);
                strcat(tacCode, ", ");
                strcat(tacCode, (yyval.treeNode)->subtree2->tac);
                strcat(tacCode, "\n");
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
                strcat(tacCode, "sub $602, $601, $600\n");
                strcat(tacCode, "add $600, $600, 1\n");
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
                strcat(tacCode, "sub $602, $601, $600\n");
                strcat(tacCode, "add $600, $600, 1\n");
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
                strcat(tacCode, "sub $602, $601, $600\n");
                strcat(tacCode, "add $600, $600, 1\n");
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
                strcat(tacCode, "sub $602, $601, $600\n");
                strcat(tacCode, "add $600, $600, 1\n");
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
#line 2679 "src/sin_analyser.tab.c"
    break;

  case 50:
#line 708 "src/sin_analyser.y"
           {
        (yyval.treeNode) = newNode("OP", 0, 0, " ");
        (yyval.treeNode)->subtree1 = (yyvsp[0].treeNode);
        (yyval.treeNode)->type = (yyval.treeNode)->subtree1->type;
        strcpy((yyval.treeNode)->tac, (yyval.treeNode)->subtree1->tac);
        strcpy((yyval.treeNode)->value, (yyval.treeNode)->subtree1->value);
        if(if_start){
            strcat(tacCode, "brz ");
            strcat(tacCode, if_loop);
            strcat(tacCode, ", ");
            strcat(tacCode, (yyval.treeNode)->subtree1->tac);
            strcat(tacCode, "\n");
            if_start = 0;
        } 
    }
#line 2699 "src/sin_analyser.tab.c"
    break;

  case 51:
#line 726 "src/sin_analyser.y"
                          {
        (yyval.treeNode) = newNode("LOG OP", 0, 0, " ");
        (yyval.treeNode)->subtree1 = (yyvsp[-2].treeNode);
        (yyval.treeNode)->subtree2 = (yyvsp[0].treeNode);
        if((yyval.treeNode)->subtree1->type == 1){
            if((yyval.treeNode)->subtree2->type == 1){
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
                (yyval.treeNode)->type = 1;
            }else if((yyval.treeNode)->subtree2->type == 2){
                (yyval.treeNode)->type = 1;
                strcat(tacCode, "mov $700, ");
                strcat(tacCode, (yyval.treeNode)->subtree2->tac);
                strcat(tacCode, "\n");
                strcat(tacCode, "fltoint $700, $700\n");
                if(!strcmp((yyvsp[-1].lex).id, "&&")) strcat(tacCode, "and ");
                else strcat(tacCode, "or ");
                sprintf(reg_num, "$%d", reg);
                strcat(tacCode, reg_num);
                strcat(tacCode, ", ");
                strcat(tacCode, (yyval.treeNode)->subtree1->tac);
                strcat(tacCode, ", $700\n");
                strcpy((yyval.treeNode)->tac, reg_num);
                reg++;
            }else{
                printf("SEMANTIC ERROR: Type error in logical operation with type %d and %d. [%d, %d]\n", (yyval.treeNode)->subtree1->type, (yyval.treeNode)->subtree2->type, (yyvsp[-1].lex).line, (yyvsp[-1].lex).col);
                sem_errors++;
            }
        } else if((yyval.treeNode)->subtree1->type == 2){
            if((yyval.treeNode)->subtree2->type == 1){
                (yyval.treeNode)->type = 1;
                strcat(tacCode, "mov $700, ");
                strcat(tacCode, (yyval.treeNode)->subtree1->tac);
                strcat(tacCode, "\n");
                strcat(tacCode, "fltoint $700, $700\n");
                if(!strcmp((yyvsp[-1].lex).id, "&&")) strcat(tacCode, "and ");
                else strcat(tacCode, "or ");
                sprintf(reg_num, "$%d", reg);
                strcat(tacCode, reg_num);
                strcat(tacCode, ", $700, ");
                strcat(tacCode, (yyval.treeNode)->subtree2->tac);
                strcat(tacCode, "\n");
                strcpy((yyval.treeNode)->tac, reg_num);
                reg++;
            }else if((yyval.treeNode)->subtree2->type == 2){
                (yyval.treeNode)->type = 1;
                strcat(tacCode, "mov $700, ");
                strcat(tacCode, (yyval.treeNode)->subtree1->tac);
                strcat(tacCode, "\n");
                strcat(tacCode, "mov $701, ");
                strcat(tacCode, (yyval.treeNode)->subtree2->tac);
                strcat(tacCode, "\n");
                strcat(tacCode, "fltoint $700, $700\n");
                strcat(tacCode, "fltoint $701, $701\n");
                if(!strcmp((yyvsp[-1].lex).id, "&&")) strcat(tacCode, "and ");
                else strcat(tacCode, "or ");
                sprintf(reg_num, "$%d", reg);
                strcat(tacCode, reg_num);
                strcat(tacCode, ", $700, $701\n");
                strcpy((yyval.treeNode)->tac, reg_num);
                reg++;
            }else{
                printf("SEMANTIC ERROR: Type error in logical operation with type %d and %d. [%d, %d]\n", (yyval.treeNode)->subtree1->type, (yyval.treeNode)->subtree2->type, (yyvsp[-1].lex).line, (yyvsp[-1].lex).col);
                sem_errors++;
            }
        } else{
            printf("SEMANTIC ERROR: Type error in logical operation with type %d and %d. [%d, %d]\n", (yyval.treeNode)->subtree1->type, (yyval.treeNode)->subtree2->type, (yyvsp[-1].lex).line, (yyvsp[-1].lex).col);
            sem_errors++;
        }
    }
#line 2783 "src/sin_analyser.tab.c"
    break;

  case 52:
#line 806 "src/sin_analyser.y"
           { (yyval.treeNode) = (yyvsp[0].treeNode); }
#line 2789 "src/sin_analyser.tab.c"
    break;

  case 53:
#line 810 "src/sin_analyser.y"
                          {
        (yyval.treeNode) = newNode("REL OP", 0, 0, " ");
        (yyval.treeNode)->subtree1 = (yyvsp[-2].treeNode);
        (yyval.treeNode)->subtree2 = (yyvsp[0].treeNode);
        if((yyval.treeNode)->subtree1->type == 1){
            if((yyval.treeNode)->subtree2->type == 1){
                (yyval.treeNode)->type = 1;
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
            }else if((yyval.treeNode)->subtree2->type == 2){
                (yyval.treeNode)->type = 1;
                strcat(tacCode, "mov $700, ");
                strcat(tacCode, (yyval.treeNode)->subtree2->tac);
                strcat(tacCode, "\n");
                strcat(tacCode, "fltoint $700, $700\n");
                if(!strcmp((yyvsp[-1].lex).id, "==") || !strcmp((yyvsp[-1].lex).id, "!=")) strcat(tacCode, "seq ");
                else if(!strcmp((yyvsp[-1].lex).id, ">=") || !strcmp((yyvsp[-1].lex).id, "<")) strcat(tacCode, "slt ");
                else strcat(tacCode, "sleq ");
                sprintf(reg_num, "$%d", reg);
                strcat(tacCode, reg_num);
                strcat(tacCode, ", ");
                strcat(tacCode, (yyval.treeNode)->subtree1->tac);
                strcat(tacCode, ", $700, 1\n");
                if(!strcmp((yyvsp[-1].lex).id, ">=") || !strcmp((yyvsp[-1].lex).id, "!=") || !strcmp((yyvsp[-1].lex).id, ">")){
                    strcat(tacCode, "not ");
                    strcat(tacCode, reg_num);
                    strcat(tacCode, ", ");
                    strcat(tacCode, reg_num);
                    strcat(tacCode, "\n");
                }
                strcpy((yyval.treeNode)->tac, reg_num);
                reg++;
            }else{
                printf("SEMANTIC ERROR: Type error in relational operation with type %d and %d. [%d, %d]\n", (yyval.treeNode)->subtree1->type, (yyval.treeNode)->subtree2->type, (yyvsp[-1].lex).line, (yyvsp[-1].lex).col);
                sem_errors++;
            }
        } else if((yyval.treeNode)->subtree1->type == 2){
            if((yyval.treeNode)->subtree2->type == 1){
                (yyval.treeNode)->type = 1;
                strcat(tacCode, "mov $700, ");
                strcat(tacCode, (yyval.treeNode)->subtree1->tac);
                strcat(tacCode, "\n");
                strcat(tacCode, "fltoint $700, $700\n");
                if(!strcmp((yyvsp[-1].lex).id, "==") || !strcmp((yyvsp[-1].lex).id, "!=")) strcat(tacCode, "seq ");
                else if(!strcmp((yyvsp[-1].lex).id, ">=") || !strcmp((yyvsp[-1].lex).id, "<")) strcat(tacCode, "slt ");
                else strcat(tacCode, "sleq ");
                sprintf(reg_num, "$%d", reg);
                strcat(tacCode, reg_num);
                strcat(tacCode, ", $700, ");
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
            }else if((yyval.treeNode)->subtree2->type == 2){
                (yyval.treeNode)->type = 1;
                strcat(tacCode, "mov $700, ");
                strcat(tacCode, (yyval.treeNode)->subtree1->tac);
                strcat(tacCode, "\n");
                strcat(tacCode, "mov $701, ");
                strcat(tacCode, (yyval.treeNode)->subtree2->tac);
                strcat(tacCode, "\n");
                strcat(tacCode, "fltoint $700, $700\n");
                strcat(tacCode, "fltoint $701, $701\n");
                if(!strcmp((yyvsp[-1].lex).id, "==") || !strcmp((yyvsp[-1].lex).id, "!=")) strcat(tacCode, "seq ");
                else if(!strcmp((yyvsp[-1].lex).id, ">=") || !strcmp((yyvsp[-1].lex).id, "<")) strcat(tacCode, "slt ");
                else strcat(tacCode, "sleq ");
                sprintf(reg_num, "$%d", reg);
                strcat(tacCode, reg_num);
                strcat(tacCode, ", $700, $701\n");
                if(!strcmp((yyvsp[-1].lex).id, ">=") || !strcmp((yyvsp[-1].lex).id, "!=") || !strcmp((yyvsp[-1].lex).id, ">")){
                    strcat(tacCode, "not ");
                    strcat(tacCode, reg_num);
                    strcat(tacCode, ", ");
                    strcat(tacCode, reg_num);
                    strcat(tacCode, "\n");
                }
                strcpy((yyval.treeNode)->tac, reg_num);
                reg++;
            }else{
                printf("SEMANTIC ERROR: Type error in relational operation with type %d and %d. [%d, %d]\n", (yyval.treeNode)->subtree1->type, (yyval.treeNode)->subtree2->type, (yyvsp[-1].lex).line, (yyvsp[-1].lex).col);
                sem_errors++;
            }
        } else if((yyval.treeNode)->subtree1->type == 3 && (!strcmp((yyvsp[-1].lex).id, "==") || !strcmp((yyvsp[-1].lex).id, "!="))){
            if((yyval.treeNode)->subtree2->type == 3){
                (yyval.treeNode)->type = 1;
                sprintf(reg_num, "$%d", reg);
                strcat(tacCode, "mov $400, &");
                strcat(tacCode, (yyval.treeNode)->subtree1->tac);
                strcat(tacCode, "\nmov $500, &");
                strcat(tacCode, (yyval.treeNode)->subtree2->tac);
                strcat(tacCode, "\nmov $600, 0\n");
                strcat(tacCode, "\nmov $601, ");
                strcat(tacCode, (yyval.treeNode)->subtree2->tac);
                strcat(tacCode, "_size\n");
                strcat(tacCode, "\nmov $602, ");
                strcat(tacCode, (yyval.treeNode)->subtree1->tac);
                strcat(tacCode, "_size\n");
                strcat(tacCode, "mov ");
                strcat(tacCode, reg_num);
                strcat(tacCode, ", 0\n");
                strcat(tacCode, "sub $603, $601, $602\n");
                sprintf(list_loop1, "L%d", loop);
                loop++;
                strcat(tacCode, "brnz ");
                strcat(tacCode, list_loop1);
                strcat(tacCode, ", $603\n");
                strcat(tacCode, "mov ");
                strcat(tacCode, reg_num);
                strcat(tacCode, ", 1\n");
                sprintf(loop_num, "L%d", loop);
                loop++;
                strcat(tacCode, loop_num);
                strcat(tacCode, ":\n");
                strcat(tacCode, "mov $700, $500[$600]\n");
                strcat(tacCode, "mov $701, $400[$600]\n");
                strcat(tacCode, "seq ");
                strcat(tacCode, reg_num);
                strcat(tacCode, ", $701, $700\n");
                strcat(tacCode, "brz ");
                strcat(tacCode, list_loop1);
                strcat(tacCode, ", ");
                strcat(tacCode, reg_num);
                strcat(tacCode, "\nsub $602, $601, $600\n");
                strcat(tacCode, "add $600, $600, 1\n");
                strcat(tacCode, "brnz ");
                strcat(tacCode, loop_num);
                strcat(tacCode, ", $602\n");
                strcat(tacCode, list_loop1);
                strcat(tacCode, ":\n");
                if(!strcmp((yyvsp[-1].lex).id, "!=")){
                    strcat(tacCode, "not ");
                    strcat(tacCode, reg_num);
                    strcat(tacCode, ", ");
                    strcat(tacCode, reg_num);
                    strcat(tacCode, "\n");
                }
                strcpy((yyval.treeNode)->tac, reg_num);
                reg++;
            } else if((yyval.treeNode)->subtree2->type == 4){
                (yyval.treeNode)->type = 1;
                sprintf(reg_num, "$%d", reg);
                strcat(tacCode, "mov $400, &");
                strcat(tacCode, (yyval.treeNode)->subtree1->tac);
                strcat(tacCode, "\nmov $500, &");
                strcat(tacCode, (yyval.treeNode)->subtree2->tac);
                strcat(tacCode, "\nmov $600, 0\n");
                strcat(tacCode, "\nmov $601, ");
                strcat(tacCode, (yyval.treeNode)->subtree2->tac);
                strcat(tacCode, "_size\n");
                strcat(tacCode, "\nmov $602, ");
                strcat(tacCode, (yyval.treeNode)->subtree1->tac);
                strcat(tacCode, "_size\n");
                strcat(tacCode, "mov ");
                strcat(tacCode, reg_num);
                strcat(tacCode, ", 0\n");
                strcat(tacCode, "sub $603, $601, $602\n");
                sprintf(list_loop1, "L%d", loop);
                loop++;
                strcat(tacCode, "brnz ");
                strcat(tacCode, list_loop1);
                strcat(tacCode, ", $603\n");
                strcat(tacCode, "\nmov ");
                strcat(tacCode, reg_num);
                strcat(tacCode, ", 1\n");
                sprintf(loop_num, "L%d", loop);
                loop++;
                strcat(tacCode, loop_num);
                strcat(tacCode, ":\n");
                strcat(tacCode, "mov $700, $500[$600]\n");
                strcat(tacCode, "fltoint $700, $700\n");
                strcat(tacCode, "mov $701, $400[$600]\n");
                strcat(tacCode, "seq ");
                strcat(tacCode, reg_num);
                strcat(tacCode, ", $701, $700\n");
                strcat(tacCode, "brz ");
                strcat(tacCode, list_loop1);
                strcat(tacCode, ", ");
                strcat(tacCode, reg_num);
                strcat(tacCode, "\nsub $602, $601, $600\n");
                strcat(tacCode, "add $600, $600, 1\n");
                strcat(tacCode, "brnz ");
                strcat(tacCode, loop_num);
                strcat(tacCode, ", $602\n");
                strcat(tacCode, list_loop1);
                strcat(tacCode, ":\n");
                if(!strcmp((yyvsp[-1].lex).id, "!=")){
                    strcat(tacCode, "not ");
                    strcat(tacCode, reg_num);
                    strcat(tacCode, ", ");
                    strcat(tacCode, reg_num);
                    strcat(tacCode, "\n");
                }
                strcpy((yyval.treeNode)->tac, reg_num);
                reg++;
            }else{
                printf("SEMANTIC ERROR: Type error in relational operation with type %d and %d. [%d, %d]\n", (yyval.treeNode)->subtree1->type, (yyval.treeNode)->subtree2->type, (yyvsp[-1].lex).line, (yyvsp[-1].lex).col);
                sem_errors++;
            }
        } else if((yyval.treeNode)->subtree1->type == 4 && (!strcmp((yyvsp[-1].lex).id, "==") || !strcmp((yyvsp[-1].lex).id, "!="))){
            if((yyval.treeNode)->subtree2->type == 3){
                (yyval.treeNode)->type = 1;
                sprintf(reg_num, "$%d", reg);
                strcat(tacCode, "mov $400, &");
                strcat(tacCode, (yyval.treeNode)->subtree1->tac);
                strcat(tacCode, "\nmov $500, &");
                strcat(tacCode, (yyval.treeNode)->subtree2->tac);
                strcat(tacCode, "\nmov $600, 0\n");
                strcat(tacCode, "\nmov $601, ");
                strcat(tacCode, (yyval.treeNode)->subtree2->tac);
                strcat(tacCode, "_size\n");
                strcat(tacCode, "\nmov $602, ");
                strcat(tacCode, (yyval.treeNode)->subtree1->tac);
                strcat(tacCode, "_size\n");
                strcat(tacCode, "mov ");
                strcat(tacCode, reg_num);
                strcat(tacCode, ", 0\n");
                strcat(tacCode, "sub $603, $601, $602\n");
                sprintf(list_loop1, "L%d", loop);
                loop++;
                strcat(tacCode, "brnz ");
                strcat(tacCode, list_loop1);
                strcat(tacCode, ", $603\n");
                strcat(tacCode, "\nmov ");
                strcat(tacCode, reg_num);
                strcat(tacCode, ", 1\n");
                sprintf(loop_num, "L%d", loop);
                loop++;
                strcat(tacCode, loop_num);
                strcat(tacCode, ":\n");
                strcat(tacCode, "mov $700, $400[$600]\n");
                strcat(tacCode, "fltoint $700, $700\n");
                strcat(tacCode, "mov $701, $500[$600]\n");
                strcat(tacCode, "seq ");
                strcat(tacCode, reg_num);
                strcat(tacCode, ", $701, $700\n");
                strcat(tacCode, "brz ");
                strcat(tacCode, list_loop1);
                strcat(tacCode, ", ");
                strcat(tacCode, reg_num);
                strcat(tacCode, "\nsub $602, $601, $600\n");
                strcat(tacCode, "add $600, $600, 1\n");
                strcat(tacCode, "brnz ");
                strcat(tacCode, loop_num);
                strcat(tacCode, ", $602\n");
                strcat(tacCode, list_loop1);
                strcat(tacCode, ":\n");
                if(!strcmp((yyvsp[-1].lex).id, "!=")){
                    strcat(tacCode, "not ");
                    strcat(tacCode, reg_num);
                    strcat(tacCode, ", ");
                    strcat(tacCode, reg_num);
                    strcat(tacCode, "\n");
                }
                strcpy((yyval.treeNode)->tac, reg_num);
                reg++;
            } else if((yyval.treeNode)->subtree2->type == 4){
                (yyval.treeNode)->type = 1;
                sprintf(reg_num, "$%d", reg);
                strcat(tacCode, "mov $400, &");
                strcat(tacCode, (yyval.treeNode)->subtree1->tac);
                strcat(tacCode, "\nmov $500, &");
                strcat(tacCode, (yyval.treeNode)->subtree2->tac);
                strcat(tacCode, "\nmov $600, 0\n");
                strcat(tacCode, "\nmov $601, ");
                strcat(tacCode, (yyval.treeNode)->subtree2->tac);
                strcat(tacCode, "_size\n");
                strcat(tacCode, "\nmov $602, ");
                strcat(tacCode, (yyval.treeNode)->subtree1->tac);
                strcat(tacCode, "_size\n");
                strcat(tacCode, "mov ");
                strcat(tacCode, reg_num);
                strcat(tacCode, ", 0\n");
                strcat(tacCode, "sub $603, $601, $602\n");
                sprintf(list_loop1, "L%d", loop);
                loop++;
                strcat(tacCode, "brnz ");
                strcat(tacCode, list_loop1);
                strcat(tacCode, ", $603\n");
                strcat(tacCode, "\nmov ");
                strcat(tacCode, reg_num);
                strcat(tacCode, ", 1\n");
                sprintf(loop_num, "L%d", loop);
                loop++;
                strcat(tacCode, loop_num);
                strcat(tacCode, ":\n");
                strcat(tacCode, "mov $700, $400[$600]\n");
                strcat(tacCode, "fltoint $700, $700\n");
                strcat(tacCode, "mov $701, $500[$600]\n");
                strcat(tacCode, "fltoint $701, $701]\n");
                strcat(tacCode, "seq ");
                strcat(tacCode, reg_num);
                strcat(tacCode, ", $701, $700\n");
                strcat(tacCode, "brz ");
                strcat(tacCode, list_loop1);
                strcat(tacCode, ", ");
                strcat(tacCode, reg_num);
                strcat(tacCode, "\nsub $602, $601, $600\n");
                strcat(tacCode, "add $600, $600, 1\n");
                strcat(tacCode, "brnz ");
                strcat(tacCode, loop_num);
                strcat(tacCode, ", $602\n");
                strcat(tacCode, list_loop1);
                strcat(tacCode, ":\n");
                if(!strcmp((yyvsp[-1].lex).id, "!=")){
                    strcat(tacCode, "not ");
                    strcat(tacCode, reg_num);
                    strcat(tacCode, ", ");
                    strcat(tacCode, reg_num);
                    strcat(tacCode, "\n");
                }
                strcpy((yyval.treeNode)->tac, reg_num);
                reg++;
            }else{
                printf("SEMANTIC ERROR: Type error in relational operation with type %d and %d. [%d, %d]\n", (yyval.treeNode)->subtree1->type, (yyval.treeNode)->subtree2->type, (yyvsp[-1].lex).line, (yyvsp[-1].lex).col);
                sem_errors++;
            }
        }else{
            printf("SEMANTIC ERROR: Type error in relational operation with type %d and %d. [%d, %d]\n", (yyval.treeNode)->subtree1->type, (yyval.treeNode)->subtree2->type, (yyvsp[-1].lex).line, (yyvsp[-1].lex).col);
            sem_errors++;
        }
    }
#line 3139 "src/sin_analyser.tab.c"
    break;

  case 54:
#line 1156 "src/sin_analyser.y"
            { (yyval.treeNode) = (yyvsp[0].treeNode); }
#line 3145 "src/sin_analyser.tab.c"
    break;

  case 55:
#line 1160 "src/sin_analyser.y"
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
#line 3253 "src/sin_analyser.tab.c"
    break;

  case 56:
#line 1264 "src/sin_analyser.y"
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
#line 3306 "src/sin_analyser.tab.c"
    break;

  case 57:
#line 1313 "src/sin_analyser.y"
           { (yyval.treeNode) = (yyvsp[0].treeNode); }
#line 3312 "src/sin_analyser.tab.c"
    break;

  case 58:
#line 1317 "src/sin_analyser.y"
                       {
        (yyval.treeNode) = newNode("ARI SS OP", 0, 0, " ");
        (yyval.treeNode)->subtree1 = (yyvsp[-2].treeNode);
        (yyval.treeNode)->subtree2 = (yyvsp[0].treeNode);
        if((yyval.treeNode)->subtree1->type == 1){
            if((yyval.treeNode)->subtree2->type == 1){
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
                (yyval.treeNode)->type = (yyval.treeNode)->subtree1->type;
            }else if((yyval.treeNode)->subtree2->type == 2){
                strcat(tacCode, "mov $700, ");
                strcat(tacCode, (yyval.treeNode)->subtree1->tac);
                strcat(tacCode, "\n");
                strcat(tacCode, "inttofl $700, $700\n");
                if(!strcmp((yyvsp[-1].lex).id, "+")) strcat(tacCode, "add ");
                else strcat(tacCode, "sub ");
                sprintf(reg_num, "$%d", reg);
                strcat(tacCode, reg_num);
                strcat(tacCode, ", ");
                strcat(tacCode, (yyval.treeNode)->subtree2->tac);
                strcat(tacCode, ", $700\n");
                strcpy((yyval.treeNode)->tac, reg_num);
                reg++;
                (yyval.treeNode)->type = (yyval.treeNode)->subtree2->type;
            }else{
                printf("SEMANTIC ERROR: Type error in arithmetic operation with type %d and %d. [%d, %d]\n", (yyval.treeNode)->subtree1->type, (yyval.treeNode)->subtree2->type, (yyvsp[-1].lex).line, (yyvsp[-1].lex).col);
                sem_errors++;
            }
        } else if((yyval.treeNode)->subtree1->type == 2){
            if((yyval.treeNode)->subtree2->type == 1){
                strcat(tacCode, "mov $700, ");
                strcat(tacCode, (yyval.treeNode)->subtree2->tac);
                strcat(tacCode, "\n");
                strcat(tacCode, "inttofl $700, $700\n");
                if(!strcmp((yyvsp[-1].lex).id, "+")) strcat(tacCode, "add ");
                else strcat(tacCode, "sub ");
                sprintf(reg_num, "$%d", reg);
                strcat(tacCode, reg_num);
                strcat(tacCode, ", ");
                strcat(tacCode, (yyval.treeNode)->subtree1->tac);
                strcat(tacCode, ", $700\n");
                strcpy((yyval.treeNode)->tac, reg_num);
                reg++;
                (yyval.treeNode)->type = (yyval.treeNode)->subtree1->type;
            }else if((yyval.treeNode)->subtree2->type == 2){
                strcat(tacCode, "mov $700, ");
                strcat(tacCode, (yyval.treeNode)->subtree1->tac);
                strcat(tacCode, "\n");
                strcat(tacCode, "mov $701, ");
                strcat(tacCode, (yyval.treeNode)->subtree2->tac);
                strcat(tacCode, "\n");
                if(!strcmp((yyvsp[-1].lex).id, "+")) strcat(tacCode, "add ");
                else strcat(tacCode, "sub ");
                sprintf(reg_num, "$%d", reg);
                strcat(tacCode, reg_num);
                strcat(tacCode, ", $701, $700\n");
                strcpy((yyval.treeNode)->tac, reg_num);
                reg++;
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
#line 3394 "src/sin_analyser.tab.c"
    break;

  case 59:
#line 1395 "src/sin_analyser.y"
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
#line 3417 "src/sin_analyser.tab.c"
    break;

  case 60:
#line 1414 "src/sin_analyser.y"
          { (yyval.treeNode) = (yyvsp[0].treeNode); }
#line 3423 "src/sin_analyser.tab.c"
    break;

  case 61:
#line 1418 "src/sin_analyser.y"
                      {
        (yyval.treeNode) = newNode("ARI MD OP", 0, 0, " ");
        (yyval.treeNode)->subtree1 = (yyvsp[-2].treeNode);
        (yyval.treeNode)->subtree2 = (yyvsp[0].treeNode);
        if((yyval.treeNode)->subtree1->type == 1){
            if((yyval.treeNode)->subtree2->type == 1){
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
                (yyval.treeNode)->type = (yyval.treeNode)->subtree1->type;
            }else if((yyval.treeNode)->subtree2->type == 2){
                strcat(tacCode, "mov $700, ");
                strcat(tacCode, (yyval.treeNode)->subtree1->tac);
                strcat(tacCode, "\n");
                strcat(tacCode, "inttofl $700, $700\n");
                if(!strcmp((yyvsp[-1].lex).id, "*")) strcat(tacCode, "mul ");
                else strcat(tacCode, "div ");
                sprintf(reg_num, "$%d", reg);
                strcat(tacCode, reg_num);
                strcat(tacCode, ", $700, ");
                strcat(tacCode, (yyval.treeNode)->subtree2->tac);
                strcat(tacCode, "\n");
                strcpy((yyval.treeNode)->tac, reg_num);
                reg++;
                (yyval.treeNode)->type = (yyval.treeNode)->subtree2->type;
            }else{
                printf("SEMANTIC ERROR: Type error in arithmetic operation with type %d and %d. [%d, %d]\n", (yyval.treeNode)->subtree1->type, (yyval.treeNode)->subtree2->type, (yyvsp[-1].lex).line, (yyvsp[-1].lex).col);
                sem_errors++;
            }
        } else if((yyval.treeNode)->subtree1->type == 2){
            if((yyval.treeNode)->subtree2->type == 1){
                strcat(tacCode, "mov $700, ");
                strcat(tacCode, (yyval.treeNode)->subtree2->tac);
                strcat(tacCode, "\n");
                strcat(tacCode, "inttofl $700, $700\n");
                if(!strcmp((yyvsp[-1].lex).id, "*")) strcat(tacCode, "mul ");
                else strcat(tacCode, "div ");
                sprintf(reg_num, "$%d", reg);
                strcat(tacCode, reg_num);
                strcat(tacCode, ", ");
                strcat(tacCode, (yyval.treeNode)->subtree1->tac);
                strcat(tacCode, ", $700\n");
                strcpy((yyval.treeNode)->tac, reg_num);
                reg++;
                (yyval.treeNode)->type = (yyval.treeNode)->subtree1->type;
            }else if((yyval.treeNode)->subtree2->type == 2){
                strcat(tacCode, "mov $700, ");
                strcat(tacCode, (yyval.treeNode)->subtree1->tac);
                strcat(tacCode, "\n");
                strcat(tacCode, "mov $701, ");
                strcat(tacCode, (yyval.treeNode)->subtree2->tac);
                strcat(tacCode, "\n");
                if(!strcmp((yyvsp[-1].lex).id, "*")) strcat(tacCode, "mul ");
                else strcat(tacCode, "div ");
                sprintf(reg_num, "$%d", reg);
                strcat(tacCode, reg_num);
                strcat(tacCode, ", $700, $701\n");
                strcpy((yyval.treeNode)->tac, reg_num);
                reg++;
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
#line 3505 "src/sin_analyser.tab.c"
    break;

  case 62:
#line 1496 "src/sin_analyser.y"
          { (yyval.treeNode) = (yyvsp[0].treeNode); }
#line 3511 "src/sin_analyser.tab.c"
    break;

  case 63:
#line 1500 "src/sin_analyser.y"
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
                    sprintf(list_loop1, "L%d", loop);
                    loop++;
                    strcat(tacCode, "brz ");
                    strcat(tacCode, list_loop1);
                    strcat(tacCode, ", ");
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
                    strcat(tacCode, list_loop1);
                    strcat(tacCode, ":\n");
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
                    sprintf(list_loop1, "L%d", loop);
                    loop++;
                    strcat(tacCode, "brz ");
                    strcat(tacCode, list_loop1);
                    strcat(tacCode, ", ");
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
                    strcat(tacCode, list_loop1);
                    strcat(tacCode, ":\n");
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
#line 3624 "src/sin_analyser.tab.c"
    break;

  case 64:
#line 1609 "src/sin_analyser.y"
        { (yyval.treeNode) = (yyvsp[0].treeNode); }
#line 3630 "src/sin_analyser.tab.c"
    break;

  case 65:
#line 1613 "src/sin_analyser.y"
       { (yyval.treeNode) = (yyvsp[0].treeNode); }
#line 3636 "src/sin_analyser.tab.c"
    break;

  case 66:
#line 1615 "src/sin_analyser.y"
              { (yyval.treeNode) = (yyvsp[0].treeNode); }
#line 3642 "src/sin_analyser.tab.c"
    break;

  case 67:
#line 1617 "src/sin_analyser.y"
                    { (yyval.treeNode) = (yyvsp[-1].treeNode); }
#line 3648 "src/sin_analyser.tab.c"
    break;

  case 68:
#line 1619 "src/sin_analyser.y"
        { (yyval.treeNode) = newNode((yyvsp[0].lex).id, 1, 0, (yyvsp[0].lex).id); }
#line 3654 "src/sin_analyser.tab.c"
    break;

  case 69:
#line 1621 "src/sin_analyser.y"
          { (yyval.treeNode) = newNode((yyvsp[0].lex).id, 2, 0, (yyvsp[0].lex).id); }
#line 3660 "src/sin_analyser.tab.c"
    break;

  case 70:
#line 1623 "src/sin_analyser.y"
        { (yyval.treeNode) = newNode("NIL", 3, 0, (yyvsp[0].lex).id); }
#line 3666 "src/sin_analyser.tab.c"
    break;

  case 71:
#line 1625 "src/sin_analyser.y"
            {
        strcat(tacTable, "char ");
        sprintf(str_num, "_s%d", str);
        strcat(tacTable, str_num);
        strcat(tacTable, "[] = ");
        strcat(tacTable, (yyvsp[0].lex).id);
        strcat(tacTable, "\n");
        str++;
        (yyval.treeNode) = newNode((yyvsp[0].lex).id, 0, 0, str_num); 
    }
#line 3681 "src/sin_analyser.tab.c"
    break;

  case 72:
#line 1638 "src/sin_analyser.y"
          {
        call_scope = searchTable(table, (yyvsp[-1].lex).id, 1, 1, stack, scope_pos);
    }
#line 3689 "src/sin_analyser.tab.c"
    break;

  case 73:
#line 1640 "src/sin_analyser.y"
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
        if(return_type > 2){
            strcpy((yyval.treeNode)->tac, current_return);
        }else{
            sprintf(reg_num, "$%d", reg);
            reg++;
            strcat(tacCode, "pop ");
            strcat(tacCode, reg_num);
            strcat(tacCode, "\n");
            strcpy((yyval.treeNode)->tac, reg_num);
        }
        args = 0;

    }
#line 3727 "src/sin_analyser.tab.c"
    break;

  case 74:
#line 1674 "src/sin_analyser.y"
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
#line 3746 "src/sin_analyser.tab.c"
    break;

  case 75:
#line 1691 "src/sin_analyser.y"
       { 
        if(!searchTable(table, (yyvsp[0].lex).id, 0, 0, stack, scope_pos)){
            printf("SEMANTIC ERROR: Variable %s not declared [%d, %d]\n", (yyvsp[0].lex).id, (yyvsp[0].lex).line, (yyvsp[0].lex).col);
            sem_errors++;
        }
        param = checkParams(table, (yyvsp[0].lex).id, stack[scope_pos]);
        id_scope = checkScope(table, (yyvsp[0].lex).id, stack[scope_pos]);
        sprintf(reg_num, "#%d", param-1);
        sprintf(str_num, "_s%d", id_scope);
        strcpy(tac, (yyvsp[0].lex).id);
        strcat(tac, str_num);
        if(param)
            (yyval.treeNode) = newNode((yyvsp[0].lex).id, checkType(table, (yyvsp[0].lex).id, stack[scope_pos], 1), 0, reg_num); 
        else
            (yyval.treeNode) = newNode((yyvsp[0].lex).id, checkType(table, (yyvsp[0].lex).id, stack[scope_pos], 1), 0, tac); 
    }
#line 3767 "src/sin_analyser.tab.c"
    break;

  case 76:
#line 1710 "src/sin_analyser.y"
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
#line 3786 "src/sin_analyser.tab.c"
    break;

  case 77:
#line 1725 "src/sin_analyser.y"
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
#line 3804 "src/sin_analyser.tab.c"
    break;


#line 3808 "src/sin_analyser.tab.c"

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
#line 1740 "src/sin_analyser.y"


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
