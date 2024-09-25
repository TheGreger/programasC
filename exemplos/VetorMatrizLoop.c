#include <stdio.h>
#include <locale.h>

int main (int argc, char *argv[]) {
    setlocale(LC_ALL,"Portuguese_Brazil");

    int vetor[5];
    int matriz[3][3];

    for (int i = 0; i < 5; i++) {
        vetor[i] = i * 2;
        printf("Vetor[%d] = %d\n", i, vetor[i]); 
    }

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            matriz[i][j] = i + j;
            printf("Matriz[%d][%d] = %d ", i, j, matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}