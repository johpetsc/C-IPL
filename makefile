default: compile clean run

compile:
	bison -o src/sin_analyser.tab.c -d src/sin_analyser.y -v
	flex -o src/lex.yy.c src/lex_analyser.l
	gcc -g src/sin_analyser.tab.c src/lex.yy.c src/data_structures.c src/intermediate_code.c -o tradutor -I lib -I src -Wextra

run:
	./tradutor tests/test1.c
	
debug:
	valgrind -v --tool=memcheck --leak-check=full --show-leak-kinds=all --track-origins=yes --log-file="logfile.out" ./tradutor tests/test1.c

clean:
	rm -f data_structures.o src/sin_analyser.output logfile.out
