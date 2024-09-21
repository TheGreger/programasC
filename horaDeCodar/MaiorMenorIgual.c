#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (int argc, char *argv[]) {
    
    int numeroJogador, numeroComputador, resultado;
    char tipoComparacao;

    // Gera um número aleatório
    srand(time(0));
    numeroComputador = rand() % 100 + 1; // Número entre 1 e 100
    
    // Início do jogo
    printf("Bem-vindo ao jogo Maior, Menor ou Igual!\n");
    printf("Você deve escolher um número e o tipo de comparação.\n");
    printf("M. Maior\n");
    printf("N. Menor\n");
    printf("I. Igual\n");
    
    printf("Escolha a comparação: ");
    scanf("%s", &tipoComparacao);
    printf("Digite seu número (entre 1 e 100): ");
    scanf("%d", &numeroJogador);
    
    switch (tipoComparacao)
    {
    case 'M':
    case 'm':
        printf("Você escolheu a opção Maior\n");
        resultado = numeroJogador > numeroComputador ? 1 : 0;
        break;
    case 'N':
    case 'n':
        printf("Você escolheu a opção Menor\n");
        resultado = numeroJogador < numeroComputador ? 1 : 0;
        break;
    case 'I':
    case 'i':
        printf("Você escolheu a opção Igual\n");
        resultado = numeroJogador == numeroComputador ? 1 : 0;
        break;
    default:
        printf("Opção inválida\n");   
        break;
    }

    printf("O número do computador é: %d", numeroComputador);
    if (resultado == 1 ) {
        printf("Parabéns, você venceu!\n");
    } else { 
        printf("Infelizmente, você perdeu.\n");
    }
    

    return 0;
}