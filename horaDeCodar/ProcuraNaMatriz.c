#include <stdio.h>
#include <locale.h>

#define LINHAS 10
#define COLUNAS 10

int main (int argc, char *argv[]) {
    setlocale(LC_ALL,"Portuguese_Brazil");

    int matriz[LINHAS][COLUNAS];
    int alvo, achou, soma;
    soma = 1;
    achou = 0;

    for (int i = 0; i < LINHAS; i++) {
        for (int j = 0; j < COLUNAS; j++, soma++) {
            matriz[i][j] = soma;
        } 
    }

    printf("Digite o valor que será procurado na matriz: ");
    scanf("%d", &alvo);

    for (int i = 0; i < LINHAS; i++) {
        for (int j = 0; j < COLUNAS; j++) {
            if (matriz[i][j] == alvo) {
                printf("Valor %d encontrado no índice [%d][%d].\n", alvo, i, j);
                achou = 1; 
            }
        } 
    }

    if (!achou) {
        printf("Valor %d não foi encontrado na matriz.\n"); 
    }

    return 0;
}