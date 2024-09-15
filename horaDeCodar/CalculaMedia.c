#include <stdio.h>

int main (int argc, char *argv[]) {
    
    float notaUm, notaDois, notaTres;
    float media;

    printf("**** Programa de cálculo de média ****\n");
    printf("Digite a primeira nota:");
    scanf("%f", &notaUm);
    printf("Digite a segunda nota:");
    scanf("%f", &notaDois);
    printf("Digite a terceira nota:");
    scanf("%f", &notaTres);

    media = (notaUm + notaDois + notaTres) / 3;
    printf("A média das três notas é: %.2f", media);

    return 0;
}