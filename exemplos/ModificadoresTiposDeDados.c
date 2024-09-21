#include <stdio.h>

int main (int argc, char *argv[]) {
    // Modificadores permitem que você controle melhor como os dados são armazenados
    // e manipulados no programa

    // Unsigned - Declarar variáveis que podem armazenar apenas valores positivos;
    int numeroSinal = 3000000000;
    unsigned int numeroSemSinal = 3000000000; 
    printf("Número com sinal: %d\n", numeroSinal);
    printf("Número sem sinal: %u\n", numeroSemSinal);

    // Long - aumentar a precisão / tamanho das variáveis
    int numeroNormal = 2147483647; //Valor máximo int
    long long int numeroLongLong = 2147483648;
    printf("Número regular (int): %d\n", numeroNormal);
    printf("Número long long (int): %lld\n", numeroLongLong);

    //
    
    return 0;
}