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
    extern FILE *yyin;
    int scope = 0;
    int sin_errors = 0;
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
%type <treeNode> ass_op log_op ulog_op rel_op ari_op md_op
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
    |
    error { }
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
        newSymbol(table, $2.id, $1.id, "VAR      ", $2.line, $2.col, scope);      
        $$ = newNode(strcat(strcat($1.id," var "), $2.id));
    }
    |
    TYPE LIST ID {
        newSymbol(table, $3.id, $1.id, "LIST VAR ",$3.line, $3.col, scope);
        $$ = newNode(strcat(strcat($1.id," list "), $3.id));
    }
    |
    error { }
;

func:
    TYPE ID {
        scope++;
        newSymbol(table, $2.id, $1.id, "FUNC     ", $2.line, $2.col, scope);
        $$ = newNode(strcat(strcat($1.id," function "), $2.id));
    }
    |
    TYPE LIST ID {
        scope++;
        newSymbol(table, $2.id, $1.id, "LIST FUNC", $2.line, $2.col, scope);
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
    ass_op END{ $$ = $1; }
    |
    LB block RB { $$ = $2; }
    | 
    flow_ctr { $$ = $1; }
    |
    error  {  }
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
    IF error { }
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
    expr RLIST_OP id {
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
    |
    OUT LP list_oper RP { 
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
        $$ = newNode("ARI SS OP");
        $$->subtree1 = $1;
        $$->subtree2 = $3;
    }
    | 
    md_op { $$ = $1; }
;

md_op:
    md_op MD_OP val {
        $$ = newNode("ARI MD OP");
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
    printf("Syntax analysis finished with %d syntax errors and %d lexical errors.\n", sin_errors, lex_errors);
    
    if(!sin_errors){
        showTree(syntaxTree, 0);
    }

    showTable(table);
    destroyTree();

    fclose(yyin);
    yylex_destroy();

    return 0;
}

void yyerror(const char* error) {
    printf("\n%s [%d, %d]\n", error, line, col);
    sin_errors++;
}
