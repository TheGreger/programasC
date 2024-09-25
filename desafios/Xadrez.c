#include <stdio.h>

void movimentoDoBispo(int indice) {
    if (indice > 0) {
        indice--;
        movimentoDoBispo(indice);
        printf("Cima\n");
        printf("Direita\n");
    }
}

int main (int argc, char *argv[]) {

    // Definindo as constantes de movimento
    int CINCO = 5;
    int OITO = 8;
    int loop = 1;
    int indice;

    // Fazendo o movimento das peças dentro de um mesmo Loop
    printf("*** Começando o jogo de Xadrez ***\n");
    while (loop) {
        // Implementação de Movimentação do Bispo
        printf("Começando o movimento do Bispo:\n");
        movimentoDoBispo(CINCO);

        // Implementação de Movimentação da Torre
        printf("Começando o movimento da Torre:\n");
        indice = 1;
        do {
            printf("Direita\n"); 
            indice++;
        } while(indice <= CINCO);

        // Implementação de Movimentação da Rainha
        printf("Começando o movimento da Rainha:\n");
        for (indice = 1; indice <= OITO; indice++) {
            printf("Esquerda\n");
        }

        // Implementação de Movimentação do Cavalo
        printf("Começando o movimento do Cavalo:\n");
        indice = 0;
        while (indice < 1) {
            for (int j = 0, i = 0; j < 2 || i < 1; j++, i++) {
                printf("Baixo\n");
                if (i == 1) {
                    printf("Esquerda\n"); 
                } else {
                    continue; 
                }
            } 
            indice++;
        }
        break;
    }
    
    return 0;
}