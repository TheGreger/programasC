#include <stdio.h>

int main (int argc, char *argv[]) {
    
    int condicaoUm = 0, condicaoDois = 0;

    // Estrutura aninhada
    if (condicaoUm) {
        if (condicaoDois) {
            printf("As duas condições são verdadeiras.\n"); 
        } 
    }
    
    // Estrutura encadeada
    if (condicaoUm) {

    } else if (condicaoDois) {
            
    } else {
    }
    
    int idade;
    printf("Digite sua idade:");
    scanf("%d", &idade);

    if (idade <= 12) {
        printf("Você é uma criança.");
    } else if (idade < 18) {
        printf("Você é um adolescente.");
    } else if (idade < 60) {
        printf("Você é um adulto.");
    } else {
        printf("Você é um idoso.");
    }

    int idadeDois;
    float renda;
    printf("Digite sua idade:");
    scanf("%d", &idade);
    printf("Digite sua renda:");
    scanf("%f", &renda);

    if (idade <= 18 || idade > 60) {
        if (renda < 2000) {
            printf("Você não tem direito ao desconto devido à renda!\n");
        } else {
            printf("Você tem direito ao desconto!");
        }
    } else {
        printf("Você não tem direito ao desconto devido à idade!\n");
    }
    
    return 0;
}