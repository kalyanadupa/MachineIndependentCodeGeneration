#ifndef _SYMBOL_TABLE_H
#define _SYMBOL_TABLE_H

#include <bits/stdc++.h>
using namespace std;

class symbolTable;

class row;


enum type {voidType =1,
 intType,
 charType,
 doubleType,
 pointerType,
 arrayType,
 functionType
};

typedef struct initialValue{
   char c;
   int i;
   double d;
}value;  
 


typedef struct ttypeT{
	type t;
	int typeSize;
	//_typeT *next;
}typeT;

typedef std::vector<typeT> typeV;
typedef std::vector<int>* indexList;
class row
{
public:
	string name;
	value val;
	int size;
	int offset;
	typeV rowType;
	indexList trueList;
	indexList falseList;
	indexList nextList;
	symbolTable* nestedTable; 
	// typeT *head;
	// head = NULL;
	// typeT *tail;

	int pushType(type typeInt,int tSize){
		typeT tempType;
		tempType.t = typeInt;
		tempType.typeSize = tSize;
		if(tSize == -1){
			switch(typeInt){
				case intType:
					//printf("heresth\n");
					tSize = 4;
					break;
				case charType:
					tSize = 1;		
					break;
				case doubleType:
					//printf("should not be here\n");
					tSize = 8;
					break;		
				case pointerType:
					tSize = 4;
					break;
				//Should work on array Type. 			
				case arrayType:
					tSize = 0;
					break;		
				case functionType:
					tSize = 4;
					break;				
				tempType.typeSize = -1;
			}
			tempType.typeSize = -1;
			//printf("sized %d\n",tSize );
		}
		rowType.push_back(tempType) ;
		return tSize;
 //        typeT *n = new typeT;   // create new Node
 //        n->t = val;
 //        n->typeSize = tSize;
 //        if(head == NULL)
	// 		tail->next = n;             // set value
 //        n->next = head;         // make the node point to the next node.                                //  If the list is empty, this is NULL, so the end of the list --> OK
 //        head = n;               // last but not least, make the head point at the new node.

    }

	void update(typeV& type1,int tSize,int tOffset){
		rowType=type1;
		size=tSize;
		offset = tOffset;
	}
    void update(const row *r){
    	rowType = r->rowType;
    	this->size = r->size;
    }

    void update(symbolTable* funcST){
    	nestedTable = funcST;
    }


};

class symbolTable
{
public:
	std::vector<row> v;
	int count;
	int offset;
	symbolTable();
	row* symlook(symbolTable &curr,const string &s);
	row* gentemp(symbolTable &curr);
	void printTable();
	void update(const string &s,const value val1);
	void update(row* r, symbolTable *nTable){
		r->nestedTable = nTable;
	}
	
};
#endif