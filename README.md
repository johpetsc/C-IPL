# C-IPL
Trabalho prático Tradutores 2021/1, linguagem C-IPL

Compilar e executar:
$ flex -o src/lex.yy.c src/lex_analyser.l && gcc src/lex.yy.c -o tradutor -Wall -g
$ ./tradutor tests/test1.c

