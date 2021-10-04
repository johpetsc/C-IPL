%debug

%define parse.error verbose
%define lr.type canonical-lr

%{
    #include "../lib/data_structures.h"
    #include <stdio.h>
    #include <stdlib.h>
    #include <string.h>
    extern int yylex();
    extern int yylex_destroy();
    extern void yyerror(const char* error);
    extern int line;
    extern int col;
    extern int lex_errors;
    extern void changeScope(int op);
    extern FILE *yyin;
    int stack[100];
    int scope_pos = 0;
    int scope = 0;
    int params = 0;
    int args_ret = 0;
    int args = 0;
    int main_found = 0;
    int sin_errors = 0;
    int sem_errors = 0;
%}

%union{
    /*Token structure*/
    struct lexToken {
        char id[200];
        int line;
        int col;
    } lex;
    /*Tree node reference*/
    struct treeNode* treeNode;
}

/*Lexical Tokens*/
%token <lex> INT FLOAT TYPE ID LIST
%token <lex> IF ELSE FOR RETURN OUT IN
%token <lex> SS_OP MD_OP
%token <lex> LLOG_OP RLOG_OP
%token <lex> REL_OP ASS_OP
%token <lex> LIST_FUNC NIL LLIST_OP RLIST_OP
%token <lex> LITERAL
%token <lex> LB RB LP RP END SEPARATOR

/*Precedences*/
%left SS_OP
%left MD_OP
%left LLOG_OP 
%right LIST_FUNC
%right RLIST_OP
%right LLIST_OP
%right RLOG_OP
%right ELSE

/*Grammar types*/
%type <treeNode> start
%type <treeNode> program program_block
%type <treeNode> declar func_dclr params func
%type <treeNode> block statement expr operation val
%type <treeNode> flow_ctr if_else for return
%type <treeNode> ass_op ulog_op log_op rel_op ari_op md_op
%type <treeNode> input output
%type <treeNode> list_op list_con list_oper list_func
%type <treeNode> id
%type <treeNode> func_call func_params

/*Grammar*/
%%
start:
    program { syntaxTree = $$; }
;

program:
    program program_block {
        $$ = newNode("PROGRAM", 0);
        $$->subtree1 = $1;
        $$->subtree2 = $2;
    }
    | 
    program_block { $$ = $1; }
    |
    error { $$ = newNode("ERROR", 0); }
;

program_block:
    declar END { $$ = $1; }
    | 
    func_dclr { $$ = $1; }
;

func_dclr:
    func LP{
        changeScope(1);
    } params {
        updateParams(table, params);
        params = 0;
    } RP LB block RB {
        $$ = newNode("FUNCTION", 0);
        $$->subtree1 = $1;
        $$->subtree2 = $4;
        $$->subtree3 = $8;
        if($$->subtree1->type == 1){
            if($$->subtree3->type == 1){
                $$->type = $$->subtree1->type;
            }else{
                printf("SEMANTIC ERROR: Return type error: Function type is %d and return is %d. [%d, %d]\n", $$->subtree1->type, $$->subtree3->type, $2.line, $2.col);
                sem_errors++;
            }
        } else if($$->subtree1->type == 2){
            if($$->subtree3->type == 1){
                $$->type = $$->subtree1->type;
            }else if($$->subtree3->type == 2){
                $$->type = $$->subtree3->type;
            }else{
                printf("SEMANTIC ERROR: Return type error: Function type is %d and return is %d. [%d, %d]\n", $$->subtree1->type, $$->subtree3->type, $2.line, $2.col);
                sem_errors++;
            }
        } else if($$->subtree1->type == 3){
            if($$->subtree3->type == 3){
                $$->type = $$->subtree1->type;
            }else{
                printf("SEMANTIC ERROR: Return type error: Function type is %d and return is %d. [%d, %d]\n", $$->subtree1->type, $$->subtree3->type, $2.line, $2.col);
                sem_errors++;
            }
        } else if($$->subtree1->type == 4){
            if($$->subtree3->type == 3){
                $$->type = $$->subtree1->type;
            }else if($$->subtree3->type == 4){
                $$->type = $$->subtree3->type;
            }else{
                printf("SEMANTIC ERROR: Return type error: Function type is %d and return is %d. [%d, %d]\n", $$->subtree1->type, $$->subtree3->type, $2.line, $2.col);
                sem_errors++;
            }
        }
        changeScope(0);
    }
    |
    func LP {
        updateParams(table, params);
    } RP LB {
        changeScope(1);
    } block RB {
        $$ = newNode("FUNCTION", 0);
        $$->subtree1 = $1;
        $$->subtree2 = $7;
        if($$->subtree1->type == 1){
            if($$->subtree2->type == 1){
                $$->type = $$->subtree1->type;
            }else{
                printf("SEMANTIC ERROR: Return type error: Function type is %d and return is %d. [%d, %d]\n", $$->subtree1->type, $$->subtree2->type, $2.line, $2.col);
                sem_errors++;
            }
        } else if($$->subtree1->type == 2){
            if($$->subtree2->type == 1){
                $$->type = $$->subtree1->type;
            }else if($$->subtree2->type == 2){
                $$->type = $$->subtree2->type;
            }else{
                printf("SEMANTIC ERROR: Return type error: Function type is %d and return is %d. [%d, %d]\n", $$->subtree1->type, $$->subtree2->type, $2.line, $2.col);
                sem_errors++;
            }
        } else if($$->subtree1->type == 3){
            if($$->subtree2->type == 3){
                $$->type = $$->subtree1->type;
            }else{
                printf("SEMANTIC ERROR: Return type error: Function type is %d and return is %d. [%d, %d]\n", $$->subtree1->type, $$->subtree2->type, $2.line, $2.col);
                sem_errors++;
            }
        } else if($$->subtree1->type == 4){
            if($$->subtree2->type == 3){
                $$->type = $$->subtree1->type;
            }else if($$->subtree2->type == 4){
                $$->type = $$->subtree2->type;
            }else{
                printf("SEMANTIC ERROR: Return type error: Function type is %d and return is %d. [%d, %d]\n", $$->subtree1->type, $$->subtree2->type, $2.line, $2.col);
                sem_errors++;
            }
        }
        changeScope(0);
    }
;

params:
    params SEPARATOR declar {
        params++;
        $$ = newNode("PARAMS", 0);
        $$->subtree1 = $1;
        $$->subtree2 = $3;
    }
    |
    declar { 
        params++;
        $$ = $1;
    }
;

declar:
    TYPE ID {
        if(searchTable(table, $2.id, stack[scope_pos], 0, 1)){
            printf("SEMANTIC ERROR: Variable %s already declared [%d, %d]\n", $2.id, $2.line, $2.col);
            sem_errors++;
        }
        newSymbol(table, $2.id, $1.id, "VAR      ", $2.line, $2.col, stack[scope_pos], 0);   
        $$ = newNode(strcat(strcat($1.id," var "), $2.id), checkType(table, $2.id));
    }
    |
    TYPE LIST ID {
        if(searchTable(table, $3.id, stack[scope_pos], 0, 1)) {
            printf("SEMANTIC ERROR: Variable %s already declared [%d, %d]\n", $3.id, $3.line, $3.col);
            sem_errors++;
        }
        newSymbol(table, $3.id, strcat($1.id," list"), "LIST VAR ",$3.line, $3.col, stack[scope_pos], 0);
        $$ = newNode(strcat(strcat($1.id," "), $3.id), checkType(table, $3.id));
    }
;

func:
    TYPE ID {
        if(!strcmp($2.id, "main")) main_found = 1;
        if(searchTable(table, $2.id, stack[scope_pos], 1, 0)) {
            printf("SEMANTIC ERROR: Function %s already declared [%d, %d]\n", $2.id, $2.line, $2.col);
            sem_errors++;
        }
        newSymbol(table, $2.id, $1.id, "FUNC     ", $2.line, $2.col, stack[scope_pos], -1);
        $$ = newNode(strcat(strcat($1.id," function "), $2.id), checkType(table, $2.id));
    }
    |
    TYPE LIST ID {
        if(!strcmp($3.id, "main")) main_found = 1;
        if(searchTable(table, $3.id, stack[scope_pos], 1, 0)) {
            printf("SEMANTIC ERROR: Function %s already declared [%d, %d]\n", $3.id, $3.line, $3.col);
            sem_errors++;
        }
        newSymbol(table, $3.id, strcat($1.id," list"), "LIST FUNC", $3.line, $3.col, scope, -1);
        $$ = newNode(strcat(strcat($1.id," function list "), $3.id), checkType(table, $3.id));
    }
;

block:
    block statement {
        $$ = newNode("BLOCK", 0);
        $$->subtree1 = $1;
        $$->subtree2 = $2;
        $$->type = $$->subtree2->type;
    }
    | 
    statement { $$ = $1; }
    |
    error { $$ = newNode("ERROR", 0); }
;

statement:
    expr END { $$ = $1; }
    |
    ass_op END{ $$ = $1; }
    |
    LB {
        changeScope(1);
    } block RB { 
        $$ = $3;
        changeScope(0);
    }
    | 
    flow_ctr { $$ = $1; }
;

flow_ctr:
    if_else { $$ = $1; }
    |
    for { $$ = $1; }
    |
    return END { $$ = $1; }
;

expr:
    operation { $$ = $1; }
    |
    declar { $$ = $1; }
    |
    input { $$ = $1; }
    |
    output { $$ = $1; }
    |
    list_op { $$ = $1; }
    |
    list_func { $$ = $1; }
;

list_op:
    list_con { $$ = $1; }
    |
    list_oper { $$ = $1; }
;

if_else:
    IF LP operation RP statement %prec ELSE {
        $$ = newNode("IF", 0);
        $$->subtree1 = $3;
        $$->subtree2 = $5;
    }
    | 
    IF LP operation RP statement ELSE statement {
        $$ = newNode("IF ELSE", 0);
        $$->subtree1 = $3;
        $$->subtree2 = $5;
        $$->subtree3 = $7;
    }
;

for:
    FOR LP ass_op END operation END ass_op RP statement {
        $$ = newNode("FOR", 0);
        $$->subtree1 = $3;
        $$->subtree2 = $5;
        $$->subtree3 = $7;
        $$->subtree4 = $9;
    }
;

return:
    RETURN expr {
        $$ = newNode("RETURN", 0);
        $$->subtree1 = $2;
        $$->type = $$->subtree1->type;
    }
;

ass_op:
    id ASS_OP expr {
        $$ = newNode("ASSIGN", 0);
        $$->subtree1 = $1;
        $$->subtree2 = $3;
        if($$->subtree1->type == 1){
            if($$->subtree2->type == 1){
                $$->type = $$->subtree1->type;
            }else if($$->subtree2->type == 2){
                $$->type = $$->subtree1->type;
            }else{
                printf("SEMANTIC ERROR: Type error when assigning %d to %d. [%d, %d]\n", $$->subtree2->type, $$->subtree1->type, $2.line, $2.col);
                sem_errors++;
            }
        } else if($$->subtree1->type == 2){
            if($$->subtree2->type == 1){
                $$->type = $$->subtree1->type;
            }else if($$->subtree2->type == 2){
                $$->type = $$->subtree2->type;
            }else{
                printf("SEMANTIC ERROR: Type error when assigning %d to %d. [%d, %d]\n", $$->subtree2->type, $$->subtree1->type, $2.line, $2.col);
                sem_errors++;
            }
        } else if($$->subtree1->type == 3){
            if($$->subtree2->type == 3){
                $$->type = $$->subtree1->type;
            }else{
                printf("SEMANTIC ERROR: Type error when assigning %d to %d. [%d, %d]\n", $$->subtree2->type, $$->subtree1->type, $2.line, $2.col);
                sem_errors++;
            }
        } else if($$->subtree1->type == 4){
            if($$->subtree2->type == 3){
                $$->type = $$->subtree1->type;
            }else if($$->subtree2->type == 4){
                $$->type = $$->subtree2->type;
            }else{
                printf("SEMANTIC ERROR: Type error when assigning %d to %d. [%d, %d]\n", $$->subtree2->type, $$->subtree1->type, $2.line, $2.col);
                sem_errors++;
            }
        }
    }
;

list_con:
    expr RLIST_OP expr {
        $$ = newNode("LIST OP", 0);
        $$->subtree1 = $1;
        $$->subtree2 = $3;
        if($$->subtree1->type == 1 || $$->subtree1->type == 2){
            if($$->subtree2->type == 3 || $$->subtree2->type == 4){
                $$->type = $$->subtree2->type;
            }else{
                printf("SEMANTIC ERROR: Type error in list constructor with type %d and %d. [%d, %d]\n", $$->subtree1->type, $$->subtree2->type, $2.line, $2.col);
                sem_errors++;
            }
        } else{
            printf("SEMANTIC ERROR: Type error in list constructor with type %d and %d. [%d, %d]\n", $$->subtree1->type, $$->subtree2->type, $2.line, $2.col);
            sem_errors++;
        }
    }
;

list_oper:
    LLIST_OP expr {
        $$ = newNode("LIST OP", 0);
        $$->subtree1 = $2;
        if($$->subtree1->type == 3 || $$->subtree1->type == 4){
            $$->type = $$->subtree1->type;
        } else{
            printf("SEMANTIC ERROR: Type error in list operator with type %d. [%d, %d]\n", $$->subtree1->type, $1.line, $1.col);
            sem_errors++;
        }
    }
;

list_func:
    expr LIST_FUNC expr {
        $$ = newNode("LIST FUNC", 0);
        $$->subtree1 = $1;
        $$->subtree2 = $3;
        if($$->subtree1->type == 1 || $$->subtree1->type == 2){
            if($$->subtree2->type == 3 || $$->subtree2->type == 4){
                $$->type = $$->subtree2->type;
            }else{
                printf("SEMANTIC ERROR: Type error in list function with type %d and %d. [%d, %d]\n", $$->subtree1->type, $$->subtree2->type, $2.line, $2.col);
                sem_errors++;
            }
        } else{
            printf("SEMANTIC ERROR: Type error in list function with type %d and %d. [%d, %d]\n", $$->subtree1->type, $$->subtree2->type, $2.line, $2.col);
            sem_errors++;
        }
    }
;

operation:
    ulog_op { $$ = $1; }
;

input:
    IN LP id RP {
        $$ = newNode("IN", 0);
        $$->subtree1 = $3;
    }
;

output:
    OUT LP val RP {
        $$ = newNode("OUT", 0);
        $$->subtree1 = $3;
    }
    |
    OUT LP list_oper RP { 
        $$ = newNode("OUT", 0);
        $$->subtree1 = $3; 
    }
;

ulog_op:
    RLOG_OP log_op {
        $$ = newNode("LOG OP", 0);
        $$->subtree1 = $2;
        if($$->subtree1->type != 1 && $$->subtree1->type != 2){
            printf("SEMANTIC ERROR: Type error in logical operation with type %d. [%d, %d]\n", $$->subtree1->type, $1.line, $1.col);
            sem_errors++;
        }
        else $$->type = 1;
    }
    | 
    log_op { $$ = $1; }
;

log_op:
    log_op LLOG_OP rel_op {
        $$ = newNode("LOG OP", 0);
        $$->subtree1 = $1;
        $$->subtree2 = $3;
        if($$->subtree1->type == 1){
            if($$->subtree2->type == 1){
                $$->type = 1;
            }else if($$->subtree2->type == 2){
                $$->type = 1;
            }else{
                printf("SEMANTIC ERROR: Type error in logical operation with type %d and %d. [%d, %d]\n", $$->subtree1->type, $$->subtree2->type, $2.line, $2.col);
                sem_errors++;
            }
        } else if($$->subtree1->type == 2){
            if($$->subtree2->type == 1){
                $$->type = 1;
            }else if($$->subtree2->type == 2){
                $$->type = 1;
            }else{
                printf("SEMANTIC ERROR: Type error in logical operation with type %d and %d. [%d, %d]\n", $$->subtree1->type, $$->subtree2->type, $2.line, $2.col);
                sem_errors++;
            }
        } else{
            printf("SEMANTIC ERROR: Type error in logical operation with type %d and %d. [%d, %d]\n", $$->subtree1->type, $$->subtree2->type, $2.line, $2.col);
            sem_errors++;
        }
    }
    | 
    rel_op { $$ = $1; }
;

rel_op:
    rel_op REL_OP ari_op {
        $$ = newNode("REL OP", 0);
        $$->subtree1 = $1;
        $$->subtree2 = $3;
        if($$->subtree1->type == 1){
            if($$->subtree2->type == 1){
                $$->type = 1;
            }else if($$->subtree2->type == 2){
                $$->type = 1;
            }else{
                printf("SEMANTIC ERROR: Type error in relational operation with type %d and %d. [%d, %d]\n", $$->subtree1->type, $$->subtree2->type, $2.line, $2.col);
                sem_errors++;
            }
        } else if($$->subtree1->type == 2){
            if($$->subtree2->type == 1){
                $$->type = 1;
            }else if($$->subtree2->type == 2){
                $$->type = 1;
            }else{
                printf("SEMANTIC ERROR: Type error in relational operation with type %d and %d. [%d, %d]\n", $$->subtree1->type, $$->subtree2->type, $2.line, $2.col);
                sem_errors++;
            }
        } else{
            if($$->subtree2->type == 3 || $$->subtree2->type == 4){
                $$->type = 1;
            }else{
                printf("SEMANTIC ERROR: Type error in relational operation with type %d and %d. [%d, %d]\n", $$->subtree1->type, $$->subtree2->type, $2.line, $2.col);
                sem_errors++;
            }
        }
    }
    | 
    ari_op { $$ = $1; }
;

ari_op:
    ari_op SS_OP md_op {
        $$ = newNode("ARI SS OP", 0);
        $$->subtree1 = $1;
        $$->subtree2 = $3;
        if($$->subtree1->type == 1){
            if($$->subtree2->type == 1){
                $$->type = $$->subtree1->type;
            }else if($$->subtree2->type == 2){
                $$->type = $$->subtree2->type;
            }else{
                printf("SEMANTIC ERROR: Type error in arithmetic operation with type %d and %d. [%d, %d]\n", $$->subtree1->type, $$->subtree2->type, $2.line, $2.col);
                sem_errors++;
            }
        } else if($$->subtree1->type == 2){
            if($$->subtree2->type == 1){
                $$->type = $$->subtree1->type;
            }else if($$->subtree2->type == 2){
                $$->type = $$->subtree2->type;
            }else{
                printf("SEMANTIC ERROR: Type error in arithmetic operation with type %d and %d. [%d, %d]\n", $$->subtree1->type, $$->subtree2->type, $2.line, $2.col);
                sem_errors++;
            }
        } else{
            printf("SEMANTIC ERROR: Type error in arithmetic operation with type %d and %d. [%d, %d]\n", $$->subtree1->type, $$->subtree2->type, $2.line, $2.col);
            sem_errors++;
        }
    }
    | 
    md_op { $$ = $1; }
;

md_op:
    md_op MD_OP val {
        $$ = newNode("ARI MD OP", 0);
        $$->subtree1 = $1;
        $$->subtree2 = $3;
        if($$->subtree1->type == 1){
            if($$->subtree2->type == 1){
                $$->type = $$->subtree1->type;
            }else if($$->subtree2->type == 2){
                $$->type = $$->subtree2->type;
            }else{
                printf("SEMANTIC ERROR: Type error in arithmetic operation with type %d and %d. [%d, %d]\n", $$->subtree1->type, $$->subtree2->type, $2.line, $2.col);
                sem_errors++;
            }
        } else if($$->subtree1->type == 2){
            if($$->subtree2->type == 1){
                $$->type = $$->subtree1->type;
            }else if($$->subtree2->type == 2){
                $$->type = $$->subtree2->type;
            }else{
                printf("SEMANTIC ERROR: Type error in arithmetic operation with type %d and %d. [%d, %d]\n", $$->subtree1->type, $$->subtree2->type, $2.line, $2.col);
                sem_errors++;
            }
        } else{
            printf("SEMANTIC ERROR: Type error in arithmetic operation with type %d and %d. [%d, %d]\n", $$->subtree1->type, $$->subtree2->type, $2.line, $2.col);
            sem_errors++;
        }
    }
    | 
    SS_OP val {
        $$ = newNode("NEGATIVE", 0);
        $$->subtree1 = $2;
        if($$->subtree1->type != 1 && $$->subtree1->type != 2){
            printf("SEMANTIC ERROR: Type error in assigning negative to type %d. [%d, %d]\n", $$->subtree1->type, $1.line, $1.col);
            sem_errors++;
        }else{
             $$->type = $$->subtree1->type;
        }
    }
    | 
    val { $$ = $1; }
;

val:
    id { $$ = $1; }
    | 
    func_call { $$ = $1; }
    | 
    LP operation RP { $$ = $2; }
    |
    INT { $$ = newNode($1.id, 1); }
    | 
    FLOAT { $$ = newNode($1.id, 2); }
    | 
    NIL { $$ = newNode("NIL", 3); }
    |
    LITERAL { $$ = newNode($1.id, 0); }
;

func_call:
    ID LP func_params RP {
        if(!searchTable(table, $1.id, scope, 1, 1)){
            printf("SEMANTIC ERROR: Function %s not declared [%d, %d]\n", $1.id, $1.line, $1.col);
            sem_errors++;
        }else if(checkParams(table, $1.id) != args){
            printf("SEMANTIC ERROR: Function %s calls for different number of arguments [%d, %d]\n", $1.id, $1.line, $1.col);
            sem_errors++;
        }
        args = 0;
        $$ = newNode("CALL", checkType(table, $1.id));
        $$->subtree2 = $3;
    }
    | 
    ID LP RP {
        if(!searchTable(table, $1.id, scope, 1, 1)){
            printf("SEMANTIC ERROR: Function %s not declared [%d, %d]\n", $1.id, $1.line, $1.col);
            sem_errors++;
        }else if(checkParams(table, $1.id) != args){
            printf("SEMANTIC ERROR: Function %s calls for different number of arguments [%d, %d]\n", $1.id, $1.line, $1.col);
            sem_errors++;
        }
        args = 0;
        $$ = newNode("CALL", checkType(table, $1.id));
    }
;

id:
    ID { 
        if(!searchTable(table, $1.id, scope, 0, 0)){
            printf("SEMANTIC ERROR: Variable %s not declared [%d, %d]\n", $1.id, $1.line, $1.col);
            sem_errors++;
        }
        $$ = newNode($1.id, checkType(table, $1.id)); 
    }
;

func_params: 
    func_params SEPARATOR expr{
        args++;
        $$ = newNode("PARAMS", 0);
        $$->subtree1 = $1;
        $$->subtree2 = $3;
    }
    | 
    expr { 
        args++;
        $$ = $1; 
    }
;

%%

extern void changeScope(int op){
    if(op){
        scope++;
        scope_pos++;
        stack[scope_pos] = scope;
        // for(int i=0; i<10; i++){
        //     printf("%d ", stack[i]);
        // }
        // printf("\n%d, %d, %d\n", scope_pos, scope, stack[scope_pos]);
    }
    else{
        stack[scope_pos] = 0;
        scope_pos--;
        // for(int i=0; i<10; i++){
        //     printf("%d ", stack[i]);
        // }
        // printf("\n%d, %d, %d\n", scope_pos, scope, stack[scope_pos]);
    }
}

int main(int argc, char **argv){
    printf("────────────────────────────────────────\n");
    printf("Analysis in file '%s'", argv[1]);
    printf("\n────────────────────────────────────────\n");

    yyin = fopen(argv[1], "r");

    yyparse();

    if(!main_found){
        printf("SEMANTIC ERROR: Main not found\n");
        sem_errors++;
    }

    if(sem_errors) printf("\nNOTE: For type errors, assume: 1 as int, 2 as float, 3 as int list and 4 as int float.\n");

    printf("\n");
    printf("Syntax analysis finished with %d semantic errors, %d syntax errors and %d lexical errors.\n", sem_errors, sin_errors, lex_errors);
    
    if(!sin_errors) showTree(syntaxTree, 0);

    showTable(table);
    destroyTree();

    fclose(yyin);
    yylex_destroy();

    return 0;
}

void yyerror(const char* error) {
    printf("\nSYNTAX ERROR: %s [%d, %d]\n", error, line, col);
    sin_errors++;
}
