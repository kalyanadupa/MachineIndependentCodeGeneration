%{

	#include <bits/stdc++.h>
	#include "symbolTable.h"
	#include "quad.h"
	#include "y.tab.h"
	
	int charCount = 0, wordCount = 0, lineCount = 0;
	char words[1000];
	int count=0;
	extern symbolTable* symtab;
%}


WHITE_SPACE [ \n\t]

DIGIT [0-9]

IDENTIFIER_NON_DIGIT [_a-zA-Z]

IDENTIFIER {IDENTIFIER_NON_DIGIT}({IDENTIFIER_NON_DIGIT}?{DIGIT}?)*

NON_ZERO_DIGIT [1-9]

DIGIT_SEQUENCE {DIGIT}+

SIGN [\+-]

EXPONENT_PART [eE]{SIGN}?{DIGIT}+

ESCAPE_SEQUENCE \\[\'\"?\\abfnrtv]

C_CHAR [^\'\\\n]|{ESCAPE_SEQUENCE}

C_CHAR_SEQUENCE {C_CHAR}+

FRACTIONAL_CONSTANT {DIGIT_SEQUENCE}?\.{DIGIT_SEQUENCE}|{DIGIT_SEQUENCE}\.

FLOATING_CONSTANT {FRACTIONAL_CONSTANT}{EXPONENT_PART}?|{DIGIT_SEQUENCE}{EXPONENT_PART}

INTEGER_CONSTANT {NON_ZERO_DIGIT}{DIGIT}*|0

ENUMERATION_CONSTANT {IDENTIFIER}

CHARACTER_CONSTANT \'{C_CHAR_SEQUENCE}\'

CONSTANT {INTEGER_CONSTANT}|{FLOATING_CONSTANT}|{ENUMERATION_CONSTANT}|{CHARACTER_CONSTANT}

S_CHAR [^\"\\\n]|{ESCAPE_SEQUENCE}

S_CHAR_SEQUENCE {S_CHAR}+

STRING_LITERAL \"{S_CHAR_SEQUENCE}?\"



%x COMMENT 
%%
"\n" {lineCount++;}
"auto"			{  return(AUTO); }
"break"			{  return(BREAK); }
"case"			{  return(CASE); }
"char"			{  return(CHAR); }
"continue"		{  return(CONTINUE); }
"default"		{  return(DEFAULT); }
"do"			{  return(DO); }
"double"		{  return(DOUBLE); }
"else"			{  return(ELSE); }
"enum"			{  return(ENUM); }
"extern"		{  return(EXTERN); }
"float"			{  return(FLOAT); }
"for"			{  return(FOR); }
"goto"			{  return(GOTO); }
"if"			{  return(IF); }
"inline"		{  return(INLINE); }
"int"			{  return(INT); }
"long"			{  return(LONG); }
"register"		{  return(REGISTER); }
"restrict"		{  return(RESTRICT); }
"return"		{  return(RETURN); }
"short"			{  return(SHORT); }
"signed"		{  return(SIGNED); }
"sizeof"		{  return(SIZEOF); }
"static"		{  return(STATIC); }
"struct"		{  return(STRUCT); }
"switch"		{  return(SWITCH); }
"typedef"		{  return(TYPEDEF); }
"union"			{  return(UNION); }
"unsigned"		{  return(UNSIGNED); }
"void"			{  return(VOID); }
"volatile"		{  return(VOLATILE); }
"while"			{  return(WHILE); }
"_Bool"	 		{  return(BOOL); }
"_Complex" 		{  return(COMPLEX); }
"_Imaginary"	{  return(IMAGINARY); }


{IDENTIFIER} {return IDENTIFIER;}
{INTEGER_CONSTANT} {return INTEGER_CONSTANT;}
{FLOATING_CONSTANT} {return FLOATING_CONSTANT;}
{CHARACTER_CONSTANT} {return CHARACTER_CONSTANT;}

{STRING_LITERAL} {return STRING_LITERAL;}

"[" return yytext[0];
"++" return INC_OP;
"/" return yytext[0];
"?" return yytext[0];
"=" return yytext[0];
"," return yytext[0];
"]" return yytext[0];
"(" return yytext[0];
"{" return yytext[0];
"}" return yytext[0];
"." return yytext[0];
"->" return PTR_OP;
"*" return yytext[0];
"+" return yytext[0];
"-" return yytext[0];
"~" return yytext[0];
"!" return yytext[0];
"%" return yytext[0];
"<<" return LEFT_OP;
">>" return RIGHT_OP;
"<" return yytext[0];
">" return yytext[0];
"<=" return LE_OP;
">=" return GE_OP;
":" return yytext[0];
";" return yytext[0];
"..." return yytext[0];
"*=" return MUL_ASSIGN;
"/=" return DIV_ASSIGN;
"%=" return MOD_ASSIGN;
"+=" return ADD_ASSIGN;
"-=" return SUB_ASSIGN;
"<<=" return LEFT_ASSIGN;
"#" return yytext[0];
"--" return DEC_OP;
")" return yytext[0];
"&" return yytext[0];
"==" return EQ_OP;
">>=" return RIGHT_ASSIGN;
"!=" return NE_OP;
"&=" return AND_ASSIGN;
"^" return yytext[0];
"|" return yytext[0];
"^=" return XOR_ASSIGN;
"&&" return AND_OP;
"||" return OR_OP;
"|=" return OR_ASSIGN;







"$" return 0;
. 


"/*" 		{BEGIN(COMMENT);}
<COMMENT>"*/" {BEGIN(INITIAL);}
<COMMENT>([^*]|\n)+|.
<COMMENT><<EOF>> {
	printf("%d: Unterminated comment\n",yylineno);
	return 0;
}


\/\/.* {}
\n printf("\n");lineCount++;

%%