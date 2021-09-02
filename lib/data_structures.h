#ifndef DATA_STRUCTURES_H
#define DATA_STRUCTURES_H

typedef struct symbol {
    char    id[200];
    char    type[10];
    char    declar[10];
    int     line;
    int     col;
} symbol;

typedef struct treeNode {
    struct treeNode*  subtree1;
    struct treeNode*  subtree2;
    struct treeNode*  subtree3;
    struct treeNode*  subtree4;
    char   value[100];
} treeNode;

symbol table[10000];
treeNode* treeNodes[10000];
treeNode* syntaxTree;

extern void newSymbol(symbol* identifier, char* id, char* type, char* declar, int line, int col);
extern void showTable(symbol* identifier);

extern treeNode* newNode(char* value);
extern void showTree(treeNode* node, int deph);
extern void destroyTree();

#endif