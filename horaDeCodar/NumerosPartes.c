#include <stdio.h>

int main (int argc, char *argv[]) {

    int numero = 0;

    while (numero <= 10) {
        
        if (numero % 2 == 0) {
            printf("O número %d é par.\n", numero); 
        }
        numero++; 
    }

    return 0;
}