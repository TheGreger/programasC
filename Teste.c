#include <stdio.h>

int main (int argc, char *argv[]) {

    int populacao;
    float pib;
    float pibPerCapita;
    printf("Digite a população total da cidade: ");
    scanf("%d", &populacao);
    printf("Digite o pib da cidade: ");
    scanf("%f", &pib);
    pibPerCapita = pib / ((float) populacao);
    printf("PIB per capita: R$ %.3f ", pibPerCapita);

    return 0;
}