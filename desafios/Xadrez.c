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

    // Fazendo o movimento das pe�as dentro de um mesmo Loop
    printf("*** Come�ando o jogo de Xadrez ***\n");
    while (loop) {
        // Implementa��o de Movimenta��o do Bispo
        printf("Come�ando o movimento do Bispo:\n");
        movimentoDoBispo(CINCO);

        // Implementa��o de Movimenta��o da Torre
        printf("Come�ando o movimento da Torre:\n");
        indice = 1;
        do {
            printf("Direita\n"); 
            indice++;
        } while(indice <= CINCO);

        // Implementa��o de Movimenta��o da Rainha
        printf("Come�ando o movimento da Rainha:\n");
        for (indice = 1; indice <= OITO; indice++) {
            printf("Esquerda\n");
        }

        // Implementa��o de Movimenta��o do Cavalo
        printf("Come�ando o movimento do Cavalo:\n");
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