compiler: y.tab.o lex.yy.o main.o
	g++ main.o lex.yy.o y.tab.o quad.o symbolTable.o -lfl

main.o: main.c quad.o symbolTable.o
	g++ -c main.c -lfl

y.tab.o: y.tab.c y.tab.h
	g++ -c y.tab.c 

lex.yy.o: lex.yy.c
	g++ -c lex.yy.c

lex.yy.c: y.tab.h 12CS30001_ass3.l
	flex 12CS30001_ass3.l

y.tab.c: 12CS30001_ass3.y
	yacc -dtv 12CS30001_ass3.y

quad.o: quad.cpp quad.h y.tab.h
	g++ -c quad.cpp

symbolTable.o: symbolTable.cpp symbolTable.h
	g++ -c symbolTable.cpp	

clean:
	rm y.tab.c y.tab.h lex.yy.c 12CS30001_ass3.o *.o