#include "../lib/intermediate_code.h"

extern void generateTable(FILE *fp, char* table){
    fprintf(fp, ".table\n");
    fprintf(fp, "%s\n", table);
}

extern void generateCode(FILE *fp, char* code){
    fprintf(fp, ".code\n");
    fprintf(fp, "%s\n", code);
}

extern void intermediateCode(char* file, char* table, char* code){
    FILE *fp = fopen(file, "w");
    generateTable(fp, table);
    generateCode(fp, code);

    fclose(fp);
}