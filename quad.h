#ifndef QUAD_H
#define QUAD_H
#include "symbolTable.h"
#include <bits/stdc++.h>

using namespace std;

class quad{
public:
	char op;
	string arg1,arg2,result;
	quad(char _op,const string &(_arg1),const string &(_arg2), const string &(_result)){
		op = _op;
		arg1 = _arg1;
		arg2 = _arg2;
		result = _result;
	}
	quad(char _op,const string &(_arg1),const string &(_arg2)){
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



// indexList makeList(int i){
// 	indexList newList;
// 	newList.push_back(i);
// 	return newList;
// }

// indexList merge(const indexList &p1, const indexList &p2){
// 	indexList newList(p1);
// 	std::vector<int>::iterator it1;
// 	it1 = p1.begin();
// 	std::vector<int>::iterator it2 = p2.begin();
// 	std::vector<int>::iterator it3 = p2.end() ;
// 	newList.insert(it1,it2,it3);

// }

// void backpatch(const indexList &p,int i){
// 	char targetLabel[20];
// 	sprintf(targetLabel,"%d",i);
// 	for (std::vector<int>::iterator it = p.begin() ; it != p.end(); ++it){
// 		int r = *it;
// 		quad q0 = quadArray.at(r);
// 		string x(targetLabel);
// 		q0.result = x;
// 		quadArray.at(r) = q0;
// 	} 
// }



#endif