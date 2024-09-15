#include <stdio.h>

int main (int argc, char *argv[]) {

    // Operadores Aritméticos
    /*
    Soma (+)
    Subtração (-)
    Multiplicação (*)
    Divisão (/)
    */
    int numeroUm, numeroDois; 
    int soma, subtracao, multiplicacao, divisao;

    printf("Digite o valor do número 1: ");
    scanf("%d", &numeroUm);
    printf("Digite o valor do número 2: ");
    scanf("%d", &numeroDois);

    soma = numeroUm + numeroDois;
    subtracao = numeroUm - numeroDois;
    multiplicacao = numeroUm * numeroDois;
    divisao = numeroUm / numeroDois;   

    printf("A soma é: %d\n", soma);
    printf("A subtração é: %d\n", subtracao);
    printf("A multiplicação é: %d\n", multiplicacao);
    printf("A divisão é: %d\n", divisao);

    // Operadores de Atribuição
    /*
    Atribuição Simples (=)
    Atribuição com Soma (+=)
    Atribuição com Subtração (-=)
    Atribuição com Multiplicação (*=)
    Atribuição com Divisão (/=)
    */
    int resultado;

    resultado = 10;
    printf("Resultado: %d\n", resultado);
    resultado += 20;
    printf("Resultado mais 20: %d\n", resultado);
    resultado -= 27;
    printf("Resultado menos 27: %d\n", resultado);
    resultado *= 3;
    printf("Resultado vezes 3: %d\n", resultado);
    resultado /= 9;
    printf("Resultado dividido por 9: %d\n", resultado);

    // Operadores de Incremento e Decremento
    /*
    Incremento (++)
    Pré-Incremento ++a
    Pós-Incremento a++
    Decremento (--)
    Pré-Decremento --a
    Pós-Decremento a--
    */
    int numeroTres = 20;
    printf("Valor do número: %d\n", numeroTres);
    numeroTres++;
    printf("Valor do número após o incremento: %d\n", numeroTres);
    numeroTres--;
    printf("Valor do número após o decremento: %d\n", numeroTres);

    return 0;
}