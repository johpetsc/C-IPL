%option noyywrap
%option noinput nounput

%{     
    #include    "sin_analyser.tab.h"
    #include    "../lib/data_structures.h"
    #include    <stdio.h>
    #include    <stdlib.h>
    #include    <string.h>
    int line = 1, col = 1, errors = 0;
%}

/* Regular definitions */

/*Definitions for white spaces*/
delim           [ \s\v\t]
line_break      \n
ws              {delim}+
/*Definitions for single characters*/
letter          [A-Za-z]
digit           [0-9]
/*Definitions for group of characters*/
id              {letter}({letter}|{digit}|_)*
inumber         {digit}+
fnumber         {digit}+(\.{digit}+)
/*Definitions for C types and keywords*/
types           int|float
flow_ctr        if|else|for|return
/*Definitions for lists*/
list            list
list_op         [\?!%:]
list_func       [<]{2}|[>]{2}
nil             NIL
/*Definitions for operators*/
ari_op          [+*/-]
log_op          [!]|[&]{2}|[|]{2}
rel_op          [>]|[<]|(>=)|(<=)|(==)|(!=)
ass_op          (=)
/*Definitions for I/O*/
input           read
output          write|writeln
/*Definitions for comments*/
line_comment    "//".*[^\n]
block_comment   "/*"((\*+[^/*])|([^*]))*\**"*/"
/*Definitions for limiters*/
brackets        [\[\]\{\}\(\)]
end             [;]
separator       ,
/*Definitions for strings*/
dquot           [\"]
literal         {dquot}(\\[^\n]|[^\\"\n])*{dquot}
/*Everything else*/
rest            .

%%

{delim}        {col++;}

{line_break}    {
    // printf("\nEnd of line ");
    // printf("%d", line);
    line++;
    col = 1;
    // printf("\n────────────────────────────────────────");
}

{line_comment}    {
    // printf("\n%d:%d: ", line, col);
    // printf("Line comment: ");
    // printf("%s", yytext);
}

{block_comment}    {
    // printf("\n%d:%d: ", line, col);
    // printf("Block comment: ");
    // printf("%s", yytext);
}

{flow_ctr}  {
    yylval.lex.line = line;
    yylval.lex.col = col;
    strcpy(yylval.lex.id, yytext);
    // printf("\n%d:%d: ", line, col);
    // printf("⟨flowCtr, ");
    // printf("%s⟩", yytext);
    col = col + yyleng;
    if(!strcmp(yytext, "if")) return IF;
    else if(!strcmp(yytext, "else")) return ELSE;
    else if(!strcmp(yytext, "for")) return FOR;
    else return RETURN;
}

{input} {
    yylval.lex.line = line;
    yylval.lex.col = col;
    strcpy(yylval.lex.id, yytext);
    // printf("\n%d:%d: ", line, col);
    // printf("⟨in, ");
    // printf("%s⟩", yytext);
    col = col + yyleng;
    return IN;
}

{dquot} {
    // printf("\n%d:%d: ", line, col);
    // printf("ERROR: Literal not closed after ");
    // printf("%s.", yytext);
    col++;
    errors++;
}

{output}    {
    yylval.lex.line = line;
    yylval.lex.col = col;
    strcpy(yylval.lex.id, yytext);
    // printf("\n%d:%d: ", line, col);
    // printf("⟨out, ");
    // printf("%s⟩", yytext);
    col = col + yyleng;
    return OUT;
}

{list_op}   {
    yylval.lex.line = line;
    yylval.lex.col = col;
    strcpy(yylval.lex.id, yytext);
    // printf("\n%d:%d: ", line, col);
    // printf("⟨listOp, ");
    // printf("%s⟩", yytext);
    col++;
    if(!strcmp(yytext, ":")) return RLIST_OP;
    else return LLIST_OP;
}

{list_func} {
    yylval.lex.line = line;
    yylval.lex.col = col;
    strcpy(yylval.lex.id, yytext);
    // printf("\n%d:%d: ", line, col);
    // printf("⟨listFunc, ");
    // printf("%s⟩", yytext);
    col++;
    return LIST_FUNC;
}

{ari_op}    {
    yylval.lex.line = line;
    yylval.lex.col = col;
    strcpy(yylval.lex.id, yytext);
    // printf("\n%d:%d: ", line, col);
    // printf("⟨arithOp, ");
    // printf("%s⟩", yytext);
    col++;
    if((!strcmp(yytext, "+")) || (!strcmp(yytext, "-"))) return SS_OP;
    else return MD_OP;
}

{log_op}    {
    yylval.lex.line = line;
    yylval.lex.col = col;
    strcpy(yylval.lex.id, yytext);
    // printf("\n%d:%d: ", line, col);
    // printf("⟨logicOp, ");
    // printf("%s⟩", yytext);
    col = col + yyleng;
    if(!strcmp(yytext, "!")) return RLOG_OP;
    else return LLOG_OP;
}

{rel_op}    {
    yylval.lex.line = line;
    yylval.lex.col = col;
    strcpy(yylval.lex.id, yytext);
    // printf("\n%d:%d: ", line, col);
    // printf("⟨relatOp, ");
    // printf("%s⟩", yytext);
    col = col + yyleng;
    return REL_OP;
}

{ass_op}    {
    yylval.lex.line = line;
    yylval.lex.col = col;
    strcpy(yylval.lex.id, yytext);
    // printf("\n%d:%d: ", line, col);
    // printf("⟨assignOp, ");
    // printf("%s⟩", yytext);
    col++;
    return ASS_OP;
}

{nil}   {
    yylval.lex.line = line;
    yylval.lex.col = col;
    strcpy(yylval.lex.id, yytext);
    // printf("\n%d:%d: ", line, col);
    // printf("⟨NIL, ");
    // printf("%s⟩", yytext);
    col = col + yyleng;
    return NIL;
}

{list}   {
    yylval.lex.line = line;
    yylval.lex.col = col;
    strcpy(yylval.lex.id, yytext);
    // printf("\n%d:%d: ", line, col);
    // printf("⟨list, ");
    // printf("%s⟩", yytext);
    col = col + yyleng;
    return LIST;
}

{types}   {
    yylval.lex.line = line;
    yylval.lex.col = col;
    strcpy(yylval.lex.id, yytext);
    // printf("\n%d:%d: ", line, col);
    // printf("⟨type, ");
    // printf("%s⟩", yytext);
    col = col + yyleng;
    return TYPE; 
}

{inumber}   {
    yylval.lex.line = line;
    yylval.lex.col = col;
    strcpy(yylval.lex.id, yytext);
    // printf("\n%d:%d: ", line, col);
    // printf("⟨int, ");
    // printf("%s⟩", yytext);
    col = col + yyleng;
    return INT;

}

{fnumber}   {
    yylval.lex.line = line;
    yylval.lex.col = col;
    strcpy(yylval.lex.id, yytext);
    // printf("\n%d:%d: ", line, col);
    // printf("⟨float, ");
    // printf("%s⟩", yytext);
    col = col + yyleng;
    return FLOAT;
}

{id}   {
    yylval.lex.line = line;
    yylval.lex.col = col;
    strcpy(yylval.lex.id, yytext);
    // printf("\n%d:%d: ", line, col);
    // printf("⟨id, ");
    // printf("%s⟩", yytext);
    col = col + yyleng;
    return ID;
}

{end} {
    yylval.lex.line = line;
    yylval.lex.col = col;
    strcpy(yylval.lex.id, yytext);
    // printf("\n%d:%d: ", line, col);
    // printf("⟨endStatement, ");
    // printf("%s⟩", yytext);
    col++;
    return END;
}

{brackets}  {
    yylval.lex.line = line;
    yylval.lex.col = col;
    strcpy(yylval.lex.id, yytext);
    // printf("\n%d:%d: ", line, col);
    // printf("⟨bracket, ");
    // printf("%s⟩", yytext);
    col++;
    if(!strcmp(yytext, "{")) return LB;
    else if(!strcmp(yytext, "}")) return RB;
    else if(!strcmp(yytext, "(")) return LP;
    else return RP;
}

{separator} {
    yylval.lex.line = line;
    yylval.lex.col = col;
    strcpy(yylval.lex.id, yytext);
    // printf("\n%d:%d: ", line, col);
    // printf("separator, ");
    // printf("%s⟩", yytext);
    col++;
    return SEPARATOR;
}

{literal} {
    yylval.lex.line = line;
    yylval.lex.col = col;
    strcpy(yylval.lex.id, yytext);
    // printf("\n%d:%d: ", line, col);
    // printf("literal, ");
    // printf("%s⟩", yytext);
    col = col + yyleng;
    return LITERAL;
}

{rest}  {
    // printf("\n%d:%d: ", line, col);
    // printf("ERROR: '%s' ", yytext);
    // printf("is not part of the C-IPL language.");
    errors++;
    col++;
}
%%