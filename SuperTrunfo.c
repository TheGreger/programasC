#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    char nome[40];
    int populacao;
    float area;
    float pib;
    int numeroPontosTuristicos;
    char codigo[2];
    float densidadePopulacional;
    float pibPerCapita;

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    printf("~~~~ Começando o cadastro de uma nova carta do SuperTrunfo! ~~~\n");
    printf("Digite o nome da cidade: ");
    scanf("%s", &nome);
    printf("Digite o código da cidade: ");
    scanf("%s", &codigo);
    printf("Digite a população total da cidade: ");
    scanf("%d", &populacao);
    printf("Digite a área da cidade em km²: ");
    scanf("%f", &area);
    printf("Digite o pib da cidade: ");
    scanf("%f", &pib);
    printf("Digite a quantidade de pontos turísticos da cidade: ");
    scanf("%d", &numeroPontosTuristicos);

    //Calculando a Densidade Populacional e o PIB per Capita
    densidadePopulacional = ((float) populacao) / area;
    pibPerCapita = pib / ((float) populacao);

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    printf("Carta cadastrada com sucesso!\n");
    printf("Código da carta: %s\n", codigo);
    printf("Nome da Cidade: %s\n", nome);
    printf("População: %d\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f milhões de R$\n", pib);
    printf("Quantidade de pontos turísticos: %d\n", numeroPontosTuristicos);
    printf("Densidade populacional: %.1f hab./km²\n", densidadePopulacional);
    printf("PIB per capita: R$ %.2f\n", pibPerCapita);

    return 0;
}