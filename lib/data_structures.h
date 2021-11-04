#ifndef DATA_STRUCTURES_H
#define DATA_STRUCTURES_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*Symbol structure*/
typedef struct symbol {
    char    id[200];
    char    type[100];
    char    declar[100];
    int     line;
    int     col;
    int     scope;
    int     params;
    int     reg;
} symbol;

/*Node structure*/
typedef struct treeNode {
    struct treeNode*  subtree1;
    struct treeNode*  subtree2;
    struct treeNode*  subtree3;
    struct treeNode*  subtree4;
    char   value[100];
    int    type;
    int    ret;
    char   tac[100];
} treeNode;

/*Symbol tables functions*/
extern void newSymbol(symbol* identifier, char* id, char* type, char* declar, int line, int col, int scope, int params, int reg);
extern int searchTable(symbol* identifier, char* id, int func, int declar, int stack[], int scope_pos);
extern void updateParams(symbol* identifier, int params);
extern int checkScope(symbol* identifier, char* id, int scope);
extern int checkParamType(symbol* identifier, int param, int scope);
extern int checkParams(symbol* identifier, char* id, int scope);
extern int checkType(symbol* identifier, char* id, int scope, int check_scope);
extern void showTable(symbol* identifier);

/*Syntax tree functions*/
extern treeNode* newNode(char* value, int type, int ret, char* tac);
extern void showTree(treeNode* node, int deph);
extern void destroyTree();

#endif