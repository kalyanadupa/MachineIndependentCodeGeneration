#ifndef QUAD_H
#define QUAD_H
#include "symbolTable.h"
#include <bits/stdc++.h>

using namespace std;

enum{
	LET = 1,
	GRT,
	LEQ,
	GEQ,
	SHLE,
	SHRT,
	GOTOV,
	PARAM,
	RETURNV,
	CALL
};

class quad{
public:
	int op;
	string arg1,arg2,result;
	quad(int _op,const string &(_arg1),const string &(_arg2), const string &(_result)){
		op = _op;
		arg1 = _arg1;
		arg2 = _arg2;
		result = _result;
	}
	quad(int _op,const string &(_arg1),const string &(_arg2)){
		op = _op;
		arg1 = _arg1;
		arg2 = "null";	
		result = _arg2;
	}
	quad(const string &(_arg1),const string &(_arg2)){
		cout<<"allocating quad  "<<_arg1<<" = "<<_arg2<<'\n';
		op = '=';
		arg1 = _arg1;
		arg2 = "null";
		result = _arg2;
	}
	quad(int _op,const string &(_arg1)){
		op = _op;
		arg1 = "null";
		arg2 = "null";
		result = _arg1;
	}
	//void print();
	void emit(const quad &q);
};

extern std::vector<quad> quadArray;

indexList makeList(int i);

indexList merge(const vector<int>* p1, const vector<int>* p2);

bool typeCheck(typeV t1,typeV t2);

void backpatch(indexList p1,int index);
void printTCG(std::vector<quad> &quadArray, std::vector<tcg> &tcgArray);




#endif