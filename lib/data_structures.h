#ifndef DATA_STRUCTURES_H
#define DATA_STRUCTURES_H

/*Symbol structure*/
typedef struct symbol {
    char    id[200];
    char    type[10];
    char    declar[10];
    int     line;
    int     col;
    int     scope;
} symbol;

/*Node structure*/
typedef struct treeNode {
    struct treeNode*  subtree1;
    struct treeNode*  subtree2;
    struct treeNode*  subtree3;
    struct treeNode*  subtree4;
    char   value[100];
} treeNode;

/*Symbol table*/
symbol table[10000];
/*Syntax Tree*/
treeNode* treeNodes[10000];
treeNode* syntaxTree;

/*Symbol tables functions*/
extern void newSymbol(symbol* identifier, char* id, char* type, char* declar, int line, int col, int scope);
extern void showTable(symbol* identifier);

/*Syntax tree functions*/
extern treeNode* newNode(char* value);
extern void showTree(treeNode* node, int deph);
extern void destroyTree();

#endif