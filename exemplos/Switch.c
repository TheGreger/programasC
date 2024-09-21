#include <stdio.h>

int main (int argc, char *argv[]) {

    int variavel;
    printf("Digite o valro da variável:");
    scanf("%d", &variavel);

    switch (variavel) {
    case 1:
        printf("A variável é igual a 1.");
    break;
    
    case 2:
        printf("A variável é igual a 2.");
    break;
    
    case 3:
        printf("A variável é igual 3.");
    break;

    default:
        printf("O valor da varíavel não está cadastrada.");
    break;
    }

    return 0;
}