%debug

%define parse.error verbose
%define lr.type canonical-lr

%{
    #include "../lib/data_structures.h"
    #include "../lib/intermediate_code.h"
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
    char tacTable[1000];
    char tacCode[1000];
    int reg = 0;
    int str = 0;
    int loop = 0;
    int scope_pos = 0;
    int scope = 0;
    int params = 0;
    int args_ret = 0;
    int call_scope;
    int param_error = 0;
    int args = 0;
    char reg_num[5];
    char str_num[5];
    char loop_num[5];
    char tac[100];
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
%token <lex> LLOG_OP
%token <lex> REL_OP ASS_OP
%token <lex> LIST_FUNC NIL UN_OP RLIST_OP
%token <lex> LITERAL
%token <lex> LB RB LP RP END SEPARATOR

/*Precedences*/
%left SS_OP
%left MD_OP
%left LIST_FUNC
%right RLIST_OP
%right UN_OP
%right LLOG_OP 
%right ELSE

/*Grammar types*/
%type <treeNode> start
%type <treeNode> program program_block
%type <treeNode> declar func_dclr params func param
%type <treeNode> block statement expr operation val
%type <treeNode> flow_ctr if_else for return
%type <treeNode> ass_op un_op log_op rel_op ari_op md_op
%type <treeNode> input output
%type <treeNode> list_op
%type <treeNode> id
%type <treeNode> func_call func_params

/*Grammar*/
%%
start:
    program { syntaxTree = $$; }
;

program:
    program program_block {
        $$ = newNode("PROGRAM", 0, " ");
        $$->subtree1 = $1;
        $$->subtree2 = $2;
    }
    | 
    program_block { $$ = $1; }
    |
    error { $$ = newNode("ERROR", 0, " "); }
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
        $$ = newNode("FUNCTION", 0, " ");
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
        $$ = newNode("FUNCTION", 0, " ");
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
    params SEPARATOR param {
        params++;
        $$ = newNode("PARAMS", 0, " ");
        $$->subtree1 = $1;
        $$->subtree2 = $3;
    }
    |
    param { 
        params++;
        $$ = $1;
    }
;

param:
    TYPE ID {
        // reg++;
        newSymbol(table, $2.id, $1.id, "PAR      ", $2.line, $2.col, stack[scope_pos], params+1, reg);   
        $$ = newNode(strcat(strcat($1.id," var "), $2.id), checkType(table, $2.id, stack[scope_pos], 1), " ");
    }
    |
    TYPE LIST ID {
        // reg++;
        newSymbol(table, $3.id, strcat($1.id," list"), "LIST PAR ",$3.line, $3.col, stack[scope_pos], params+1, reg);
        $$ = newNode(strcat(strcat($1.id," "), $3.id), checkType(table, $3.id, stack[scope_pos], 1), " ");
    }
;

declar:
    TYPE ID {
        strcat(tacTable, $1.id);
        strcat(tacTable, " ");
        strcat(tacTable, $2.id);
        strcat(tacTable, "\n");
        // strcat(tacCode, "mov ");
        // reg_num[0] = '$';
        // reg_num[1] = reg + '0';
        // strcat(tacCode, reg_num);
        // strcat(tacCode, ", ");
        // strcat(tacCode, $2.id);
        // strcat(tacCode, "\n");
        // reg++;
        if(searchTable(table, $2.id, 0, 1, stack, scope_pos)){
            printf("SEMANTIC ERROR: Variable %s already declared [%d, %d]\n", $2.id, $2.line, $2.col);
            sem_errors++;
        }
        newSymbol(table, $2.id, $1.id, "VAR      ", $2.line, $2.col, stack[scope_pos], 0, reg);   
        $$ = newNode(strcat(strcat($1.id," var "), $2.id), checkType(table, $2.id, stack[scope_pos], 1), " ");
    }
    |
    TYPE LIST ID {
        strcat(tacTable, $1.id);
        strcat(tacTable, " ");
        strcat(tacTable, $3.id);
        // strcat(tacTable, "[]");
        strcat(tacTable, "\n");
        // strcat(tacCode, "mov ");
        // reg_num[0] = '$';
        // reg_num[1] = reg + '0';
        // strcat(tacCode, reg_num);
        // strcat(tacCode, ", ");
        // strcat(tacCode, $3.id);
        // strcat(tacCode, "\n");
        // reg++;
        if(searchTable(table, $3.id, 0, 1, stack, scope_pos)) {
            printf("SEMANTIC ERROR: Variable %s already declared [%d, %d]\n", $3.id, $3.line, $3.col);
            sem_errors++;
        }
        newSymbol(table, $3.id, strcat($1.id," list"), "LIST VAR ",$3.line, $3.col, stack[scope_pos], 0, reg);
        $$ = newNode(strcat(strcat($1.id," "), $3.id), checkType(table, $3.id, stack[scope_pos], 1), " ");
    }
;

func:
    TYPE ID {
        strcat(tacCode, "_");
        strcat(tacCode, $2.id);
        strcat(tacCode, ":");
        strcat(tacCode, "\n");
        if(!strcmp($2.id, "main")) main_found = 1;
        if(searchTable(table, $2.id, 1, 0, stack, scope_pos)) {
            printf("SEMANTIC ERROR: Function %s already declared [%d, %d]\n", $2.id, $2.line, $2.col);
            sem_errors++;
        }
        newSymbol(table, $2.id, $1.id, "FUNC     ", $2.line, $2.col, stack[scope_pos], -1, -1);
        $$ = newNode(strcat(strcat($1.id," function "), $2.id), checkType(table, $2.id, stack[scope_pos], 1), " ");
    }
    |
    TYPE LIST ID {
        strcat(tacCode, "_");
        strcat(tacCode, $3.id);
        strcat(tacCode, ":");
        strcat(tacCode, "\n");
        if(!strcmp($3.id, "main")) main_found = 1;
        if(searchTable(table, $3.id, 1, 0, stack, scope_pos)) {
            printf("SEMANTIC ERROR: Function %s already declared [%d, %d]\n", $3.id, $3.line, $3.col);
            sem_errors++;
        }
        newSymbol(table, $3.id, strcat($1.id," list"), "LIST FUNC", $3.line, $3.col, scope, -1, -1);
        $$ = newNode(strcat(strcat($1.id," function list "), $3.id), checkType(table, $3.id, stack[scope_pos], 1), " ");
    }
;

block:
    block statement {
        $$ = newNode("BLOCK", 0, " ");
        $$->subtree1 = $1;
        $$->subtree2 = $2;
        $$->type = $$->subtree2->type;
    }
    | 
    statement { $$ = $1; }
    |
    error { $$ = newNode("ERROR", 0, " "); }
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
;

if_else:
    IF LP operation RP statement %prec ELSE {
        $$ = newNode("IF", 0, " ");
        $$->subtree1 = $3;
        // loop_num[0] = 'L';
        // loop_num[1] = loop + '0';
        // loop++;
        // strcat(tacCode, "brz ");
        // strcat(tacCode, loop_num);
        // strcat(tacCode, ", ");
        // strcat(tacCode, "\n");
        $$->subtree2 = $5;
        $$->type = $$->subtree2->type;
    }
    | 
    IF LP operation RP statement ELSE statement {
        $$ = newNode("IF ELSE", 0, " ");
        $$->subtree1 = $3;
        $$->subtree2 = $5;
        $$->subtree3 = $7;
        $$->type = $$->subtree3->type;
    }
;

for:
    FOR LP ass_op END operation END ass_op RP statement {
        $$ = newNode("FOR", 0, " ");
        $$->subtree1 = $3;
        $$->subtree2 = $5;
        $$->subtree3 = $7;
        $$->subtree4 = $9;
        $$->type = $$->subtree4->type;
    }
;

return:
    RETURN operation {
        $$ = newNode("RETURN", 0, " ");
        $$->subtree1 = $2;
        $$->type = $$->subtree1->type;
        strcat(tacCode, "return ");
        strcat(tacCode, $$->subtree1->tac);
        strcat(tacCode, "\n");
    }
;

input:
    IN LP id RP {
        $$ = newNode("IN", 0, " ");
        $$->subtree1 = $3;
        if($$->subtree1->type == 1) strcat(tacCode, "scani ");
        else strcat(tacCode, "scanf ");
        strcat(tacCode, $$->subtree1->tac);
        strcat(tacCode, "\n");
    }
;

output:
    OUT LP operation RP { 
        $$ = newNode("OUT", 0, " ");
        $$->subtree1 = $3;
        if($$->subtree1->type == 0){ // Cria um loop para printar cada caracter de um literal.
            loop_num[0] = 'L';
            loop_num[1] = loop + '0';
            loop++;
            reg_num[0] = '$';
            reg_num[1] = reg + '0';
            reg++;
            strcat(tacCode, "mov $1000, ");
            sprintf(str_num, "%ld", strlen($$->subtree1->value)-2);
            strcat(tacCode, str_num);
            strcat(tacCode, "\n");
            strcat(tacCode, "mov $999, 0\n");
            strcat(tacCode, loop_num);
            strcat(tacCode, ":\n");
            strcat(tacCode, "mov ");
            strcat(tacCode, reg_num);
            strcat(tacCode, ", &");
            strcat(tacCode, $$->subtree1->tac);
            strcat(tacCode, "\n");
            strcat(tacCode, "mov ");
            strcat(tacCode, reg_num);
            strcat(tacCode, ", ");
            strcat(tacCode, reg_num);
            strcat(tacCode, "[$999]\n");
            strcat(tacCode, "print ");
            strcat(tacCode, reg_num);
            strcat(tacCode, "\n");
            strcat(tacCode, "sub $1000, $1000, 1\n");
            strcat(tacCode, "add $999, $999, 1\n");
            strcat(tacCode, "brnz ");
            strcat(tacCode, loop_num);
            strcat(tacCode, ", $1000\n");
        }else{
            strcat(tacCode, "print ");
            strcat(tacCode, $$->subtree1->tac);
            strcat(tacCode, "\n");
        }
        if(!strcmp($1.id, "writeln")) strcat(tacCode, "print '\\n' \n");
    }
;

ass_op:
    id ASS_OP operation {
        $$ = newNode("ASSIGN", 0, " ");
        $$->subtree1 = $1;
        $$->subtree2 = $3;
        strcat(tacCode, "mov ");
        strcat(tacCode, $$->subtree1->tac);
        strcat(tacCode, ", ");
        strcat(tacCode, $$->subtree2->tac);
        strcat(tacCode, "\n");
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

operation:
    log_op { $$ = $1; }
;

log_op:
    log_op LLOG_OP rel_op {
        $$ = newNode("LOG OP", 0, " ");
        $$->subtree1 = $1;
        $$->subtree2 = $3;
        if(!strcmp($2.id, "&&")) strcat(tacCode, "and ");
        else strcat(tacCode, "or ");
        reg_num[0] = '$';
        reg_num[1] = reg + '0';
        strcat(tacCode, reg_num);
        strcat(tacCode, ", ");
        strcat(tacCode, $$->subtree1->tac);
        strcat(tacCode, ", ");
        strcat(tacCode, $$->subtree2->tac);
        strcat(tacCode, "\n");
        strcpy($$->tac, reg_num);
        reg++;
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
    rel_op REL_OP list_op {
        $$ = newNode("REL OP", 0, " ");
        $$->subtree1 = $1;
        $$->subtree2 = $3;
        if(!strcmp($2.id, "==") || !strcmp($2.id, "!=")) strcat(tacCode, "seq ");
        else if(!strcmp($2.id, ">=") || !strcmp($2.id, "<")) strcat(tacCode, "slt ");
        else strcat(tacCode, "sleq ");
        reg_num[0] = '$';
        reg_num[1] = reg + '0';
        strcat(tacCode, reg_num);
        strcat(tacCode, ", ");
        strcat(tacCode, $$->subtree1->tac);
        strcat(tacCode, ", ");
        strcat(tacCode, $$->subtree2->tac);
        strcat(tacCode, "\n");
        if(!strcmp($2.id, ">=") || !strcmp($2.id, "!=") || !strcmp($2.id, ">")){
            strcat(tacCode, "not ");
            strcat(tacCode, reg_num);
            strcat(tacCode, ", ");
            strcat(tacCode, reg_num);
            strcat(tacCode, "\n");
        }
        strcpy($$->tac, reg_num);
        reg++;
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
    list_op { $$ = $1; }
;

list_op:
    list_op LIST_FUNC ari_op {
        $$ = newNode("LIST FUNC", 0, " ");
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
    |
    list_op RLIST_OP ari_op {
        $$ = newNode("LIST OP", 0, " ");
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
    |
    ari_op { $$ = $1; }
;

ari_op:
    ari_op SS_OP md_op {
        $$ = newNode("ARI SS OP", 0, " ");
        $$->subtree1 = $1;
        $$->subtree2 = $3;
        if(!strcmp($2.id, "+")) strcat(tacCode, "add ");
        else strcat(tacCode, "sub ");
        reg_num[0] = '$';
        reg_num[1] = reg + '0';
        strcat(tacCode, reg_num);
        strcat(tacCode, ", ");
        strcat(tacCode, $$->subtree1->tac);
        strcat(tacCode, ", ");
        strcat(tacCode, $$->subtree2->tac);
        strcat(tacCode, "\n");
        strcpy($$->tac, reg_num);
        reg++;
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
    SS_OP md_op {
        $$ = newNode("NEGATIVE", 0, " ");
        $$->subtree1 = $2;
        reg_num[0] = '$';
        reg_num[1] = reg + '0';
        strcat(tacCode, "minus ");
        strcat(tacCode, reg_num);
        strcat(tacCode, ", ");
        strcat(tacCode, $$->subtree1->tac);
        strcat(tacCode, "\n");
        strcpy($$->tac, reg_num);
        reg++;
        if($$->subtree1->type > 2){
            printf("SEMANTIC ERROR: Type error in assigning negative to type %d. [%d, %d]\n", $$->subtree1->type, $1.line, $1.col);
            sem_errors++;
        }else{
             $$->type = $$->subtree1->type;
        }
    }
    | 
    md_op { $$ = $1; }
;

md_op:
    md_op MD_OP un_op {
        $$ = newNode("ARI MD OP", 0, " ");
        $$->subtree1 = $1;
        $$->subtree2 = $3;
        if(!strcmp($2.id, "*")) strcat(tacCode, "mul ");
        else strcat(tacCode, "div ");
        reg_num[0] = '$';
        reg_num[1] = reg + '0';
        strcat(tacCode, reg_num);
        strcat(tacCode, ", ");
        strcat(tacCode, $$->subtree1->tac);
        strcat(tacCode, ", ");
        strcat(tacCode, $$->subtree2->tac);
        strcat(tacCode, "\n");
        strcpy($$->tac, reg_num);
        reg++;
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
    un_op { $$ = $1; }
;

un_op:
    UN_OP un_op {
        $$ = newNode("UNARY OP", 0, " ");
        $$->subtree1 = $2;
        if($$->subtree1->type != 0){
            $$->type = $$->subtree1->type;
        } else{
            printf("SEMANTIC ERROR: Type error in unary operator with type %d. [%d, %d]\n", $$->subtree1->type, $1.line, $1.col);
            sem_errors++;
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
    INT { $$ = newNode($1.id, 1, $1.id); }
    | 
    FLOAT { $$ = newNode($1.id, 2, $1.id); }
    | 
    NIL { $$ = newNode("NIL", 3, $1.id); }
    |
    LITERAL {
        strcat(tacTable, "char ");
        str_num[0] = '_';
        str_num[1] = 's';
        str_num[2] = str + '0';
        strcat(tacTable, str_num);
        strcat(tacTable, "[] = ");
        strcat(tacTable, $1.id);
        strcat(tacTable, "\n");
        str++;
        $$ = newNode($1.id, 0, str_num); 
    }
;

func_call:
    ID LP {
        call_scope = searchTable(table, $1.id, 1, 1, stack, scope_pos);
    } func_params RP {
        if(!call_scope){
            printf("SEMANTIC ERROR: Function '%s' not declared [%d, %d]\n", $1.id, $1.line, $1.col);
            sem_errors++;
        }else if(checkParams(table, $1.id) != args){
            printf("SEMANTIC ERROR: Function '%s' calls for different number of parameters [%d, %d]\n", $1.id, $1.line, $1.col);
            sem_errors++;
        }else if(param_error){
            printf("SEMANTIC ERROR: Function '%s' incorrect parameter type [%d, %d]\n", $1.id, $2.line, $2.col);
            param_error = 0;
            sem_errors++;
        }
        $$ = newNode("CALL", checkType(table, $1.id, stack[scope_pos], 0), " ");
        $$->subtree2 = $4;
        strcat(tacCode, "call _");
        strcat(tacCode, $1.id);
        strcat(tacCode, ", ");
        sprintf(str_num, "%d", args);
        strcat(tacCode, str_num);
        strcat(tacCode, "\n");
        args = 0;

    }
    | 
    ID LP RP {
        if(!searchTable(table, $1.id, 1, 1, stack, scope_pos)){
            printf("SEMANTIC ERROR: Function %s not declared [%d, %d]\n", $1.id, $1.line, $1.col);
            sem_errors++;
        }else if(checkParams(table, $1.id) != args){
            printf("SEMANTIC ERROR: Function %s calls for different number of parameters [%d, %d]\n", $1.id, $1.line, $1.col);
            sem_errors++;
        }
        args = 0;
        $$ = newNode("CALL", checkType(table, $1.id, stack[scope_pos], 0), " ");
        strcat(tacCode, "call _");
        strcat(tacCode, $1.id);
        strcat(tacCode, ", 0\n");
    }
;

id:
    ID { 
        if(!searchTable(table, $1.id, 0, 0, stack, scope_pos)){
            printf("SEMANTIC ERROR: Variable %s not declared [%d, %d]\n", $1.id, $1.line, $1.col);
            sem_errors++;
        }
        $$ = newNode($1.id, checkType(table, $1.id, stack[scope_pos], 1), $1.id); 
    }
;

func_params: 
    func_params SEPARATOR operation{
        args++;
        $$ = newNode("PARAMS", 0, " ");
        $$->subtree1 = $1;
        $$->subtree2 = $3;
        strcat(tacCode, "param ");
        strcat(tacCode, $$->subtree2->tac);
        strcat(tacCode, "\n");
        if($$->subtree2->type < 3 && checkParamType(table, args, call_scope-1) > 2)
            param_error = 1;
        else if($$->subtree2->type > 2 && checkParamType(table, args, call_scope-1) < 3)
            param_error = 1;
        // printf("asub type: %d, check type: %d, args: %d, call: %d\n", $$->subtree2->type, checkParamType(table, args, call_scope-1), args, call_scope);
    }
    | 
    operation { 
        args++;
        $$ = newNode("PARAMS", 0, " ");
        $$->subtree1 = $1;
        strcat(tacCode, "param ");
        strcat(tacCode, $$->subtree1->tac);
        strcat(tacCode, "\n");
        if($$->subtree1->type < 3 && checkParamType(table, args, call_scope-1) > 2)
            param_error = 1;
        else if($$->subtree1->type > 2 && checkParamType(table, args, call_scope-1) < 3)
            param_error = 1;
        // printf("bsub type: %d, check type: %d, args: %d, call: %d\n", $$->subtree1->type, checkParamType(table, args, call_scope-1), args, call_scope);
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
    char tacFile[100];
    int i = 5; // Pula os primeiros caracteres "tests/"
    while(++i){
        tacFile[i-6] = argv[1][i];
        if(tacFile[i-6] == '.') break;
    }
    strcat(tacFile, "tac");
    
    if(argc > 1) yyin = fopen(argv[1], "r");
    else return 0;

    yyparse();

    if(!main_found){
        printf("SEMANTIC ERROR: Main not found\n");
        sem_errors++;
    }

    if(sem_errors) printf("\nNOTE: For type errors, assume: 1 as int, 2 as float, 3 as int list and 4 as float list.\n");

    printf("\n");
    printf("Syntax analysis finished with %d semantic errors, %d syntax errors and %d lexical errors.\n", sem_errors, sin_errors, lex_errors);
    
    // if(!sin_errors) showTree(syntaxTree, 0);

    showTable(table);
    destroyTree();

    strcat(tacCode, "\n");
    strcat(tacCode, "main:");
    strcat(tacCode, "\n");
    strcat(tacCode, "call _main, 0");
    strcat(tacCode, "\n");
    intermediateCode(tacFile, tacTable, tacCode);

    fclose(yyin);
    yylex_destroy();

    return 0;
}

void yyerror(const char* error) {
    printf("\nSYNTAX ERROR: %s [%d, %d]\n", error, line, col);
    sin_errors++;
}
