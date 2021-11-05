int i;

int fib(int i){
    if (i == 1) return 1;
    else if (i == 2) return 1;
    else return fib(i-1) + fib(i-2);
}

int main() {
    int i; i = 0;
    int a;
    int b;
    writeln("Insira um valor positivo:");
    read(i);
    a = fib(i);
    writeln("Valor Fibonacci:");
    if (i > 0) writeln(a);
    writeln("Fibonacci vezes 2:");
    b = a*2;
    writeln(b);
    writeln("Fibonacci dividido por 2:");
    b = a/2;
    writeln(b);
    writeln("Fibonacci mais 2:");
    b = a+2;
    writeln(b);
    writeln("Fibonacci menos 2:");
    b = a-2;
    writeln(b);
    writeln("Fibonacci negativo:");
    b = -a;
    writeln(b);
    writeln("O valor de Fibonacci é maior que 10?");
    if(a>10){
        writeln("Sim.");
    } else if(a==10){
        writeln("Não. É igual.");
    }else{
        writeln("Não. É menor.");
    }
    writeln("O valor de Fibonacci está entre 50 e 100?");
    if(a>=50 && a<=100){
        writeln("Sim.");
    } else if(a<50){
        writeln("Não. É menor que 50.");
    }else{
        writeln("Não. É maior que 100.");
    }
    writeln("Os próximos 5 valores são:");
    for(i=0;i<5;i=i+1){
        b = a+i+1;
        writeln(b);
    }
}