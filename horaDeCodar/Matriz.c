#include <stdio.h>
#include <locale.h>

#define LINHAS 6
#define COLUNAS 6

int main (int argc, char *argv[]) {
    setlocale(LC_ALL,"Portuguese_Brazil");

    int matriz[LINHAS][COLUNAS];
    int soma = 0;

    for (int i = 0; i < LINHAS; i++) {
        for (int j = 0; j < COLUNAS; j++) {

            soma++;
            matriz[i][j] = soma;
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}