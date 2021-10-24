int test(int a, int b){
    if(a > b){
        writeln(a);
    }
    return 0;
}

int main(){ 
    int a;
    int b;
    int c;
    write("Insira um valor: ");
    read(a);
    int d;
    d = a > 0;
    write(d);
    b = 5;
    c = -1;
    c = a * (b - c);
    write("Resultado: ");
    writeln(c);

    test(a, b);

    return b;
}
