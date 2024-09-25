#include <stdio.h>
#include <locale.h>

int main (int argc, char *argv[]) {
    setlocale(LC_ALL,"Portuguese_Brazil");

    int numero;
    
    printf("Digite o número que será calculado a tabuada:");
    scanf("%d", &numero);

    for (int i = 0; i <= 10; i++) {
        printf("%d * %d = %d\n", i, numero, i*numero); 
    }

    return 0;
}