#include <stdio.h>
#include <locale.h>

int main (int argc, char *argv[]) {
    setlocale(LC_ALL,"Portuguese_Brazil");

    int matriz[2][2];
    matriz[0][0] = 2;
    matriz[0][1] = 2;
    matriz[1][0] = 2;
    matriz[1][1] = 2;

    printf("%d", matriz[0][0]);
    printf("%d\n", matriz[0][1]);
    printf("%d", matriz[1][0]);
    printf("%d", matriz[1][1]);

    return 0;
}