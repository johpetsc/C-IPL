default: compile clean run

compile:
	bison -o src/sin_analyser.tab.c -d src/sin_analyser.y -Wall
	flex -o src/lex.yy.c src/lex_analyser.l
	gcc -g -c src/data_structures.c -o ./data_structures.o
	gcc -g src/sin_analyser.tab.c src/lex.yy.c data_structures.o -o tradutor -I lib -I src -Wall

run:
	./tradutor tests/test1.c
	
debug:
	valgrind -v --tool=memcheck --leak-check=full --log-file="logfile.out" --show-leak-kinds=all --track-origins=yes ./tradutor tests/test1.c

clean:
	rm -f data_structures.o
