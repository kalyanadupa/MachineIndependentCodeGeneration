#include <stdio.h>
#include "symbolTable.h"
#include "quad.h"
#include "y.tab.h"
#include "iostream"
extern int yylex();
extern int yyparse();
extern int lineCount;
extern symbolTable* symtab;
extern std::vector<quad> quadArray;
extern char* yytext;
void yyerror(char *s);

void yyerror(char *s){
	printf("Syntax error %s\n",s );
}

main(){
	freopen("test.c", "r", stdin);
	yyparse();
	symtab->printTable();
	cout<<'\n'<<"Quad"<<'\n';
	cout<<"----------------------------------------------------------"<<'\n';
	cout<<"index"<<'\t'<<"op"<<'\t'<<"arg1"<<'\t'<<"arg2"<<'\t'<<"result"<<'\n';
	cout<<"----------------------------------------------------------"<<'\n';
	
	for(int i = 0;i < quadArray.size();i++){
		quad q  = quadArray[i];
		cout<<i<<'\t';
		q.emit(q);
	}
	printTCG(quadArray);
	

}
