#include <stdio.h>

int main (int argc, char *argv[]) {

    printf("Hello, world!\n");
    /*
    printf("%formato", variavel)
    %d: Imprime um inteiro no formato decimal.
    %i: Equivale a %d
    %f: Imprime um número de ponto flutuante no formato padrão.
    %e: Imprime um número de ponto flutuante no formato científico.
    %c: Imprime um único caractere.
    %s: Imprime uma cadeia (string) de caracteres.
    */
   int idade = 23;
   float altura = 1.84;
   char opcao = 'A';
   char nome[20] = "Gabriel";

   printf("%d\n", idade);
   printf("%.2f\n", altura);
   printf("%c\n", opcao);
   printf("%s\n", nome);
   printf("Nome: %s e idade: %d. \n", nome, idade);

    // Sintaxe scanf
    // scanf("formato1", &variavel1);
    char email[40];
    printf("Digite o email: ");
    scanf("%s", &email);
    printf("Email inserido: %s", email);

    return 0;
}