#include <stdio.h>

int main (int argc, char *argv[]) {
    
    unsigned int estoque, estoqueMinimo;
    float temperatura, umidade;

    printf("Digite a temperatura:");
    scanf("%f", &temperatura);
    printf("Digite a umidade:");
    scanf("%f", &umidade);
    printf("Digite a quantidade do estoque:");
    scanf("%u", &estoque);
    printf("Digite a quantidade do estoque mínimo:");
    scanf("%u", &estoqueMinimo);

    if (temperatura > 30) {
        printf("A temperatura está alta.\n"); 
    } else {
        printf("A temperatura está dentro dos parâmetros.\n"); 
    }
    if (umidade > 80) {
        printf("A umidade está alta.\n"); 
    } else {
        printf("A umidade está dentro dos parâmetros.\n"); 
    }
    if (estoque < estoqueMinimo) {
        printf("Estoque abaixo do mínimo.\n"); 
    } else {
        printf("Estoque normal.\n"); 
    }

    return 0;
}