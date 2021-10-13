#ifndef DATA_STRUCTURES_H
#define DATA_STRUCTURES_H

/*Symbol structure*/
typedef struct symbol {
    char    id[200];
    char    type[100];
    char    declar[100];
    int     line;
    int     col;
    int     scope;
    int     params;
} symbol;

/*Node structure*/
typedef struct treeNode {
    struct treeNode*  subtree1;
    struct treeNode*  subtree2;
    struct treeNode*  subtree3;
    struct treeNode*  subtree4;
    char   value[100];
    int    type;
} treeNode;

/*Symbol table*/
symbol table[10000];
/*Syntax Tree*/
treeNode* treeNodes[10000];
treeNode* syntaxTree;

/*Symbol tables functions*/
extern void newSymbol(symbol* identifier, char* id, char* type, char* declar, int line, int col, int scope, int params);
extern int searchTable(symbol* identifier, char* id, int scope, int func, int declar);
extern void updateParams(symbol* identifier, int params);
extern int checkParamType(symbol* identifier, int param, int scope);
extern int checkParams(symbol* identifier, char* id);
extern int checkType(symbol* identifier, char* id, int scope, int check_scope);
extern void showTable(symbol* identifier);

/*Syntax tree functions*/
extern treeNode* newNode(char* value, int type);
extern void showTree(treeNode* node, int deph);
extern void destroyTree();

#endif