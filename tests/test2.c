int test(int a, int b){
    int i;
	writeln("O valor é maior que 10?");
    if(a > b){
        writeln("Sim");
    }else{
        writeln("Não");
    }
	writeln("Os próximos 5 valores são:");
    for(i = 1; i < 5; i = i+1){
        a = a+1;
        writeln(a);
    }
    return 0;
}

int main(){ 
    int a;
    int b;
	b = 10;
	writeln("Este programa testa estruturas de fluxo.");
    write("Insira um valor: ");
    read(a);

    test(a, b);

    return 0;
}
