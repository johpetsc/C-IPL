#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../lib/data_structures.h"

int table_size = 0;
int tree_size = 0;

extern void newSymbol(symbol* identifier, char* id, char* type, char* declar, int line, int col){
    strcpy(identifier[table_size].id, id);
    strcpy(identifier[table_size].type, type);
    strcpy(identifier[table_size].declar, declar);
    identifier[table_size].line = line;
    identifier[table_size].col = col;

    table_size++;
}

extern void showTable(symbol* identifier){

    printf("──────────────────────────────────────────────────────────────\n");
    printf("    Position   |  Declaration | Symbol Type | Symbol ID   \n");
    printf("──────────────────────────────────────────────────────────────\n");

    for(int i = 0; i < table_size; i++){
        printf("      %d, %d     |    %s  |     %s    |  %s  \n", 
                identifier[i].line, identifier[i].col, identifier[i].declar, identifier[i].type, identifier[i].id);
        printf("──────────────────────────────────────────────────────────────\n");
    }
    
}

extern treeNode* newNode(char* value){
    treeNode* node = (treeNode*)malloc(sizeof(treeNode));

    node->subtree1 = NULL;
    node->subtree2 = NULL;
    node->subtree3 = NULL;
    node->subtree4 = NULL;
    
    strcpy(node->value, value);

    treeNodes[tree_size] = node;
   
    tree_size++;

    return node;
}

extern void showTree(treeNode* node, int depth){
    if(!node){
        return;
    }
    for(int i = 0; i < depth; i++){
        printf("    ");
    }
    printf("| %s", node->value);
    printf("\n");

    if(node->subtree1) showTree(node->subtree1, depth+1);
    if(node->subtree2) showTree(node->subtree2, depth+1);
    if(node->subtree3) showTree(node->subtree3, depth+1);
    if(node->subtree4) showTree(node->subtree4, depth+1);
    
}

extern void destroyTree(){
    int i;
    for(i = 0; i < tree_size; i++){
        if(treeNodes[i]){
            free(treeNodes[i]);
        }
    }
}
