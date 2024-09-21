#include <stdio.h>

int main (int argc, char *argv[]) {

    int a = 10, b = -1;
    if (a > 0 && b > 0) {
         printf("Os dois números são positivos.\n");
    } else {
        printf("Pelo menos um dos números é negativo.\n"); 
    }

    int c = 30, d = -5;
    if (c > 0 || d > 0) {
        printf("Pelo menos um dos números é positivo.\n");
    } else {
        printf("Os dois números são negativos.\n"); 
    }

    return 0;
}