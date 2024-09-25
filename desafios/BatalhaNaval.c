#include <stdio.h>

int main () {

    // Declarando a matriz do tabuleiro
    int tabuleiro[10][10];
    /*
    Navio Vertical = 1,5 e 2,5
    Navio Horizontal = 7,7 e 7,8
    Primeiro Navio diagonal = 3,3 e 4,4
    Segundo Navio diagonal = 9,0 e 8,1
    */
    // Declarando os poderes
    int cone[3][5] = {
        {0,0,1,0,0},
        {0,1,1,1,0},
        {1,1,1,1,1}
    };
    int cruz[3][5] = {
        {0,0,1,0,0},
        {1,1,1,1,1},
        {0,0,1,0,0}
    };
    int octaedro[3][5] = {
        {0,0,1,0,0},
        {0,1,1,1,0},
        {0,0,1,0,0}
    };
    int opcao;
    int y,x;


    // Populando o tabuleiro com o valor 0 para as casas vazias e valor 3 para as casas com navios
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            if ((i == 1 && j == 5) || (i == 2 && j == 5) || (i == 7 && j == 7) || (i == 7 && j == 8)
            || (i == 3 && j == 3) || (i == 4 && j == 4) || (i == 9 && j == 0) || (i == 8 && j == 1)) {
                tabuleiro[i][j] = 3;
                printf("Parte de um navio posicionado na coordenada [%d][%d].\n", i, j);
                continue;
            } else {
                tabuleiro[i][j] = 0;
            }
        } 
    }   

    while (1) {
        printf("Escolha o super poder:\n");
        printf("1. Cone\n"); 
        printf("2. Cruz\n"); 
        printf("3. Octaedro\n"); 
        printf("Opção:"); 
        scanf("%d", &opcao);
        printf("Escolha a coordenada X para usar o superpoder\n");
        printf("Deve ser maior ou igual a 1, e menor ou igual a 8: ");
        scanf("%d", &x);
        printf("Escolha a coordenada Y para usar o superpoder\n");
        printf("Deve ser maior ou igual a 2, e menor ou igual a 7: ");
        scanf("%d", &y);
        
        switch (opcao) {
        case 1: 
            for(int i = x-1, a = 0; i<=x+1; i++, a++) {
                for(int j = y-2, b = 0; j<=y+2; j++, b++) {
                    tabuleiro[i][j] = cone[a][b];
                }
            }
            break;
        case 2:
            for(int i = x-1, a = 0; i<=x+1; i++, a++) {
                for(int j = y-2, b = 0; j<=y+2; j++, b++) {
                    tabuleiro[i][j] = cruz[a][b];
                }
            }
            break;
        case 3:
            for(int i = x-1, a = 0; i<=x+1; i++, a++) {
                for(int j = y-2, b = 0; j<=y+2; j++, b++) {
                    tabuleiro[i][j] = octaedro[a][b];
                }
            }
            break;
        default:
            break;
        }
        break;
    }


    printf("Imprimindo o tabuleiro completo:\n");
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]);
        } 
        printf("\n");
    }

    return 0;
}