#include "../lib/data_structures.h"

/*Stores symbol table and tree size*/
int table_size = 0;
int tree_size = 0;
/*Symbol table*/
symbol table[10000];
/*Syntax Tree*/
treeNode* treeNodes[10000];
treeNode* syntaxTree;

/*Creates new symbol in symbol table*/
extern void newSymbol(symbol* identifier, char* id, char* type, char* declar, int line, int col, int scope, int params, int reg){
    strcpy(identifier[table_size].id, id);
    strcpy(identifier[table_size].type, type);
    strcpy(identifier[table_size].declar, declar);
    identifier[table_size].line = line;
    identifier[table_size].col = col;
    identifier[table_size].scope = scope;
    identifier[table_size].params = params;
    identifier[table_size].reg = reg;

    table_size++;
}

extern int searchTable(symbol* identifier, char* id, int func, int declar, int stack[], int scope_pos){
    if(func){
        for(int i = 0; i < table_size; i++){
            if(!strcmp(identifier[i].id, id) && (!strcmp(identifier[i].declar, "FUNC     ") || !strcmp(identifier[i].declar, "LIST FUNC"))){
                if(i+1 == table_size) return identifier[i].scope+1;
                else return identifier[i+1].scope+1;
            }     
        }
    }else if(declar){
        for(int i = 0; i < table_size; i++){
            if(!strcmp(identifier[i].id, id) && identifier[i].scope == stack[scope_pos] && (!strcmp(identifier[i].declar, "VAR      ") || !strcmp(identifier[i].declar, "LIST VAR ")))
                return 1;
        }
    }else{
        for(int i = 0; i < table_size; i++){
            if(!strcmp(identifier[i].id, id)){
                for(int j = 0; j<= scope_pos; j++){
                    if(identifier[i].scope == stack[j])
                        return 1;
                }
            }
        }
    }

    return 0;
}

extern int checkParams(symbol* identifier, char* id, int scope){
    if(scope == -1){
        for(int i = 0; i < table_size; i++){
            if(!strcmp(identifier[i].id, id))
                return identifier[i].params;
        }
    }else{
        for(int i = 0; i < table_size; i++){
            if(!strcmp(identifier[i].id, id) && identifier[i].scope == scope)
                return identifier[i].params;
        }
    }

    return 0;
}

extern int checkParamType(symbol* identifier, int param, int scope){
    for(int i = 0; i < table_size; i++){
        if(identifier[i].scope == scope && identifier[i].params == param){
            if(!strcmp(identifier[i].type, "int"))
                return 1;
            else if(!strcmp(identifier[i].type, "float"))
                return 2;
            else if(!strcmp(identifier[i].type, "int list"))
                return 3;
            else if(!strcmp(identifier[i].type, "float list"))
                return 4;
        }
    }

    return 0;
}

extern void updateParams(symbol* identifier, int params){
    for(int i = 0; i < table_size; i++){
        if(identifier[i].params == -1){
            identifier[i].params = params;
        }
    }
}

extern int checkScope(symbol* identifier, char* id, int scope){
    int flag = 0;
    while(!flag){
        for(int i = 0; i < table_size; i++){
            if(!strcmp(identifier[i].id, id) && identifier[i].scope == scope){
                return scope;
            }
        }
        scope--;
    }

    return 0;
}

extern int checkType(symbol* identifier, char* id, int scope, int check_scope){
     if(check_scope){
        for(int i = 0; i < table_size; i++){
            if(!strcmp(identifier[i].id, id) && identifier[i].scope == scope){
                if(!strcmp(identifier[i].type, "int"))
                    return 1;
                else if(!strcmp(identifier[i].type, "float"))
                    return 2;
                else if(!strcmp(identifier[i].type, "int list"))
                    return 3;
                else if(!strcmp(identifier[i].type, "float list"))
                    return 4;
            }
        }
        for(int i = 0; i < table_size; i++){
            if(!strcmp(identifier[i].id, id)){
                if(!strcmp(identifier[i].type, "int"))
                    return 1;
                else if(!strcmp(identifier[i].type, "float"))
                    return 2;
                else if(!strcmp(identifier[i].type, "int list"))
                    return 3;
                else if(!strcmp(identifier[i].type, "float list"))
                    return 4;
            }
        }
    }else{
        for(int i = 0; i < table_size; i++){
            if(!strcmp(identifier[i].id, id)){
                if(!strcmp(identifier[i].type, "int"))
                    return 1;
                else if(!strcmp(identifier[i].type, "float"))
                    return 2;
                else if(!strcmp(identifier[i].type, "int list"))
                    return 3;
                else if(!strcmp(identifier[i].type, "float list"))
                    return 4;
            }
        }
        
    }
    return 0;
}

/*Shows symbol table current state*/
extern void showTable(symbol* identifier){

    printf("────────────────────────────────────────────────────────────────────\n");
    printf("   Position  | Scope |  Declaration |  Symbol Type  | Symbol ID   \n");
    printf("────────────────────────────────────────────────────────────────────\n");

    for(int i = 0; i < table_size; i++){
        printf("    %d, %d   |   %d   |    %s  |     %s    |  %s  |  %d\n", 
                identifier[i].line, identifier[i].col, identifier[i].scope, identifier[i].declar, identifier[i].type, identifier[i].id, identifier[i].params);
        printf("────────────────────────────────────────────────────────────────────\n");
    }
    
}

/*Creates new node in tree*/
extern treeNode* newNode(char* value, int type, int ret, char* tac){
    treeNode* node = (treeNode*)malloc(sizeof(treeNode));

    node->subtree1 = NULL;
    node->subtree2 = NULL;
    node->subtree3 = NULL;
    node->subtree4 = NULL;
    
    strcpy(node->value, value);
    node->type = type;
    node->ret = ret;
    strcpy(node->tac, tac);

    treeNodes[tree_size] = node;
   
    tree_size++;

    return node;
}

/*Shows syntax tree current state*/
extern void showTree(treeNode* node, int depth){
    if(!node){
        return;
    }
    for(int i = 0; i < depth; i++){
        printf("    ");
    }
    printf("| %s [%d]", node->value, node->type);
    printf("\n");

    if(node->subtree1) showTree(node->subtree1, depth+1);
    if(node->subtree2) showTree(node->subtree2, depth+1);
    if(node->subtree3) showTree(node->subtree3, depth+1);
    if(node->subtree4) showTree(node->subtree4, depth+1);
    
}

/*Frees all tree node*/
extern void destroyTree(){
    int i;
    for(i = 0; i < tree_size; i++){
        if(treeNodes[i]){
            free(treeNodes[i]);
        }
    }
}
