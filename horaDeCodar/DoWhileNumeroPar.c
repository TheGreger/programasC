#include <stdio.h>
#include <locale.h>

int main (int argc, char *argv[]) {
    setlocale(LC_ALL,"Portuguese_Brazil");

    int numero;

    do {
         printf("Digite um n�mero par para sair do programa:");
         scanf("%d", &numero);

         if (numero % 2 == 0) {
            printf("O n�mero digitado � par, saindo do programa.");
         } else {
            printf("O n�mero digitado � �mpar.\n");
         }
    } while(numero % 2 != 0);

    return 0;
}