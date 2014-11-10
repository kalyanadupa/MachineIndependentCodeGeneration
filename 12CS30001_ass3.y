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
	symbolTable* global = new symbolTable();
	symbolTable* symtab = global;
	extern std::vector<quad> quadArray;
	

%}

%union{
	int intVal;
	char charVal;
	row* rowST;
	vector<row*> *rowVector;
	typeT typ;
	vector<int>* nextList;
	symbolTable* tableType;
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
%type <rowVector> identifier_list argument_expression_list
%type <rowST> initializer constant_expression
%type <rowST> postfix_expression
%type <rowST> init_declarator
%type <rowST> direct_declarator
%type <rowST> primary_expression
%type <rowST> declarator
%type <rowST> assignment_expression conditional_expression expression_opt
%type <rowST>  and_expression exclusive_or_expression inclusive_or_expression logical_and_expression logical_or_expression 
%type <rowST> pointer
%type <rowST> unary_expression
%type <rowST>  cast_expression
%type <rowST>  multiplicative_expression
%type <rowST>  additive_expression
%type <rowST>  shift_expression equality_expression
%type<tableType> parameter_type_list parameter_list
%type <rowST>  expression  N1
%type <nextList> statement selection_statement 
%type <nextList> expression_statement iteration_statement 
%type <nextList> compound_statement
%type <nextList> block_item_list block_item_list_opt block_item
%type <rowST>  relational_expression 
%type <intVal> M1
%type <charVal> unary_operator

%nonassoc HIGH

%%

M1
	:
	{
		$$ = quadArray.size();
	}	

N1
	:
	{
		$$ = symtab->symbolTable::gentemp(*symtab);	
		$$->nextList = makeList(quadArray.size());
		string x("null");
		quadArray.push_back(quad(GOTOV,"..."));
	}	


primary_expression
	: id_var	
	{
		$$ = $1;
		//$$ = symtab->symbolTable::symlook(*symtab,$$->name);
		//$$->update($$->rowType,$$->pushType(typeSpecifier,-1),offset);
		//quadArray.push_back(quad($$->name,$$->name));
		printf("here with %s \n",$$->name.c_str());

	}
	| CONSTANT
	{
		$$ = $1;
	}
	| STRING_LITERAL
	{

	}
	| '(' expression ')'
	{
		$$ = $2;
	}
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
		$$->update($$->rowType,$$->pushType(charType, -1),offset);
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
	;




postfix_expression
	: primary_expression
	{
		$$ = $1;	
	}
	| postfix_expression '[' expression ']'
	| postfix_expression '(' ')'
	{
		global->printTable();
		symbolTable *temp = global->symlook(*global,$1->name)->nestedTable;
		$$ = symtab->symbolTable::gentemp(*symtab);
		$$->update($1);
		quadArray.push_back(quad(CALL,$1->name));
	}
	| postfix_expression '(' argument_expression_list ')'
	{
		symbolTable *temp = global->symlook(*global,$1->name)->nestedTable;
		for(int i = 0;i < $3->size();i++)
			quadArray.push_back(quad(PARAM,(*$3)[i]->name));
		$$ = symtab->symbolTable::gentemp(*symtab);
		$$->update($1);
		quadArray.push_back(quad(CALL,$1->name));	

	}
	| postfix_expression '.' id_var
	| postfix_expression PTR_OP id_var
	| postfix_expression INC_OP
	{
		$$ = symtab->symbolTable::gentemp(*symtab);
		$$->update($1);
		quadArray.push_back(quad($$->name,$1->name));
		string x("1");
		quadArray.push_back(quad($1->name,$$->name));
		quadArray.push_back(quad(UP,$$->name,x,$1->name));
	}
	| postfix_expression DEC_OP
	{
		$$ = symtab->symbolTable::gentemp(*symtab);
		$$->update($1);
		quadArray.push_back(quad($$->name,$1->name));
		string x("1");
		quadArray.push_back(quad($1->name,$$->name));
		quadArray.push_back(quad(UM,$$->name,x,$1->name));
	}
	;


argument_expression_list
	: assignment_expression
	{

		$$ = new vector<row*>();
		$$->push_back($1);
	}
	| argument_expression_list ',' assignment_expression
	{
		$$ =$1;
		$$->push_back($3);
	}
	;



unary_expression
	: postfix_expression
	{
	    $$ = $1;
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
		cout<<"generated temp = "<<$$->name<<'\n'; 
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
	{
		$$ = $1;
	}
	| shift_expression LEFT_OP additive_expression
	{
		$$ = symtab->symbolTable::gentemp(*symtab);
		$$->update($1);
		quadArray.push_back(quad(SHLE, $1->name, $3->name, $$->name));	
	}
	| shift_expression RIGHT_OP additive_expression
	{
		$$ = symtab->symbolTable::gentemp(*symtab);
		$$->update($1);
		quadArray.push_back(quad(SHRT, $1->name, $3->name, $$->name));
	}
	;


relational_expression
	: shift_expression
	{
		$$ = $1;
	}
	| relational_expression '<' shift_expression
	{
		$$ = symtab->symbolTable::gentemp(*symtab);
		$$->update($1);
		$$->trueList = makeList(quadArray.size());
		$$->falseList = makeList(quadArray.size() + 1);
		quadArray.push_back(quad(LET, $1->name, $3->name, "...."));
		quadArray.push_back(quad(GOTOV,"null"));
	}
	| relational_expression '>' shift_expression
	{
		$$ = symtab->symbolTable::gentemp(*symtab);
		$$->update($1);
		$$->trueList = makeList(quadArray.size());
		$$->falseList = makeList(quadArray.size() + 1);
		quadArray.push_back(quad(GRT, $1->name, $3->name, "...."));
		quadArray.push_back(quad(GOTOV,"..."));
	}
	| relational_expression LE_OP shift_expression
	{
		$$ = symtab->symbolTable::gentemp(*symtab);
		$$->update($1);
		$$->trueList = makeList(quadArray.size());
		$$->falseList = makeList(quadArray.size() + 1);
		quadArray.push_back(quad(LEQ, $1->name, $3->name, "...."));	
		quadArray.push_back(quad(GOTOV,"..."));	
	}
	| relational_expression GE_OP shift_expression
	{
		$$ = symtab->symbolTable::gentemp(*symtab);
		$$->update($1);
		$$->trueList = makeList(quadArray.size());
		$$->falseList = makeList(quadArray.size() + 1);
		quadArray.push_back(quad(GEQ, $1->name, $3->name, "...."));	
		quadArray.push_back(quad(GOTOV,"..."));	
	}	
	;


equality_expression
	: relational_expression
	{
		$$ = $1;
	}
	| equality_expression EQ_OP relational_expression
	{
		$$ = symtab->symbolTable::gentemp(*symtab);
		$$->update($1);
		$$->trueList = makeList(quadArray.size());
		$$->falseList = makeList(quadArray.size()+1);
		quadArray.push_back(quad(EQOP, $1->name, $3->name, "...."));	
		quadArray.push_back(quad(GOTOV,"..."));	
	}
	| equality_expression NE_OP relational_expression
	{
		$$ = symtab->symbolTable::gentemp(*symtab);
		$$->update($1);
		$$->trueList = makeList(quadArray.size());
		$$->falseList = makeList(quadArray.size()+1);
		quadArray.push_back(quad(NEQOP, $1->name, $3->name, "...."));	
		quadArray.push_back(quad(GOTOV,"..."));	
	}
	;


and_expression
	: equality_expression
	{
		$$ = $1;
	}
	| and_expression '&' equality_expression
	{
		$$ = symtab->symbolTable::gentemp(*symtab);
		$$->update($1);
		quadArray.push_back(quad('&', $1->name, $3->name, $$->name));	
	}
	;

exclusive_or_expression
	: and_expression
	{
		$$ = $1;
	}
	| exclusive_or_expression '^' and_expression
	{
		$$ = symtab->symbolTable::gentemp(*symtab);
		$$->update($1);
		quadArray.push_back(quad('^', $1->name, $3->name, $$->name));
	}
	;

inclusive_or_expression
	: exclusive_or_expression
	{
		$$ = $1;
	}
	| inclusive_or_expression '|' exclusive_or_expression
	{
		$$ = symtab->symbolTable::gentemp(*symtab);
		$$->update($1);
		quadArray.push_back(quad('|', $1->name, $3->name, $$->name));
	}
	;

logical_and_expression
	: inclusive_or_expression
	{
		$$ = $1;
	}
	| logical_and_expression AND_OP M1 inclusive_or_expression
	{
		backpatch($1->trueList,$3+2);
		$$->trueList = $4->trueList;
		$$->falseList = merge($1->falseList,$4->falseList);		
	}
	;

logical_or_expression
	: logical_and_expression
	{
		$$ = $1;
	}
	| logical_or_expression OR_OP M1 logical_and_expression
	{
		backpatch($1->falseList,$3+2);
		$$->trueList = $4->falseList;
		$$->falseList = merge($1->trueList,$4->trueList);	
	}
	;

conditional_expression
	: logical_or_expression
	| logical_or_expression '?' expression ':' conditional_expression
	;



assignment_expression
	: conditional_expression
	{
		$$ = $1;
	}
	| unary_expression assignment_operator assignment_expression
	{
		cout<<"in ass expr"<<'\n';
		cout<<"ass1 exp = "<<$$->name<<'\n';
		string str1 = $$->name;
		cout<<"unr exp = "<<$1->name<<'\n';
		cout<<" ass expr = "<<$3->name<<'\n';
		string str2 = $3->name;
		quadArray.push_back(quad(str2,str1));
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
	{
		$$ = $1;
	}
	;


declaration
	: declaration_specifiers ';'
	| declaration_specifiers init_declarator_list ';'
	{
		if(typeSpecifier == functionType)
			symtab = global;
	}
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
		
		$$->update($$->rowType,$$->pushType(typeSpecifier, -1),offset);
		$$ = $1;
		offset = offset + $$->pushType(typeSpecifier, -1);

	}
	| declarator '=' initializer
	{
		$$->update($$->rowType,$$->pushType(typeSpecifier, -1),offset);
		quadArray.push_back(quad($1->name,$3->name));
		$$ = $1;
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
	{
		row* temp = $3->symlook(*$3, "retValue");
		temp->update(temp->rowType,temp->pushType(typeSpecifier,-1),offset);
		typeSpecifier = functionType;
		global->update($1,$3);
		$$ = $1;
		symtab = $3;
	}
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
	: 
	{
		$$ = new symbolTable();
	}
	| parameter_list
	{
		$$ = $1;
	}
	;


parameter_list
	: declaration_specifiers declarator
	{
		$$ = new symbolTable();
		row* tmp = symtab->symlook(*$$,yytext);
		tmp->update(tmp->rowType,tmp->pushType(typeSpecifier,-1),offset);
	}
	| parameter_list ',' declaration_specifiers declarator
	{
		$$ = $1;
		row* tmp = symtab->symlook(*$$,yytext);
		tmp->update(tmp->rowType,tmp->pushType(typeSpecifier,-1),offset);
	}
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
	;

designator
	: '[' constant_expression ']'
	| '.' id_var 
	;


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
	: compound_statement
	| expression_statement
	| selection_statement
	| iteration_statement
	| jump_statement
	;


compound_statement
	: '{' '}'
	| '{' block_item_list_opt '}'
	{
		$$ = $2;

	}
	;

block_item_list_opt
	: block_item_list
	{
		backpatch($1,quadArray.size());
		$$ = $1;

	}
	|
	{
		$$ = new vector<int>();
	} 
	;

block_item_list
	: block_item
	{
		$$ = $1;
	}
	| block_item_list M1 block_item
	{
		backpatch($1,$2);
		$$ = $3;
	}
	;

block_item	
	: declaration
	{
		$$ = new vector<int>();
	}
	| statement
	{
		$$ = $1;
	}
	;

expression_statement
	: ';'
	| expression_opt ';'
	{
		$$ = new vector<int>();
	}
	;

expression_opt
    :expression {}
    |{}
    ;

selection_statement
	:IF '(' expression ')' M1 %prec HIGH statement N1 ELSE M1 statement
	{
		cout<<"in if else"<<'\n';
		backpatch($3->trueList,$5);
		backpatch($3->falseList,$9);
		vector<int>* tempList = merge($6, $7->nextList);
		$$ = merge(tempList, $10);
	} 
	|IF '(' expression ')' M1 statement
	{
		printf("In if \n");
		backpatch($3->trueList,$5);	
		$$ = merge($3->falseList,$6);
	} 
	| SWITCH '(' expression ')' statement
	;

iteration_statement
	: WHILE M1 '(' expression ')' M1 statement
	{	
		backpatch($7,$2);
		backpatch($4->trueList,$6);
		$$ = $4->falseList;
		stringstream ss;
		ss << $2;
		string str = ss.str();
		quadArray.push_back(quad(GOTOV,str));
	}
	| DO M1 statement M1 WHILE '(' expression ')' ';'
	{
		backpatch($7->trueList,$2);
		backpatch($3,$4);
		$$ = $7->falseList;
	}
	| FOR '(' expression_statement expression_statement ')' statement
	| FOR '(' expression ';' M1 expression ';' M1 expression N1 ')' M1 statement
	{
		backpatch($6->trueList, $12);
		backpatch($10->nextList,$5);
		backpatch($13,$8);
		stringstream ss;
		ss << $8;
		string str = ss.str();
		quadArray.push_back(quad(GOTOV,str));
		$$ = $6->falseList;
	}
	;

jump_statement
	: RETURN ';'
	{
		quadArray.push_back(quad(RETURNV,"..."));
	}
	| RETURN expression ';'
	{
		quadArray.push_back(quad(RETURNV,$2->name));
	}
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


