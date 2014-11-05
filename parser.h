#ifndef __PARSER_H
#define __PARSER_H

typedef struct symtab{
	char *name;
	int value;
}symboltable ;

symboltable *symlook(char *);

symboltable *gentemp();

#endif