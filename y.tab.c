/* A Bison parser, made by GNU Bison 2.7.12-4996.  */

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
#define YYBISON_VERSION "2.7.12-4996"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
/* Line 371 of yacc.c  */
#line 1 "12CS30001_ass3.y"

	#include <bits/stdc++.h>
	#include "stdio.h"
	#include "symbolTable.h"
	#include "quad.h"
	#include <string.h>
	#include <iostream>
	extern int yylex();
	extern char* yytext;
	extern void yyerror(char *s);
	type typeSpecifier;
	int offset = 0;
	symbolTable* global = new symbolTable();
	symbolTable* symtab = global;
	std::vector<quad> quadArray;

/* Line 371 of yacc.c  */
#line 85 "y.tab.c"

# ifndef YY_NULL
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULL nullptr
#  else
#   define YY_NULL 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "y.tab.h".  */
#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     AUTO = 258,
     BREAK = 259,
     CASE = 260,
     CHAR = 261,
     CONTINUE = 262,
     DEFAULT = 263,
     DO = 264,
     DOUBLE = 265,
     ELSE = 266,
     ENUM = 267,
     EXTERN = 268,
     FLOAT = 269,
     FOR = 270,
     GOTO = 271,
     IF = 272,
     INLINE = 273,
     INT = 274,
     LONG = 275,
     REGISTER = 276,
     RESTRICT = 277,
     RETURN = 278,
     SHORT = 279,
     SIGNED = 280,
     SIZEOF = 281,
     STATIC = 282,
     STRUCT = 283,
     SWITCH = 284,
     TYPEDEF = 285,
     UNION = 286,
     UNSIGNED = 287,
     VOID = 288,
     VOLATILE = 289,
     WHILE = 290,
     BOOL = 291,
     COMPLEX = 292,
     IMAGINARY = 293,
     IDENTIFIER = 294,
     INTEGER_CONSTANT = 295,
     FLOATING_CONSTANT = 296,
     CHARACTER_CONSTANT = 297,
     STRING_LITERAL = 298,
     INC_OP = 299,
     PTR_OP = 300,
     LEFT_OP = 301,
     RIGHT_OP = 302,
     LE_OP = 303,
     GE_OP = 304,
     MUL_ASSIGN = 305,
     DIV_ASSIGN = 306,
     MOD_ASSIGN = 307,
     ADD_ASSIGN = 308,
     SUB_ASSIGN = 309,
     LEFT_ASSIGN = 310,
     DEC_OP = 311,
     EQ_OP = 312,
     RIGHT_ASSIGN = 313,
     NE_OP = 314,
     AND_ASSIGN = 315,
     XOR_ASSIGN = 316,
     AND_OP = 317,
     OR_OP = 318,
     OR_ASSIGN = 319,
     ENUMERATION_CONSTANT = 320
   };
#endif
/* Tokens.  */
#define AUTO 258
#define BREAK 259
#define CASE 260
#define CHAR 261
#define CONTINUE 262
#define DEFAULT 263
#define DO 264
#define DOUBLE 265
#define ELSE 266
#define ENUM 267
#define EXTERN 268
#define FLOAT 269
#define FOR 270
#define GOTO 271
#define IF 272
#define INLINE 273
#define INT 274
#define LONG 275
#define REGISTER 276
#define RESTRICT 277
#define RETURN 278
#define SHORT 279
#define SIGNED 280
#define SIZEOF 281
#define STATIC 282
#define STRUCT 283
#define SWITCH 284
#define TYPEDEF 285
#define UNION 286
#define UNSIGNED 287
#define VOID 288
#define VOLATILE 289
#define WHILE 290
#define BOOL 291
#define COMPLEX 292
#define IMAGINARY 293
#define IDENTIFIER 294
#define INTEGER_CONSTANT 295
#define FLOATING_CONSTANT 296
#define CHARACTER_CONSTANT 297
#define STRING_LITERAL 298
#define INC_OP 299
#define PTR_OP 300
#define LEFT_OP 301
#define RIGHT_OP 302
#define LE_OP 303
#define GE_OP 304
#define MUL_ASSIGN 305
#define DIV_ASSIGN 306
#define MOD_ASSIGN 307
#define ADD_ASSIGN 308
#define SUB_ASSIGN 309
#define LEFT_ASSIGN 310
#define DEC_OP 311
#define EQ_OP 312
#define RIGHT_ASSIGN 313
#define NE_OP 314
#define AND_ASSIGN 315
#define XOR_ASSIGN 316
#define AND_OP 317
#define OR_OP 318
#define OR_ASSIGN 319
#define ENUMERATION_CONSTANT 320



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{
/* Line 387 of yacc.c  */
#line 18 "12CS30001_ass3.y"

	int intVal;
	row* rowST;
	vector<row*> *rowVector;
	typeT typ;
	vector<int>* nextList;
	symbolTable* tableType;


/* Line 387 of yacc.c  */
#line 268 "y.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;

#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

/* Line 390 of yacc.c  */
#line 296 "y.tab.c"

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
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
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
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
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

#ifndef __attribute__
/* This feature is available in gcc versions 2.5 and later.  */
# if (! defined __GNUC__ || __GNUC__ < 2 \
      || (__GNUC__ == 2 && __GNUC_MINOR__ < 5))
#  define __attribute__(Spec) /* empty */
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif


/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(N) (N)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
}
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
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
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
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
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
#   if ! defined malloc && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
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
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

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
      while (YYID (0))
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  33
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   735

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  90
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  52
/* YYNRULES -- Number of rules.  */
#define YYNRULES  145
/* YYNRULES -- Number of states.  */
#define YYNSTATES  242

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   320

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    77,     2,     2,     2,    79,    72,     2,
      66,    67,    73,    74,    71,    75,    70,    78,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    85,    87,
      80,    86,    81,    84,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    68,     2,    69,    82,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    88,    83,    89,    76,     2,     2,     2,
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
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,     7,     9,    13,    15,    17,    19,
      21,    26,    30,    35,    39,    43,    46,    49,    51,    55,
      57,    60,    63,    66,    68,    70,    72,    74,    76,    78,
      80,    85,    87,    91,    95,    99,   101,   105,   109,   111,
     115,   119,   121,   125,   129,   133,   137,   139,   143,   147,
     149,   154,   156,   160,   162,   166,   168,   172,   174,   178,
     180,   186,   188,   192,   194,   196,   198,   200,   202,   204,
     206,   208,   210,   212,   214,   216,   220,   223,   227,   229,
     232,   234,   238,   240,   244,   246,   248,   250,   252,   255,
     257,   260,   262,   264,   268,   273,   277,   282,   287,   291,
     293,   296,   297,   299,   302,   307,   309,   313,   315,   317,
     319,   321,   323,   325,   327,   329,   332,   336,   338,   341,
     343,   345,   347,   350,   352,   353,   360,   371,   377,   385,
     395,   402,   410,   413,   417,   419,   422,   424,   426,   431,
     435,   439,   442,   444,   447,   448
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     136,     0,    -1,   125,    -1,    92,    -1,    43,    -1,    66,
     111,    67,    -1,    40,    -1,    42,    -1,    41,    -1,    91,
      -1,    93,    68,   111,    69,    -1,    93,    66,    67,    -1,
      93,    66,    94,    67,    -1,    93,    70,   125,    -1,    93,
      45,   125,    -1,    93,    44,    -1,    93,    56,    -1,   109,
      -1,    94,    71,   109,    -1,    93,    -1,    44,    95,    -1,
      56,    95,    -1,    96,    97,    -1,    72,    -1,    73,    -1,
      74,    -1,    75,    -1,    76,    -1,    77,    -1,    95,    -1,
      66,   124,    67,    97,    -1,    97,    -1,    98,    73,    97,
      -1,    98,    78,    97,    -1,    98,    79,    97,    -1,    98,
      -1,    99,    74,    98,    -1,    99,    75,    98,    -1,    99,
      -1,   100,    46,    99,    -1,   100,    47,    99,    -1,   100,
      -1,   101,    80,   100,    -1,   101,    81,   100,    -1,   101,
      48,   100,    -1,   101,    49,   100,    -1,   101,    -1,   102,
      57,   101,    -1,   102,    59,   101,    -1,   102,    -1,   103,
      72,   140,   102,    -1,   103,    -1,   104,    82,   103,    -1,
     104,    -1,   105,    83,   104,    -1,   105,    -1,   106,    62,
     105,    -1,   106,    -1,   107,    63,   106,    -1,   107,    -1,
     107,    84,   111,    85,   108,    -1,   108,    -1,    95,   110,
     109,    -1,    86,    -1,    50,    -1,    51,    -1,    52,    -1,
      53,    -1,    54,    -1,    55,    -1,    58,    -1,    60,    -1,
      61,    -1,    64,    -1,   109,    -1,   111,    71,   109,    -1,
     113,    87,    -1,   113,   114,    87,    -1,   116,    -1,   116,
     113,    -1,   115,    -1,   114,    71,   115,    -1,   118,    -1,
     118,    86,   126,    -1,    33,    -1,     6,    -1,    19,    -1,
      10,    -1,   116,   117,    -1,   116,    -1,   120,   119,    -1,
     119,    -1,   125,    -1,    66,   118,    67,    -1,   119,    68,
     109,    69,    -1,   119,    68,    69,    -1,   119,    66,   121,
      67,    -1,   119,    66,   123,    67,    -1,   119,    66,    67,
      -1,    73,    -1,    73,   120,    -1,    -1,   122,    -1,   113,
     118,    -1,   122,    71,   113,   118,    -1,   125,    -1,   123,
      71,   125,    -1,   117,    -1,    39,    -1,   109,    -1,   128,
      -1,   131,    -1,   133,    -1,   134,    -1,   135,    -1,    88,
      89,    -1,    88,   129,    89,    -1,   130,    -1,   129,   130,
      -1,   112,    -1,   127,    -1,    87,    -1,   132,    87,    -1,
     111,    -1,    -1,    17,    66,   111,    67,   140,   127,    -1,
      17,    66,   111,    67,   140,   127,   141,    11,   140,   127,
      -1,    29,    66,   111,    67,   127,    -1,    35,   140,    66,
     111,    67,   140,   127,    -1,     9,   140,   127,   140,    35,
      66,   111,    67,    87,    -1,    15,    66,   131,   131,    67,
     127,    -1,    15,    66,   131,   131,   111,    67,   127,    -1,
      23,    87,    -1,    23,   111,    87,    -1,   137,    -1,   136,
     137,    -1,   138,    -1,   112,    -1,   113,   118,   139,   128,
      -1,   113,   118,   128,    -1,   118,   139,   128,    -1,   118,
     128,    -1,   112,    -1,   139,   112,    -1,    -1,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   126,   126,   135,   139,   143,   151,   161,   173,   186,
     190,   191,   196,   200,   201,   202,   210,   221,   222,   226,
     230,   235,   240,   249,   250,   251,   252,   253,   254,   258,
     262,   268,   272,   278,   284,   293,   296,   302,   311,   315,
     321,   330,   334,   342,   350,   358,   370,   374,   375,   379,
     380,   384,   385,   389,   390,   394,   395,   399,   400,   404,
     405,   409,   410,   421,   422,   423,   424,   425,   426,   427,
     428,   429,   430,   431,   435,   439,   447,   448,   456,   459,
     463,   464,   468,   475,   486,   487,   488,   489,   493,   494,
     502,   507,   514,   518,   523,   529,   534,   543,   544,   548,
     552,   563,   566,   573,   579,   590,   595,   603,   619,   628,
     636,   637,   638,   639,   640,   645,   646,   650,   651,   655,
     656,   660,   661,   670,   671,   675,   681,   688,   692,   702,
     708,   709,   716,   717,   721,   722,   726,   727,   731,   732,
     733,   734,   738,   739,   744,   756
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "AUTO", "BREAK", "CASE", "CHAR",
  "CONTINUE", "DEFAULT", "DO", "DOUBLE", "ELSE", "ENUM", "EXTERN", "FLOAT",
  "FOR", "GOTO", "IF", "INLINE", "INT", "LONG", "REGISTER", "RESTRICT",
  "RETURN", "SHORT", "SIGNED", "SIZEOF", "STATIC", "STRUCT", "SWITCH",
  "TYPEDEF", "UNION", "UNSIGNED", "VOID", "VOLATILE", "WHILE", "BOOL",
  "COMPLEX", "IMAGINARY", "IDENTIFIER", "INTEGER_CONSTANT",
  "FLOATING_CONSTANT", "CHARACTER_CONSTANT", "STRING_LITERAL", "INC_OP",
  "PTR_OP", "LEFT_OP", "RIGHT_OP", "LE_OP", "GE_OP", "MUL_ASSIGN",
  "DIV_ASSIGN", "MOD_ASSIGN", "ADD_ASSIGN", "SUB_ASSIGN", "LEFT_ASSIGN",
  "DEC_OP", "EQ_OP", "RIGHT_ASSIGN", "NE_OP", "AND_ASSIGN", "XOR_ASSIGN",
  "AND_OP", "OR_OP", "OR_ASSIGN", "ENUMERATION_CONSTANT", "'('", "')'",
  "'['", "']'", "'.'", "','", "'&'", "'*'", "'+'", "'-'", "'~'", "'!'",
  "'/'", "'%'", "'<'", "'>'", "'^'", "'|'", "'?'", "':'", "'='", "';'",
  "'{'", "'}'", "$accept", "primary_expression", "CONSTANT",
  "postfix_expression", "argument_expression_list", "unary_expression",
  "unary_operator", "cast_expression", "multiplicative_expression",
  "additive_expression", "shift_expression", "relational_expression",
  "equality_expression", "and_expression", "exclusive_or_expression",
  "inclusive_or_expression", "logical_and_expression",
  "logical_or_expression", "conditional_expression",
  "assignment_expression", "assignment_operator", "expression",
  "declaration", "declaration_specifiers", "init_declarator_list",
  "init_declarator", "type_specifier", "specifier_qualifier_list",
  "declarator", "direct_declarator", "pointer", "parameter_type_list",
  "parameter_list", "identifier_list", "type_name", "id_var",
  "initializer", "statement", "compound_statement", "block_item_list",
  "block_item", "expression_statement", "expression_opt",
  "selection_statement", "iteration_statement", "jump_statement",
  "translation_unit", "external_declaration", "function_definition",
  "declaration_list", "M1", "N1", YY_NULL
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,    40,    41,    91,    93,
      46,    44,    38,    42,    43,    45,   126,    33,    47,    37,
      60,    62,    94,   124,    63,    58,    61,    59,   123,   125
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    90,    91,    91,    91,    91,    92,    92,    92,    93,
      93,    93,    93,    93,    93,    93,    93,    94,    94,    95,
      95,    95,    95,    96,    96,    96,    96,    96,    96,    97,
      97,    98,    98,    98,    98,    99,    99,    99,   100,   100,
     100,   101,   101,   101,   101,   101,   102,   102,   102,   103,
     103,   104,   104,   105,   105,   106,   106,   107,   107,   108,
     108,   109,   109,   110,   110,   110,   110,   110,   110,   110,
     110,   110,   110,   110,   111,   111,   112,   112,   113,   113,
     114,   114,   115,   115,   116,   116,   116,   116,   117,   117,
     118,   118,   119,   119,   119,   119,   119,   119,   119,   120,
     120,   121,   121,   122,   122,   123,   123,   124,   125,   126,
     127,   127,   127,   127,   127,   128,   128,   129,   129,   130,
     130,   131,   131,   132,   132,   133,   133,   133,   134,   134,
     134,   134,   135,   135,   136,   136,   137,   137,   138,   138,
     138,   138,   139,   139,   140,   141
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     1,     3,     1,     1,     1,     1,
       4,     3,     4,     3,     3,     2,     2,     1,     3,     1,
       2,     2,     2,     1,     1,     1,     1,     1,     1,     1,
       4,     1,     3,     3,     3,     1,     3,     3,     1,     3,
       3,     1,     3,     3,     3,     3,     1,     3,     3,     1,
       4,     1,     3,     1,     3,     1,     3,     1,     3,     1,
       5,     1,     3,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     3,     2,     3,     1,     2,
       1,     3,     1,     3,     1,     1,     1,     1,     2,     1,
       2,     1,     1,     3,     4,     3,     4,     4,     3,     1,
       2,     0,     1,     2,     4,     1,     3,     1,     1,     1,
       1,     1,     1,     1,     1,     2,     3,     1,     2,     1,
       1,     1,     2,     1,     0,     6,    10,     5,     7,     9,
       6,     7,     2,     3,     1,     2,     1,     1,     4,     3,
       3,     2,     1,     2,     0,     0
};

/* YYDEFACT[STATE-NAME] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    85,    87,    86,    84,   108,     0,    99,   137,     0,
      78,     0,    91,     0,    92,     0,   134,   136,     0,   100,
      76,     0,    80,    82,    79,     0,   142,     0,   141,     0,
       0,     0,    90,     1,   135,    93,     0,    77,     0,   139,
       0,   144,     0,     0,     0,     0,   144,     6,     8,     7,
       4,     0,     0,     0,    23,    24,    25,    26,    27,    28,
     121,   115,     9,     3,    19,    29,     0,    31,    35,    38,
      41,    46,    49,    51,    53,    55,    57,    59,    61,    74,
     123,   119,     2,   120,   110,     0,   117,   111,     0,   112,
     113,   114,    82,   143,   140,    98,     0,     0,   102,     0,
     105,    95,     0,    81,   109,    83,   138,     0,     0,     0,
     132,     0,     0,     0,     0,    20,    21,     0,    89,   107,
       0,    15,     0,    16,     0,     0,     0,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    63,     0,    29,
      22,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   144,     0,     0,     0,     0,     0,
       0,   116,   118,   122,   103,    96,     0,    97,     0,    94,
     144,     0,     0,   133,     0,     0,     5,    88,     0,    14,
      11,     0,    17,     0,    13,    62,    32,    33,    34,    36,
      37,    39,    40,    44,    45,    42,    43,    47,    48,     0,
      52,    54,    56,    58,     0,    75,     0,   106,     0,     0,
     144,     0,     0,    30,    12,     0,    10,    50,     0,   104,
       0,     0,     0,     0,   127,   144,    18,    60,     0,   130,
       0,   125,     0,     0,   131,     0,   128,     0,   144,   129,
       0,   126
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    62,    63,    64,   181,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
     138,    80,     8,    27,    21,    22,    10,   119,    11,    12,
      13,    97,    98,    99,   120,    82,   105,    83,    84,    85,
      86,    87,    88,    89,    90,    91,    15,    16,    17,    29,
     107,   235
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -80
static const yytype_int16 yypact[] =
{
      43,   -80,   -80,   -80,   -80,   -80,    -6,   -49,   -80,    -7,
     216,     6,    22,   -18,   -80,    35,   -80,   -80,   -30,   -80,
     -80,   -15,   -80,     1,   -80,   190,   -80,    -7,   -80,     6,
     154,   502,    22,   -80,   -80,   -80,    -6,   -80,   619,   -80,
       6,   -80,   -23,   -14,   424,     5,   -80,   -80,   -80,   -80,
     -80,   658,   658,   385,   -80,   -80,   -80,   -80,   -80,   -80,
     -80,   -80,   -80,   -80,   146,   187,   619,   -80,    27,    38,
     129,    49,     4,    -8,    13,    21,    45,   -37,   -80,   -80,
      12,   -80,   -80,   -80,   -80,   265,   -80,   -80,    31,   -80,
     -80,   -80,    37,   -80,   -80,   -80,    -6,    65,    82,    48,
     -80,   -80,    97,   -80,   -80,   -80,   -80,   334,   463,   619,
     -80,    -2,   619,   106,   619,   -80,   -80,    54,   216,   -80,
      96,   -80,   153,   -80,   541,   619,   153,   -80,   -80,   -80,
     -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,   619,   -80,
     -80,   619,   619,   619,   619,   619,   619,   619,   619,   619,
     619,   619,   619,   619,   -80,   619,   619,   619,   619,   619,
     619,   -80,   -80,   -80,   -80,   -80,   216,   -80,   153,   -80,
     -80,   463,    57,   -80,    64,   619,   -80,   -80,   619,   -80,
     -80,    66,   -80,   110,   -80,   -80,   -80,   -80,   -80,    27,
      27,    38,    38,   129,   129,   129,   129,    49,    49,   619,
      -8,    13,    21,    45,   -27,   -80,    -6,   -80,   162,   580,
     -80,   334,    67,   -80,   -80,   619,   -80,     4,   619,   -80,
     137,   334,    91,   334,   -80,   -80,   -80,   -80,   619,   -80,
     334,   -80,   334,    94,   -80,   193,   -80,   121,   -80,   -80,
     334,   -80
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -80,   -80,   -80,   -80,   -80,    -1,   -80,   -64,    39,    81,
     104,    33,    11,    56,    59,    61,    62,   -80,    18,   -21,
     -80,   -39,    17,     8,   -80,   188,   -34,   125,    -5,   231,
     243,   -80,   -80,   -80,   -80,     0,   -80,   -52,    70,   -80,
     172,   -79,   -80,   -80,   -80,   -80,   -80,   244,   -80,   235,
     -43,   -80
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint8 yytable[] =
{
      14,    18,   140,   113,    23,   111,    14,     1,     9,    14,
     102,     2,     1,    14,   117,    14,     2,   104,    24,   118,
       3,     5,    92,     9,     7,     3,   158,    14,    26,   171,
     100,    92,     5,     5,     4,    33,    14,    35,    96,     4,
      26,     1,    81,   108,   160,     2,    93,   159,     6,     1,
     115,   116,   109,     2,     3,   170,    36,    93,   218,     6,
       6,   152,     3,   153,   154,   139,     7,     7,     4,   160,
     172,   112,    37,   174,     5,   117,     4,   186,   187,   188,
      20,    28,     5,   160,   118,   173,   183,    38,    30,    25,
      31,   164,   209,    39,    25,   155,    14,   148,   149,    94,
     141,     6,    81,   182,   156,   142,   143,   157,     7,     6,
     106,   199,   144,   145,   213,   167,     7,   185,   163,   168,
     204,   176,   179,    38,   210,   160,   184,   208,   160,   150,
     151,   211,   165,   214,   225,   160,   212,   215,   160,   205,
     139,   139,   139,   139,   139,   139,   139,   139,   139,   139,
     139,   139,   139,   166,   139,   139,   139,   139,   230,   224,
       1,   237,   160,   178,     2,   160,   169,   223,   207,   229,
     222,   231,   175,     3,   206,   146,   147,   139,   234,   216,
     236,   160,   232,   189,   190,   197,   198,     4,   241,   233,
     121,   122,     5,     5,   226,   240,     1,   220,   139,    41,
       2,   219,   123,   228,   238,    42,    14,    43,   239,     3,
     217,   200,   124,    44,   125,   201,   126,   139,   202,    45,
     203,    95,     1,     4,   103,    46,     2,   191,   192,     5,
      47,    48,    49,    50,    51,     3,   227,   127,   128,   129,
     130,   131,   132,   177,    32,   133,    52,   134,   135,     4,
      19,   136,   193,   194,   195,   196,    53,   162,    40,    34,
       0,     0,    54,    55,    56,    57,    58,    59,     0,     0,
       0,     1,     0,   137,    41,     2,     0,    60,    25,    61,
      42,     0,    43,     0,     3,     0,     0,     0,    44,     0,
       0,     0,     0,     0,    45,     0,     0,     0,     4,     0,
      46,     0,     0,     0,     5,    47,    48,    49,    50,    51,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    52,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    53,     0,     0,     0,     0,     0,    54,    55,    56,
      57,    58,    59,    41,     0,     0,     0,     0,     0,    42,
       0,    43,    60,    25,   161,     0,     0,    44,     0,     0,
       0,     0,     0,    45,     0,     0,     0,     0,     0,    46,
       0,     0,     0,     5,    47,    48,    49,    50,    51,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      52,     1,     0,     0,     0,     2,     0,     0,     0,     0,
      53,     0,     0,     0,     3,     0,    54,    55,    56,    57,
      58,    59,     0,     0,     0,     0,     0,     0,     4,     0,
       0,    60,    25,     0,     5,    47,    48,    49,    50,    51,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    52,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    53,     0,     0,     0,     0,     0,    54,    55,    56,
      57,    58,    59,     5,    47,    48,    49,    50,    51,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      52,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      53,     0,     0,     0,     0,     0,    54,    55,    56,    57,
      58,    59,     5,    47,    48,    49,    50,    51,     0,     0,
       0,   110,     0,     0,     0,     0,     0,     0,     0,    52,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    53,
       0,     0,     0,     0,     0,    54,    55,    56,    57,    58,
      59,     5,    47,    48,    49,    50,    51,     0,     0,     0,
      60,     0,     0,     0,     0,     0,     0,     0,    52,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    53,     0,
       0,   101,     0,     0,    54,    55,    56,    57,    58,    59,
       5,    47,    48,    49,    50,    51,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    52,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    53,   180,     0,
       0,     0,     0,    54,    55,    56,    57,    58,    59,     5,
      47,    48,    49,    50,    51,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    52,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    53,   221,     0,     0,
       0,     0,    54,    55,    56,    57,    58,    59,     5,    47,
      48,    49,    50,    51,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    52,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    53,     0,     0,     0,     0,
       0,    54,    55,    56,    57,    58,    59,     5,    47,    48,
      49,    50,    51,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    52,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   114,     0,     0,     0,     0,     0,
      54,    55,    56,    57,    58,    59
};

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-80)))

#define yytable_value_is_error(Yytable_value) \
  YYID (0)

static const yytype_int16 yycheck[] =
{
       0,     6,    66,    46,     9,    44,     6,     6,     0,     9,
      31,    10,     6,    13,    53,    15,    10,    38,    10,    53,
      19,    39,    27,    15,    73,    19,    63,    27,    11,   108,
      30,    36,    39,    39,    33,     0,    36,    67,    30,    33,
      23,     6,    25,    66,    71,    10,    29,    84,    66,     6,
      51,    52,    66,    10,    19,   107,    71,    40,    85,    66,
      66,    57,    19,    59,    72,    66,    73,    73,    33,    71,
     109,    66,    87,   112,    39,   114,    33,   141,   142,   143,
      87,    11,    39,    71,   118,    87,   125,    86,    66,    88,
      68,    96,   171,    23,    88,    82,    96,    48,    49,    29,
      73,    66,    85,   124,    83,    78,    79,    62,    73,    66,
      40,   154,    74,    75,   178,    67,    73,   138,    87,    71,
     159,    67,   122,    86,    67,    71,   126,   170,    71,    80,
      81,    67,    67,    67,    67,    71,   175,    71,    71,   160,
     141,   142,   143,   144,   145,   146,   147,   148,   149,   150,
     151,   152,   153,    71,   155,   156,   157,   158,    67,   211,
       6,    67,    71,    67,    10,    71,    69,   210,   168,   221,
     209,   223,    66,    19,   166,    46,    47,   178,   230,    69,
     232,    71,   225,   144,   145,   152,   153,    33,   240,   228,
      44,    45,    39,    39,   215,   238,     6,    35,   199,     9,
      10,   206,    56,    66,    11,    15,   206,    17,    87,    19,
     199,   155,    66,    23,    68,   156,    70,   218,   157,    29,
     158,    67,     6,    33,    36,    35,    10,   146,   147,    39,
      40,    41,    42,    43,    44,    19,   218,    50,    51,    52,
      53,    54,    55,   118,    13,    58,    56,    60,    61,    33,
       7,    64,   148,   149,   150,   151,    66,    85,    23,    15,
      -1,    -1,    72,    73,    74,    75,    76,    77,    -1,    -1,
      -1,     6,    -1,    86,     9,    10,    -1,    87,    88,    89,
      15,    -1,    17,    -1,    19,    -1,    -1,    -1,    23,    -1,
      -1,    -1,    -1,    -1,    29,    -1,    -1,    -1,    33,    -1,
      35,    -1,    -1,    -1,    39,    40,    41,    42,    43,    44,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    56,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    66,    -1,    -1,    -1,    -1,    -1,    72,    73,    74,
      75,    76,    77,     9,    -1,    -1,    -1,    -1,    -1,    15,
      -1,    17,    87,    88,    89,    -1,    -1,    23,    -1,    -1,
      -1,    -1,    -1,    29,    -1,    -1,    -1,    -1,    -1,    35,
      -1,    -1,    -1,    39,    40,    41,    42,    43,    44,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      56,     6,    -1,    -1,    -1,    10,    -1,    -1,    -1,    -1,
      66,    -1,    -1,    -1,    19,    -1,    72,    73,    74,    75,
      76,    77,    -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,
      -1,    87,    88,    -1,    39,    40,    41,    42,    43,    44,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    56,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    66,    -1,    -1,    -1,    -1,    -1,    72,    73,    74,
      75,    76,    77,    39,    40,    41,    42,    43,    44,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      56,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      66,    -1,    -1,    -1,    -1,    -1,    72,    73,    74,    75,
      76,    77,    39,    40,    41,    42,    43,    44,    -1,    -1,
      -1,    87,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    56,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    66,
      -1,    -1,    -1,    -1,    -1,    72,    73,    74,    75,    76,
      77,    39,    40,    41,    42,    43,    44,    -1,    -1,    -1,
      87,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    56,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    66,    -1,
      -1,    69,    -1,    -1,    72,    73,    74,    75,    76,    77,
      39,    40,    41,    42,    43,    44,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    56,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    66,    67,    -1,
      -1,    -1,    -1,    72,    73,    74,    75,    76,    77,    39,
      40,    41,    42,    43,    44,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    56,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    66,    67,    -1,    -1,
      -1,    -1,    72,    73,    74,    75,    76,    77,    39,    40,
      41,    42,    43,    44,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    56,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    66,    -1,    -1,    -1,    -1,
      -1,    72,    73,    74,    75,    76,    77,    39,    40,    41,
      42,    43,    44,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    56,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    66,    -1,    -1,    -1,    -1,    -1,
      72,    73,    74,    75,    76,    77
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     6,    10,    19,    33,    39,    66,    73,   112,   113,
     116,   118,   119,   120,   125,   136,   137,   138,   118,   120,
      87,   114,   115,   118,   113,    88,   112,   113,   128,   139,
      66,    68,   119,     0,   137,    67,    71,    87,    86,   128,
     139,     9,    15,    17,    23,    29,    35,    40,    41,    42,
      43,    44,    56,    66,    72,    73,    74,    75,    76,    77,
      87,    89,    91,    92,    93,    95,    96,    97,    98,    99,
     100,   101,   102,   103,   104,   105,   106,   107,   108,   109,
     111,   112,   125,   127,   128,   129,   130,   131,   132,   133,
     134,   135,   118,   112,   128,    67,   113,   121,   122,   123,
     125,    69,   109,   115,   109,   126,   128,   140,    66,    66,
      87,   111,    66,   140,    66,    95,    95,   111,   116,   117,
     124,    44,    45,    56,    66,    68,    70,    50,    51,    52,
      53,    54,    55,    58,    60,    61,    64,    86,   110,    95,
      97,    73,    78,    79,    74,    75,    46,    47,    48,    49,
      80,    81,    57,    59,    72,    82,    83,    62,    63,    84,
      71,    89,   130,    87,   118,    67,    71,    67,    71,    69,
     127,   131,   111,    87,   111,    66,    67,   117,    67,   125,
      67,    94,   109,   111,   125,   109,    97,    97,    97,    98,
      98,    99,    99,   100,   100,   100,   100,   101,   101,   140,
     103,   104,   105,   106,   111,   109,   113,   125,   140,   131,
      67,    67,   111,    97,    67,    71,    69,   102,    85,   118,
      35,    67,   111,   140,   127,    67,   109,   108,    66,   127,
      67,   127,   140,   111,   127,   141,   127,    67,    11,    87,
     140,   127
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  However,
   YYFAIL appears to be in use.  Nevertheless, it is formally deprecated
   in Bison 2.4.2's NEWS entry, where a plan to phase it out is
   discussed.  */

#define YYFAIL		goto yyerrlab
#if defined YYFAIL
  /* This is here to suppress warnings from the GCC cpp's
     -Wunused-macros.  Normally we don't worry about that warning, but
     some users do, and we want to make it easy for users to remove
     YYFAIL uses, which will produce warnings from Bison 2.5.  */
#endif

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
      YYERROR;							\
    }								\
while (YYID (0))

/* Error token number */
#define YYTERROR	1
#define YYERRCODE	256


/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */
#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

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
#ifndef	YYINITDEPTH
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
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
  YYSIZE_T yysize0 = yytnamerr (YY_NULL, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULL;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - Assume YYFAIL is not used.  It's too flawed to consider.  See
       <http://lists.gnu.org/archive/html/bison-patches/2009-12/msg00024.html>
       for details.  YYERROR is fine as it does not invoke this
       function.
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
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULL, yytname[yyx]);
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

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YYUSE (yytype);
}




/* The lookahead symbol.  */
int yychar;


#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval YY_INITIAL_VALUE(yyval_default);

/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

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
      yychar = YYLEX;
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
     `$$ = $1'.

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
/* Line 1787 of yacc.c  */
#line 127 "12CS30001_ass3.y"
    {
		(yyval.rowST) = (yyvsp[(1) - (1)].rowST);
		//$$ = symtab->symbolTable::symlook(*symtab,$$->name);
		(yyval.rowST)->update((yyval.rowST)->rowType,(yyval.rowST)->pushType(typeSpecifier,-1),offset);
		//quadArray.push_back(quad($$->name,$$->name));
		printf("here with %s \n",(yyval.rowST)->name.c_str());

	}
    break;

  case 3:
/* Line 1787 of yacc.c  */
#line 136 "12CS30001_ass3.y"
    {
		(yyval.rowST) = (yyvsp[(1) - (1)].rowST);
	}
    break;

  case 4:
/* Line 1787 of yacc.c  */
#line 140 "12CS30001_ass3.y"
    {

	}
    break;

  case 5:
/* Line 1787 of yacc.c  */
#line 144 "12CS30001_ass3.y"
    {
		(yyval.rowST) = (yyvsp[(2) - (3)].rowST);
	}
    break;

  case 6:
/* Line 1787 of yacc.c  */
#line 152 "12CS30001_ass3.y"
    {
		printf("integr constant seen %s\n",yytext);
		(yyval.rowST) = symtab->symbolTable::gentemp(*symtab);	
		(yyval.rowST)->update((yyval.rowST)->rowType,(yyval.rowST)->pushType(intType, -1),offset);
		offset = offset +4;
		(yyval.rowST)->val.i=atoi(yytext);
		quadArray.push_back(quad(yytext,(yyval.rowST)->name));

	}
    break;

  case 7:
/* Line 1787 of yacc.c  */
#line 162 "12CS30001_ass3.y"
    {
		(yyval.rowST) = symtab->symbolTable::gentemp(*symtab);
		(yyval.rowST)->update((yyval.rowST)->rowType,(yyval.rowST)->pushType(intType, -1),offset);
		offset = offset +1;
		char *temp=strdup(yytext);
		temp++;
		temp[strlen(temp)-1]='\0';
		string str(temp);
		quadArray.push_back(quad(str,(yyval.rowST)->name));
	
	}
    break;

  case 8:
/* Line 1787 of yacc.c  */
#line 174 "12CS30001_ass3.y"
    {
		printf("float constant seen %s\n",yytext);
		(yyval.rowST) = symtab->symbolTable::gentemp(*symtab);
		(yyval.rowST)->update((yyval.rowST)->rowType,(yyval.rowST)->pushType(doubleType, -1),offset);
		offset = offset +8;
		(yyval.rowST)->val.d=atof(yytext);
		quadArray.push_back(quad(yytext,(yyval.rowST)->name));		
	}
    break;

  case 9:
/* Line 1787 of yacc.c  */
#line 187 "12CS30001_ass3.y"
    {
		(yyval.rowST) = (yyvsp[(1) - (1)].rowST);	
	}
    break;

  case 11:
/* Line 1787 of yacc.c  */
#line 192 "12CS30001_ass3.y"
    {
		global->printTable();

	}
    break;

  case 12:
/* Line 1787 of yacc.c  */
#line 197 "12CS30001_ass3.y"
    {
		
	}
    break;

  case 15:
/* Line 1787 of yacc.c  */
#line 203 "12CS30001_ass3.y"
    {
		(yyval.rowST) = symtab->symbolTable::gentemp(*symtab);
		(yyval.rowST)->update((yyvsp[(1) - (2)].rowST));
		quadArray.push_back(quad((yyval.rowST)->name,(yyvsp[(1) - (2)].rowST)->name));
		string x("1");
		quadArray.push_back(quad('+',(yyvsp[(1) - (2)].rowST)->name,x,(yyvsp[(1) - (2)].rowST)->name));
	}
    break;

  case 16:
/* Line 1787 of yacc.c  */
#line 211 "12CS30001_ass3.y"
    {
		(yyval.rowST) = symtab->symbolTable::gentemp(*symtab);
		(yyval.rowST)->update((yyvsp[(1) - (2)].rowST));
		quadArray.push_back(quad((yyval.rowST)->name,(yyvsp[(1) - (2)].rowST)->name));
		string x("1");
		quadArray.push_back(quad('-',(yyvsp[(1) - (2)].rowST)->name,x,(yyvsp[(1) - (2)].rowST)->name));
	}
    break;

  case 19:
/* Line 1787 of yacc.c  */
#line 227 "12CS30001_ass3.y"
    {
		(yyval.rowST) = (yyvsp[(1) - (1)].rowST);	
	}
    break;

  case 20:
/* Line 1787 of yacc.c  */
#line 231 "12CS30001_ass3.y"
    {	
		string x("1");
		quadArray.push_back(quad('+',(yyvsp[(2) - (2)].rowST)->name,x,(yyvsp[(2) - (2)].rowST)->name));	
	}
    break;

  case 21:
/* Line 1787 of yacc.c  */
#line 236 "12CS30001_ass3.y"
    {	
		string x("1");
		quadArray.push_back(quad('-',(yyvsp[(2) - (2)].rowST)->name,x,(yyvsp[(2) - (2)].rowST)->name));	
	}
    break;

  case 22:
/* Line 1787 of yacc.c  */
#line 241 "12CS30001_ass3.y"
    {
		(yyval.rowST) = symtab->symbolTable::gentemp(*symtab);
		(yyval.rowST)->update((yyvsp[(2) - (2)].rowST));
		//quadArray.push_back(quad($1->name,$$->name,$2->name));
	}
    break;

  case 29:
/* Line 1787 of yacc.c  */
#line 259 "12CS30001_ass3.y"
    {
		(yyval.rowST) = (yyvsp[(1) - (1)].rowST);	
	}
    break;

  case 31:
/* Line 1787 of yacc.c  */
#line 269 "12CS30001_ass3.y"
    {
		(yyval.rowST) = (yyvsp[(1) - (1)].rowST);	
	}
    break;

  case 32:
/* Line 1787 of yacc.c  */
#line 273 "12CS30001_ass3.y"
    {
		(yyval.rowST) = symtab->symbolTable::gentemp(*symtab);
		(yyval.rowST)->update((yyvsp[(1) - (3)].rowST));
		quadArray.push_back(quad('*',(yyvsp[(1) - (3)].rowST)->name,(yyvsp[(3) - (3)].rowST)->name,(yyval.rowST)->name));	
	}
    break;

  case 33:
/* Line 1787 of yacc.c  */
#line 279 "12CS30001_ass3.y"
    {
		(yyval.rowST) = symtab->symbolTable::gentemp(*symtab);
		(yyval.rowST)->update((yyvsp[(1) - (3)].rowST));
		quadArray.push_back(quad('/',(yyvsp[(1) - (3)].rowST)->name,(yyvsp[(3) - (3)].rowST)->name,(yyval.rowST)->name));	
	}
    break;

  case 34:
/* Line 1787 of yacc.c  */
#line 285 "12CS30001_ass3.y"
    {
		(yyval.rowST) = symtab->symbolTable::gentemp(*symtab);
		(yyval.rowST)->update((yyvsp[(1) - (3)].rowST));
		quadArray.push_back(quad('%',(yyvsp[(1) - (3)].rowST)->name,(yyvsp[(3) - (3)].rowST)->name,(yyval.rowST)->name));	
	}
    break;

  case 35:
/* Line 1787 of yacc.c  */
#line 293 "12CS30001_ass3.y"
    {
		(yyval.rowST) = (yyvsp[(1) - (1)].rowST);	
	}
    break;

  case 36:
/* Line 1787 of yacc.c  */
#line 297 "12CS30001_ass3.y"
    {
		(yyval.rowST) = symtab->symbolTable::gentemp(*symtab);
		(yyval.rowST)->update((yyvsp[(1) - (3)].rowST));
		quadArray.push_back(quad('+',(yyvsp[(1) - (3)].rowST)->name,(yyvsp[(3) - (3)].rowST)->name,(yyval.rowST)->name));		
	}
    break;

  case 37:
/* Line 1787 of yacc.c  */
#line 303 "12CS30001_ass3.y"
    {
		(yyval.rowST) = symtab->symbolTable::gentemp(*symtab);
		(yyval.rowST)->update((yyvsp[(1) - (3)].rowST));
		quadArray.push_back(quad('-',(yyvsp[(1) - (3)].rowST)->name,(yyvsp[(3) - (3)].rowST)->name,(yyval.rowST)->name));	
	}
    break;

  case 38:
/* Line 1787 of yacc.c  */
#line 312 "12CS30001_ass3.y"
    {
		(yyval.rowST) = (yyvsp[(1) - (1)].rowST);
	}
    break;

  case 39:
/* Line 1787 of yacc.c  */
#line 316 "12CS30001_ass3.y"
    {
		(yyval.rowST) = symtab->symbolTable::gentemp(*symtab);
		(yyval.rowST)->update((yyvsp[(1) - (3)].rowST));
		quadArray.push_back(quad(SHLE, (yyvsp[(1) - (3)].rowST)->name, (yyvsp[(3) - (3)].rowST)->name, (yyval.rowST)->name));	
	}
    break;

  case 40:
/* Line 1787 of yacc.c  */
#line 322 "12CS30001_ass3.y"
    {
		(yyval.rowST) = symtab->symbolTable::gentemp(*symtab);
		(yyval.rowST)->update((yyvsp[(1) - (3)].rowST));
		quadArray.push_back(quad(SHRT, (yyvsp[(1) - (3)].rowST)->name, (yyvsp[(3) - (3)].rowST)->name, (yyval.rowST)->name));
	}
    break;

  case 41:
/* Line 1787 of yacc.c  */
#line 331 "12CS30001_ass3.y"
    {
		(yyval.rowST) = (yyvsp[(1) - (1)].rowST);
	}
    break;

  case 42:
/* Line 1787 of yacc.c  */
#line 335 "12CS30001_ass3.y"
    {
		(yyval.rowST) = symtab->symbolTable::gentemp(*symtab);
		(yyval.rowST)->update((yyvsp[(1) - (3)].rowST));
		(yyval.rowST)->trueList = makeList(quadArray.size());
		(yyval.rowST)->falseList = makeList(quadArray.size() + 1);
		quadArray.push_back(quad(LET, (yyvsp[(1) - (3)].rowST)->name, (yyvsp[(3) - (3)].rowST)->name, (yyval.rowST)->name));
	}
    break;

  case 43:
/* Line 1787 of yacc.c  */
#line 343 "12CS30001_ass3.y"
    {
		(yyval.rowST) = symtab->symbolTable::gentemp(*symtab);
		(yyval.rowST)->update((yyvsp[(1) - (3)].rowST));
		(yyval.rowST)->trueList = makeList(quadArray.size());
		(yyval.rowST)->falseList = makeList(quadArray.size() + 1);
		quadArray.push_back(quad(GRT, (yyvsp[(1) - (3)].rowST)->name, (yyvsp[(3) - (3)].rowST)->name, (yyval.rowST)->name));
	}
    break;

  case 44:
/* Line 1787 of yacc.c  */
#line 351 "12CS30001_ass3.y"
    {
		(yyval.rowST) = symtab->symbolTable::gentemp(*symtab);
		(yyval.rowST)->update((yyvsp[(1) - (3)].rowST));
		(yyval.rowST)->trueList = makeList(quadArray.size());
		(yyval.rowST)->falseList = makeList(quadArray.size() + 1);
		quadArray.push_back(quad(LEQ, (yyvsp[(1) - (3)].rowST)->name, (yyvsp[(3) - (3)].rowST)->name, (yyval.rowST)->name));	
	}
    break;

  case 45:
/* Line 1787 of yacc.c  */
#line 359 "12CS30001_ass3.y"
    {
		(yyval.rowST) = symtab->symbolTable::gentemp(*symtab);
		(yyval.rowST)->update((yyvsp[(1) - (3)].rowST));
		(yyval.rowST)->trueList = makeList(quadArray.size());
		(yyval.rowST)->falseList = makeList(quadArray.size() + 1);
		quadArray.push_back(quad(GEQ, (yyvsp[(1) - (3)].rowST)->name, (yyvsp[(3) - (3)].rowST)->name, (yyval.rowST)->name));	
	}
    break;

  case 46:
/* Line 1787 of yacc.c  */
#line 371 "12CS30001_ass3.y"
    {
		(yyval.rowST) = (yyvsp[(1) - (1)].rowST);
	}
    break;

  case 62:
/* Line 1787 of yacc.c  */
#line 411 "12CS30001_ass3.y"
    {
		cout<<"in ass expr"<<'\n';
		//cout<<"unr exp = "<<$1->name<<'\n';
		cout<<" ass expr = "<<(yyvsp[(3) - (3)].rowST)->name<<'\n';
		//quadArray.push_back(quad($3->name,$1->name));
		(yyval.rowST)=(yyvsp[(1) - (3)].rowST);
	}
    break;

  case 74:
/* Line 1787 of yacc.c  */
#line 436 "12CS30001_ass3.y"
    {
		(yyval.rowST) = (yyvsp[(1) - (1)].rowST);
	}
    break;

  case 77:
/* Line 1787 of yacc.c  */
#line 449 "12CS30001_ass3.y"
    {
		if(typeSpecifier == functionType)
			symtab = global;
	}
    break;

  case 78:
/* Line 1787 of yacc.c  */
#line 456 "12CS30001_ass3.y"
    {
		(yyval.intVal) = (yyvsp[(1) - (1)].intVal);
	}
    break;

  case 82:
/* Line 1787 of yacc.c  */
#line 469 "12CS30001_ass3.y"
    {
		(yyval.rowST) = (yyvsp[(1) - (1)].rowST);
		(yyval.rowST)->update((yyval.rowST)->rowType,(yyval.rowST)->pushType(typeSpecifier, -1),offset);
		offset = offset + (yyval.rowST)->pushType(typeSpecifier, -1);

	}
    break;

  case 83:
/* Line 1787 of yacc.c  */
#line 476 "12CS30001_ass3.y"
    {
		(yyvsp[(1) - (3)].rowST)->update((yyvsp[(3) - (3)].rowST));
		quadArray.push_back(quad((yyval.rowST)->name,(yyval.rowST)->name));
		(yyval.rowST) = (yyvsp[(1) - (3)].rowST);
	}
    break;

  case 84:
/* Line 1787 of yacc.c  */
#line 486 "12CS30001_ass3.y"
    { typeSpecifier = voidType;  }
    break;

  case 85:
/* Line 1787 of yacc.c  */
#line 487 "12CS30001_ass3.y"
    { typeSpecifier = charType;  }
    break;

  case 86:
/* Line 1787 of yacc.c  */
#line 488 "12CS30001_ass3.y"
    { typeSpecifier = intType;  }
    break;

  case 87:
/* Line 1787 of yacc.c  */
#line 489 "12CS30001_ass3.y"
    { typeSpecifier = doubleType;  }
    break;

  case 90:
/* Line 1787 of yacc.c  */
#line 503 "12CS30001_ass3.y"
    {
		(yyval.rowST) = (yyvsp[(2) - (2)].rowST);
		(yyval.rowST)->pushType(pointerType, -1);
	}
    break;

  case 91:
/* Line 1787 of yacc.c  */
#line 508 "12CS30001_ass3.y"
    {
		(yyval.rowST) = (yyvsp[(1) - (1)].rowST);
	}
    break;

  case 92:
/* Line 1787 of yacc.c  */
#line 515 "12CS30001_ass3.y"
    {
		(yyval.rowST) = (yyvsp[(1) - (1)].rowST);
	}
    break;

  case 93:
/* Line 1787 of yacc.c  */
#line 519 "12CS30001_ass3.y"
    {
		(yyval.rowST) = (yyvsp[(2) - (3)].rowST);
	}
    break;

  case 94:
/* Line 1787 of yacc.c  */
#line 524 "12CS30001_ass3.y"
    {
		(yyval.rowST) = (yyvsp[(1) - (4)].rowST);
		//printf("in array typ");
		int tmp = (yyvsp[(1) - (4)].rowST)->pushType(typeSpecifier,(yyvsp[(3) - (4)].rowST)->val.i);
	}
    break;

  case 95:
/* Line 1787 of yacc.c  */
#line 530 "12CS30001_ass3.y"
    {
		(yyval.rowST) = (yyvsp[(1) - (3)].rowST);
	}
    break;

  case 96:
/* Line 1787 of yacc.c  */
#line 535 "12CS30001_ass3.y"
    {
		row* temp = (yyvsp[(3) - (4)].tableType)->symlook(*(yyvsp[(3) - (4)].tableType), "funcName");
		temp->update(temp->rowType,temp->pushType(typeSpecifier,-1),offset);
		typeSpecifier = functionType;
		global->update((yyvsp[(1) - (4)].rowST),(yyvsp[(3) - (4)].tableType));
		(yyval.rowST) = (yyvsp[(1) - (4)].rowST);
		symtab = (yyvsp[(3) - (4)].tableType);
	}
    break;

  case 99:
/* Line 1787 of yacc.c  */
#line 549 "12CS30001_ass3.y"
    {
		int tmp = (yyval.rowST)->pushType(pointerType,-1);
	}
    break;

  case 100:
/* Line 1787 of yacc.c  */
#line 553 "12CS30001_ass3.y"
    {
		(yyval.rowST) = (yyvsp[(2) - (2)].rowST);
		int tmp = (yyval.rowST)->pushType(pointerType,-1);
	}
    break;

  case 101:
/* Line 1787 of yacc.c  */
#line 563 "12CS30001_ass3.y"
    {
		(yyval.tableType) = new symbolTable();
	}
    break;

  case 102:
/* Line 1787 of yacc.c  */
#line 567 "12CS30001_ass3.y"
    {
		(yyval.tableType) = (yyvsp[(1) - (1)].tableType);
	}
    break;

  case 103:
/* Line 1787 of yacc.c  */
#line 574 "12CS30001_ass3.y"
    {
		(yyval.tableType) = new symbolTable();
		row* tmp = symtab->symlook(*(yyval.tableType),yytext);
		tmp->update(tmp->rowType,tmp->pushType(typeSpecifier,-1),offset);
	}
    break;

  case 104:
/* Line 1787 of yacc.c  */
#line 580 "12CS30001_ass3.y"
    {
		(yyval.tableType) = (yyvsp[(1) - (4)].tableType);
		row* tmp = symtab->symlook(*(yyval.tableType),yytext);
		tmp->update(tmp->rowType,tmp->pushType(typeSpecifier,-1),offset);
	}
    break;

  case 105:
/* Line 1787 of yacc.c  */
#line 591 "12CS30001_ass3.y"
    {
		(yyval.rowVector) = new vector<row*>();
		(yyval.rowVector)->push_back((yyvsp[(1) - (1)].rowST));
	}
    break;

  case 106:
/* Line 1787 of yacc.c  */
#line 596 "12CS30001_ass3.y"
    {
		(yyval.rowVector) = (yyvsp[(1) - (3)].rowVector);
		(yyval.rowVector)->push_back((yyvsp[(3) - (3)].rowST));
	}
    break;

  case 108:
/* Line 1787 of yacc.c  */
#line 620 "12CS30001_ass3.y"
    {
		(yyval.rowST) = symtab->symlook(*symtab,yytext);
		(yyval.rowST)->update((yyval.rowST)->rowType,(yyval.rowST)->pushType(typeSpecifier,-1),offset);

	}
    break;

  case 109:
/* Line 1787 of yacc.c  */
#line 629 "12CS30001_ass3.y"
    {
		(yyval.rowST)=(yyvsp[(1) - (1)].rowST);
	}
    break;

  case 122:
/* Line 1787 of yacc.c  */
#line 662 "12CS30001_ass3.y"
    {
		
		(yyval.nextList) = new vector<int>();
	}
    break;

  case 123:
/* Line 1787 of yacc.c  */
#line 670 "12CS30001_ass3.y"
    {}
    break;

  case 124:
/* Line 1787 of yacc.c  */
#line 671 "12CS30001_ass3.y"
    {}
    break;

  case 125:
/* Line 1787 of yacc.c  */
#line 676 "12CS30001_ass3.y"
    {
		printf("In if \n");
		backpatch((yyvsp[(3) - (6)].rowST)->trueList,(yyvsp[(5) - (6)].intVal));	
		(yyval.nextList) = merge((yyvsp[(3) - (6)].rowST)->falseList,(yyvsp[(6) - (6)].nextList));
	}
    break;

  case 126:
/* Line 1787 of yacc.c  */
#line 682 "12CS30001_ass3.y"
    {
		backpatch((yyvsp[(3) - (10)].rowST)->trueList,(yyvsp[(5) - (10)].intVal));
		backpatch((yyvsp[(3) - (10)].rowST)->falseList,(yyvsp[(9) - (10)].intVal));
		vector<int>* tempList = merge((yyvsp[(6) - (10)].nextList), (yyvsp[(7) - (10)].rowST)->nextList);
		(yyval.nextList) = merge(tempList, (yyvsp[(10) - (10)].nextList));
	}
    break;

  case 128:
/* Line 1787 of yacc.c  */
#line 693 "12CS30001_ass3.y"
    {	
		backpatch((yyvsp[(7) - (7)].nextList),(yyvsp[(2) - (7)].intVal));
		backpatch((yyvsp[(4) - (7)].rowST)->trueList,(yyvsp[(6) - (7)].intVal));
		(yyval.nextList) = (yyvsp[(4) - (7)].rowST)->falseList;
		stringstream ss;
		ss << (yyvsp[(2) - (7)].intVal);
		string str = ss.str();
		quadArray.push_back(quad(str));
	}
    break;

  case 129:
/* Line 1787 of yacc.c  */
#line 703 "12CS30001_ass3.y"
    {
		backpatch((yyvsp[(7) - (9)].rowST)->trueList,(yyvsp[(2) - (9)].intVal));
		backpatch((yyvsp[(3) - (9)].nextList),(yyvsp[(4) - (9)].intVal));
		(yyval.nextList) = (yyvsp[(7) - (9)].rowST)->falseList;
	}
    break;

  case 131:
/* Line 1787 of yacc.c  */
#line 710 "12CS30001_ass3.y"
    {

	}
    break;

  case 144:
/* Line 1787 of yacc.c  */
#line 744 "12CS30001_ass3.y"
    {
		(yyval.intVal) = quadArray.size();
	}
    break;

  case 145:
/* Line 1787 of yacc.c  */
#line 756 "12CS30001_ass3.y"
    {
		(yyval.rowST)->nextList = makeList(quadArray.size());
		string x("null");
		quadArray.push_back(x);
	}
    break;


/* Line 1787 of yacc.c  */
#line 2500 "y.tab.c"
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

  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
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

  /* Do not reclaim the symbols of the rule which action triggered
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
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

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
  /* Do not reclaim the symbols of the rule which action triggered
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
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}


/* Line 2050 of yacc.c  */
#line 761 "12CS30001_ass3.y"



