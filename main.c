#include <stdio.h>
#include "symbolTable.h"
#include "quad.h"
#include "y.tab.h"
#include "iostream"
extern int yylex();
extern int yyparse();
extern int lineCount;
extern symbolTable* symtab;
std::vector<quad> quadArray;

extern char* yytext;
void yyerror(char *s);

void yyerror(char *s){
	printf("Syntax error %s\n",s );
}

main(){
	quadArray.reserve(10000);
	std::vector<tcg> tcgArray;
	freopen("test.c", "r", stdin);
	yyparse();
	symtab->printTable();
	int i =  symtab->tcgTable(tcgArray);
	//cout<<"tcg size "<<tcgArray.size()<<'\n';
	cout<<'\n'<<"Quad"<<'\n';
	cout<<"----------------------------------------------------------"<<'\n';
	cout<<"index"<<'\t'<<"op"<<'\t'<<"arg1"<<'\t'<<"arg2"<<'\t'<<"result"<<'\n';
	cout<<"----------------------------------------------------------"<<'\n';
	
	for(int i = 0;i < quadArray.size();i++){
		cout<<i<<'\t';
		quad q  = quadArray[i];
		q.emit(q);
	}
	cout<<"    "<<".file   \"test.c\""<<'\n';
	cout<<"    "<<".text"<<'\n';
	cout<<"    "<<".globl  main"<<'\n';
	cout<<"    "<<".type   main, @function"<<'\n';
	
	printTCG(quadArray,tcgArray);
	cout<<"    "<<"leave"<<'\n';
	cout<<"    "<<"ret"<<'\n';

	

}
