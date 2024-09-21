#include <stdio.h>

int main (int argc, char *argv[]) {
    
    int opcao;
    float notaUm, notaDois, media;

    printf("Menu de Gerenciamento de Estudantes\n");
    printf("1. Calcular Média\n");
    printf("2. Determinar Status\n");
    printf("3. Sair\n");
    printf("Escolha uma opção: ");
    scanf("%d", &opcao);

    switch (opcao) {
    case 1:
        printf("Calcular a Média\n");
        printf("Digite a primeira nota: ");
        scanf("%f", &notaUm);
        printf("Digite a segunda nota: ");
        scanf("%f", &notaDois);
        // Testando se notas válidas
        if ((notaUm >= 0 && notaUm <= 10) && (notaDois >= 0 && notaDois <= 10)) {
                media = (notaUm + notaDois) / 2;
                printf("A média é: %.2f\n", media);
                break;
            } else {
                printf("Nota inválida\n");
                break;
            }
    case 2:
        printf("Determinar status\n");
        printf("Entre com a média: ");
        scanf("%f", &media);
        if (media >= 5) {
            printf("Aprovado!\n");
        } else {
            printf("Reprovado\n");
        }
        break;
    case 3:
        printf("Saindo do programa....\n");
        break;
    default:
        printf("Opção inválida\n");
        break;
    }

    return 0;
}