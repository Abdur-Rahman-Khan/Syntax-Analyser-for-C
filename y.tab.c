/* A Bison parser, made by GNU Bison 3.0.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2013 Free Software Foundation, Inc.

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

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.0.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 1 "file.y" /* yacc.c:339  */

	int yylineno;
	

#line 71 "y.tab.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 1
#endif


/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    NO_ELSE = 258,
    ELSE = 259,
    GE_OP = 260,
    LE_OP = 261,
    EQ_OP = 262,
    NE_OP = 263,
    IDENTIFIER = 264,
    CONSTANT = 265,
    STRING_LITERAL = 266,
    SIZEOF = 267,
    PTR_OP = 268,
    INC_OP = 269,
    DEC_OP = 270,
    LEFT_OP = 271,
    RIGHT_OP = 272,
    AND_OP = 273,
    OR_OP = 274,
    MUL_ASSIGN = 275,
    DIV_ASSIGN = 276,
    MOD_ASSIGN = 277,
    ADD_ASSIGN = 278,
    SUB_ASSIGN = 279,
    LEFT_ASSIGN = 280,
    RIGHT_ASSIGN = 281,
    AND_ASSIGN = 282,
    XOR_ASSIGN = 283,
    OR_ASSIGN = 284,
    DEFINE = 285,
    TYPEDEF = 286,
    EXTERN = 287,
    STATIC = 288,
    AUTO = 289,
    REGISTER = 290,
    CHAR = 291,
    SHORT = 292,
    INT = 293,
    LONG = 294,
    SIGNED = 295,
    UNSIGNED = 296,
    FLOAT = 297,
    DOUBLE = 298,
    CONST = 299,
    VOLATILE = 300,
    VOID = 301,
    STRUCT = 302,
    UNION = 303,
    ENUM = 304,
    CASE = 305,
    DEFAULT = 306,
    IF = 307,
    SWITCH = 308,
    WHILE = 309,
    DO = 310,
    FOR = 311,
    GOTO = 312,
    CONTINUE = 313,
    BREAK = 314,
    RETURN = 315,
    GLOBAL = 316,
    KERNEL_CLOSE = 317,
    KERNEL_OPEN = 318
  };
#endif
/* Tokens.  */
#define NO_ELSE 258
#define ELSE 259
#define GE_OP 260
#define LE_OP 261
#define EQ_OP 262
#define NE_OP 263
#define IDENTIFIER 264
#define CONSTANT 265
#define STRING_LITERAL 266
#define SIZEOF 267
#define PTR_OP 268
#define INC_OP 269
#define DEC_OP 270
#define LEFT_OP 271
#define RIGHT_OP 272
#define AND_OP 273
#define OR_OP 274
#define MUL_ASSIGN 275
#define DIV_ASSIGN 276
#define MOD_ASSIGN 277
#define ADD_ASSIGN 278
#define SUB_ASSIGN 279
#define LEFT_ASSIGN 280
#define RIGHT_ASSIGN 281
#define AND_ASSIGN 282
#define XOR_ASSIGN 283
#define OR_ASSIGN 284
#define DEFINE 285
#define TYPEDEF 286
#define EXTERN 287
#define STATIC 288
#define AUTO 289
#define REGISTER 290
#define CHAR 291
#define SHORT 292
#define INT 293
#define LONG 294
#define SIGNED 295
#define UNSIGNED 296
#define FLOAT 297
#define DOUBLE 298
#define CONST 299
#define VOLATILE 300
#define VOID 301
#define STRUCT 302
#define UNION 303
#define ENUM 304
#define CASE 305
#define DEFAULT 306
#define IF 307
#define SWITCH 308
#define WHILE 309
#define DO 310
#define FOR 311
#define GOTO 312
#define CONTINUE 313
#define BREAK 314
#define RETURN 315
#define GLOBAL 316
#define KERNEL_CLOSE 317
#define KERNEL_OPEN 318

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE YYSTYPE;
union YYSTYPE
{
#line 29 "file.y" /* yacc.c:355  */

	char str[1000];

#line 238 "y.tab.c" /* yacc.c:355  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);



/* Copy the second part of user declarations.  */

#line 253 "y.tab.c" /* yacc.c:358  */

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

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

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
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
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
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
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  39
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   978

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  88
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  55
/* YYNRULES -- Number of rules.  */
#define YYNRULES  177
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  290

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   318

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    81,     2,     2,     2,    16,    18,     2,
      74,    75,    14,    12,    79,    13,    78,    15,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    84,    85,
       5,     7,     6,    83,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    76,     2,    77,    82,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    86,    17,    87,    80,     2,     2,     2,
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
       8,     9,    10,    11,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    36,    36,    37,    38,    42,    43,    44,    45,    49,
      53,    54,    55,    56,    57,    58,    59,    60,    64,    65,
      69,    70,    71,    72,    73,    74,    78,    79,    80,    81,
      82,    83,    87,    88,    92,    93,    94,    95,    99,   100,
     101,   105,   106,   107,   111,   112,   113,   114,   115,   119,
     120,   121,   125,   126,   130,   131,   135,   136,   140,   141,
     145,   146,   150,   151,   155,   156,   160,   161,   162,   163,
     164,   165,   166,   167,   168,   169,   170,   171,   172,   176,
     177,   181,   185,   186,   190,   191,   192,   193,   197,   198,
     202,   203,   207,   208,   209,   210,   211,   215,   216,   217,
     218,   219,   220,   221,   222,   223,   224,   228,   229,   230,
     231,   235,   236,   237,   238,   242,   243,   247,   248,   252,
     257,   258,   262,   263,   267,   268,   269,   270,   271,   272,
     273,   277,   278,   282,   283,   287,   288,   292,   293,   297,
     298,   302,   303,   304,   308,   309,   313,   314,   315,   316,
     317,   321,   322,   323,   324,   328,   329,   333,   334,   338,
     339,   343,   344,   348,   349,   350,   351,   355,   356,   357,
     358,   362,   363,   364,   367,   368,   369,   370
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 1
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "NO_ELSE", "ELSE", "'<'", "'>'", "'='",
  "GE_OP", "LE_OP", "EQ_OP", "NE_OP", "'+'", "'-'", "'*'", "'/'", "'%'",
  "'|'", "'&'", "IDENTIFIER", "CONSTANT", "STRING_LITERAL", "SIZEOF",
  "PTR_OP", "INC_OP", "DEC_OP", "LEFT_OP", "RIGHT_OP", "AND_OP", "OR_OP",
  "MUL_ASSIGN", "DIV_ASSIGN", "MOD_ASSIGN", "ADD_ASSIGN", "SUB_ASSIGN",
  "LEFT_ASSIGN", "RIGHT_ASSIGN", "AND_ASSIGN", "XOR_ASSIGN", "OR_ASSIGN",
  "DEFINE", "TYPEDEF", "EXTERN", "STATIC", "AUTO", "REGISTER", "CHAR",
  "SHORT", "INT", "LONG", "SIGNED", "UNSIGNED", "FLOAT", "DOUBLE", "CONST",
  "VOLATILE", "VOID", "STRUCT", "UNION", "ENUM", "CASE", "DEFAULT", "IF",
  "SWITCH", "WHILE", "DO", "FOR", "GOTO", "CONTINUE", "BREAK", "RETURN",
  "GLOBAL", "KERNEL_CLOSE", "KERNEL_OPEN", "'('", "')'", "'['", "']'",
  "'.'", "','", "'~'", "'!'", "'^'", "'?'", "':'", "';'", "'{'", "'}'",
  "$accept", "begin", "primary_expression", "Define", "postfix_expression",
  "argument_expression_list", "unary_expression", "unary_operator",
  "cast_expression", "multiplicative_expression", "additive_expression",
  "shift_expression", "relational_expression", "equality_expression",
  "and_expression", "exclusive_or_expression", "inclusive_or_expression",
  "logical_and_expression", "logical_or_expression",
  "conditional_expression", "assignment_expression", "assignment_operator",
  "expression", "constant_expression", "declaration",
  "declaration_specifiers", "init_declarator_list", "init_declarator",
  "storage_class_specifier", "type_specifier", "specifier_qualifier_list",
  "struct_or_union_specifier", "struct_or_union",
  "struct_declaration_list", "struct_declaration",
  "struct_declarator_list", "declarator", "direct_declarator", "pointer",
  "parameter_list", "parameter_declaration", "identifier_list",
  "type_name", "initializer", "initializer_list", "statement",
  "compound_statement", "declaration_list", "statement_list",
  "expression_statement", "selection_statement", "iteration_statement",
  "jump_statement", "external_declaration", "function_definition", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,    60,    62,    61,   260,   261,
     262,   263,    43,    45,    42,    47,    37,   124,    38,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,    40,    41,    91,    93,    46,    44,
     126,    33,    94,    63,    58,    59,   123,   125
};
# endif

#define YYPACT_NINF -152

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-152)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     773,    58,  -152,  -152,  -152,  -152,  -152,  -152,  -152,  -152,
    -152,  -152,  -152,  -152,  -152,  -152,  -152,  -152,  -152,  -152,
     853,    -1,   451,   773,  -152,    25,   910,   910,  -152,     4,
     892,     7,     1,  -152,  -152,  -152,    -1,  -152,    16,  -152,
    -152,   813,  -152,   -32,  -152,   181,  -152,  -152,    10,   750,
     228,  -152,    25,  -152,   892,   872,   569,     7,   892,  -152,
      -1,  -152,   499,  -152,   892,    12,  -152,   750,   750,   750,
      -1,   549,  -152,  -152,  -152,  -152,  -152,  -152,  -152,  -152,
     684,   703,   703,   -53,    46,   464,    50,    28,    65,   534,
     620,  -152,  -152,  -152,  -152,  -152,    45,   297,   731,  -152,
      -5,    33,    31,   148,   151,    64,    90,   157,   150,    11,
    -152,  -152,   -31,  -152,  -152,   298,   368,  -152,  -152,  -152,
    -152,   185,  -152,  -152,  -152,  -152,    -1,   -20,  -152,    32,
    -152,  -152,  -152,   107,  -152,   499,  -152,  -152,  -152,  -152,
     722,  -152,  -152,   -29,  -152,   120,  -152,   620,  -152,   731,
    -152,  -152,   731,   731,   142,   550,  -152,  -152,  -152,    -8,
      37,    -1,   133,   191,  -152,  -152,   639,   731,   192,  -152,
    -152,  -152,  -152,  -152,  -152,  -152,  -152,  -152,  -152,  -152,
    -152,  -152,   731,  -152,   731,   731,   731,   731,   731,   731,
     731,   731,   731,   731,   731,   731,   731,   731,   731,   731,
     731,   731,   731,   731,  -152,  -152,   394,  -152,  -152,  -152,
    -152,   910,  -152,   193,  -152,  -152,   -46,   128,    -1,  -152,
    -152,   140,    39,    47,   146,   550,  -152,  -152,  -152,   731,
    -152,  -152,    80,  -152,    23,  -152,  -152,  -152,  -152,  -152,
      -5,    -5,    33,    33,    31,    31,    31,    31,   148,   148,
     151,    64,    90,   157,   150,    22,  -152,  -152,  -152,  -152,
     177,  -152,  -152,  -152,  -152,   464,   464,   731,   667,  -152,
    -152,   731,  -152,   731,  -152,  -152,   212,  -152,    85,   464,
      88,  -152,  -152,   464,   136,  -152,   464,  -152,  -152,  -152
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,   131,   124,     9,    92,    93,    94,    95,    96,    98,
      99,   100,   101,   104,   105,   102,   103,    97,   115,   116,
       0,     0,     0,     0,   173,     0,    84,    86,   106,     0,
       0,   123,     0,     2,   172,   132,     0,   171,     0,     1,
       3,     4,    82,     0,    88,    90,    85,    87,     0,     0,
       0,   155,     0,   177,     0,     0,     0,   122,     0,   125,
       0,    83,     0,   175,     0,     0,   114,     0,   110,   108,
       0,     0,   117,    28,    29,    27,    26,     5,     6,     7,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    30,    31,   159,   151,    10,    20,    32,     0,    34,
      38,    41,    44,    49,    52,    54,    56,    58,    60,    62,
      64,    79,     0,   157,   146,     0,     0,   147,   148,   149,
     150,    90,   156,   176,   137,   130,   136,     0,   133,     0,
     127,    32,    81,     0,    89,     0,   141,    91,   174,   113,
       0,   109,   107,     0,   120,     0,   118,     0,    24,     0,
      21,    22,     0,     0,     0,     0,   167,   168,   169,     0,
       0,   139,     0,     0,    16,    17,     0,     0,     0,    66,
      67,    68,    69,    70,    71,    74,    75,    76,    77,    78,
      73,    72,     0,    23,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   160,   153,     0,   152,   158,   135,
     128,     0,   129,     0,   126,   144,     0,     0,     0,   119,
     112,     0,     0,     0,     0,     0,   170,     8,   140,     0,
      15,    12,     0,    18,     0,    14,    65,    35,    36,    37,
      39,    40,    42,    43,    45,    46,    48,    47,    50,    51,
      53,    55,    57,    59,    61,     0,    80,   154,   134,   138,
       0,   142,   111,   121,    25,     0,     0,     0,     0,    33,
      13,     0,    11,     0,   143,   145,   161,   163,     0,     0,
       0,    19,    63,     0,     0,   165,     0,   162,   164,   166
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -152,   213,  -152,  -152,  -152,  -152,   -56,  -152,   -81,   -11,
      -7,   -23,    -2,    38,    56,    44,    55,    43,  -152,   -55,
     -57,  -152,   -87,  -152,    34,     8,  -152,   196,  -152,    18,
     -54,  -152,  -152,   178,   -64,  -152,    -9,   227,   259,  -152,
      51,  -152,   114,  -113,  -152,   -79,   121,     2,   153,  -151,
    -152,  -152,  -152,    -3,   245
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    22,    95,    23,    96,   232,    97,    98,    99,   100,
     101,   102,   103,   104,   105,   106,   107,   108,   109,   110,
     111,   182,   112,   133,    24,    52,    43,    44,    26,    27,
      70,    28,    29,    71,    72,   143,    30,    31,    32,   127,
     128,   129,   162,   137,   216,   113,   114,    64,   116,   117,
     118,   119,   120,    33,    34
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint16 yytable[] =
{
     131,   132,   159,   160,   225,   136,   154,   146,    25,   184,
     185,   186,    38,     1,   141,   142,    45,   183,     2,    40,
       2,   152,   215,    48,   148,   150,   151,    58,    36,    65,
      25,    25,    54,   260,    46,    47,   161,   208,    40,     1,
     201,   261,   131,   121,     2,   187,   188,    60,   203,    25,
     218,   121,   115,    61,   204,   210,   219,   189,   190,   211,
     160,   144,   160,   126,    51,   222,   223,    69,   163,   164,
     165,   203,     1,    21,   268,    21,   146,   226,   136,    51,
     234,    55,   197,    56,    51,    69,    69,    69,   122,    69,
      49,    59,    51,   161,   202,    66,    67,   139,   122,    21,
     272,   203,   203,   237,   238,   239,   273,   212,    69,   233,
      42,   213,   227,   156,   265,   255,   203,   209,   203,   166,
     153,   167,   266,   168,   155,   236,   203,   208,   131,   131,
     131,   131,   131,   131,   131,   131,   131,   131,   131,   131,
     131,   131,   131,   131,   131,   131,   256,   275,   269,   122,
     157,    53,   228,   191,   192,   270,   193,   194,    69,   271,
     284,   195,   196,   286,   203,    69,    63,   203,   244,   245,
     246,   247,   198,   131,   199,   123,   240,   241,   200,    63,
     278,   280,   242,   243,   214,   138,   276,   277,    62,    73,
      74,    75,    62,   248,   249,    76,    77,    78,    79,    80,
     285,    81,    82,   136,   287,   220,   224,   289,   229,   263,
     230,   235,   259,   262,   281,   264,   283,   131,   282,   126,
     267,   288,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,   250,    41,    17,    18,    19,
      73,    74,    75,   252,   254,   140,    76,    77,    78,    79,
      80,    90,    81,    82,   251,   253,   134,    91,    92,    57,
      35,   221,   258,   135,   274,    37,     0,    50,   206,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,     0,     0,    17,    18,    19,     0,     0,     0,
      83,     0,    84,    85,    86,     0,    87,    88,    89,     0,
       0,     0,    90,     0,   169,     0,     0,     0,    91,    92,
      73,    74,    75,    93,    50,    94,    76,    77,    78,    79,
      80,     0,    81,    82,     0,     0,     0,   170,   171,   172,
     173,   174,   175,   176,   177,   178,   179,     0,     0,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,     0,     0,    17,    18,    19,     0,     0,     0,
      83,     0,    84,    85,    86,     0,    87,    88,    89,   180,
     181,     0,    90,     0,     0,     0,     0,     0,    91,    92,
      73,    74,    75,    93,    50,   205,    76,    77,    78,    79,
      80,     0,    81,    82,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    73,    74,    75,     0,
       0,     0,    76,    77,    78,    79,    80,     0,    81,    82,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      83,     0,    84,    85,    86,     0,    87,    88,    89,     0,
       0,     0,    90,     0,     0,     0,     0,     0,    91,    92,
       0,    39,     0,    93,    50,   207,    83,     0,    84,    85,
      86,     0,    87,    88,    89,     1,     0,     0,    90,     0,
       2,     0,     0,     0,    91,    92,    73,    74,    75,    93,
      50,   257,    76,    77,    78,    79,    80,     0,    81,    82,
       0,     0,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,     0,     0,    17,    18,    19,
       0,    73,    74,    75,     0,     0,     0,    76,    77,    78,
      79,    80,    20,    81,    82,    21,    83,     0,    84,    85,
      86,     0,    87,    88,    89,     0,     0,     0,    90,     0,
       0,     0,     0,     0,    91,    92,    73,    74,    75,    93,
      50,     0,    76,    77,    78,    79,    80,     0,    81,    82,
       0,     0,    73,    74,    75,     0,     0,     0,    76,    77,
      78,    79,    80,    90,    81,    82,     0,     0,     0,    91,
      92,    73,    74,    75,     0,   135,     0,    76,    77,    78,
      79,    80,     0,    81,    82,     9,    10,    11,    12,    13,
      14,    15,    16,    68,     0,    17,    18,    19,    90,     0,
       0,     0,     0,     0,    91,    92,     0,     0,     0,   158,
       0,     0,     0,     0,    90,     0,     0,     0,     0,     0,
      91,    92,    73,    74,    75,    93,   145,     0,    76,    77,
      78,    79,    80,    90,    81,    82,   130,     0,     0,    91,
      92,    73,    74,    75,     0,     0,     0,    76,    77,    78,
      79,    80,     0,    81,    82,     0,     9,    10,    11,    12,
      13,    14,    15,    16,    68,     0,    17,    18,    19,    73,
      74,    75,     0,     0,     0,    76,    77,    78,    79,    80,
       0,    81,    82,     0,    90,     0,    73,    74,    75,     0,
      91,    92,    76,    77,    78,    79,    80,     0,    81,    82,
       0,     0,     0,    90,   231,    73,    74,    75,     0,    91,
      92,    76,    77,    78,    79,    80,     0,    81,    82,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    90,   279,    73,    74,    75,     0,    91,    92,    76,
      77,    78,    79,    80,     0,    81,    82,     0,   147,     0,
       0,     0,     0,     0,    91,    92,     0,     0,     9,    10,
      11,    12,    13,    14,    15,    16,    68,   149,    17,    18,
      19,     0,     0,    91,    92,     0,     0,     1,     0,     0,
       0,     0,     2,     0,     0,     0,     9,    10,    11,    12,
      13,    14,    15,    16,    68,    90,    17,    18,    19,   217,
       0,    91,    92,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,     1,     0,    17,
      18,    19,     2,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    20,     0,     0,    21,     0,     0,
       0,     0,     0,     0,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,     1,     0,    17,
      18,    19,     2,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    20,     0,     0,    21,     0,     0,
       0,   124,     0,     0,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,     0,     0,    17,
      18,    19,     0,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,     0,    21,    17,    18,
      19,     0,     0,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,     0,   125,    17,    18,
      19,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,     0,     0,    17,    18,    19,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    50
};

static const yytype_int16 yycheck[] =
{
      56,    56,    89,    90,   155,    62,    85,    71,     0,    14,
      15,    16,    21,    14,    68,    69,    25,    98,    19,    22,
      19,    74,   135,    19,    80,    81,    82,    36,    20,    19,
      22,    23,    30,    79,    26,    27,    90,   116,    41,    14,
      29,    87,    98,    52,    19,    12,    13,    79,    79,    41,
      79,    60,    50,    85,    85,    75,    85,    26,    27,    79,
     147,    70,   149,    55,    30,   152,   153,    49,    23,    24,
      25,    79,    14,    74,   225,    74,   140,    85,   135,    45,
     167,    74,    18,    76,    50,    67,    68,    69,    54,    71,
      86,    75,    58,   147,    83,    85,    86,    85,    64,    74,
      77,    79,    79,   184,   185,   186,    84,    75,    90,   166,
      85,    79,    75,    85,    75,   202,    79,   126,    79,    74,
      74,    76,    75,    78,    74,   182,    79,   206,   184,   185,
     186,   187,   188,   189,   190,   191,   192,   193,   194,   195,
     196,   197,   198,   199,   200,   201,   203,   260,   229,   115,
      85,    30,   161,     5,     6,    75,     8,     9,   140,    79,
      75,    10,    11,    75,    79,   147,    45,    79,   191,   192,
     193,   194,    82,   229,    17,    54,   187,   188,    28,    58,
     267,   268,   189,   190,    77,    64,   265,   266,     7,    12,
      13,    14,     7,   195,   196,    18,    19,    20,    21,    22,
     279,    24,    25,   260,   283,    85,    64,   286,    75,   218,
      19,    19,    19,    85,   271,    75,     4,   273,   273,   211,
      74,    85,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,   197,    23,    56,    57,    58,
      12,    13,    14,   199,   201,    67,    18,    19,    20,    21,
      22,    74,    24,    25,   198,   200,    60,    80,    81,    32,
       1,   147,   211,    86,    87,    20,    -1,    86,   115,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    -1,    -1,    56,    57,    58,    -1,    -1,    -1,
      62,    -1,    64,    65,    66,    -1,    68,    69,    70,    -1,
      -1,    -1,    74,    -1,     7,    -1,    -1,    -1,    80,    81,
      12,    13,    14,    85,    86,    87,    18,    19,    20,    21,
      22,    -1,    24,    25,    -1,    -1,    -1,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    -1,    -1,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    -1,    -1,    56,    57,    58,    -1,    -1,    -1,
      62,    -1,    64,    65,    66,    -1,    68,    69,    70,    72,
      73,    -1,    74,    -1,    -1,    -1,    -1,    -1,    80,    81,
      12,    13,    14,    85,    86,    87,    18,    19,    20,    21,
      22,    -1,    24,    25,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    12,    13,    14,    -1,
      -1,    -1,    18,    19,    20,    21,    22,    -1,    24,    25,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      62,    -1,    64,    65,    66,    -1,    68,    69,    70,    -1,
      -1,    -1,    74,    -1,    -1,    -1,    -1,    -1,    80,    81,
      -1,     0,    -1,    85,    86,    87,    62,    -1,    64,    65,
      66,    -1,    68,    69,    70,    14,    -1,    -1,    74,    -1,
      19,    -1,    -1,    -1,    80,    81,    12,    13,    14,    85,
      86,    87,    18,    19,    20,    21,    22,    -1,    24,    25,
      -1,    -1,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    -1,    -1,    56,    57,    58,
      -1,    12,    13,    14,    -1,    -1,    -1,    18,    19,    20,
      21,    22,    71,    24,    25,    74,    62,    -1,    64,    65,
      66,    -1,    68,    69,    70,    -1,    -1,    -1,    74,    -1,
      -1,    -1,    -1,    -1,    80,    81,    12,    13,    14,    85,
      86,    -1,    18,    19,    20,    21,    22,    -1,    24,    25,
      -1,    -1,    12,    13,    14,    -1,    -1,    -1,    18,    19,
      20,    21,    22,    74,    24,    25,    -1,    -1,    -1,    80,
      81,    12,    13,    14,    -1,    86,    -1,    18,    19,    20,
      21,    22,    -1,    24,    25,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    -1,    56,    57,    58,    74,    -1,
      -1,    -1,    -1,    -1,    80,    81,    -1,    -1,    -1,    85,
      -1,    -1,    -1,    -1,    74,    -1,    -1,    -1,    -1,    -1,
      80,    81,    12,    13,    14,    85,    87,    -1,    18,    19,
      20,    21,    22,    74,    24,    25,    77,    -1,    -1,    80,
      81,    12,    13,    14,    -1,    -1,    -1,    18,    19,    20,
      21,    22,    -1,    24,    25,    -1,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    -1,    56,    57,    58,    12,
      13,    14,    -1,    -1,    -1,    18,    19,    20,    21,    22,
      -1,    24,    25,    -1,    74,    -1,    12,    13,    14,    -1,
      80,    81,    18,    19,    20,    21,    22,    -1,    24,    25,
      -1,    -1,    -1,    74,    75,    12,    13,    14,    -1,    80,
      81,    18,    19,    20,    21,    22,    -1,    24,    25,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    74,    75,    12,    13,    14,    -1,    80,    81,    18,
      19,    20,    21,    22,    -1,    24,    25,    -1,    74,    -1,
      -1,    -1,    -1,    -1,    80,    81,    -1,    -1,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    74,    56,    57,
      58,    -1,    -1,    80,    81,    -1,    -1,    14,    -1,    -1,
      -1,    -1,    19,    -1,    -1,    -1,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    74,    56,    57,    58,    87,
      -1,    80,    81,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    14,    -1,    56,
      57,    58,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    71,    -1,    -1,    74,    -1,    -1,
      -1,    -1,    -1,    -1,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    14,    -1,    56,
      57,    58,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    71,    -1,    -1,    74,    -1,    -1,
      -1,    19,    -1,    -1,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    -1,    -1,    56,
      57,    58,    -1,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    -1,    74,    56,    57,
      58,    -1,    -1,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    -1,    75,    56,    57,
      58,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    -1,    -1,    56,    57,    58,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    86
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    14,    19,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    56,    57,    58,
      71,    74,    89,    91,   112,   113,   116,   117,   119,   120,
     124,   125,   126,   141,   142,   126,   113,   142,   124,     0,
     141,    89,    85,   114,   115,   124,   113,   113,    19,    86,
      86,   112,   113,   134,   135,    74,    76,   125,   124,    75,
      79,    85,     7,   134,   135,    19,    85,    86,    54,   117,
     118,   121,   122,    12,    13,    14,    18,    19,    20,    21,
      22,    24,    25,    62,    64,    65,    66,    68,    69,    70,
      74,    80,    81,    85,    87,    90,    92,    94,    95,    96,
      97,    98,    99,   100,   101,   102,   103,   104,   105,   106,
     107,   108,   110,   133,   134,   135,   136,   137,   138,   139,
     140,   124,   112,   134,    19,    75,   113,   127,   128,   129,
      77,    94,   107,   111,   115,    86,   108,   131,   134,    85,
     121,   118,   118,   123,   124,    87,   122,    74,    94,    74,
      94,    94,    74,    74,   133,    74,    85,    85,    85,   110,
     110,   118,   130,    23,    24,    25,    74,    76,    78,     7,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      72,    73,   109,    96,    14,    15,    16,    12,    13,    26,
      27,     5,     6,     8,     9,    10,    11,    18,    82,    17,
      28,    29,    83,    79,    85,    87,   136,    87,   133,   124,
      75,    79,    75,    79,    77,   131,   132,    87,    79,    85,
      85,   130,   110,   110,    64,   137,    85,    75,   124,    75,
      19,    75,    93,   108,   110,    19,   108,    96,    96,    96,
      97,    97,    98,    98,    99,    99,    99,    99,   100,   100,
     101,   102,   103,   104,   105,   110,   108,    87,   128,    19,
      79,    87,    85,   124,    75,    75,    75,    74,   137,    96,
      75,    79,    77,    84,    87,   131,   133,   133,   110,    75,
     110,   108,   107,     4,    75,   133,    75,   133,    85,   133
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    88,    89,    89,    89,    90,    90,    90,    90,    91,
      92,    92,    92,    92,    92,    92,    92,    92,    93,    93,
      94,    94,    94,    94,    94,    94,    95,    95,    95,    95,
      95,    95,    96,    96,    97,    97,    97,    97,    98,    98,
      98,    99,    99,    99,   100,   100,   100,   100,   100,   101,
     101,   101,   102,   102,   103,   103,   104,   104,   105,   105,
     106,   106,   107,   107,   108,   108,   109,   109,   109,   109,
     109,   109,   109,   109,   109,   109,   109,   109,   109,   110,
     110,   111,   112,   112,   113,   113,   113,   113,   114,   114,
     115,   115,   116,   116,   116,   116,   116,   117,   117,   117,
     117,   117,   117,   117,   117,   117,   117,   118,   118,   118,
     118,   119,   119,   119,   119,   120,   120,   121,   121,   122,
     123,   123,   124,   124,   125,   125,   125,   125,   125,   125,
     125,   126,   126,   127,   127,   128,   128,   129,   129,   130,
     130,   131,   131,   131,   132,   132,   133,   133,   133,   133,
     133,   134,   134,   134,   134,   135,   135,   136,   136,   137,
     137,   138,   138,   139,   139,   139,   139,   140,   140,   140,
     140,   141,   141,   141,   142,   142,   142,   142
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     2,     1,     1,     1,     3,     1,
       1,     4,     3,     4,     3,     3,     2,     2,     1,     3,
       1,     2,     2,     2,     2,     4,     1,     1,     1,     1,
       1,     1,     1,     4,     1,     3,     3,     3,     1,     3,
       3,     1,     3,     3,     1,     3,     3,     3,     3,     1,
       3,     3,     1,     3,     1,     3,     1,     3,     1,     3,
       1,     3,     1,     5,     1,     3,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       3,     1,     2,     3,     1,     2,     1,     2,     1,     3,
       1,     3,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     2,     1,     2,
       1,     6,     5,     4,     3,     1,     1,     1,     2,     3,
       1,     3,     2,     1,     1,     3,     4,     3,     4,     4,
       3,     1,     2,     1,     3,     2,     1,     1,     3,     1,
       2,     1,     3,     4,     1,     3,     1,     1,     1,     1,
       1,     2,     3,     3,     4,     1,     2,     1,     2,     1,
       2,     5,     7,     5,     7,     6,     7,     2,     2,     2,
       3,     2,     1,     1,     4,     3,     3,     2
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
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


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
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
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
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
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
{
  YYSIZE_T yylen;
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
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
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
            /* Fall through.  */
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

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
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
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

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
      int yyn = yypact[*yyssp];
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
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
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
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
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
          yyp++;
          yyformat++;
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
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

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
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
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
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        YYSTYPE *yyvs1 = yyvs;
        yytype_int16 *yyss1 = yyss;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yystacksize);

        yyss = yyss1;
        yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yytype_int16 *yyss1 = yyss;
        union yyalloc *yyptr =
          (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

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

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

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
| yyreduce -- Do a reduction.  |
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
      
#line 1697 "y.tab.c" /* yacc.c:1646  */
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

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

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
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
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

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

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
                  yystos[*yyssp], yyvsp);
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
#line 374 "file.y" /* yacc.c:1906  */
   

#include "lex.yy.c"
#include <stdio.h>
#include <string.h>
int main(int argc, char *argv[])
{
	yyin = fopen(argv[1], "r");
	if(!yyparse())
		printf("\nGiven program is VALID.\nSUCCESSFUL: 	Parsing complete\n");
	else
		printf("\nGiven program is INVALID.\nFAILED:		Parsing failed\n");
	
	fclose(yyin);
	return 0;
}
//extern int lineno;
extern char *yytext;
yyerror(char *s) {
	printf("\nError: Line %d : %s\n", (yylineno), s);
}         
