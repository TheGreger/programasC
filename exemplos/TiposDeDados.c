#include <stdio.h>

int main (int argc, char *argv[]) {
    
    int a = 10;
    int b = 3;
    float a1 = 10;
    float b1 = 4.4;
    int soma = a + b;
    int somaDois = a + b1;
    int diferenca = a - b;
    int produto = a * b;
    int quocienteInteiro = a / b;
    double quaocienteFloat = a1 / b1;

    printf("Soma: %d\n", soma);
    printf("Soma dois: %d\n", somaDois);
    printf("Diferença: %d\n", diferenca);
    printf("Produto: %d\n", produto);
    printf("Divisão inteira: %d\n", quocienteInteiro);
    printf("Divisão float: %f\n", quaocienteFloat);

    return 0;
}