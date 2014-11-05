%{
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
	symbolTable* symtab = new symbolTable();
	symbolTable* global = symtab;
	std::vector<quad> quadArray;
%}

%union{
	int intVal;
	row* rowST;
	vector<row*> *rowVector;
	typeT typ;
}



%token AUTO
%token BREAK
%token CASE
%token CHAR
%token CONTINUE
%token DEFAULT
%token DO
%token DOUBLE
%token ELSE
%token ENUM
%token EXTERN
%token FLOAT
%token FOR
%token GOTO
%token IF
%token INLINE
%token INT
%token LONG
%token REGISTER
%token RESTRICT
%token RETURN
%token SHORT
%token SIGNED
%token SIZEOF
%token STATIC
%token STRUCT
%token SWITCH
%token TYPEDEF
%token UNION
%token UNSIGNED
%token VOID
%token VOLATILE
%token WHILE
%token BOOL
%token COMPLEX
%token IMAGINARY

%token IDENTIFIER
%token INTEGER_CONSTANT
%token FLOATING_CONSTANT
%token CHARACTER_CONSTANT
%token STRING_LITERAL

%token INC_OP
%token PTR_OP
%token LEFT_OP
%token RIGHT_OP
%token LE_OP
%token GE_OP
%token MUL_ASSIGN
%token DIV_ASSIGN
%token MOD_ASSIGN 
%token ADD_ASSIGN
%token SUB_ASSIGN
%token LEFT_ASSIGN
%token DEC_OP
%token EQ_OP
%token RIGHT_ASSIGN
%token NE_OP
%token AND_ASSIGN
%token XOR_ASSIGN
%token AND_OP
%token OR_OP
%token OR_ASSIGN

%token ENUMERATION_CONSTANT

%start translation_unit


%type <intVal> declaration_specifiers type_specifier 
%type <rowST> id_var
%type <rowST> CONSTANT
%type <rowST> STRING_LITERAL 
%type <rowVector> identifier_list
%type <rowVector>  parameter_list
%type <rowST> initializer
%type <rowST> parameter_declaration  
%type <rowST> postfix_expression
%type <rowST> init_declarator
%type <rowST> direct_declarator
%type <rowST> primary_expression
%type <rowST> declarator
%type <rowST> assignment_expression
%type <rowST> pointer
%type <rowST> unary_expression
%type <rowST>  cast_expression
%type <rowST>  multiplicative_expression
%type <rowST>  additive_expression
%type <rowST>  shift_expression
%type <rowST>  expression

%%
primary_expression
	: id_var	
	{
		$$ = $1;
		//$$ = symtab->symbolTable::symlook(*symtab,$$->name);
		$$->update($$->rowType,$$->pushType(typeSpecifier,-1),offset);
		//quadArray.push_back(quad($$->name,$$->name));
		printf("here with %s \n",$$->name.c_str());

	}
	| CONSTANT
	| STRING_LITERAL
	| '(' expression ')'
	;


CONSTANT
	: INTEGER_CONSTANT
	{
		printf("integr constant seen %s\n",yytext);
		$$ = symtab->symbolTable::gentemp(*symtab);	
		$$->update($$->rowType,$$->pushType(intType, -1),offset);
		offset = offset +4;
		$$->val.i=atoi(yytext);
		quadArray.push_back(quad(yytext,$$->name));

	}
	| CHARACTER_CONSTANT
	{
		$$ = symtab->symbolTable::gentemp(*symtab);
		$$->update($$->rowType,$$->pushType(intType, -1),offset);
		offset = offset +1;
		char *temp=strdup(yytext);
		temp++;
		temp[strlen(temp)-1]='\0';
		string str(temp);
		quadArray.push_back(quad(str,$$->name));
	
	}
	| FLOATING_CONSTANT
	{
		printf("float constant seen %s\n",yytext);
		$$ = symtab->symbolTable::gentemp(*symtab);
		$$->update($$->rowType,$$->pushType(doubleType, -1),offset);
		offset = offset +8;
		$$->val.d=atof(yytext);
		quadArray.push_back(quad(yytext,$$->name));		
	}



postfix_expression
	: primary_expression
	{
		$$ = $1;	
	}
	| postfix_expression '[' expression ']'
	| postfix_expression '(' ')'
	| postfix_expression '(' argument_expression_list ')'
	| postfix_expression '.' id_var
	| postfix_expression PTR_OP id_var
	| postfix_expression INC_OP
	{
		$$ = symtab->symbolTable::gentemp(*symtab);
		$$->update($1);
		quadArray.push_back(quad($$->name,$1->name));
		string x("1");
		quadArray.push_back(quad('+',$1->name,x,$1->name));
	}
	| postfix_expression DEC_OP
	{
		$$ = symtab->symbolTable::gentemp(*symtab);
		$$->update($1);
		quadArray.push_back(quad($$->name,$1->name));
		string x("1");
		quadArray.push_back(quad('-',$1->name,x,$1->name));
	}
	;

argument_expression_list
	: assignment_expression
	| argument_expression_list ',' assignment_expression
	;

unary_expression			
	: postfix_expression
	{
		$$ = $1;	
	}
	| INC_OP unary_expression
	{	
		string x("1");
		quadArray.push_back(quad('+',$2->name,x,$2->name));	
	}
	| DEC_OP unary_expression
	{	
		string x("1");
		quadArray.push_back(quad('-',$2->name,x,$2->name));	
	}
	| unary_operator cast_expression
	{
		$$ = symtab->symbolTable::gentemp(*symtab);
		$$->update($2);
		//quadArray.push_back(quad($1->name,$$->name,$2->name));
	}
	;

unary_operator
	: '&'
	| '*'
	| '+'
	| '-'
	| '~'
	| '!'
	;

cast_expression
	: unary_expression
	{
		$$ = $1;	
	}
	| '(' type_name ')' cast_expression
	;



multiplicative_expression
	: cast_expression
	{
		$$ = $1;	
	}
	| multiplicative_expression '*' cast_expression
	{
		$$ = symtab->symbolTable::gentemp(*symtab);
		$$->update($1);
		quadArray.push_back(quad('*',$1->name,$3->name,$$->name));	
	}
	| multiplicative_expression '/' cast_expression
	{
		$$ = symtab->symbolTable::gentemp(*symtab);
		$$->update($1);
		quadArray.push_back(quad('/',$1->name,$3->name,$$->name));	
	}
	| multiplicative_expression '%' cast_expression
	{
		$$ = symtab->symbolTable::gentemp(*symtab);
		$$->update($1);
		quadArray.push_back(quad('%',$1->name,$3->name,$$->name));	
	}
	;

additive_expression
	: multiplicative_expression{
		$$ = $1;	
	}
	| additive_expression '+' multiplicative_expression
	{
		$$ = symtab->symbolTable::gentemp(*symtab);
		$$->update($1);
		quadArray.push_back(quad('+',$1->name,$3->name,$$->name));		
	}
	| additive_expression '-' multiplicative_expression
	{
		$$ = symtab->symbolTable::gentemp(*symtab);
		$$->update($1);
		quadArray.push_back(quad('-',$1->name,$3->name,$$->name));	
	}
	;

shift_expression
	: additive_expression
	| shift_expression LEFT_OP additive_expression
	| shift_expression RIGHT_OP additive_expression
	;

relational_expression
	: shift_expression
	| relational_expression '<' shift_expression
	{

	}
	| relational_expression '>' shift_expression
	{

	}
	| relational_expression LE_OP shift_expression
	{

	}
	| relational_expression GE_OP shift_expression
	{

	}
	;


equality_expression
	: relational_expression
	| equality_expression EQ_OP relational_expression
	| equality_expression NE_OP relational_expression
	;

and_expression
	: equality_expression
	| and_expression '&' equality_expression
	;

exclusive_or_expression
	: and_expression
	| exclusive_or_expression '^' and_expression
	;

inclusive_or_expression
	: exclusive_or_expression
	| inclusive_or_expression '|' exclusive_or_expression
	;

logical_and_expression
	: inclusive_or_expression
	| logical_and_expression AND_OP inclusive_or_expression
	;

logical_or_expression
	: logical_and_expression
	| logical_or_expression OR_OP logical_and_expression
	;

conditional_expression
	: logical_or_expression
	| logical_or_expression '?' expression ':' conditional_expression
	;

assignment_expression
	: conditional_expression
	| unary_expression assignment_operator assignment_expression
	{
		quadArray.push_back(quad($3->name,$1->name));
		$$=$1;
	}
	;

assignment_operator
	: '='
	| MUL_ASSIGN
	| DIV_ASSIGN
	| MOD_ASSIGN
	| ADD_ASSIGN
	| SUB_ASSIGN
	| LEFT_ASSIGN
	| RIGHT_ASSIGN
	| AND_ASSIGN
	| XOR_ASSIGN
	| OR_ASSIGN
	;

expression
	: assignment_expression
	{
		$$ = $1;
	}
	| expression ',' assignment_expression
	;

constant_expression
	: conditional_expression
	;

declaration
	: declaration_specifiers ';'
	| declaration_specifiers init_declarator_list ';'
	;

declaration_specifiers
	: type_specifier{
		$$ = $1;
	}
	| type_specifier declaration_specifiers
	;

init_declarator_list
	: init_declarator
	| init_declarator_list ',' init_declarator
	;

init_declarator
	: declarator
	{
		$$ = $1;
		$$->update($$->rowType,$$->pushType(typeSpecifier, -1),offset);
		offset = offset + $$->pushType(typeSpecifier, -1);

	}
	| declarator '=' initializer
	{
		$1->update($3);
		quadArray.push_back(quad($$->name,$$->name));
	}
	;



type_specifier
	: VOID{ typeSpecifier = voidType;  }
	| CHAR{ typeSpecifier = charType;  }
	| INT{ typeSpecifier = intType;  }
	| DOUBLE{ typeSpecifier = doubleType;  }
	;

specifier_qualifier_list
	: type_specifier specifier_qualifier_list
	| type_specifier
	;





declarator
	: pointer direct_declarator
	{
		$$ = $2;
		$$->pushType(pointerType, -1);
	}
	| direct_declarator
	{
		$$ = $1;
	}
	;

direct_declarator
	: id_var
	{
		$$ = $1;
	}
	| '(' declarator ')'
	{
		$$ = $2;
	}

	| direct_declarator '[' assignment_expression ']'
	{
		$$ = $1;
		//printf("in array typ");
		int tmp = $1->pushType(typeSpecifier,$3->val.i);
	}
	| direct_declarator '[' ']'
	{
		$$ = $1;
	}

	| direct_declarator '(' parameter_type_list ')'
	| direct_declarator '(' identifier_list ')'
	| direct_declarator '(' ')'
	;

pointer
	: '*'
	{

		int tmp = $$->pushType(pointerType,-1);
	}
	| '*' pointer
	{
		$$ = $2;
		int tmp = $$->pushType(pointerType,-1);
	}
	;



parameter_type_list
	: parameter_list
	| parameter_list ','
	;

parameter_list
	: parameter_declaration
	| parameter_list ',' parameter_declaration
	
	;

parameter_declaration
	: declaration_specifiers declarator{
		$2->pushType(typeSpecifier,-1);
		$$ = $2;
	}
	| declaration_specifiers
	;

identifier_list
	: id_var
	{
		$$ = new vector<row*>();
		$$->push_back($1);
	}
	| identifier_list ',' id_var
	{
		$$ = $1;
		$$->push_back($3);
	}
	;

type_name
	: specifier_qualifier_list
	;


designation
	: designator_list '='		

designator_list
	: designator 
	| designator_list designator

designator
	: '[' constant_expression ']'
	| '.' id_var 

id_var
	: IDENTIFIER
	{
		$$ = symtab->symlook(*symtab,yytext);
		$$->update($$->rowType,$$->pushType(typeSpecifier,-1),offset);

	}
	;

initializer
	: assignment_expression
	{
		$$=$1;
	}
	;


statement
	: labeled_statement
	| compound_statement
	| expression_statement
	| selection_statement
	| iteration_statement
	| jump_statement
	;

labeled_statement
	: id_var ':' statement
	| CASE constant_expression ':' statement
	| DEFAULT ':' statement
	;

compound_statement
	: '{' '}'
	| '{' block_item_list '}'
	;

block_item_list
	: block_item
	| block_item_list block_item

block_item	
	: declaration
	| statement

expression_statement
	: ';'
	| expression ';'

	;

selection_statement
	: IF '(' expression ')' statement
	{

	}
	| IF '(' expression ')' statement ELSE statement
	| SWITCH '(' expression ')' statement
	;

iteration_statement
	: WHILE '(' expression ')' statement
	| DO statement WHILE '(' expression ')' ';'
	| FOR '(' expression_statement expression_statement ')' statement
	| FOR '(' expression_statement expression_statement expression ')' statement
	;

jump_statement
	: GOTO id_var ';'
	| CONTINUE ';'
	| BREAK ';'
	| RETURN ';'
	| RETURN expression ';'
	;

translation_unit
	: external_declaration
	| translation_unit external_declaration
	;

external_declaration
	: function_definition
	| declaration
	;

function_definition
	: declaration_specifiers declarator declaration_list compound_statement
	| declaration_specifiers declarator compound_statement
	| declarator declaration_list compound_statement
	| declarator compound_statement
	;

declaration_list
	: declaration
	| declaration_list declaration
	;	

%%

