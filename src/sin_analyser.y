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
    extern int errors;
    extern FILE *yyin;
%}

%union{
    struct lexToken {
        char id[200];
        int line;
        int col;
    } lex;
    struct treeNode* treeNode;
}

%token <lex> INT FLOAT TYPE ID LIST
%token <lex> IF FOR RETURN OUT IN
%left  <lex> SS_OP MD_OP
%token  <lex> LLOG_OP
%token <lex> RLOG_OP
%right <lex> ELSE
%token <lex> REL_OP ASS_OP
%token <lex> LIST_FUNC NIL LLIST_OP RLIST_OP
%token <lex> LITERAL
%token <lex> LB RB LP RP END SEPARATOR

%type <treeNode> start
%type <treeNode> program
%type <treeNode> program_block
%type <treeNode> declar
%type <treeNode> func_dclr
%type <treeNode> params
%type <treeNode> func
%type <treeNode> block
%type <treeNode> flow_ctr
%type <treeNode> statement
%type <treeNode> if_else
%type <treeNode> for
%type <treeNode> return
%type <treeNode> expr
%type <treeNode> ass_op
%type <treeNode> operation
%type <treeNode> input
%type <treeNode> output
%type <treeNode> log_op
%type <treeNode> list_op
%type <treeNode> list_con
%type <treeNode> list_oper
%type <treeNode> list_func
%type <treeNode> ulog_op
%type <treeNode> rel_op
%type <treeNode> ari_op
%type <treeNode> md_op
%type <treeNode> val
%type <treeNode> id
%type <treeNode> func_call
%type <treeNode> func_params


%%
start:
    program { syntaxTree = $$; }
;

program:
    program program_block {
        $$ = newNode("PROGRAM");
        $$->subtree1 = $1;
        $$->subtree2 = $2;
    }
    | 
    program_block { $$ = $1; }
;

program_block:
    declar END { $$ = $1; }
    | 
    func_dclr { $$ = $1; }
;

func_dclr:
    func LP params RP LB block RB {
        $$ = newNode("FUNCTION");
        $$->subtree1 = $1;
        $$->subtree2 = $3;
        $$->subtree3 = $6;
    }
    |
    func LP RP LB block RB {
        $$ = newNode("FUNCTION");
        $$->subtree1 = $1;
        $$->subtree2 = $5;
    }
;

params:
    params SEPARATOR declar {
        $$ = newNode("PARAMS");
        $$->subtree1 = $1;
        $$->subtree2 = $3;
    }
    |
    declar { $$ = $1; }
;

declar:
    TYPE ID {
        newSymbol(table, $2.id, $1.id, "VAR      ", $2.line, $2.col);      
        $$ = newNode(strcat(strcat($1.id," "), $2.id));
    }
    |
    TYPE LIST ID {
        newSymbol(table, $3.id, $1.id, "LIST VAR ",$3.line, $3.col);
        $$ = newNode(strcat(strcat($1.id," list "), $3.id));
    }
    |
    error { }
;

func:
    TYPE ID {
        newSymbol(table, $2.id, $1.id, "FUNC     ", $2.line, $2.col);
        $$ = newNode(strcat(strcat($1.id," function "), $2.id));
    }
    |
    TYPE LIST ID {
        newSymbol(table, $2.id, $1.id, "LIST FUNC", $2.line, $2.col);
        $$ = newNode(strcat(strcat($1.id," function list "), $3.id));
    }
    |
    error { }
;

block:
    block statement {
        $$ = newNode("BLOCK");
        $$->subtree1 = $1;
        $$->subtree2 = $2;
    }
    | 
    statement { $$ = $1; }
;

statement:
    expr END { $$ = $1; }
    | 
    LB block RB { $$ = $2; }
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
    ass_op { $$ = $1; }
    |
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
        $$ = newNode("IF");
        $$->subtree1 = $3;
        $$->subtree2 = $5;
    }
    | 
    IF LP operation RP statement ELSE statement {
        $$ = newNode("IF ELSE");
        $$->subtree1 = $3;
        $$->subtree2 = $5;
        $$->subtree3 = $7;
    }
    |
    IF error ELSE { }
;

for:
    FOR LP ass_op END operation END ass_op RP statement {
        $$ = newNode("FOR");
        $$->subtree1 = $3;
        $$->subtree2 = $5;
        $$->subtree3 = $7;
        $$->subtree4 = $9;
    }
    |
    FOR error  {  }
;

return:
    RETURN expr {
        $$ = newNode("RETURN");
        $$->subtree1 = $2;
    }
;

ass_op:
    id ASS_OP expr {
        $$ = newNode("ASSIGN");
        $$->subtree1 = $1;
        $$->subtree2 = $3;
    }
;

list_con:
    id RLIST_OP expr {
        $$ = newNode("LIST OP");
        $$->subtree1 = $1;
        $$->subtree2 = $3;
    }
;

list_oper:
    LLIST_OP expr {
        $$ = newNode("LIST OP");
        $$->subtree1 = $2;
    }
;

list_func:
    id LIST_FUNC expr {
        $$ = newNode("LIST FUNC");
        $$->subtree1 = $1;
        $$->subtree2 = $3;
    }
;

operation:
    log_op { $$ = $1; }
;

input:
    IN LP id RP {
        $$ = newNode("IN");
        $$->subtree1 = $3;
    }
;

output:
    OUT LP val RP {
        $$ = newNode("OUT");
        $$->subtree1 = $3;
    }
;

log_op:
    log_op LLOG_OP ulog_op {
        $$ = newNode("LOG OP");
        $$->subtree1 = $1;
        $$->subtree2 = $3;
    }
    | 
    ulog_op { $$ = $1; }
;

ulog_op:
    RLOG_OP rel_op {
        $$ = newNode("LOG OP");
        $$->subtree1 = $2;
    }
    | 
    rel_op { $$ = $1; }
;

rel_op:
    rel_op REL_OP ari_op {
        $$ = newNode("REL OP");
        $$->subtree1 = $1;
        $$->subtree2 = $3;
    }
    | 
    ari_op { $$ = $1; }
;

ari_op:
    ari_op SS_OP md_op {
        $$ = newNode("ARI OP");
        $$->subtree1 = $1;
        $$->subtree2 = $3;
    }
    | 
    md_op { $$ = $1; }
;

md_op:
    md_op MD_OP val {
        $$ = newNode("ARI OP");
        $$->subtree1 = $1;
        $$->subtree2 = $3;
    }
    | 
    SS_OP val {
        $$ = newNode("NEGATIVE");
        $$->subtree1 = $2;
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
    INT { $$ = newNode($1.id); }
    | 
    FLOAT { $$ = newNode($1.id); }
    | 
    NIL { $$ = newNode("NIL"); }
    |
    LITERAL { $$ = newNode($1.id); }
    | 
    operation { $$ = $1; }
;

func_call:
    id LP func_params RP {
        $$ = newNode("CALL");
        $$->subtree1 = $1;
        $$->subtree2 = $3;
    }
    | 
    id LP RP {
        $$ = newNode("CALL");
        $$->subtree2 = $1;
    }
    |
    error { }
;

id:
    ID { $$ = newNode($1.id); }
;

func_params: 
    func_params SEPARATOR id{
        $$ = newNode("PARAMS");
        $$->subtree1 = $1;
        $$->subtree2 = $3;
    }
    | 
    id { $$ = $1; }
;

%%

int main(int argc, char **argv){
    printf("────────────────────────────────────────\n");
    printf("Syntax analysis in file '%s'", argv[1]);
    printf("\n────────────────────────────────────────");

    yyin = fopen(argv[1], "r");

    yyparse();

    printf("\n");
    printf("Syntax analysis finished with %d errors.\n", errors);
    
    if(!errors){
        showTree(syntaxTree, 0);
    }

    showTable(table);
    destroyTree();

    fclose(yyin);
    yylex_destroy();

    return 0;
}

extern void yyerror(const char* error) {
    printf("\n%s [%d, %d]\n", error, line, col);
    errors++;
}
