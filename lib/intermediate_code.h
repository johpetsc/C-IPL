#ifndef INTERMEDIATE_CODE_H
#define INTERMEDIATE_CODE_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

extern void generateTable(FILE *fp, char* table);
extern void generateCode(FILE *fp, char* code);
extern void intermediateCode(char* file, char* table, char* code);

#endif