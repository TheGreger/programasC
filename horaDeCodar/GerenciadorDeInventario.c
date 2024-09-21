#include <stdio.h>

int main (int argc, char *argv[]) {
    
    char produtoA[30] = "Arroz";
    char produtoB[30] = "Batata";
    unsigned int estoqueProdutoA = 1000;
    unsigned int estoqueProdutoB = 2000;
    float valorProdutoA = 33.50;
    float valorProdutoB = 20.99;
    unsigned int estoqueMinimoProdutoA = 50;
    unsigned int estoqueMinimoProdutoB = 2100;
    double valorTotalProdutoA;
    double valorTotalProdutoB;
    int resultadoProdutoA, resultadoProdutoB;

    // Exibir informações do produto
    printf("O produto %s tem estoque %u e o valor unitário é R$ %.2f.\n",
        produtoA, estoqueProdutoA, valorProdutoA);
    printf("O produto %s tem estoque %u e o valor unitário é R$ %.2f.\n",
        produtoB, estoqueProdutoB, valorProdutoB);
    
    // Comparando o estoque com o estoque mínimo
    resultadoProdutoA = estoqueProdutoA > estoqueMinimoProdutoA;
    resultadoProdutoB = estoqueProdutoB > estoqueMinimoProdutoB;
    printf("O produto %s tem estoque mínimo %d.\n", produtoA, resultadoProdutoA);
    printf("O produto %s tem estoque mínimo %d.\n", produtoB, resultadoProdutoB);
    
    // Comparando os valores totais dos produtos
    valorTotalProdutoA = estoqueProdutoA * valorProdutoA;
    valorTotalProdutoB = estoqueProdutoB * valorProdutoB;
    printf("O valor total de A (R$ %.2f) é maior que o valor total de B (R$ %.2f) : %d.\n",
        valorTotalProdutoA, valorTotalProdutoB, valorTotalProdutoA > valorTotalProdutoB);

    return 0;
}