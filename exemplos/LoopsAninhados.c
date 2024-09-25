#include <stdio.h>
#include <locale.h>

int main (int argc, char *argv[]) {
    setlocale(LC_ALL,"Portuguese_Brazil");

    for (int i = 0; i <= 10; i++) {

        for (int j = 0; j <= 10 ; j++) {

            printf("%d * %d = %d\n", i, j, i*j);
        }
        printf("\n");
    }

    return 0;
}