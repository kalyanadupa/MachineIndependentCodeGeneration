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
	extern std::vector<quad> quadArray;
	


/* Line 371 of yacc.c  */
#line 87 "y.tab.c"

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
     ENUMERATION_CONSTANT = 320,
     HIGH = 321
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
#define HIGH 321



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{
/* Line 387 of yacc.c  */
#line 20 "12CS30001_ass3.y"

	int intVal;
	char charVal;
	row* rowST;
	vector<row*> *rowVector;
	typeT typ;
	vector<int>* nextList;
	symbolTable* tableType;


/* Line 387 of yacc.c  */
#line 273 "y.tab.c"
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
#line 301 "y.tab.c"

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
#define YYLAST   391

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  91
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  52
/* YYNRULES -- Number of rules.  */
#define YYNRULES  138
/* YYNRULES -- Number of states.  */
#define YYNSTATES  240

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   321

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    78,     2,     2,     2,    80,    73,     2,
      67,    68,    74,    75,    72,    76,    71,    79,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    86,    88,
      81,    87,    82,    85,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    69,     2,    70,    83,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    89,    84,    90,    77,     2,     2,     2,
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
      65,    66
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     4,     5,     7,     9,    11,    15,    17,
      19,    21,    23,    28,    32,    37,    41,    45,    48,    51,
      53,    57,    59,    61,    66,    68,    72,    76,    80,    82,
      86,    90,    92,    96,   100,   102,   106,   110,   114,   118,
     120,   124,   128,   130,   134,   136,   140,   142,   146,   148,
     153,   155,   160,   162,   168,   170,   174,   176,   178,   180,
     182,   184,   186,   188,   190,   192,   194,   196,   198,   202,
     205,   209,   211,   214,   216,   220,   222,   226,   228,   230,
     232,   234,   237,   239,   242,   244,   246,   250,   255,   259,
     264,   269,   273,   275,   278,   279,   281,   284,   289,   291,
     295,   297,   299,   301,   303,   305,   307,   309,   311,   314,
     318,   320,   321,   323,   327,   329,   331,   333,   336,   338,
     339,   350,   357,   363,   371,   381,   388,   402,   405,   409,
     411,   414,   416,   418,   423,   427,   431,   434,   436
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     139,     0,    -1,    -1,    -1,   127,    -1,    95,    -1,    43,
      -1,    67,   113,    68,    -1,    40,    -1,    42,    -1,    41,
      -1,    94,    -1,    96,    69,   113,    70,    -1,    96,    67,
      68,    -1,    96,    67,    97,    68,    -1,    96,    71,   127,
      -1,    96,    45,   127,    -1,    96,    44,    -1,    96,    56,
      -1,   111,    -1,    97,    72,   111,    -1,    96,    -1,    98,
      -1,    67,   126,    68,    99,    -1,    99,    -1,   100,    74,
      99,    -1,   100,    79,    99,    -1,   100,    80,    99,    -1,
     100,    -1,   101,    75,   100,    -1,   101,    76,   100,    -1,
     101,    -1,   102,    46,   101,    -1,   102,    47,   101,    -1,
     102,    -1,   103,    81,   102,    -1,   103,    82,   102,    -1,
     103,    48,   102,    -1,   103,    49,   102,    -1,   103,    -1,
     104,    57,   103,    -1,   104,    59,   103,    -1,   104,    -1,
     105,    73,   104,    -1,   105,    -1,   106,    83,   105,    -1,
     106,    -1,   107,    84,   106,    -1,   107,    -1,   108,    62,
      92,   107,    -1,   108,    -1,   109,    63,    92,   108,    -1,
     109,    -1,   109,    85,   113,    86,   110,    -1,   110,    -1,
      98,   112,   111,    -1,    87,    -1,    50,    -1,    51,    -1,
      52,    -1,    53,    -1,    54,    -1,    55,    -1,    58,    -1,
      60,    -1,    61,    -1,    64,    -1,   111,    -1,   113,    72,
     111,    -1,   115,    88,    -1,   115,   116,    88,    -1,   118,
      -1,   118,   115,    -1,   117,    -1,   116,    72,   117,    -1,
     120,    -1,   120,    87,   128,    -1,    33,    -1,     6,    -1,
      19,    -1,    10,    -1,   118,   119,    -1,   118,    -1,   122,
     121,    -1,   121,    -1,   127,    -1,    67,   120,    68,    -1,
     121,    69,   111,    70,    -1,   121,    69,    70,    -1,   121,
      67,   123,    68,    -1,   121,    67,   125,    68,    -1,   121,
      67,    68,    -1,    74,    -1,    74,   122,    -1,    -1,   124,
      -1,   115,   120,    -1,   124,    72,   115,   120,    -1,   127,
      -1,   125,    72,   127,    -1,   119,    -1,    39,    -1,   111,
      -1,   130,    -1,   134,    -1,   136,    -1,   137,    -1,   138,
      -1,    89,    90,    -1,    89,   131,    90,    -1,   132,    -1,
      -1,   133,    -1,   132,    92,   133,    -1,   114,    -1,   129,
      -1,    88,    -1,   135,    88,    -1,   113,    -1,    -1,    17,
      67,   113,    68,    92,   129,    93,    11,    92,   129,    -1,
      17,    67,   113,    68,    92,   129,    -1,    29,    67,   113,
      68,   129,    -1,    35,    92,    67,   113,    68,    92,   129,
      -1,     9,    92,   129,    92,    35,    67,   113,    68,    88,
      -1,    15,    67,   134,   134,    68,   129,    -1,    15,    67,
     113,    88,    92,   113,    88,    92,   113,    93,    68,    92,
     129,    -1,    23,    88,    -1,    23,   113,    88,    -1,   140,
      -1,   139,   140,    -1,   141,    -1,   114,    -1,   115,   120,
     142,   130,    -1,   115,   120,   130,    -1,   120,   142,   130,
      -1,   120,   130,    -1,   114,    -1,   142,   114,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   137,   137,   143,   152,   161,   165,   169,   178,   188,
     200,   215,   219,   220,   228,   238,   239,   240,   249,   262,
     268,   278,   296,   300,   306,   310,   316,   322,   332,   335,
     343,   354,   358,   364,   374,   378,   387,   396,   405,   418,
     422,   431,   444,   448,   457,   461,   470,   474,   483,   487,
     496,   500,   509,   510,   516,   520,   536,   537,   538,   539,
     540,   541,   542,   543,   544,   545,   546,   551,   555,   568,
     569,   578,   581,   586,   587,   592,   600,   611,   612,   613,
     614,   619,   620,   628,   633,   641,   645,   650,   656,   661,
     670,   671,   676,   680,   691,   694,   702,   708,   719,   724,
     733,   752,   762,   770,   771,   772,   773,   774,   779,   780,
     788,   795,   801,   805,   813,   817,   824,   825,   832,   833,
     837,   845,   851,   855,   865,   871,   872,   886,   890,   898,
     899,   903,   904,   908,   909,   910,   911,   915,   916
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
  "AND_OP", "OR_OP", "OR_ASSIGN", "ENUMERATION_CONSTANT", "HIGH", "'('",
  "')'", "'['", "']'", "'.'", "','", "'&'", "'*'", "'+'", "'-'", "'~'",
  "'!'", "'/'", "'%'", "'<'", "'>'", "'^'", "'|'", "'?'", "':'", "'='",
  "';'", "'{'", "'}'", "$accept", "M1", "N1", "primary_expression",
  "CONSTANT", "postfix_expression", "argument_expression_list",
  "unary_expression", "cast_expression", "multiplicative_expression",
  "additive_expression", "shift_expression", "relational_expression",
  "equality_expression", "and_expression", "exclusive_or_expression",
  "inclusive_or_expression", "logical_and_expression",
  "logical_or_expression", "conditional_expression",
  "assignment_expression", "assignment_operator", "expression",
  "declaration", "declaration_specifiers", "init_declarator_list",
  "init_declarator", "type_specifier", "specifier_qualifier_list",
  "declarator", "direct_declarator", "pointer", "parameter_type_list",
  "parameter_list", "identifier_list", "type_name", "id_var",
  "initializer", "statement", "compound_statement", "block_item_list_opt",
  "block_item_list", "block_item", "expression_statement",
  "expression_opt", "selection_statement", "iteration_statement",
  "jump_statement", "translation_unit", "external_declaration",
  "function_definition", "declaration_list", YY_NULL
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
     315,   316,   317,   318,   319,   320,   321,    40,    41,    91,
      93,    46,    44,    38,    42,    43,    45,   126,    33,    47,
      37,    60,    62,    94,   124,    63,    58,    61,    59,   123,
     125
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    91,    92,    93,    94,    94,    94,    94,    95,    95,
      95,    96,    96,    96,    96,    96,    96,    96,    96,    97,
      97,    98,    99,    99,   100,   100,   100,   100,   101,   101,
     101,   102,   102,   102,   103,   103,   103,   103,   103,   104,
     104,   104,   105,   105,   106,   106,   107,   107,   108,   108,
     109,   109,   110,   110,   111,   111,   112,   112,   112,   112,
     112,   112,   112,   112,   112,   112,   112,   113,   113,   114,
     114,   115,   115,   116,   116,   117,   117,   118,   118,   118,
     118,   119,   119,   120,   120,   121,   121,   121,   121,   121,
     121,   121,   122,   122,   123,   123,   124,   124,   125,   125,
     126,   127,   128,   129,   129,   129,   129,   129,   130,   130,
     131,   131,   132,   132,   133,   133,   134,   134,   135,   135,
     136,   136,   136,   137,   137,   137,   137,   138,   138,   139,
     139,   140,   140,   141,   141,   141,   141,   142,   142
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     0,     1,     1,     1,     3,     1,     1,
       1,     1,     4,     3,     4,     3,     3,     2,     2,     1,
       3,     1,     1,     4,     1,     3,     3,     3,     1,     3,
       3,     1,     3,     3,     1,     3,     3,     3,     3,     1,
       3,     3,     1,     3,     1,     3,     1,     3,     1,     4,
       1,     4,     1,     5,     1,     3,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     3,     2,
       3,     1,     2,     1,     3,     1,     3,     1,     1,     1,
       1,     2,     1,     2,     1,     1,     3,     4,     3,     4,
       4,     3,     1,     2,     0,     1,     2,     4,     1,     3,
       1,     1,     1,     1,     1,     1,     1,     1,     2,     3,
       1,     0,     1,     3,     1,     1,     1,     2,     1,     0,
      10,     6,     5,     7,     9,     6,    13,     2,     3,     1,
       2,     1,     1,     4,     3,     3,     2,     1,     2
};

/* YYDEFACT[STATE-NAME] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    78,    80,    79,    77,   101,     0,    92,   132,     0,
      71,     0,    84,     0,    85,     0,   129,   131,     0,    93,
      69,     0,    73,    75,    72,     0,   137,     0,   136,     0,
       0,     0,    83,     1,   130,    86,     0,    70,     0,   134,
       0,     2,     0,     0,     0,     0,     2,     8,    10,     9,
       6,     0,   116,   108,    11,     5,    21,    22,    24,    28,
      31,    34,    39,    42,    44,    46,    48,    50,    52,    54,
      67,   118,   114,     4,   115,   103,     0,     2,   112,   104,
       0,   105,   106,   107,    75,   138,   135,    91,     0,     0,
      95,     0,    98,    88,     0,    74,   102,    76,   133,     0,
       0,     0,   127,     0,     0,     0,     0,    82,   100,     0,
      17,     0,    18,     0,     0,     0,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    56,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     2,     2,     0,     0,   109,     0,
     117,    96,    89,     0,    90,     0,    87,     2,     0,     0,
       0,   128,     0,     0,     7,    81,     0,    16,    13,     0,
      19,     0,    15,    55,    22,    25,    26,    27,    29,    30,
      32,    33,    37,    38,    35,    36,    40,    41,    43,    45,
      47,     0,     0,     0,    68,   113,     0,    99,     0,     2,
       0,     2,     0,     0,    23,    14,     0,    12,    49,    51,
       0,    97,     0,     0,     0,     0,   122,     2,    20,    53,
       0,     0,   125,   121,     0,     0,     2,     0,   123,     0,
       0,     2,   124,     3,     0,     0,   120,     2,     0,   126
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    99,   227,    54,    55,    56,   169,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,   127,    71,     8,    27,    21,    22,    10,   108,    11,
      12,    13,    89,    90,    91,   109,    73,    97,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    15,    16,
      17,    29
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -98
static const yytype_int16 yypact[] =
{
      64,   -98,   -98,   -98,   -98,   -98,     2,   -62,   -98,   -11,
     155,    33,    26,   -36,   -98,    40,   -98,   -98,   -47,   -98,
     -98,   -53,   -98,    32,   -98,   160,   -98,   -11,   -98,    33,
     110,    93,    26,   -98,   -98,   -98,     2,   -98,   318,   -98,
      33,   -98,   -34,    17,   218,    20,   -98,   -98,   -98,   -98,
     -98,   313,   -98,   -98,   -98,   -98,   320,   284,   -98,   -19,
     -22,    55,     9,    66,    21,    67,    58,    91,   -40,   -98,
     -98,    87,   -98,   -98,   -98,   -98,    74,    81,   -98,   -98,
      85,   -98,   -98,   -98,    89,   -98,   -98,   -98,     2,   114,
     112,    36,   -98,   -98,   134,   -98,   -98,   -98,   -98,   274,
     259,   318,   -98,   -10,   318,   131,    56,   155,   -98,   149,
     -98,   168,   -98,   253,   318,   168,   -98,   -98,   -98,   -98,
     -98,   -98,   -98,   -98,   -98,   -98,   -98,   318,   318,   318,
     318,   318,   318,   318,   318,   318,   318,   318,   318,   318,
     318,   318,   318,   318,   -98,   -98,   318,   318,   -98,   199,
     -98,   -98,   -98,   155,   -98,   168,   -98,   -98,     8,   259,
      72,   -98,    80,   318,   -98,   -98,   318,   -98,   -98,    90,
     -98,    75,   -98,   -98,   -98,   -98,   -98,   -98,   -19,   -19,
     -22,   -22,    55,    55,    55,    55,     9,     9,    66,    21,
      67,   318,   318,     3,   -98,   -98,     2,   -98,   184,   -98,
     152,   -98,   274,   138,   -98,   -98,   318,   -98,    58,    91,
     318,   -98,   154,   318,   274,   274,   -98,   -98,   -98,   -98,
     318,    10,   -98,   219,   274,   143,   -98,   220,   -98,   141,
     318,   -98,   -98,    87,   274,   165,   -98,   -98,   274,   -98
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -98,   -45,     4,   -98,   -98,   -98,   -98,   139,   -81,    59,
     -24,    88,    73,    94,   101,   102,    45,    52,   -98,    37,
     -21,   -98,   -33,    -3,    14,   -98,   210,   -35,   144,    -2,
     239,   246,   -98,   -98,   -98,   -98,     0,   -98,   -97,   128,
     -98,   -98,   105,   -95,   -98,   -98,   -98,   -98,   -98,   240,
     -98,   233
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -111
static const yytype_int16 yytable[] =
{
      14,   105,   157,     5,    18,   159,    14,    23,    26,    14,
      94,   103,     7,    14,     9,    14,   107,    96,   106,    36,
      26,    35,    72,   145,    24,    84,    85,    14,     5,     9,
      92,     6,   149,   100,    84,    37,    14,    85,     1,     1,
      33,     5,     2,     2,    88,   146,     1,   175,   176,   177,
       2,     3,     3,   131,   132,   128,     6,   135,   136,     3,
     129,   130,   147,     7,   200,     4,     4,   158,   160,     6,
       1,   162,   107,     4,     2,   147,     7,    20,   161,     5,
     147,   171,   147,     3,   101,   204,   151,   104,    14,   210,
     137,   138,   170,    30,   141,    31,   199,     4,   226,   191,
     192,   133,   134,     5,   154,   216,   173,     6,   155,   180,
     181,   167,   198,   193,     7,   172,     1,   222,   223,    38,
       2,    25,    25,   139,   164,   140,   194,   228,   147,     3,
     203,     6,     5,    47,    48,    49,    50,   236,     7,    28,
     201,   239,   143,     4,   147,   207,    72,   147,   202,     5,
     142,    39,   147,   144,   213,   197,   215,    86,   205,   147,
      51,     1,   206,    93,   148,     2,     1,   196,    98,    41,
       2,  -110,   224,   150,     3,    42,    38,    43,    87,     3,
     221,   230,   152,    44,   153,   218,   234,   225,     4,    45,
     178,   179,   238,     4,   211,    46,    14,   233,   163,     5,
      47,    48,    49,    50,   156,     1,   217,     5,    41,     2,
     147,   229,   186,   187,    42,   147,    43,   166,     3,   212,
     214,   220,    44,   182,   183,   184,   185,    51,    45,   232,
      -3,   231,     4,   237,    46,   188,   208,   235,     5,    47,
      48,    49,    50,   189,   209,   190,    95,   219,    52,    25,
      53,   165,    32,    19,   195,    34,    40,     5,    47,    48,
      49,    50,     0,     0,     0,     0,    51,   174,   174,   174,
     174,   174,   174,   174,   174,   174,   174,   174,   174,   174,
     174,   174,   174,    41,     0,    51,     0,    52,    25,    42,
       0,    43,     5,    47,    48,    49,    50,    44,     5,    47,
      48,    49,    50,    45,     0,   174,   102,     0,     0,    46,
       0,     0,     0,     5,    47,    48,    49,    50,     0,     1,
      51,   168,     0,     2,     0,     0,    51,     0,     0,     0,
     174,   174,     3,     0,   116,   117,   118,   119,   120,   121,
       0,    51,   122,     0,   123,   124,     4,    52,   125,   174,
       0,     0,     5,    47,    48,    49,    50,     5,    47,    48,
      49,    50,    52,    25,   110,   111,     0,     0,     0,     0,
       0,   126,     0,     0,     0,     0,   112,     0,     0,     0,
      51,     0,     0,     0,     0,    51,     0,   113,     0,   114,
       0,   115
};

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-98)))

#define yytable_value_is_error(Yytable_value) \
  YYID (0)

static const yytype_int16 yycheck[] =
{
       0,    46,    99,    39,     6,   100,     6,     9,    11,     9,
      31,    44,    74,    13,     0,    15,    51,    38,    51,    72,
      23,    68,    25,    63,    10,    27,    29,    27,    39,    15,
      30,    67,    77,    67,    36,    88,    36,    40,     6,     6,
       0,    39,    10,    10,    30,    85,     6,   128,   129,   130,
      10,    19,    19,    75,    76,    74,    67,    48,    49,    19,
      79,    80,    72,    74,   159,    33,    33,   100,   101,    67,
       6,   104,   107,    33,    10,    72,    74,    88,    88,    39,
      72,   114,    72,    19,    67,   166,    88,    67,    88,    86,
      81,    82,   113,    67,    73,    69,    88,    33,    88,   144,
     145,    46,    47,    39,    68,   202,   127,    67,    72,   133,
     134,   111,   157,   146,    74,   115,     6,   214,   215,    87,
      10,    89,    89,    57,    68,    59,   147,   224,    72,    19,
     163,    67,    39,    40,    41,    42,    43,   234,    74,    11,
      68,   238,    84,    33,    72,    70,   149,    72,    68,    39,
      83,    23,    72,    62,   199,   155,   201,    29,    68,    72,
      67,     6,    72,    70,    90,    10,     6,   153,    40,     9,
      10,    90,   217,    88,    19,    15,    87,    17,    68,    19,
     213,   226,    68,    23,    72,   206,   231,   220,    33,    29,
     131,   132,   237,    33,   196,    35,   196,   230,    67,    39,
      40,    41,    42,    43,    70,     6,    68,    39,     9,    10,
      72,    68,   139,   140,    15,    72,    17,    68,    19,    35,
      68,    67,    23,   135,   136,   137,   138,    67,    29,    88,
      11,    11,    33,    68,    35,   141,   191,   233,    39,    40,
      41,    42,    43,   142,   192,   143,    36,   210,    88,    89,
      90,   107,    13,     7,   149,    15,    23,    39,    40,    41,
      42,    43,    -1,    -1,    -1,    -1,    67,   128,   129,   130,
     131,   132,   133,   134,   135,   136,   137,   138,   139,   140,
     141,   142,   143,     9,    -1,    67,    -1,    88,    89,    15,
      -1,    17,    39,    40,    41,    42,    43,    23,    39,    40,
      41,    42,    43,    29,    -1,   166,    88,    -1,    -1,    35,
      -1,    -1,    -1,    39,    40,    41,    42,    43,    -1,     6,
      67,    68,    -1,    10,    -1,    -1,    67,    -1,    -1,    -1,
     191,   192,    19,    -1,    50,    51,    52,    53,    54,    55,
      -1,    67,    58,    -1,    60,    61,    33,    88,    64,   210,
      -1,    -1,    39,    40,    41,    42,    43,    39,    40,    41,
      42,    43,    88,    89,    44,    45,    -1,    -1,    -1,    -1,
      -1,    87,    -1,    -1,    -1,    -1,    56,    -1,    -1,    -1,
      67,    -1,    -1,    -1,    -1,    67,    -1,    67,    -1,    69,
      -1,    71
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     6,    10,    19,    33,    39,    67,    74,   114,   115,
     118,   120,   121,   122,   127,   139,   140,   141,   120,   122,
      88,   116,   117,   120,   115,    89,   114,   115,   130,   142,
      67,    69,   121,     0,   140,    68,    72,    88,    87,   130,
     142,     9,    15,    17,    23,    29,    35,    40,    41,    42,
      43,    67,    88,    90,    94,    95,    96,    98,    99,   100,
     101,   102,   103,   104,   105,   106,   107,   108,   109,   110,
     111,   113,   114,   127,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   120,   114,   130,    68,   115,   123,
     124,   125,   127,    70,   111,   117,   111,   128,   130,    92,
      67,    67,    88,   113,    67,    92,   113,   118,   119,   126,
      44,    45,    56,    67,    69,    71,    50,    51,    52,    53,
      54,    55,    58,    60,    61,    64,    87,   112,    74,    79,
      80,    75,    76,    46,    47,    48,    49,    81,    82,    57,
      59,    73,    83,    84,    62,    63,    85,    72,    90,    92,
      88,   120,    68,    72,    68,    72,    70,   129,   113,   134,
     113,    88,   113,    67,    68,   119,    68,   127,    68,    97,
     111,   113,   127,   111,    98,    99,    99,    99,   100,   100,
     101,   101,   102,   102,   102,   102,   103,   103,   104,   105,
     106,    92,    92,   113,   111,   133,   115,   127,    92,    88,
     134,    68,    68,   113,    99,    68,    72,    70,   107,   108,
      86,   120,    35,    92,    68,    92,   129,    68,   111,   110,
      67,   113,   129,   129,    92,   113,    88,    93,   129,    68,
      92,    11,    88,   113,    92,    93,   129,    68,    92,   129
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
#line 137 "12CS30001_ass3.y"
    {
		(yyval.intVal) = quadArray.size();
	}
    break;

  case 3:
/* Line 1787 of yacc.c  */
#line 143 "12CS30001_ass3.y"
    {
		(yyval.rowST) = symtab->symbolTable::gentemp(*symtab);	
		(yyval.rowST)->nextList = makeList(quadArray.size());
		string x("null");
		quadArray.push_back(quad(GOTOV,"..."));
	}
    break;

  case 4:
/* Line 1787 of yacc.c  */
#line 153 "12CS30001_ass3.y"
    {
		(yyval.rowST) = (yyvsp[(1) - (1)].rowST);
		//$$ = symtab->symbolTable::symlook(*symtab,$$->name);
		//$$->update($$->rowType,$$->pushType(typeSpecifier,-1),offset);
		//quadArray.push_back(quad($$->name,$$->name));
		printf("here with %s \n",(yyval.rowST)->name.c_str());

	}
    break;

  case 5:
/* Line 1787 of yacc.c  */
#line 162 "12CS30001_ass3.y"
    {
		(yyval.rowST) = (yyvsp[(1) - (1)].rowST);
	}
    break;

  case 6:
/* Line 1787 of yacc.c  */
#line 166 "12CS30001_ass3.y"
    {

	}
    break;

  case 7:
/* Line 1787 of yacc.c  */
#line 170 "12CS30001_ass3.y"
    {
		(yyval.rowST) = (yyvsp[(2) - (3)].rowST);
	}
    break;

  case 8:
/* Line 1787 of yacc.c  */
#line 179 "12CS30001_ass3.y"
    {
		printf("integr constant seen %s\n",yytext);
		(yyval.rowST) = symtab->symbolTable::gentemp(*symtab);	
		(yyval.rowST)->update((yyval.rowST)->rowType,(yyval.rowST)->pushType(intType, -1),offset);
		offset = offset +4;
		(yyval.rowST)->val.i=atoi(yytext);
		quadArray.push_back(quad(yytext,(yyval.rowST)->name));

	}
    break;

  case 9:
/* Line 1787 of yacc.c  */
#line 189 "12CS30001_ass3.y"
    {
		(yyval.rowST) = symtab->symbolTable::gentemp(*symtab);
		(yyval.rowST)->update((yyval.rowST)->rowType,(yyval.rowST)->pushType(charType, -1),offset);
		offset = offset +1;
		char *temp=strdup(yytext);
		temp++;
		temp[strlen(temp)-1]='\0';
		string str(temp);
		quadArray.push_back(quad(str,(yyval.rowST)->name));
	
	}
    break;

  case 10:
/* Line 1787 of yacc.c  */
#line 201 "12CS30001_ass3.y"
    {
		printf("float constant seen %s\n",yytext);
		(yyval.rowST) = symtab->symbolTable::gentemp(*symtab);
		(yyval.rowST)->update((yyval.rowST)->rowType,(yyval.rowST)->pushType(doubleType, -1),offset);
		offset = offset +8;
		(yyval.rowST)->val.d=atof(yytext);
		quadArray.push_back(quad(yytext,(yyval.rowST)->name));		
	}
    break;

  case 11:
/* Line 1787 of yacc.c  */
#line 216 "12CS30001_ass3.y"
    {
		(yyval.rowST) = (yyvsp[(1) - (1)].rowST);	
	}
    break;

  case 13:
/* Line 1787 of yacc.c  */
#line 221 "12CS30001_ass3.y"
    {
		global->printTable();
		symbolTable *temp = global->symlook(*global,(yyvsp[(1) - (3)].rowST)->name)->nestedTable;
		(yyval.rowST) = symtab->symbolTable::gentemp(*symtab);
		(yyval.rowST)->update((yyvsp[(1) - (3)].rowST));
		quadArray.push_back(quad(CALL,(yyvsp[(1) - (3)].rowST)->name));
	}
    break;

  case 14:
/* Line 1787 of yacc.c  */
#line 229 "12CS30001_ass3.y"
    {
		symbolTable *temp = global->symlook(*global,(yyvsp[(1) - (4)].rowST)->name)->nestedTable;
		for(int i = 0;i < (yyvsp[(3) - (4)].rowVector)->size();i++)
			quadArray.push_back(quad(PARAM,(*(yyvsp[(3) - (4)].rowVector))[i]->name));
		(yyval.rowST) = symtab->symbolTable::gentemp(*symtab);
		(yyval.rowST)->update((yyvsp[(1) - (4)].rowST));
		quadArray.push_back(quad(CALL,(yyvsp[(1) - (4)].rowST)->name));	

	}
    break;

  case 17:
/* Line 1787 of yacc.c  */
#line 241 "12CS30001_ass3.y"
    {
		(yyval.rowST) = symtab->symbolTable::gentemp(*symtab);
		(yyval.rowST)->update((yyvsp[(1) - (2)].rowST));
		quadArray.push_back(quad((yyval.rowST)->name,(yyvsp[(1) - (2)].rowST)->name));
		string x("1");
		quadArray.push_back(quad((yyvsp[(1) - (2)].rowST)->name,(yyval.rowST)->name));
		quadArray.push_back(quad(UP,(yyval.rowST)->name,x,(yyvsp[(1) - (2)].rowST)->name));
	}
    break;

  case 18:
/* Line 1787 of yacc.c  */
#line 250 "12CS30001_ass3.y"
    {
		(yyval.rowST) = symtab->symbolTable::gentemp(*symtab);
		(yyval.rowST)->update((yyvsp[(1) - (2)].rowST));
		quadArray.push_back(quad((yyval.rowST)->name,(yyvsp[(1) - (2)].rowST)->name));
		string x("1");
		quadArray.push_back(quad((yyvsp[(1) - (2)].rowST)->name,(yyval.rowST)->name));
		quadArray.push_back(quad(UM,(yyval.rowST)->name,x,(yyvsp[(1) - (2)].rowST)->name));
	}
    break;

  case 19:
/* Line 1787 of yacc.c  */
#line 263 "12CS30001_ass3.y"
    {

		(yyval.rowVector) = new vector<row*>();
		(yyval.rowVector)->push_back((yyvsp[(1) - (1)].rowST));
	}
    break;

  case 20:
/* Line 1787 of yacc.c  */
#line 269 "12CS30001_ass3.y"
    {
		(yyval.rowVector) =(yyvsp[(1) - (3)].rowVector);
		(yyval.rowVector)->push_back((yyvsp[(3) - (3)].rowST));
	}
    break;

  case 21:
/* Line 1787 of yacc.c  */
#line 279 "12CS30001_ass3.y"
    {
	    (yyval.rowST) = (yyvsp[(1) - (1)].rowST);
	}
    break;

  case 22:
/* Line 1787 of yacc.c  */
#line 297 "12CS30001_ass3.y"
    {
		(yyval.rowST) = (yyvsp[(1) - (1)].rowST);	
	}
    break;

  case 24:
/* Line 1787 of yacc.c  */
#line 307 "12CS30001_ass3.y"
    {
		(yyval.rowST) = (yyvsp[(1) - (1)].rowST);	
	}
    break;

  case 25:
/* Line 1787 of yacc.c  */
#line 311 "12CS30001_ass3.y"
    {
		(yyval.rowST) = symtab->symbolTable::gentemp(*symtab);
		(yyval.rowST)->update((yyvsp[(1) - (3)].rowST));
		quadArray.push_back(quad('*',(yyvsp[(1) - (3)].rowST)->name,(yyvsp[(3) - (3)].rowST)->name,(yyval.rowST)->name));	
	}
    break;

  case 26:
/* Line 1787 of yacc.c  */
#line 317 "12CS30001_ass3.y"
    {
		(yyval.rowST) = symtab->symbolTable::gentemp(*symtab);
		(yyval.rowST)->update((yyvsp[(1) - (3)].rowST));
		quadArray.push_back(quad('/',(yyvsp[(1) - (3)].rowST)->name,(yyvsp[(3) - (3)].rowST)->name,(yyval.rowST)->name));	
	}
    break;

  case 27:
/* Line 1787 of yacc.c  */
#line 323 "12CS30001_ass3.y"
    {
		(yyval.rowST) = symtab->symbolTable::gentemp(*symtab);
		(yyval.rowST)->update((yyvsp[(1) - (3)].rowST));
		quadArray.push_back(quad('%',(yyvsp[(1) - (3)].rowST)->name,(yyvsp[(3) - (3)].rowST)->name,(yyval.rowST)->name));	
	}
    break;

  case 28:
/* Line 1787 of yacc.c  */
#line 332 "12CS30001_ass3.y"
    {
		(yyval.rowST) = (yyvsp[(1) - (1)].rowST);	
	}
    break;

  case 29:
/* Line 1787 of yacc.c  */
#line 336 "12CS30001_ass3.y"
    {
		(yyval.rowST) = symtab->symbolTable::gentemp(*symtab);
		cout<<"generated temp = "<<(yyval.rowST)->name<<'\n'; 
		(yyval.rowST)->update((yyvsp[(1) - (3)].rowST));
		
		quadArray.push_back(quad('+',(yyvsp[(1) - (3)].rowST)->name,(yyvsp[(3) - (3)].rowST)->name,(yyval.rowST)->name));		
	}
    break;

  case 30:
/* Line 1787 of yacc.c  */
#line 344 "12CS30001_ass3.y"
    {
		(yyval.rowST) = symtab->symbolTable::gentemp(*symtab);
		(yyval.rowST)->update((yyvsp[(1) - (3)].rowST));
		quadArray.push_back(quad('-',(yyvsp[(1) - (3)].rowST)->name,(yyvsp[(3) - (3)].rowST)->name,(yyval.rowST)->name));	
	}
    break;

  case 31:
/* Line 1787 of yacc.c  */
#line 355 "12CS30001_ass3.y"
    {
		(yyval.rowST) = (yyvsp[(1) - (1)].rowST);
	}
    break;

  case 32:
/* Line 1787 of yacc.c  */
#line 359 "12CS30001_ass3.y"
    {
		(yyval.rowST) = symtab->symbolTable::gentemp(*symtab);
		(yyval.rowST)->update((yyvsp[(1) - (3)].rowST));
		quadArray.push_back(quad(SHLE, (yyvsp[(1) - (3)].rowST)->name, (yyvsp[(3) - (3)].rowST)->name, (yyval.rowST)->name));	
	}
    break;

  case 33:
/* Line 1787 of yacc.c  */
#line 365 "12CS30001_ass3.y"
    {
		(yyval.rowST) = symtab->symbolTable::gentemp(*symtab);
		(yyval.rowST)->update((yyvsp[(1) - (3)].rowST));
		quadArray.push_back(quad(SHRT, (yyvsp[(1) - (3)].rowST)->name, (yyvsp[(3) - (3)].rowST)->name, (yyval.rowST)->name));
	}
    break;

  case 34:
/* Line 1787 of yacc.c  */
#line 375 "12CS30001_ass3.y"
    {
		(yyval.rowST) = (yyvsp[(1) - (1)].rowST);
	}
    break;

  case 35:
/* Line 1787 of yacc.c  */
#line 379 "12CS30001_ass3.y"
    {
		(yyval.rowST) = symtab->symbolTable::gentemp(*symtab);
		(yyval.rowST)->update((yyvsp[(1) - (3)].rowST));
		(yyval.rowST)->trueList = makeList(quadArray.size());
		(yyval.rowST)->falseList = makeList(quadArray.size() + 1);
		quadArray.push_back(quad(LET, (yyvsp[(1) - (3)].rowST)->name, (yyvsp[(3) - (3)].rowST)->name, "...."));
		quadArray.push_back(quad(GOTOV,"null"));
	}
    break;

  case 36:
/* Line 1787 of yacc.c  */
#line 388 "12CS30001_ass3.y"
    {
		(yyval.rowST) = symtab->symbolTable::gentemp(*symtab);
		(yyval.rowST)->update((yyvsp[(1) - (3)].rowST));
		(yyval.rowST)->trueList = makeList(quadArray.size());
		(yyval.rowST)->falseList = makeList(quadArray.size() + 1);
		quadArray.push_back(quad(GRT, (yyvsp[(1) - (3)].rowST)->name, (yyvsp[(3) - (3)].rowST)->name, "...."));
		quadArray.push_back(quad(GOTOV,"..."));
	}
    break;

  case 37:
/* Line 1787 of yacc.c  */
#line 397 "12CS30001_ass3.y"
    {
		(yyval.rowST) = symtab->symbolTable::gentemp(*symtab);
		(yyval.rowST)->update((yyvsp[(1) - (3)].rowST));
		(yyval.rowST)->trueList = makeList(quadArray.size());
		(yyval.rowST)->falseList = makeList(quadArray.size() + 1);
		quadArray.push_back(quad(LEQ, (yyvsp[(1) - (3)].rowST)->name, (yyvsp[(3) - (3)].rowST)->name, "...."));	
		quadArray.push_back(quad(GOTOV,"..."));	
	}
    break;

  case 38:
/* Line 1787 of yacc.c  */
#line 406 "12CS30001_ass3.y"
    {
		(yyval.rowST) = symtab->symbolTable::gentemp(*symtab);
		(yyval.rowST)->update((yyvsp[(1) - (3)].rowST));
		(yyval.rowST)->trueList = makeList(quadArray.size());
		(yyval.rowST)->falseList = makeList(quadArray.size() + 1);
		quadArray.push_back(quad(GEQ, (yyvsp[(1) - (3)].rowST)->name, (yyvsp[(3) - (3)].rowST)->name, "...."));	
		quadArray.push_back(quad(GOTOV,"..."));	
	}
    break;

  case 39:
/* Line 1787 of yacc.c  */
#line 419 "12CS30001_ass3.y"
    {
		(yyval.rowST) = (yyvsp[(1) - (1)].rowST);
	}
    break;

  case 40:
/* Line 1787 of yacc.c  */
#line 423 "12CS30001_ass3.y"
    {
		(yyval.rowST) = symtab->symbolTable::gentemp(*symtab);
		(yyval.rowST)->update((yyvsp[(1) - (3)].rowST));
		(yyval.rowST)->trueList = makeList(quadArray.size());
		(yyval.rowST)->falseList = makeList(quadArray.size()+1);
		quadArray.push_back(quad(EQOP, (yyvsp[(1) - (3)].rowST)->name, (yyvsp[(3) - (3)].rowST)->name, "...."));	
		quadArray.push_back(quad(GOTOV,"..."));	
	}
    break;

  case 41:
/* Line 1787 of yacc.c  */
#line 432 "12CS30001_ass3.y"
    {
		(yyval.rowST) = symtab->symbolTable::gentemp(*symtab);
		(yyval.rowST)->update((yyvsp[(1) - (3)].rowST));
		(yyval.rowST)->trueList = makeList(quadArray.size());
		(yyval.rowST)->falseList = makeList(quadArray.size()+1);
		quadArray.push_back(quad(NEQOP, (yyvsp[(1) - (3)].rowST)->name, (yyvsp[(3) - (3)].rowST)->name, "...."));	
		quadArray.push_back(quad(GOTOV,"..."));	
	}
    break;

  case 42:
/* Line 1787 of yacc.c  */
#line 445 "12CS30001_ass3.y"
    {
		(yyval.rowST) = (yyvsp[(1) - (1)].rowST);
	}
    break;

  case 43:
/* Line 1787 of yacc.c  */
#line 449 "12CS30001_ass3.y"
    {
		(yyval.rowST) = symtab->symbolTable::gentemp(*symtab);
		(yyval.rowST)->update((yyvsp[(1) - (3)].rowST));
		quadArray.push_back(quad('&', (yyvsp[(1) - (3)].rowST)->name, (yyvsp[(3) - (3)].rowST)->name, (yyval.rowST)->name));	
	}
    break;

  case 44:
/* Line 1787 of yacc.c  */
#line 458 "12CS30001_ass3.y"
    {
		(yyval.rowST) = (yyvsp[(1) - (1)].rowST);
	}
    break;

  case 45:
/* Line 1787 of yacc.c  */
#line 462 "12CS30001_ass3.y"
    {
		(yyval.rowST) = symtab->symbolTable::gentemp(*symtab);
		(yyval.rowST)->update((yyvsp[(1) - (3)].rowST));
		quadArray.push_back(quad('^', (yyvsp[(1) - (3)].rowST)->name, (yyvsp[(3) - (3)].rowST)->name, (yyval.rowST)->name));
	}
    break;

  case 46:
/* Line 1787 of yacc.c  */
#line 471 "12CS30001_ass3.y"
    {
		(yyval.rowST) = (yyvsp[(1) - (1)].rowST);
	}
    break;

  case 47:
/* Line 1787 of yacc.c  */
#line 475 "12CS30001_ass3.y"
    {
		(yyval.rowST) = symtab->symbolTable::gentemp(*symtab);
		(yyval.rowST)->update((yyvsp[(1) - (3)].rowST));
		quadArray.push_back(quad('|', (yyvsp[(1) - (3)].rowST)->name, (yyvsp[(3) - (3)].rowST)->name, (yyval.rowST)->name));
	}
    break;

  case 48:
/* Line 1787 of yacc.c  */
#line 484 "12CS30001_ass3.y"
    {
		(yyval.rowST) = (yyvsp[(1) - (1)].rowST);
	}
    break;

  case 49:
/* Line 1787 of yacc.c  */
#line 488 "12CS30001_ass3.y"
    {
		backpatch((yyvsp[(1) - (4)].rowST)->trueList,(yyvsp[(3) - (4)].intVal)+2);
		(yyval.rowST)->trueList = (yyvsp[(4) - (4)].rowST)->trueList;
		(yyval.rowST)->falseList = merge((yyvsp[(1) - (4)].rowST)->falseList,(yyvsp[(4) - (4)].rowST)->falseList);		
	}
    break;

  case 50:
/* Line 1787 of yacc.c  */
#line 497 "12CS30001_ass3.y"
    {
		(yyval.rowST) = (yyvsp[(1) - (1)].rowST);
	}
    break;

  case 51:
/* Line 1787 of yacc.c  */
#line 501 "12CS30001_ass3.y"
    {
		backpatch((yyvsp[(1) - (4)].rowST)->falseList,(yyvsp[(3) - (4)].intVal)+2);
		(yyval.rowST)->trueList = (yyvsp[(4) - (4)].rowST)->falseList;
		(yyval.rowST)->falseList = merge((yyvsp[(1) - (4)].rowST)->trueList,(yyvsp[(4) - (4)].rowST)->trueList);	
	}
    break;

  case 54:
/* Line 1787 of yacc.c  */
#line 517 "12CS30001_ass3.y"
    {
		(yyval.rowST) = (yyvsp[(1) - (1)].rowST);
	}
    break;

  case 55:
/* Line 1787 of yacc.c  */
#line 521 "12CS30001_ass3.y"
    {
		cout<<"in ass expr"<<'\n';
		cout<<"ass1 exp = "<<(yyval.rowST)->name<<'\n';
		string str1 = (yyval.rowST)->name;
		cout<<"unr exp = "<<(yyvsp[(1) - (3)].rowST)->name<<'\n';
		cout<<" ass expr = "<<(yyvsp[(3) - (3)].rowST)->name<<'\n';
		string str2 = (yyvsp[(3) - (3)].rowST)->name;
		quadArray.push_back(quad(str2,str1));
		(yyval.rowST)=(yyvsp[(1) - (3)].rowST);
	}
    break;

  case 67:
/* Line 1787 of yacc.c  */
#line 552 "12CS30001_ass3.y"
    {
		(yyval.rowST) = (yyvsp[(1) - (1)].rowST);
	}
    break;

  case 70:
/* Line 1787 of yacc.c  */
#line 570 "12CS30001_ass3.y"
    {
		if(typeSpecifier == functionType)
			symtab = global;
	}
    break;

  case 71:
/* Line 1787 of yacc.c  */
#line 578 "12CS30001_ass3.y"
    {
		(yyval.intVal) = (yyvsp[(1) - (1)].intVal);
	}
    break;

  case 75:
/* Line 1787 of yacc.c  */
#line 593 "12CS30001_ass3.y"
    {
		
		(yyval.rowST)->update((yyval.rowST)->rowType,(yyval.rowST)->pushType(typeSpecifier, -1),offset);
		(yyval.rowST) = (yyvsp[(1) - (1)].rowST);
		offset = offset + (yyval.rowST)->pushType(typeSpecifier, -1);

	}
    break;

  case 76:
/* Line 1787 of yacc.c  */
#line 601 "12CS30001_ass3.y"
    {
		(yyval.rowST)->update((yyval.rowST)->rowType,(yyval.rowST)->pushType(typeSpecifier, -1),offset);
		quadArray.push_back(quad((yyvsp[(1) - (3)].rowST)->name,(yyvsp[(3) - (3)].rowST)->name));
		(yyval.rowST) = (yyvsp[(1) - (3)].rowST);
	}
    break;

  case 77:
/* Line 1787 of yacc.c  */
#line 611 "12CS30001_ass3.y"
    { typeSpecifier = voidType;  }
    break;

  case 78:
/* Line 1787 of yacc.c  */
#line 612 "12CS30001_ass3.y"
    { typeSpecifier = charType;  }
    break;

  case 79:
/* Line 1787 of yacc.c  */
#line 613 "12CS30001_ass3.y"
    { typeSpecifier = intType;  }
    break;

  case 80:
/* Line 1787 of yacc.c  */
#line 614 "12CS30001_ass3.y"
    { typeSpecifier = doubleType;  }
    break;

  case 83:
/* Line 1787 of yacc.c  */
#line 629 "12CS30001_ass3.y"
    {
		(yyval.rowST) = (yyvsp[(2) - (2)].rowST);
		(yyval.rowST)->pushType(pointerType, -1);
	}
    break;

  case 84:
/* Line 1787 of yacc.c  */
#line 634 "12CS30001_ass3.y"
    {
		(yyval.rowST) = (yyvsp[(1) - (1)].rowST);
	}
    break;

  case 85:
/* Line 1787 of yacc.c  */
#line 642 "12CS30001_ass3.y"
    {
		(yyval.rowST) = (yyvsp[(1) - (1)].rowST);
	}
    break;

  case 86:
/* Line 1787 of yacc.c  */
#line 646 "12CS30001_ass3.y"
    {
		(yyval.rowST) = (yyvsp[(2) - (3)].rowST);
	}
    break;

  case 87:
/* Line 1787 of yacc.c  */
#line 651 "12CS30001_ass3.y"
    {
		(yyval.rowST) = (yyvsp[(1) - (4)].rowST);
		//printf("in array typ");
		int tmp = (yyvsp[(1) - (4)].rowST)->pushType(typeSpecifier,(yyvsp[(3) - (4)].rowST)->val.i);
	}
    break;

  case 88:
/* Line 1787 of yacc.c  */
#line 657 "12CS30001_ass3.y"
    {
		(yyval.rowST) = (yyvsp[(1) - (3)].rowST);
	}
    break;

  case 89:
/* Line 1787 of yacc.c  */
#line 662 "12CS30001_ass3.y"
    {
		row* temp = (yyvsp[(3) - (4)].tableType)->symlook(*(yyvsp[(3) - (4)].tableType), "retValue");
		temp->update(temp->rowType,temp->pushType(typeSpecifier,-1),offset);
		typeSpecifier = functionType;
		global->update((yyvsp[(1) - (4)].rowST),(yyvsp[(3) - (4)].tableType));
		(yyval.rowST) = (yyvsp[(1) - (4)].rowST);
		symtab = (yyvsp[(3) - (4)].tableType);
	}
    break;

  case 92:
/* Line 1787 of yacc.c  */
#line 677 "12CS30001_ass3.y"
    {
		int tmp = (yyval.rowST)->pushType(pointerType,-1);
	}
    break;

  case 93:
/* Line 1787 of yacc.c  */
#line 681 "12CS30001_ass3.y"
    {
		(yyval.rowST) = (yyvsp[(2) - (2)].rowST);
		int tmp = (yyval.rowST)->pushType(pointerType,-1);
	}
    break;

  case 94:
/* Line 1787 of yacc.c  */
#line 691 "12CS30001_ass3.y"
    {
		(yyval.tableType) = new symbolTable();
	}
    break;

  case 95:
/* Line 1787 of yacc.c  */
#line 695 "12CS30001_ass3.y"
    {
		(yyval.tableType) = (yyvsp[(1) - (1)].tableType);
	}
    break;

  case 96:
/* Line 1787 of yacc.c  */
#line 703 "12CS30001_ass3.y"
    {
		(yyval.tableType) = new symbolTable();
		row* tmp = symtab->symlook(*(yyval.tableType),yytext);
		tmp->update(tmp->rowType,tmp->pushType(typeSpecifier,-1),offset);
	}
    break;

  case 97:
/* Line 1787 of yacc.c  */
#line 709 "12CS30001_ass3.y"
    {
		(yyval.tableType) = (yyvsp[(1) - (4)].tableType);
		row* tmp = symtab->symlook(*(yyval.tableType),yytext);
		tmp->update(tmp->rowType,tmp->pushType(typeSpecifier,-1),offset);
	}
    break;

  case 98:
/* Line 1787 of yacc.c  */
#line 720 "12CS30001_ass3.y"
    {
		(yyval.rowVector) = new vector<row*>();
		(yyval.rowVector)->push_back((yyvsp[(1) - (1)].rowST));
	}
    break;

  case 99:
/* Line 1787 of yacc.c  */
#line 725 "12CS30001_ass3.y"
    {
		(yyval.rowVector) = (yyvsp[(1) - (3)].rowVector);
		(yyval.rowVector)->push_back((yyvsp[(3) - (3)].rowST));
	}
    break;

  case 101:
/* Line 1787 of yacc.c  */
#line 753 "12CS30001_ass3.y"
    {
		(yyval.rowST) = symtab->symlook(*symtab,yytext);
		(yyval.rowST)->update((yyval.rowST)->rowType,(yyval.rowST)->pushType(typeSpecifier,-1),offset);

	}
    break;

  case 102:
/* Line 1787 of yacc.c  */
#line 763 "12CS30001_ass3.y"
    {
		(yyval.rowST)=(yyvsp[(1) - (1)].rowST);
	}
    break;

  case 109:
/* Line 1787 of yacc.c  */
#line 781 "12CS30001_ass3.y"
    {
		(yyval.nextList) = (yyvsp[(2) - (3)].nextList);

	}
    break;

  case 110:
/* Line 1787 of yacc.c  */
#line 789 "12CS30001_ass3.y"
    {
		backpatch((yyvsp[(1) - (1)].nextList),quadArray.size());
		(yyval.nextList) = (yyvsp[(1) - (1)].nextList);

	}
    break;

  case 111:
/* Line 1787 of yacc.c  */
#line 795 "12CS30001_ass3.y"
    {
		(yyval.nextList) = new vector<int>();
	}
    break;

  case 112:
/* Line 1787 of yacc.c  */
#line 802 "12CS30001_ass3.y"
    {
		(yyval.nextList) = (yyvsp[(1) - (1)].nextList);
	}
    break;

  case 113:
/* Line 1787 of yacc.c  */
#line 806 "12CS30001_ass3.y"
    {
		backpatch((yyvsp[(1) - (3)].nextList),(yyvsp[(2) - (3)].intVal));
		(yyval.nextList) = (yyvsp[(3) - (3)].nextList);
	}
    break;

  case 114:
/* Line 1787 of yacc.c  */
#line 814 "12CS30001_ass3.y"
    {
		(yyval.nextList) = new vector<int>();
	}
    break;

  case 115:
/* Line 1787 of yacc.c  */
#line 818 "12CS30001_ass3.y"
    {
		(yyval.nextList) = (yyvsp[(1) - (1)].nextList);
	}
    break;

  case 117:
/* Line 1787 of yacc.c  */
#line 826 "12CS30001_ass3.y"
    {
		(yyval.nextList) = new vector<int>();
	}
    break;

  case 118:
/* Line 1787 of yacc.c  */
#line 832 "12CS30001_ass3.y"
    {}
    break;

  case 119:
/* Line 1787 of yacc.c  */
#line 833 "12CS30001_ass3.y"
    {}
    break;

  case 120:
/* Line 1787 of yacc.c  */
#line 838 "12CS30001_ass3.y"
    {
		cout<<"in if else"<<'\n';
		backpatch((yyvsp[(3) - (10)].rowST)->trueList,(yyvsp[(5) - (10)].intVal));
		backpatch((yyvsp[(3) - (10)].rowST)->falseList,(yyvsp[(9) - (10)].intVal));
		vector<int>* tempList = merge((yyvsp[(6) - (10)].nextList), (yyvsp[(7) - (10)].rowST)->nextList);
		(yyval.nextList) = merge(tempList, (yyvsp[(10) - (10)].nextList));
	}
    break;

  case 121:
/* Line 1787 of yacc.c  */
#line 846 "12CS30001_ass3.y"
    {
		printf("In if \n");
		backpatch((yyvsp[(3) - (6)].rowST)->trueList,(yyvsp[(5) - (6)].intVal));	
		(yyval.nextList) = merge((yyvsp[(3) - (6)].rowST)->falseList,(yyvsp[(6) - (6)].nextList));
	}
    break;

  case 123:
/* Line 1787 of yacc.c  */
#line 856 "12CS30001_ass3.y"
    {	
		backpatch((yyvsp[(7) - (7)].nextList),(yyvsp[(2) - (7)].intVal));
		backpatch((yyvsp[(4) - (7)].rowST)->trueList,(yyvsp[(6) - (7)].intVal));
		(yyval.nextList) = (yyvsp[(4) - (7)].rowST)->falseList;
		stringstream ss;
		ss << (yyvsp[(2) - (7)].intVal);
		string str = ss.str();
		quadArray.push_back(quad(GOTOV,str));
	}
    break;

  case 124:
/* Line 1787 of yacc.c  */
#line 866 "12CS30001_ass3.y"
    {
		backpatch((yyvsp[(7) - (9)].rowST)->trueList,(yyvsp[(2) - (9)].intVal));
		backpatch((yyvsp[(3) - (9)].nextList),(yyvsp[(4) - (9)].intVal));
		(yyval.nextList) = (yyvsp[(7) - (9)].rowST)->falseList;
	}
    break;

  case 126:
/* Line 1787 of yacc.c  */
#line 873 "12CS30001_ass3.y"
    {
		backpatch((yyvsp[(6) - (13)].rowST)->trueList, (yyvsp[(12) - (13)].intVal));
		backpatch((yyvsp[(10) - (13)].rowST)->nextList,(yyvsp[(5) - (13)].intVal));
		backpatch((yyvsp[(13) - (13)].nextList),(yyvsp[(8) - (13)].intVal));
		stringstream ss;
		ss << (yyvsp[(8) - (13)].intVal);
		string str = ss.str();
		quadArray.push_back(quad(GOTOV,str));
		(yyval.nextList) = (yyvsp[(6) - (13)].rowST)->falseList;
	}
    break;

  case 127:
/* Line 1787 of yacc.c  */
#line 887 "12CS30001_ass3.y"
    {
		quadArray.push_back(quad(RETURNV,"..."));
	}
    break;

  case 128:
/* Line 1787 of yacc.c  */
#line 891 "12CS30001_ass3.y"
    {
		quadArray.push_back(quad(RETURNV,(yyvsp[(2) - (3)].rowST)->name));
	}
    break;


/* Line 1787 of yacc.c  */
#line 2650 "y.tab.c"
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
#line 921 "12CS30001_ass3.y"



