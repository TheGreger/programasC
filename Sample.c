#include <stdio.h>
#include <locale.h>

int main (int argc, char *argv[]) {
    setlocale(LC_ALL,"Portuguese_Brazil");

    int opcao = 12;

    int idade;
    scanf("%d", idade);

    switch (opcao)
    {
    case 18:

        break;
    
    default:
        break;
    }

    return 0;
}