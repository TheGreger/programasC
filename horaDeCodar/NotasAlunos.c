#include <stdio.h>
#include <locale.h>

int main (int argc, char *argv[]) {
    setlocale(LC_ALL,"Portuguese_Brazil");

    char *alunos[3][3] = {
        {"Aluno 0", "PT: 60", "MAT: 70"},
        {"Aluno 1", "PT: 40", "MAT: 90"},
        {"Aluno 2", "PT: 100", "MAT: 30"}
    };
    int indice;

    printf("Digite a opção desejada: \n");
    printf("0. Notas do Aluno 0 \n");
    printf("1. Notas do Aluno 1 \n");
    printf("2. Notas do Aluno 2 \n");
    printf("Opção: ");
    scanf("%d", &indice);

    printf("As notas do aluno %s são: %s, %s \n", alunos[indice][0], alunos[indice][1], alunos[indice][2]);

    return 0;
}