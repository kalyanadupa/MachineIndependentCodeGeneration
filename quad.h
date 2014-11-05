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
	SHRT
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
		op = '=';
		arg1 = _arg1;
		arg2 = "null";
		result = _arg2;
	}
	//void print();
	void emit(const quad &q);
};

extern std::vector<quad> quadArray;





#endif