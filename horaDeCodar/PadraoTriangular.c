#include <stdio.h>
#include <locale.h>

int main (int argc, char *argv[]) {
    setlocale(LC_ALL,"Portuguese_Brazil");

    int i, j;
    char letra;

    for (i = 0; i <= 25; i++) {
        letra = 'A';
        for (j = 0; j <= i; j++) {

            printf("%c ", letra); 
            letra++;
        } 
        printf("\n");
    }

    return 0;
}