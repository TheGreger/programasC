#include <stdio.h>

int main (int argc, char *argv[]) {
    
    int a, b;
    a = 10;
    b = 15;
    int x = 5;
    float y = 5.0;

    printf("A = %d ---- B = %d\n", a, b);
    // Maior
    printf("a > b: %d\n", a > b);
    // Menor
    printf("a < b: %d\n", a < b);
    // MaiorIgual
    printf("a >= b: %d\n", a >= b);
    // MenorIgual
    printf("a <= b: %d\n", a <= b);
    // Igual
    printf("a = b: %d\n", a == b);
    // Diferente
    printf("a != b: %d\n", a != b);

    // Comparando tipos diferentes
    printf("X = %d --- Y = %f\n", x, y);
    printf("x >= y: %d\n", x >= y);
    printf("x == y: %d\n", x == y);
    printf("x != y: %d\n", x >= y);

    return 0;
}