
int list IL;
float list FL;

int list lista(int n) {
	int i;
	i =  -435.7;
	int list new;
    int list AUXL;
	new = NIL;
	for (i = 0; i < n ; i = i + 1) {
		int elem;
		writeln("Insira um elemento da lista: ");
		read(elem);
		new = elem : new;
	}
    writeln("A lista inserida é: ");
    for (AUXL=new; AUXL != NIL; AUXL = !AUXL) { 
        write(?AUXL); write(" ");
    }
    writeln(" "); 
	return new;
}

int sum(int i) {
	return i+10;
}

int mul(int i) {
	return i*3;
}

int div(int i) {
	return i/2;
}

int le_20(int x) {
	return x < 20;
}


int main() {
    int n;
    int list AUXL;
	writeln("Insira o tamanho da lista: ");

	read(n);

	IL  = lista(n); 
	IL = sum >> IL;  
    writeln("Somando 10 em cada elemento da lista: ");
    for (AUXL=IL; AUXL != NIL; AUXL = !AUXL) { 
        write(?AUXL); write(" ");
    }
    writeln(" "); 
    IL = mul >> IL;  
    writeln("Multiplicando por 3 cada elemento da lista: ");
    for (AUXL=IL; AUXL != NIL; AUXL = !AUXL) { 
        write(?AUXL); write(" ");
    }
    writeln(" "); 
    IL = div >> IL;
    writeln("Dividindo por 2 cada elemento da lista: ");
    for (AUXL=IL; AUXL != NIL; AUXL = !AUXL) { 
        write(?AUXL); write(" ");
    }
    writeln(" ");
    writeln("Filtrando os elementos menores que 20: ");
	IL = le_20 <<  IL; 

    if (IL != NIL) { 
        int n; n = 0; 
            for (AUXL=IL; AUXL != NIL; AUXL = !AUXL) { 
               n = n + 1; 
               write(?AUXL); write(" "); 
            } 
            writeln(" "); 

            write("A nova lista tem "); write(n); writeln(" elementos."); 

    } else writeln("A nova lista não possui elementos."); 

  return 0; 

}
