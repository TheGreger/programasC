#include <stdio.h>

int main (int argc, char *argv[]) {
    /*
    if (condicao) {
        comando1;
        comando2;
    }
    */
    int numeroUm = 10;
    int numeroDois = 20;
    if (numeroUm > numeroDois) {
        printf("O número um %d é maior que o número dois %d.\n", numeroUm, numeroDois);
    }
    if (numeroUm < numeroDois) {
        printf("O número um %d é menor que o número dois %d.\n", numeroUm, numeroDois);
    }
    if (numeroUm == numeroDois) {
        printf("O número um %d é igual ao número dois %d.\n", numeroUm, numeroDois);
    }

    int idade = 18;
    if (idade >= 18) {
        printf("Você é maior de idade.\n");
    } else {
        printf("Você não é maior de idade.\n"); 
    }
    
    int numero = 19;
    if (numero % 2 == 0) {
        printf("O número é par.\n");
    } else {
        printf("O número é impar.\n"); 
    }
    

    return 0;
}