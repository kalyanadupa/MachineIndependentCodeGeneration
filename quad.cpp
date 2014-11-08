#include <bits/stdc++.h>
#include "quad.h"
#include "symbolTable.h"

using namespace std;

// quad::quad(char _op,string &s1,const string &(_arg2)), const string &(_result))
// :op(_op),arg1(_arg1),arg2(_arg2),result(_result){ }
// quad::quad(const string &(_arg1),const string &(_arg2))
// :op('0'),arg1(_arg1),arg2(NULL),result(_result){ }
// //quad::quad(const string &(_arg1),const string &(_arg2)):op(0),arg1(_arg1),arg2(NULL),result(_result);


void quad::emit(const quad &q){

	if(q.arg2.compare("null") != 0){
		switch(q.op){
			case LET:
				cout<<"if "<<q.arg1<<" < "<<q.arg2<<" goto "<<q.result<<'\n';
				break;
			case GRT:
				cout<<"if "<<q.arg1<<" > "<<q.arg2<<" goto "<<q.result<<'\n';
				break;
			case LEQ:
				cout<<"if "<<q.arg1<<" <= "<<q.arg2<<" goto "<<q.result<<'\n';
				break;
			case GEQ:
				cout<<"if "<<q.arg1<<" >= "<<q.arg2<<" goto "<<q.result<<'\n';
				break;
			case SHLE:
				cout<<q.result<<"="<<q.arg1<<" >> "<<q.arg2<<'\n';
				break;
			case SHRT:
				cout<<q.result<<"="<<q.arg1<<" << "<<q.arg2<<'\n';
				break;
			default:
				cout<<q.result<<"="<<q.arg1<<" ";
				printf("%c ",q.op );
				cout<<q.arg2<<'\n';	
		}
	}
	else if((q.arg2.compare("null") == 0)&&(q.arg1.compare("null") == 0)){
		switch(q.op){
			case GOTOV:
				cout<<"goto "<<q.result<<'\n' ;
				break;
			case CALL:
				cout<<"call "<<q.result<<'\n' ;
				break;
			case PARAM:
				cout<<"param "<<q.result<<'\n';
				break;		
			case RETURNV:
				cout<<"return "<<q.result<<'\n';
				break;		
		}
	}
		
	
	else
		cout<<q.result<<"="<<q.result<<"\n";
	
}



// void quad::emit(const quad &q){

// 	if(q.arg2.compare("null") != 0){
// 		switch(q.op){
// 			case LET:
// 				cout<<q.result<<"="<<q.arg1<<" < "<<q.arg2<<'\n';
// 				break;
// 			case GRT:
// 				cout<<q.result<<"="<<q.arg1<<" > "<<q.arg2<<'\n';
// 				break;
// 			case LEQ:
// 				cout<<q.result<<"="<<q.arg1<<" <= "<<q.arg2<<'\n';
// 				break;
// 			case GEQ:
// 				cout<<q.result<<"="<<q.arg1<<" >= "<<q.arg2<<'\n';
// 				break;
// 			case SHLE:
// 				cout<<q.result<<"="<<q.arg1<<" >> "<<q.arg2<<'\n';
// 				break;
// 			case SHRT:
// 				cout<<q.result<<"="<<q.arg1<<" << "<<q.arg2<<'\n';
// 				break;
// 			default:
// 				cout<<q.result<<"="<<q.arg1<<" ";
// 				printf("%c ",q.op );
// 				cout<<q.arg2<<'\n';	
// 		}
// 	}
// 	else if((q.arg2.compare("null") == 0)&&(q.arg1.compare("null") == 0))
// 		cout<<"goto "<<q.result;
	
// 	else
// 		cout<<q.result<<"="<<q.result<<"\n";
	
// }




indexList makeList(int i){
	indexList newList = new std::vector<int>();;
	if(i == -1){
		return newList;
	}
	newList->push_back(i);
	return newList;
}

indexList merge(const vector<int>* p1, const vector<int>* p2){
	indexList newList = new vector<int>(*p1);
	for(int i = 0; i< p2->size();i++){
		newList->push_back((*p2)[i]);
	}
	return newList;
	// p1.insert( p1.end(), p2.begin(), p2.end() );
	// //vector1.insert( vector1.end(), vector2.begin(), vector2.end() );
	// return p1;
}


bool typeCheck(typeV t1,typeV t2){
	if(t1.size() != t2.size())
		return false;
	else{
		for(int i =0;i < t1.size();i++){
			typeT x = t1[i];
			typeT y = t2[i];
			if((x.typeSize != y.typeSize) || (x.t != y.t))
				return false;
		}
		return true;
	}

}

void backpatch(indexList p,int index)
{
	for (int i = 0; i < p->size(); i++){
		char word[20];
		sprintf(word, "%d",index);
		quad q = quadArray[(*p)[i]];
		q.result = word;
		quadArray[(*p)[i]] = q;
	}
}

int retSize(const typeV &t){
	int tSize = 0;
	int i =0;

	for (int j =0 ; j <  t.size();j++){
		typeT r = t[j];
		if(r.typeSize == 0){
			if(r.t == intType)
				tSize = tSize + 4;
			else if(r.t == charType)
				tSize = tSize + 1;
			else if(r.t == doubleType)
				tSize = tSize +8;
			else if(r.t == arrayType){
				int x = r.typeSize;
				tSize = tSize*x;
			}
			else if(r.t == pointerType){
				tSize = 4;
			}
			return tSize;
		}

		if(r.t == intType)
			tSize = tSize + 4;
		else if(r.t == charType)
			tSize = tSize + 1;
		else if(r.t == doubleType)
			tSize = tSize +8;
		else if(r.t == arrayType){
			int x = r.typeSize;
			tSize = tSize*x;
		}

		i++;
	}
}