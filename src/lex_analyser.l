%option noyywrap
%{     
    #include<stdio.h>
    #include<stdlib.h>
    int line = 1, col = 1, errors = 0;
%}

/* regular definitions */
delim       [ \t]
line_break  \n
ws          {delim}+
letter      [A-Za-z]
digit       [0-9]
id          {letter}({letter}|{digit}|_)*
inumber     {digit}+
fnumber     {digit}+(\.{digit}+)
types       int|float
list        list
list_op     [\?!%:]
list_func   [<]{2}|[>]{2}
nil         NIL
brackets    [\[\]\{\}\(\)]
end         [;]
ari_op      [+*/-]
log_op      [!]|[&]{2}|[|]{2}
rel_op      [>]|[<]|(>=)|(<=)|(==)!(!=)
ass_op      (=)
flow_ctr    if|else|for|return
input       read
output      write|writeln
quot        [\"\']
separator   ,
literal     {quot}(\\.|[^\\"])*{quot}
rest        .

%%

{delim}        {col++;}

{line_break}    {
    printf("\nEnd of line ");
    printf("%d", line);
    line++;
    col = 1;
    printf("\n────────────────────────────────────────");
}

{flow_ctr}  {
    printf("\n%d:%d: ", line, col);
    printf("⟨flowCtr, ");
    printf("%s⟩", yytext);
    col = col + yyleng;
}

{input} {
    printf("\n%d:%d: ", line, col);
    printf("⟨in, ");
    printf("%s⟩", yytext);
    col = col + yyleng;
}

{output}    {
    printf("\n%d:%d: ", line, col);
    printf("⟨out, ");
    printf("%s⟩", yytext);
    col = col + yyleng;
}

{list_op}   {
    printf("\n%d:%d: ", line, col);
    printf("⟨listOp, ");
    printf("%s⟩", yytext);
    col++;
}

{list_func} {
    printf("\n%d:%d: ", line, col);
    printf("⟨listFunc, ");
    printf("%s⟩", yytext);
    col++;
}

{ari_op}    {
    printf("\n%d:%d: ", line, col);
    printf("⟨arithOp, ");
    printf("%s⟩", yytext);
    col = col++;
}

{log_op}    {
    printf("\n%d:%d: ", line, col);
    printf("⟨logicOp, ");
    printf("%s⟩", yytext);
    col = col + yyleng;
}

{rel_op}    {
    printf("\n%d:%d: ", line, col);
    printf("⟨relatOp, ");
    printf("%s⟩", yytext);
    col = col + yyleng;
}

{ass_op}    {
    printf("\n%d:%d: ", line, col);
    printf("⟨assignOp, ");
    printf("%s⟩", yytext);
    col++;
}

{nil}   {
    printf("\n%d:%d: ", line, col);
    printf("⟨NIL, ");
    printf("%s⟩", yytext);
    col = col + yyleng;
}

{list}   {
    printf("\n%d:%d: ", line, col);
    printf("⟨list, ");
    printf("%s⟩", yytext);
    col = col + yyleng;
}

{types}   {
    printf("\n%d:%d: ", line, col);
    printf("⟨type, ");
    printf("%s⟩", yytext);
    col = col + yyleng;
}

{inumber}   {
    printf("\n%d:%d: ", line, col);
    printf("⟨int, ");
    printf("%s⟩", yytext);
    col = col + yyleng;
}

{fnumber}   {
    printf("\n%d:%d: ", line, col);
    printf("⟨float, ");
    printf("%s⟩", yytext);
    col = col + yyleng;
}

{id}   {
    printf("\n%d:%d: ", line, col);
    printf("⟨id, ");
    printf("%s⟩", yytext);
    col = col + yyleng;
}

{end} {
    printf("\n%d:%d: ", line, col);
    printf("⟨endStatement, ");
    printf("%s⟩", yytext);
    col++;
}

{brackets}  {
    printf("\n%d:%d: ", line, col);
    printf("⟨bracket, ");
    printf("%s⟩", yytext);
    col++;
}

{separator} {
    printf("\n%d:%d: ", line, col);
    printf("separator, ");
    printf("%s⟩", yytext);
    col++;
}

{literal} {
    printf("\n%d:%d: ", line, col);
    printf("literal, ");
    printf("%s⟩", yytext);
    col++;
}

{rest}  {
    printf("\n%d:%d: ", line, col);
    printf("'%s' ", yytext);
    printf("is not part of the C-IPL language.");
    errors++;
    col++;
}
%%

int main(int argc, char **argv){
    printf("────────────────────────────────────────\n");
    printf("Lexical analysis in file '%s'", argv[1]);
    printf("\n────────────────────────────────────────");
    yyin = fopen(argv[1], "r");
    yylex();
    fclose(yyin);
    printf("\n");
    printf("Lexical analysis finished with %d errors.\n", errors);

    return 0;
}