#include <stdio.h>
#include <locale.h>

int main (int argc, char *argv[]) {
    setlocale(LC_ALL,"Portuguese_Brazil");
    
    imprimeHelloWorld();
    imprimeHelloWorld();

    loopRecursivo(5);
    loopRecursivoProgressivo(5);

    return 0;
}

void imprimeHelloWorld() {
    printf("Hello, world!\n");
}

void loopRecursivo(int indice) {
    if (indice > 0) {
        printf("Índice = %d\n", indice);
        loopRecursivo(indice - 1); 
    }
}

void loopRecursivoProgressivo(int indice) {
    if (indice > 0) {
        loopRecursivoProgressivo(indice - 1);
        printf("Índice = %d\n", indice); 
    }
}