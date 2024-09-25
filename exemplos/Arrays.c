#include <stdio.h>
#include <locale.h>

int main (int argc, char *argv[]) {
    setlocale(LC_ALL,"Portuguese_Brazil");

    int numeros[5] = {10, 20, 40, 50, 60};
    float notas[3] = {7.6, 8.3, 5.1};
    char *nomes[] = {"Gabriel", "Ronaldo"};

    for (int i = 0; i < 5; i++) {
        printf("%d\n", numeros[i]); 
    }

    for (int i = 0; i < 3; i++) {
        printf("A nota %d é: %.1f\n", i+1, notas[i]); 
    }

    printf("%s\n", nomes[0]);
    printf("%s\n", nomes[1]);

    return 0;
}