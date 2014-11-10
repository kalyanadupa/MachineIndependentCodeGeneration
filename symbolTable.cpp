#include "symbolTable.h"
#include <bits/stdc++.h>

using namespace std;
extern symbolTable* symtab;

int offsetST =0 ;

symbolTable::symbolTable():count(0),offset(0){
	this->v.reserve(1000);
}

row* symbolTable::gentemp(symbolTable &curr){
	char str[10];
	sprintf(str,"t%02d",curr.count++);
	row r;
	r.name = str;
	curr.v.push_back(r);
	return &(v.at(curr.count - 1));
}

row* symbolTable::symlook(symbolTable &curr,const string &s){
	for(int i = 0;i < curr.v.size();i++){
		row temp = curr.v.at(i);
		if(temp.name.compare(s) == 0)
			return &(curr.v.at(i));
	}
	char str[10];
	//sprintf(str,s,curr.count++);
	row r;
	r.name = s;
	v.push_back(r);
	curr.count++;
	int n = v.size();
	return &(v[n-1]);
	// row x;
	// x.name = s;
	// curr.v.push_back(x);
	// curr.count++;
	// return &x;
}


type getType(typeV rType){
	for(int i = 0;i < rType.size();i++){
		typeT x = rType[i];
		//if(x.typeSize == -1){
			switch(x.t){
				case voidType:
					return voidType;
				case charType:
					return charType;
				case intType:
					return intType;		
				case doubleType:
					return doubleType;
				case pointerType:
					return pointerType;
				case arrayType:
					return arrayType;								
			}
		//}
	}
	return intType;
}

int getSize(row r){
	typeV rType = r.rowType;
	int arrS = 0;
	for(int i = 0;i < rType.size();i++){
		typeT x = rType[i];
		//cout<<'\n'<<"name :"<<r.name<<'\t'<<x.typeSize<<'\n';
		if(x.typeSize == -1){
			switch(x.t){
				case voidType:
					//cout<<"void"<<'\n';
					r.size = 0;
					return 0;
				case charType:
					r.size = 1;
					return 1;
				case intType:
					//cout<<"int"<<'\n';
					r.size = 4;
					return 4;		
				case doubleType:
					r.size = 8;
					return 8;
				case pointerType:
					r.size = 4;
					return 4;
				case arrayType:
					r.size = -1;
					return -1;
			}
		}
		else{
				//cout<<'\n'<<"in array "<<r.name<<'\n';
				switch(x.t){
					case voidType:
						arrS = 0;
						break;
					case charType:
						arrS = 1;
						break;
					case intType:
						arrS = 4;
						break;		
					case doubleType:
						arrS = 8;
						break;
					case pointerType:
						arrS =4;
						break;
				}
			
			arrS = arrS*x.typeSize;	
			return arrS;
		}
		
	}
	
} 


int symbolTable::tcgTable(std::vector<tcg> &tcgArray){
	int off = 0;
	for(int i =0;i < v.size();i++){
		tcg t;
		row r = v.at(i);
		if(r.name.compare("main") != 0){
		//cout<<r.name<<'\t';
		t.name = r.name;
		switch(getType(r.rowType)){
				case voidType:
					t.type = "void";
					break;
				case charType:
					t.type = "char";
					break;
				case intType:
					t.type = "int";
					break;	
				case doubleType:
					t.type = "double";
					break;
				case pointerType:
					t.type = "pointer";
					break;
				case arrayType:
					t.type = "array";
					break;								
			}
		//cout<<'\t'<<r.size <<'\t';
		if(r.size > 10 )
			t.size = 4;
		else			
			t.size = r.size;	
		//cout<<offsetST<<'\t';
		//cout<<'\n';
		off = off + t.size;
		//check the type
		//cout<<r.name<<' '<<r.type<<' '<<r.val<<' '<<r.size<<' 'r.offset<< '\n';
		//cout<<r.name<<' '<<r.val<<' '<<r.size<<' 'r.offset<< '\n';
	}
	tcgArray.push_back(t);
	}
	return off;
}

void symbolTable::printTable(){
	cout<<"SYMBOL TABLE"<<'\n';
	cout<<"----------------------------------------------------------"<<'\n';
	cout<<"NAME"<<'\t'<<"TYPE"<<'\t'<<"SIZE"<<'\t'<<"OFFSET"<<'\n';
	cout<<"----------------------------------------------------------"<<'\n';
	for(int i =0;i < v.size();i++){
		tcg t;
		row r = v.at(i);
		if(r.name.compare("main") != 0){
		cout<<r.name<<'\t';
		switch(getType(r.rowType)){
				case voidType:
					cout<<"void";
					break;
				case charType:
					cout<<"char";
					break;
				case intType:
					cout<<"int";
					break;	
				case doubleType:
					cout<<"double";
					break;
				case pointerType:
					cout<<"pointer";
					break;
				case arrayType:
					cout<<"array";
					break;								
			}
		if(r.size > 10)
			r.size = 4;	
		cout<<'\t'<<r.size <<'\t';

		cout<<offsetST<<'\t';
		cout<<'\n';
		offsetST = offsetST + r.size;
		//check the type
		//cout<<r.name<<' '<<r.type<<' '<<r.val<<' '<<r.size<<' 'r.offset<< '\n';
		//cout<<r.name<<' '<<r.val<<' '<<r.size<<' 'r.offset<< '\n';
	}
	}	
}