int main(){ 
    int a;
    int c;
    writeln("Este programa testa operações aritméticas e relacionais.");
    write("Insira um valor: ");
    read(a);
    write("Multiplicado por 2: ");
    c = a * 2;
    writeln(c);
    write("Dividido por 2: ");
    c = a / 2;
    writeln(c);
    write("Somando 2: ");
    c = a + 2;
    writeln(c);
    write("Subtraindo 2: ");
    c = a - 2;
    writeln(c);
    write("Negativo: ");
    c = -a;
    writeln(c);
    write("Maior que 10?: ");
    c = a>10;
    writeln(c);
    write("Menor que 10?: ");
    c = a<10;
    writeln(c);
    write("Igual a 10?: ");
    c = a==10;
    writeln(c);

    return 0;
}