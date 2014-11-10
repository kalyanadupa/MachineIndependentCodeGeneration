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
			case UP:
				
				cout<<q.result<<"="<<q.arg1<<"<<'+'<< 1"<<'\n';
				break;
			case UM:
				cout<<q.result<<"="<<q.arg1<<"<<'-'<< 1"<<'\n';
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
		cout<<q.result<<"="<<q.arg1<<"\n";
	
}




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
		//quad q = quadArray[(*p)[i]];
		//q.result = word;
		quadArray[(*p)[i]].result = word;
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



void printTCG(std::vector<quad> &quadArray, std::vector<tcg> &tcgArray){
	ofstream myfile;
	  myfile.open ("ass6_12CS30001_test_3.asm");
	myfile<<"    "<<".file   \"ass6_12CS30001_test_3.c\""<<'\n';
	myfile<<"    "<<".text"<<'\n';
	myfile<<"    "<<".globl  main"<<'\n';
	myfile<<"    "<<".type   main, @function"<<'\n';  
	std::vector<string> gotoArray;
	for(int i = 0;i < quadArray.size();i++){
		quad q = quadArray[i];
		switch(q.op){
			case LET:
			case GRT:
			case LEQ:
			case GEQ:
			case GOTOV:
				//myfile<<"**"<<"added "<<q.result<<'\n';
				gotoArray.push_back(q.result);
				break;

		}		
	}
	int j = 0;
	for(int i = tcgArray.size()-1; i > 0;i --){
		tcg t = tcgArray[i];
		j = j - t.size;
		myfile<<"_"<<t.name<<"$ = "<<j<<'\n';
	}
	myfile<<"main:"<<'\n';
	myfile<<"    "<<"pushl %ebp"<<'\n';
	myfile<<"    "<<"movl %esp, %ebp"<<'\n';
	j = j*-1;
	myfile<<"    "<<"subl $"<<j<<", %esp"<<'\n';
	for(int i = 0;i < quadArray.size();i++){
		quad q = quadArray[i];
		int flag = 1;
		//myfile<<"i = "<<i<<'\t';
		for(int k = 0;k < gotoArray.size();k++){

			int numb;
			istringstream ( gotoArray[k] ) >> numb;
			//myfile<<" numb = "<<numb<<'\n';
			if(i == numb){
				//myfile<<"**"<<"In here"<<'\n';
				flag = 0;
			}
		}
		if(flag == 0){
			myfile<<".L"<<i<<":"<<'\n';
		}
		if((q.op == LET) || (q.op == GRT) || (q.op == LEQ) || (q.op == GEQ) || (q.op == GOTOV)){
			switch(q.op){
				case LET:
					myfile<<"    "<<"movl _"<<q.arg1<<"$(%ebp), "<<"%eax"<<'\n';
					myfile<<"    "<<"cmpl _"<<q.arg2<<"$(%ebp), "<<"%eax"<<'\n';
					myfile<<"    "<<"jge .L"<<q.result<<'\n';
					break;
				case GRT:
					myfile<<"    "<<"movl _"<<q.arg1<<"$(%ebp), "<<"%eax"<<'\n';
					myfile<<"    "<<"cmpl _"<<q.arg2<<"$(%ebp), "<<"%eax"<<'\n';
					myfile<<"    "<<"jle .L"<<q.result<<'\n';
					break;
				case LEQ:
					myfile<<"    "<<"movl _"<<q.arg1<<"$(%ebp), "<<"%eax"<<'\n';
					myfile<<"    "<<"cmpl _"<<q.arg2<<"$(%ebp), "<<"%eax"<<'\n';
					myfile<<"    "<<"jg .L"<<q.result<<'\n';
					break;
				case GEQ:
					myfile<<"    "<<"movl _"<<q.arg1<<"$(%ebp), "<<"%eax"<<'\n';
					myfile<<"    "<<"cmpl _"<<q.arg2<<"$(%ebp), "<<"%eax"<<'\n';
					myfile<<"    "<<"jl .L"<<q.result<<'\n';
					break;
				case GOTOV:
					myfile<<"    "<<"jmp .L"<<q.result<<'\n';
					gotoArray.push_back(q.result);
					break;

			}			
		}
		else{
			if((q.arg2.compare("null") == 0)&&(q.arg1.compare("null") != 0)&&(q.result.compare("null") != 0)){
				if(isdigit(q.arg1[0])){
					//myfile<<'\n'<<"CS 1"<<'\n';
					myfile<<"    "<<"movl $"<<q.arg1<<", _"<<q.result<<"$(%ebp)"<<'\n';
				}
				else if((q.arg1[0])== '-'){
					//myfile<<'\n'<<"CS 3"<<'\n';
					myfile<<"    "<<"movl _"<<q.arg1<<"$(%ebp), "<<"%eax"<<'\n';
					myfile<<"    "<<"negl "<<"%eax"<<'\n';
					myfile<<"    "<<"movl %eax, _"<<q.result<<"$(%ebp)"<<'\n';			
				}
				else{
					//myfile<<'\n'<<'\n'<<'\n'<<"CS 2"<<'\n';
					myfile<<"    "<<"movl _"<<q.arg1<<"$(%ebp), "<<"%eax"<<'\n';
					myfile<<"    "<<"movl %eax, _"<<q.result<<"$(%ebp)"<<'\n';
				}
			}
			if((q.arg2.compare("null") != 0)&&(q.arg1.compare("null") != 0)&&(q.result.compare("null") != 0)){
				switch(q.op){
					case '+':
						//myfile<<'\n'<<'\n'<<"CS 4"<<'\n';
						myfile<<"    "<<"movl _"<<q.arg1<<"$(%ebp), "<<"%eax"<<'\n';
						myfile<<"    "<<"addl _"<<q.arg2<<"$(%ebp), "<<"%eax"<<'\n';
						myfile<<"    "<<"movl "<<"%eax"<<", _"<<q.result<<"$(%ebp)"<<'\n';
						break;
					case '-':
						//myfile<<'\n'<<"CS 5"<<'\n';
						myfile<<"    "<<"movl _"<<q.arg1<<"$(%ebp), "<<"%eax"<<'\n';
						myfile<<"    "<<"subl _"<<q.arg2<<"$(%ebp), "<<"%eax"<<'\n';
						myfile<<"    "<<"movl "<<"%eax"<<", _"<<q.result<<"$(%ebp)"<<'\n';
						break;
					case '*':
						//myfile<<'\n'<<"CS 6"<<'\n';
						myfile<<"    "<<"movl _"<<q.arg1<<"$(%ebp), "<<"%eax"<<'\n';
						myfile<<"    "<<"imull _"<<q.arg2<<"$(%ebp), "<<"%eax"<<'\n';
						myfile<<"    "<<"movl "<<"%eax"<<", _"<<q.result<<"$(%ebp)"<<'\n';
						break;
					case '/':
						//myfile<<'\n'<<'\n'<<"CS 7"<<'\n';
						myfile<<"    "<<"movl _"<<q.arg1<<"$(%ebp), "<<"%eax"<<'\n';
						myfile<<"    "<<"cltd"<<'\n';
						myfile<<"    "<<"idivl _"<<q.arg2<<"$(%ebp)"<<'\n';
						myfile<<"    "<<"movl "<<"%eax"<<", _"<<q.result<<"$(%ebp)"<<'\n';
						break;
					case '%':
						//myfile<<'\n'<<"CS 8"<<'\n';
						myfile<<"    "<<"movl _"<<q.arg1<<"$(%ebp), "<<"%eax"<<'\n';
						myfile<<"    "<<"cltd"<<'\n';
						myfile<<"    "<<"idivl _"<<q.arg2<<"$(%ebp)"<<'\n';
						myfile<<"    "<<"movl "<<"%eax"<<", _"<<q.result<<"$(%ebp)"<<'\n';
						break;
					case UP:
						//myfile<<'\n'<<'\n'<<"CS 4"<<'\n';
						myfile<<"    "<<"movl _"<<q.arg1<<"$(%ebp), "<<"%eax"<<'\n';
						myfile<<"    "<<"addl _"<<"$1, "<<"%eax"<<'\n';
						myfile<<"    "<<"movl "<<"%eax"<<", _"<<q.result<<"$(%ebp)"<<'\n';
						break;
					case UM:
						//myfile<<'\n'<<'\n'<<"CS 4"<<'\n';
						myfile<<"    "<<"movl _"<<q.arg1<<"$(%ebp), "<<"%eax"<<'\n';
						myfile<<"    "<<"subl _"<<"$1, "<<"%eax"<<'\n';
						myfile<<"    "<<"movl "<<"%eax"<<", _"<<q.result<<"$(%ebp)"<<'\n';
						break;						
				}			
			}
		}
	}
	myfile<<".L"<<quadArray.size()<<':'<<'\n';
	myfile<<"    "<<"leave"<<'\n';
	myfile<<"    "<<"ret"<<'\n';
	myfile<<"    .size	main, .-main"<<'\n';
	myfile<<"    .ident	\"GCC: (Ubuntu/Linaro 4.8.1-10ubuntu9) 4.8.1\""<<'\n';
	myfile<<"    .section	.note.GNU-stack,\"\",@progbits"<<'\n';
	myfile.close();
}