%option noyywrap
%{     
    #include<stdio.h>
    #include<stdlib.h>
%}

/* regular definitions */
delim       [ \t\n]
ws          {delim}+
letter      [A-Za-z]
digit       [0-9]
id          {letter}({letter}|{digit})*
inumber     {digit}+
fnumber     {digit}+(\.{digit}+)?(E[+-]?{digit}+)
types       int|float
list        list
nil         NIL
brackets    [\[\]\{\}\(\)]
end         [;]
ari_op      [+-/*]
log_op      [!]|[&]{2}|[|]{2}
rel_op      [>]|[<]|(>=)|(<=)|(==)!(!=)
ass_op      (=)
flow_ctr    if|else|for|return
input       read
output      write|writeln

%%

{ws}        {/* no action and no return*/}

{flow_ctr}  {
    printf("\nFlow control command: ");
    printf("%s", yytext);
}

{input} {
    printf("\nInput command: ");
    printf("%s", yytext);
}

{output}    {
    printf("\nOutput command: ");
    printf("%s", yytext);
}

{ari_op}    {
    printf("\nArithmetic operator: ");
    printf("%s", yytext);
}

{log_op}    {
    printf("\nLogical operator: ");
    printf("%s", yytext);
}

{rel_op}    {
    printf("\nRelational operator: ");
    printf("%s", yytext);
}

{ass_op}    {
    printf("\nAssignment: ");
    printf("%s", yytext);
}

{nil}   {
    printf("\nNIL constant: ");
    printf("%s", yytext);
}

{list}   {
    printf("\nList: ");
    printf("%s", yytext);
}

{types}   {
    printf("\nData type: ");
    printf("%s", yytext);
}

{inumber}   {
    printf("\nInteger number: ");
    printf("%s", yytext);
}

{fnumber}   {
    printf("\nFloat number: ");
    printf("%s", yytext);
}

{id}   {
    printf("\nIdentifier: ");
    printf("%s", yytext);
}

{end} {
    printf("\nEnd statement: ");
    printf("%s", yytext);
}

{brackets}  {
    printf("\nBrackets: ");
    printf("%s", yytext);
}

%%

int main(int argc, char **argv){
    yyin = fopen(argv[1], "r");
    yylex();
    fclose(yyin);
    printf("\n");

    return 0;
}