#include <stdio.h>

int main (int argc, char *argv[]) {
   /* 
   while (condição) {
        código
    }
   */
    int numero = 0;

    while (numero <= 10) {
        printf("Número é igual a: %d\n", numero);
        numero++; 
    } 

    return 0;
}