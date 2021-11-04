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
    char tacTable[10000];
    char tacCode[100000];
    char tacFile[100];
    int reg = 0;
    int str = 0;
    int loop = 0;
    int scope_pos = 0;
    int scope = 0;
    int param = 0;
    int params = 0;
    int args_ret = 0;
    int call_scope;
    int id_scope;
    int param_error = 0;
    int args = 0;
    char reg_num[5];
    char str_num[5];
    char loop_num[5];
    char for_loop1[5];
    char for_loop2[5];
    char for_loop3[5];
    char list_loop1[5];
    char list_loop2[5];
    char list_loop3[5];
    char list_loop4[5];
    char if_loop[5];
    char else_loop[5];
    char end_loop[5];
    char finish_loop[5];
    char tac[100];
    int main_found = 0;
    int sin_errors = 0;
    int sem_errors = 0;
    char list_int[1000] = "{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}";
    char list_float[1000] = "{.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0,.0}";
    /*Symbol table*/
    extern symbol table[10000];
    /*Syntax Tree*/
    extern treeNode* treeNodes[10000];
    extern treeNode* syntaxTree;
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
%type <treeNode> block statement if_statement expr operation val
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
        $$ = newNode("PROGRAM", 0, 0, " ");
        $$->subtree1 = $1;
        $$->subtree2 = $2;
    }
    | 
    program_block { $$ = $1; }
    |
    error { $$ = newNode("ERROR", 0, 0, " "); }
;

program_block:
    declar { $$ = $1; }
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
        $$ = newNode("FUNCTION", 0, 0, " ");
        $$->subtree1 = $1;
        $$->subtree2 = $4;
        $$->subtree3 = $8;
        if($$->subtree3->ret){
            if($$->subtree1->type == 1){
                if($$->subtree3->type == 1){
                    $$->type = $$->subtree1->type;
                }else if($$->subtree3->type == 2){
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
        }
        changeScope(0);
    }
    |
    func LP {
        updateParams(table, params);
    } RP LB {
        changeScope(1);
    } block RB {
        $$ = newNode("FUNCTION", 0, 0, " ");
        $$->subtree1 = $1;
        $$->subtree2 = $7;
        if($$->subtree2->ret){
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
        }else{
            strcat(tacCode, "return\n");
        }
        changeScope(0);
    }
;

params:
    params SEPARATOR param {
        params++;
        $$ = newNode("PARAMS", 0, 0, " ");
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
        $$ = newNode(strcat(strcat($1.id," var "), $2.id), checkType(table, $2.id, stack[scope_pos], 1), 0, " ");
    }
    |
    TYPE LIST ID {
        // reg++;
        newSymbol(table, $3.id, strcat($1.id," list"), "LIST PAR ",$3.line, $3.col, stack[scope_pos], params+1, reg);
        $$ = newNode(strcat(strcat($1.id," "), $3.id), checkType(table, $3.id, stack[scope_pos], 1), 0, " ");
    }
;

declar:
    TYPE ID END{
        strcat(tacTable, $1.id);
        strcat(tacTable, " ");
        strcat(tacTable, $2.id);
        strcat(tacTable, "_");
        sprintf(reg_num, "s%d", stack[scope_pos]);
        strcat(tacTable, reg_num);
        strcat(tacTable, "\n");
        if(searchTable(table, $2.id, 0, 1, stack, scope_pos)){
            printf("SEMANTIC ERROR: Variable %s already declared [%d, %d]\n", $2.id, $2.line, $2.col);
            sem_errors++;
        }
        newSymbol(table, $2.id, $1.id, "VAR      ", $2.line, $2.col, stack[scope_pos], 0, reg);   
        $$ = newNode(strcat(strcat($1.id," var "), $2.id), checkType(table, $2.id, stack[scope_pos], 1), 0, " ");
    }
    |
    TYPE LIST ID END{
        strcat(tacTable, $1.id);
        strcat(tacTable, " ");
        strcat(tacTable, $3.id);
        strcat(tacTable, "_");
        sprintf(reg_num, "s%d", stack[scope_pos]);
        strcat(tacTable, reg_num);
        strcat(tacTable, "[100] = ");
        if(!strcmp($1.id, "int")) strcat(tacTable, list_int);
        else strcat(tacTable, list_float);
        strcat(tacTable, "\nint ");
        strcat(tacTable, $3.id);
        strcat(tacTable, "_");
        sprintf(reg_num, "s%d", stack[scope_pos]);
        strcat(tacTable, reg_num);
        strcat(tacTable, "_size = 0\n");
        if(searchTable(table, $3.id, 0, 1, stack, scope_pos)) {
            printf("SEMANTIC ERROR: Variable %s already declared [%d, %d]\n", $3.id, $3.line, $3.col);
            sem_errors++;
        }
        newSymbol(table, $3.id, strcat($1.id," list"), "LIST VAR ",$3.line, $3.col, stack[scope_pos], 0, reg);
        $$ = newNode(strcat(strcat($1.id," "), $3.id), checkType(table, $3.id, stack[scope_pos], 1), 0, " ");
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
        $$ = newNode(strcat(strcat($1.id," function "), $2.id), checkType(table, $2.id, stack[scope_pos], 1), 0, " ");
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
        $$ = newNode(strcat(strcat($1.id," function list "), $3.id), checkType(table, $3.id, stack[scope_pos], 1), 0, " ");
    }
;

block:
    block statement {
        $$ = newNode("BLOCK", 0, 0, " ");
        $$->subtree1 = $1;
        $$->subtree2 = $2;
        if($$->subtree1->ret || $$->subtree2->ret) $$->ret = 1;
        $$->type = $$->subtree2->type;
    }
    | 
    block declar {
        $$ = newNode("BLOCK", 0, 0, " ");
        $$->subtree1 = $1;
        $$->subtree2 = $2;
        if($$->subtree1->ret || $$->subtree2->ret) $$->ret = 1;
        $$->type = $$->subtree2->type;
    }
    | 
    statement { $$ = $1; }
    |
    declar { $$ = $1; }
    |
    error { $$ = newNode("ERROR", 0, 0, " "); }
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
    input { $$ = $1; }
    |
    output { $$ = $1; }
;

if_statement:
    expr END { $$ = $1; }
    |
    ass_op END{ $$ = $1; }
    |
    LB {
        strcat(tacCode, "// if\n");
        sprintf(if_loop, "L%d", loop);
        loop++;
        sprintf(end_loop, "L%d", loop);
        loop++;
        strcat(tacCode, "jump ");
        strcat(tacCode, end_loop);
        strcat(tacCode, "\n");
        strcat(tacCode, if_loop);
        strcat(tacCode, ":\n");
        strcat(tacCode, "not ");
        strcat(tacCode, reg_num);
        strcat(tacCode, ", ");
        strcat(tacCode, reg_num);
        strcat(tacCode, "\n");
        changeScope(1);
    } block RB { 
        $$ = $3;
        changeScope(0);
    }
    | 
    flow_ctr { $$ = $1; }
;

if_else:
    IF LP operation RP if_statement %prec ELSE {
        $$ = newNode("IF", 0, 0, " ");
        $$->subtree1 = $3;
        $$->subtree2 = $5;
        $$->type = $$->subtree2->type;
        strcat(tacCode, end_loop);
        strcat(tacCode, ":\nbrnz ");
        strcat(tacCode, if_loop);
        strcat(tacCode, ", ");
        strcat(tacCode, $$->subtree1->tac);
        strcat(tacCode, "\n");
    }
    | 
    IF LP operation RP if_statement ELSE {
        strcat(tacCode, "// if\n");
        sprintf(else_loop, "L%d", loop);
        loop++;
        sprintf(finish_loop, "L%d", loop);
        loop++;
        strcat(tacCode, "jump ");
        strcat(tacCode, finish_loop);
        strcat(tacCode, "\n");
        strcat(tacCode, else_loop);
        strcat(tacCode, ":\n");
    } statement {
        $$ = newNode("IF ELSE", 0, 0, " ");
        $$->subtree1 = $3;
        $$->subtree2 = $5;
        $$->subtree3 = $8;
        $$->type = $$->subtree3->type;
        strcat(tacCode, "jump ");
        strcat(tacCode, finish_loop);
        strcat(tacCode, "\n");
        strcat(tacCode, end_loop);
        strcat(tacCode, ":\nbrnz ");
        strcat(tacCode, if_loop);
        strcat(tacCode, ", ");
        strcat(tacCode, $$->subtree1->tac);
        strcat(tacCode, "\n");
        strcat(tacCode, "jump ");
        strcat(tacCode, else_loop);
        strcat(tacCode, "\n");
        strcat(tacCode, finish_loop);
        strcat(tacCode, ":\n");
    }
;

for:
    FOR LP ass_op END{
        strcat(tacCode, "// for\n");
        sprintf(for_loop1, "L%d", loop);
        loop++;
        sprintf(for_loop2, "L%d", loop);
        loop++;
        sprintf(for_loop3, "L%d", loop);
        loop++;
        strcat(tacCode, for_loop1);
        strcat(tacCode, ":\n");
    } operation {
        strcat(tacCode, "jump ");
        strcat(tacCode, for_loop2);
        strcat(tacCode, "\n");
        strcat(tacCode, for_loop3);
        strcat(tacCode, ":\n");
    } END ass_op RP statement {
        $$ = newNode("FOR", 0, 0, " ");
        $$->subtree1 = $3;
        $$->subtree2 = $6;
        $$->subtree3 = $9;
        $$->subtree4 = $11;
        $$->type = $$->subtree4->type;
        strcat(tacCode, "jump ");
        strcat(tacCode, for_loop1);
        strcat(tacCode, "\n");
        strcat(tacCode, for_loop2);
        strcat(tacCode, ":\n");
        strcat(tacCode, "brnz ");
        strcat(tacCode, for_loop3);
        strcat(tacCode, ", ");
        strcat(tacCode, $$->subtree2->tac);
        strcat(tacCode, "\n");
    }
;

return:
    RETURN operation {
        $$ = newNode("RETURN", 0, 1, " ");
        $$->subtree1 = $2;
        $$->type = $$->subtree1->type;
        strcat(tacCode, "return ");
        strcat(tacCode, $$->subtree1->tac);
        strcat(tacCode, "\n");
    }
;

input:
    IN LP id RP {
        $$ = newNode("IN", 0, 0, " ");
        $$->subtree1 = $3;
        strcat(tacCode, "// in\n");
        if($$->subtree1->type == 1) strcat(tacCode, "scani ");
        else strcat(tacCode, "scanf ");
        strcat(tacCode, $$->subtree1->tac);
        strcat(tacCode, "\n");
    }
;

output:
    OUT LP operation RP { 
        $$ = newNode("OUT", 0, 0, " ");
        $$->subtree1 = $3;
        strcat(tacCode, "// out\n");
        if($$->subtree1->type == 0){ // Cria um loop para printar cada caracter de um literal.
            sprintf(loop_num, "L%d", loop);
            loop++;
            sprintf(reg_num, "$%d", reg);
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
        $$ = newNode("ASSIGN", 0, 0, " ");
        $$->subtree1 = $1;
        $$->subtree2 = $3;
        
        if($$->subtree1->type == 1){
            if($$->subtree2->type == 1){
                strcat(tacCode, "mov ");
                strcat(tacCode, $$->subtree1->tac);
                strcat(tacCode, ", ");
                strcat(tacCode, $$->subtree2->tac);
                strcat(tacCode, "\n");
                $$->type = $$->subtree1->type;
            }else if($$->subtree2->type == 2){
                strcat(tacCode, "mov $700, ");
                strcat(tacCode, $$->subtree2->tac);
                strcat(tacCode, "\n");
                strcat(tacCode, "fltoint $700, $700\n");
                strcat(tacCode, "mov ");
                strcat(tacCode, $$->subtree1->tac);
                strcat(tacCode, ", $700\n");
                $$->type = $$->subtree1->type;
            }else{
                printf("SEMANTIC ERROR: Type error when assigning %d to %d. [%d, %d]\n", $$->subtree2->type, $$->subtree1->type, $2.line, $2.col);
                sem_errors++;
            }
        } else if($$->subtree1->type == 2){
            if($$->subtree2->type == 1){
                strcat(tacCode, "mov ");
                strcat(tacCode, $$->subtree1->tac);
                strcat(tacCode, ", ");
                strcat(tacCode, $$->subtree2->tac);
                strcat(tacCode, "\n");
                $$->type = $$->subtree1->type;
            }else if($$->subtree2->type == 2){
                strcat(tacCode, "mov $700, ");
                strcat(tacCode, $$->subtree2->tac);
                strcat(tacCode, "\n");
                strcat(tacCode, "inttofl $700, $700\n");
                strcat(tacCode, "mov ");
                strcat(tacCode, $$->subtree1->tac);
                strcat(tacCode, ", $700\n");
                $$->type = $$->subtree2->type;
            }else{
                printf("SEMANTIC ERROR: Type error when assigning %d to %d. [%d, %d]\n", $$->subtree2->type, $$->subtree1->type, $2.line, $2.col);
                sem_errors++;
            }
        } else if($$->subtree1->type == 3){
            if($$->subtree2->type == 3){
                strcat(tacCode, "mov $400, &");
                strcat(tacCode, $$->subtree1->tac);
                strcat(tacCode, "\nmov $500, &");
                strcat(tacCode, $$->subtree2->tac);
                strcat(tacCode, "\nmov $600, 0\n");
                strcat(tacCode, "\nmov $601, ");
                strcat(tacCode, $$->subtree2->tac);
                strcat(tacCode, "_size\n");
                sprintf(loop_num, "L%d", loop);
                loop++;
                strcat(tacCode, loop_num);
                strcat(tacCode, ":\n");
                strcat(tacCode, "mov $603, $500[$600]\n");
                strcat(tacCode, "mov $400[$600], $603\n");
                strcat(tacCode, "add $600, $600, 1\n");
                strcat(tacCode, "sub $602, $601, $600\n");
                strcat(tacCode, "brnz ");
                strcat(tacCode, loop_num);
                strcat(tacCode, ", $602\n");
                strcat(tacCode, "mov ");
                strcat(tacCode, $$->subtree1->tac);
                strcat(tacCode, "_size, $601\n");
                $$->type = $$->subtree1->type;
            }else if($$->subtree2->type == 4){
                strcat(tacCode, "mov $400, &");
                strcat(tacCode, $$->subtree1->tac);
                strcat(tacCode, "\nmov $500, &");
                strcat(tacCode, $$->subtree2->tac);
                strcat(tacCode, "\nmov $600, 0\n");
                strcat(tacCode, "\nmov $601, ");
                strcat(tacCode, $$->subtree2->tac);
                strcat(tacCode, "_size\n");
                sprintf(loop_num, "L%d", loop);
                loop++;
                strcat(tacCode, loop_num);
                strcat(tacCode, ":\n");
                strcat(tacCode, "mov $603, $500[$600]\n");
                strcat(tacCode, "fltoint $603, $603\n");
                strcat(tacCode, "mov $400[$600], $603\n");
                strcat(tacCode, "add $600, $600, 1\n");
                strcat(tacCode, "sub $602, $601, $600\n");
                strcat(tacCode, "brnz ");
                strcat(tacCode, loop_num);
                strcat(tacCode, ", $602\n");
                strcat(tacCode, "mov ");
                strcat(tacCode, $$->subtree1->tac);
                strcat(tacCode, "_size, $601\n");
                $$->type = $$->subtree1->type;
            }else{
                printf("SEMANTIC ERROR: Type error when assigning %d to %d. [%d, %d]\n", $$->subtree2->type, $$->subtree1->type, $2.line, $2.col);
                sem_errors++;
            }
        } else if($$->subtree1->type == 4){
            if($$->subtree2->type == 3){
                strcat(tacCode, "mov $400, &");
                strcat(tacCode, $$->subtree1->tac);
                strcat(tacCode, "\nmov $500, &");
                strcat(tacCode, $$->subtree2->tac);
                strcat(tacCode, "\nmov $600, 0\n");
                strcat(tacCode, "\nmov $601, ");
                strcat(tacCode, $$->subtree2->tac);
                strcat(tacCode, "_size\n");
                sprintf(loop_num, "L%d", loop);
                loop++;
                strcat(tacCode, loop_num);
                strcat(tacCode, ":\n");
                strcat(tacCode, "mov $603, $500[$600]\n");
                strcat(tacCode, "inttofl $603, $603\n");
                strcat(tacCode, "mov $400[$600], $603\n");
                strcat(tacCode, "add $600, $600, 1\n");
                strcat(tacCode, "sub $602, $601, $600\n");
                strcat(tacCode, "brnz ");
                strcat(tacCode, loop_num);
                strcat(tacCode, ", $602\n");
                strcat(tacCode, "mov ");
                strcat(tacCode, $$->subtree1->tac);
                strcat(tacCode, "_size, $601\n");
                $$->type = $$->subtree1->type;
            }else if($$->subtree2->type == 4){
                strcat(tacCode, "mov $400, &");
                strcat(tacCode, $$->subtree1->tac);
                strcat(tacCode, "\nmov $500, &");
                strcat(tacCode, $$->subtree2->tac);
                strcat(tacCode, "\nmov $600, 0\n");
                strcat(tacCode, "\nmov $601, ");
                strcat(tacCode, $$->subtree2->tac);
                strcat(tacCode, "_size\n");
                sprintf(loop_num, "L%d", loop);
                loop++;
                strcat(tacCode, loop_num);
                strcat(tacCode, ":\n");
                strcat(tacCode, "mov $603, $500[$600]\n");
                strcat(tacCode, "mov $400[$600], $603\n");
                strcat(tacCode, "add $600, $600, 1\n");
                strcat(tacCode, "sub $602, $601, $600\n");
                strcat(tacCode, "brnz ");
                strcat(tacCode, loop_num);
                strcat(tacCode, ", $602\n");
                strcat(tacCode, "mov ");
                strcat(tacCode, $$->subtree1->tac);
                strcat(tacCode, "_size, $601\n");
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
        $$ = newNode("LOG OP", 0, 0, " ");
        $$->subtree1 = $1;
        $$->subtree2 = $3;
        if(!strcmp($2.id, "&&")) strcat(tacCode, "and ");
        else strcat(tacCode, "or ");
        sprintf(reg_num, "$%d", reg);
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
        $$ = newNode("REL OP", 0, 0, " ");
        $$->subtree1 = $1;
        $$->subtree2 = $3;
        if(!strcmp($2.id, "==") || !strcmp($2.id, "!=")) strcat(tacCode, "seq ");
        else if(!strcmp($2.id, ">=") || !strcmp($2.id, "<")) strcat(tacCode, "slt ");
        else strcat(tacCode, "sleq ");
        sprintf(reg_num, "$%d", reg);
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
    ari_op LIST_FUNC list_op {
        $$ = newNode("LIST FUNC", 0, 0, " ");
        $$->subtree1 = $1;
        $$->subtree2 = $3;
        if(!strcmp($2.id, ">>")){
            strcat(tacCode, "// map\n");
            strcat(tacCode, "mov $500, &");
            strcat(tacCode, $$->subtree2->tac);
            strcat(tacCode, "\nmov $600, 0\n");
            strcat(tacCode, "mov $601, ");
            strcat(tacCode, $$->subtree2->tac);
            strcat(tacCode, "_size\n");
            sprintf(loop_num, "L%d", loop);
            loop++;
            strcat(tacCode, loop_num);
            strcat(tacCode, ":\n");
            strcat(tacCode, "mov $603, $500[$600]\n");
            strcat(tacCode, "param $603\n");
            strcat(tacCode, "call _");
            strcat(tacCode, $$->subtree1->value);
            strcat(tacCode, ", 1\npop $605\n");
            strcat(tacCode, "mov $500[$600], $605\n");
            strcat(tacCode, "add $600, $600, 1\n");
            strcat(tacCode, "sub $602, $601, $600\n");
            strcat(tacCode, "brnz ");
            strcat(tacCode, loop_num);
            strcat(tacCode, ", $602\n");
        }else{
            strcat(tacCode, "// filter\n");
            strcat(tacCode, "mov $500, &");
            strcat(tacCode, $$->subtree2->tac);
            strcat(tacCode, "\nmov $600, 0\n");
            strcat(tacCode, "mov $601, ");
            strcat(tacCode, $$->subtree2->tac);
            strcat(tacCode, "_size\n");
            sprintf(list_loop1, "L%d", loop);
            loop++;
            sprintf(loop_num, "L%d", loop);
            loop++;
            sprintf(list_loop2, "L%d", loop);
            loop++;
            sprintf(list_loop3, "L%d", loop);
            loop++;
            sprintf(list_loop4, "L%d", loop);
            loop++;
            strcat(tacCode, list_loop1);
            strcat(tacCode, ":\n");
            strcat(tacCode, "mov $603, $500[$600]\n");
            strcat(tacCode, "param $603\n");
            strcat(tacCode, "call _");
            strcat(tacCode, $$->subtree1->value);
            strcat(tacCode, ", 1\npop $605\n");
            strcat(tacCode, "brnz ");
            strcat(tacCode, list_loop2);
            strcat(tacCode, ", $605\n");
            strcat(tacCode, "add $600, $600, 1\n");
            strcat(tacCode, list_loop3);
            strcat(tacCode, ":\n");
            strcat(tacCode, "sub $602, $601, $600\n");
            strcat(tacCode, "brnz ");
            strcat(tacCode, list_loop1);
            strcat(tacCode, ", $602\n");
            strcat(tacCode, "jump ");
            strcat(tacCode, list_loop4);
            strcat(tacCode, "\n");
            strcat(tacCode, list_loop2);
            strcat(tacCode, ":\nmov $610, $600\n");
            strcat(tacCode, "add $611, $610, 1\n");
            strcat(tacCode, loop_num);
            strcat(tacCode, ":\n");
            strcat(tacCode, "mov $613, $500[$611]\n");
            strcat(tacCode, "mov $500[$610], $613\n");
            strcat(tacCode, "add $610, $610, 1\n");
            strcat(tacCode, "add $611, $611, 1\n");
            strcat(tacCode, "sub $612, $601, $610\n");
            strcat(tacCode, "brnz "); 
            strcat(tacCode, loop_num);
            strcat(tacCode, ", $612\n");
            strcat(tacCode, "sub $601, $601, 1\n");
            strcat(tacCode, "sub ");
            strcat(tacCode, $$->subtree2->tac);
            strcat(tacCode, "_size, ");
            strcat(tacCode, $$->subtree2->tac);
            strcat(tacCode, "_size, 1\n");
            strcat(tacCode, "jump ");
            strcat(tacCode, list_loop3);
            strcat(tacCode, "\n");
            strcat(tacCode, list_loop4);
            strcat(tacCode, ":\n");
        }
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
        strcpy($$->tac, $$->subtree2->tac);
    }
    |
    ari_op RLIST_OP list_op {
        $$ = newNode("LIST OP", 0, 0, " ");
        $$->subtree1 = $1;
        $$->subtree2 = $3;
        sprintf(loop_num, "L%d", loop);
        loop++;
        sprintf(list_loop1, "L%d", loop);
        loop++;
        strcat(tacCode, "mov $500, &");
        strcat(tacCode, $$->subtree2->tac);
        strcat(tacCode, "\nmov $601, ");
        strcat(tacCode, $$->subtree2->tac);
        strcat(tacCode, "_size\n");
        strcat(tacCode, "brz "); 
        strcat(tacCode, list_loop1);
        strcat(tacCode, ", $601\n");
        strcat(tacCode, "sub $602, $601, 1\n");
        strcat(tacCode, loop_num);
        strcat(tacCode, ":\n");
        strcat(tacCode, "mov $604, $500[$602]\n");
        strcat(tacCode, "mov $500[$601], $604\n");
        strcat(tacCode, "sub $602, $602, 1\n");
        strcat(tacCode, "sub $601, $601, 1\n");
        strcat(tacCode, "brnz "); 
        strcat(tacCode, loop_num);
        strcat(tacCode, ", $601\n");
        strcat(tacCode, list_loop1);
        strcat(tacCode, ":\n");
        strcat(tacCode, "mov $500[0], ");
        strcat(tacCode, $$->subtree1->tac);
        strcat(tacCode, "\nadd ");
        strcat(tacCode, $$->subtree2->tac);
        strcat(tacCode, "_size, ");
        strcat(tacCode, $$->subtree2->tac);
        strcat(tacCode, "_size, 1\n");
        strcpy($$->tac, $$->subtree2->tac);
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
        $$ = newNode("ARI SS OP", 0, 0, " ");
        $$->subtree1 = $1;
        $$->subtree2 = $3;
        if(!strcmp($2.id, "+")) strcat(tacCode, "add ");
        else strcat(tacCode, "sub ");
        sprintf(reg_num, "$%d", reg);
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
        $$ = newNode("NEGATIVE", 0, 0, " ");
        $$->subtree1 = $2;
        sprintf(reg_num, "$%d", reg);
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
        $$ = newNode("ARI MD OP", 0, 0, " ");
        $$->subtree1 = $1;
        $$->subtree2 = $3;
        if(!strcmp($2.id, "*")) strcat(tacCode, "mul ");
        else strcat(tacCode, "div ");
        sprintf(reg_num, "$%d", reg);
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
        $$ = newNode("UNARY OP", 0, 0, " ");
        $$->subtree1 = $2;
        sprintf(reg_num, "$%d", reg);
        strcpy($$->tac, reg_num);
        reg++;
        if($$->subtree1->type != 0){
            if(!strcmp($1.id, "!")){
                if($$->subtree1->type < 3){
                    $$->type = 1;
                    strcat(tacCode, "// not\n");
                    strcat(tacCode, "not ");
                    strcat(tacCode, reg_num);
                    strcat(tacCode, $$->subtree1->tac);
                }else{
                    strcat(tacCode, "// tail\n");
                    strcat(tacCode, "mov $500, &");
                    strcat(tacCode, $$->subtree1->tac);
                    strcat(tacCode, "\nmov $600, 0\n");
                    strcat(tacCode, "mov $605, 1\n");
                    strcat(tacCode, "mov $601, ");
                    strcat(tacCode, $$->subtree1->tac);
                    strcat(tacCode, "_size\n");
                    sprintf(loop_num, "L%d", loop);
                    loop++;
                    strcat(tacCode, loop_num);
                    strcat(tacCode, ":\n");
                    strcat(tacCode, "mov $603, $500[$605]\n");
                    strcat(tacCode, "mov $500[$600], $603\n");
                    strcat(tacCode, "add $600, $600, 1\n");
                    strcat(tacCode, "add $605, $605, 1\n");
                    strcat(tacCode, "sub $602, $601, $600\n");
                    strcat(tacCode, "brnz ");
                    strcat(tacCode, loop_num);
                    strcat(tacCode, ", $602\n");
                    strcat(tacCode, "sub ");
                    strcat(tacCode, $$->subtree1->tac);
                    strcat(tacCode, "_size, ");
                    strcat(tacCode, $$->subtree1->tac);
                    strcat(tacCode, "_size, 1\n");
                    strcpy($$->tac, $$->subtree1->tac);
                    $$->type = $$->subtree1->type;
                }
            }else{
                if($$->subtree1->type < 3){
                    printf("SEMANTIC ERROR: Type error in unary operator with type %d. [%d, %d]\n", $$->subtree1->type, $1.line, $1.col);
                    sem_errors++;
                }else if(!strcmp($1.id, "%")){
                    strcat(tacCode, "// tail\n");
                    strcat(tacCode, "mov $500, &");
                    strcat(tacCode, $$->subtree1->tac);
                    strcat(tacCode, "\nmov $600, 0\n");
                    strcat(tacCode, "mov $605, 1\n");
                    strcat(tacCode, "mov $601, ");
                    strcat(tacCode, $$->subtree1->tac);
                    strcat(tacCode, "_size\n");
                    sprintf(loop_num, "L%d", loop);
                    loop++;
                    strcat(tacCode, loop_num);
                    strcat(tacCode, ":\n");
                    strcat(tacCode, "mov $603, $500[$605]\n");
                    strcat(tacCode, "mov $500[$600], $603\n");
                    strcat(tacCode, "add $600, $600, 1\n");
                    strcat(tacCode, "add $605, $605, 1\n");
                    strcat(tacCode, "sub $602, $601, $600\n");
                    strcat(tacCode, "brnz ");
                    strcat(tacCode, loop_num);
                    strcat(tacCode, ", $602\n");
                    strcat(tacCode, "sub ");
                    strcat(tacCode, $$->subtree1->tac);
                    strcat(tacCode, "_size, ");
                    strcat(tacCode, $$->subtree1->tac);
                    strcat(tacCode, "_size, 1\n");
                    strcpy($$->tac, $$->subtree1->tac);
                    $$->type = $$->subtree1->type;
                }else{
                    strcat(tacCode, "// head\n");
                    strcat(tacCode, "mov $500, &");
                    strcat(tacCode, $$->subtree1->tac);
                    strcat(tacCode, "\nmov ");
                    strcat(tacCode, reg_num);
                    strcat(tacCode, ", $500[0]\n");
                    $$->type = $$->subtree1->type-2;
                }
            }
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
    INT { $$ = newNode($1.id, 1, 0, $1.id); }
    | 
    FLOAT { $$ = newNode($1.id, 2, 0, $1.id); }
    | 
    NIL { $$ = newNode("NIL", 3, 0, $1.id); }
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
        $$ = newNode($1.id, 0, 0, str_num); 
    }
;

func_call:
    ID LP {
        call_scope = searchTable(table, $1.id, 1, 1, stack, scope_pos);
    } func_params RP {
        if(!call_scope){
            printf("SEMANTIC ERROR: Function '%s' not declared [%d, %d]\n", $1.id, $1.line, $1.col);
            sem_errors++;
        }else if(checkParams(table, $1.id, -1) != args){
            printf("SEMANTIC ERROR: Function '%s' calls for different number of parameters [%d, %d]\n", $1.id, $1.line, $1.col);
            sem_errors++;
        }else if(param_error){
            printf("SEMANTIC ERROR: Function '%s' incorrect parameter type [%d, %d]\n", $1.id, $2.line, $2.col);
            param_error = 0;
            sem_errors++;
        }
        $$ = newNode("CALL", checkType(table, $1.id, stack[scope_pos], 0), 0, " ");
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
        }else if(checkParams(table, $1.id, -1) != args){
            printf("SEMANTIC ERROR: Function %s calls for different number of parameters [%d, %d]\n", $1.id, $1.line, $1.col);
            sem_errors++;
        }
        args = 0;
        $$ = newNode("CALL", checkType(table, $1.id, stack[scope_pos], 0), 0, " ");
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
        param = checkParams(table, $1.id, stack[scope_pos]);
        sprintf(reg_num, "#%d", param-1);
        id_scope = checkScope(table, $1.id, stack[scope_pos]);
        sprintf(str_num, "_s%d", id_scope);
        strcpy(tac, $1.id);
        strcat(tac, str_num);
        if(param)
            $$ = newNode($1.id, checkType(table, $1.id, stack[scope_pos], 1), 0, reg_num); 
        else
            $$ = newNode($1.id, checkType(table, $1.id, stack[scope_pos], 1), 0, tac); 
    }
;

func_params: 
    func_params SEPARATOR operation{
        args++;
        $$ = newNode("PARAMS", 0, 0, " ");
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
        $$ = newNode("PARAMS", 0, 0, " ");
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
    
    int i = 0; // Pula os primeiros caracteres "tests/"
    while(++i){
        tacFile[i-1] = argv[1][i-1];
        if(tacFile[i-1] == '.' || i > 100) break;
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
    
    if(!sin_errors) showTree(syntaxTree, 0);

    showTable(table);
    destroyTree();

    strcat(tacCode, "\n");
    strcat(tacCode, "main:");
    strcat(tacCode, "\n");
    strcat(tacCode, "call _main, 0");
    strcat(tacCode, "\n");
    strcat(tacTable, "int NIL[100] = ");
    strcat(tacTable, list_int);
    strcat(tacTable, "\n");
    strcat(tacTable, "int NIL_size = 0\n");
    if(!(sem_errors+sin_errors+lex_errors)) intermediateCode(tacFile, tacTable, tacCode);

    fclose(yyin);
    yylex_destroy();

    return 0;
}

void yyerror(const char* error) {
    printf("\nSYNTAX ERROR: %s [%d, %d]\n", error, line, col);
    sin_errors++;
}
