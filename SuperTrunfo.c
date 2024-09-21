#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    char nomeCartaUm[40];
    int populacaoCartaUm;
    float areaCartaUm;
    float pibCartaUm;
    unsigned int numeroPontosTuristicosCartaUm;
    char codigoCartaUm[2];
    float densidadePopulacionalCartaUm;
    float pibPerCapitaCartaUm;
    float superPoderCartaUm;

    char nomeCartaDois[40];
    int populacaoCartaDois;
    float areaCartaDois;
    float pibCartaDois;
    unsigned int numeroPontosTuristicosCartaDois;
    char codigoCartaDois[2];
    float densidadePopulacionalCartaDois;
    float pibPerCapitaCartaDois;
    float superPoderCartaDois;

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    printf("~~~~ Começando o cadastro de uma nova carta do SuperTrunfo! ~~~\n");
    printf("Digite o nome da cidade: ");
    scanf("%s", &nomeCartaUm);
    printf("Digite o código da cidade: ");
    scanf("%s", &codigoCartaUm);
    printf("Digite a população total da cidade: ");
    scanf("%d", &populacaoCartaUm);
    printf("Digite a área da cidade em km²: ");
    scanf("%f", &areaCartaUm);
    printf("Digite o pib da cidade: ");
    scanf("%f", &pibCartaUm);
    printf("Digite a quantidade de pontos turísticos da cidade: ");
    scanf("%u", &numeroPontosTuristicosCartaUm);

    //Calculando a Densidade Populacional e o PIB per Capita
    densidadePopulacionalCartaUm = ((float) populacaoCartaUm) / areaCartaUm;
    pibPerCapitaCartaUm = pibCartaUm / ((float) populacaoCartaUm);
    superPoderCartaUm = populacaoCartaUm + areaCartaUm + pibCartaUm + numeroPontosTuristicosCartaUm
        + densidadePopulacionalCartaUm + pibPerCapitaCartaUm;

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    printf("Carta cadastrada com sucesso!\n");
    printf("Código da carta: %s\n", codigoCartaUm);
    printf("Nome da Cidade: %s\n", nomeCartaUm);
    printf("População: %d\n", populacaoCartaUm);
    printf("Área: %.2f km²\n", areaCartaUm);
    printf("PIB: %.2f milhões de R$\n", pibCartaUm);
    printf("Quantidade de pontos turísticos: %u\n", numeroPontosTuristicosCartaUm);
    printf("Densidade populacional: %.1f hab./km²\n", densidadePopulacionalCartaUm);
    printf("PIB per capita: R$ %.2f\n", pibPerCapitaCartaUm);

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    printf("~~~~ Começando o cadastro de uma nova carta do SuperTrunfo! ~~~\n");
    printf("Digite o nome da cidade: ");
    scanf("%s", &nomeCartaDois);
    printf("Digite o código da cidade: ");
    scanf("%s", &codigoCartaDois);
    printf("Digite a população total da cidade: ");
    scanf("%d", &populacaoCartaDois);
    printf("Digite a área da cidade em km²: ");
    scanf("%f", &areaCartaDois);
    printf("Digite o pib da cidade: ");
    scanf("%f", &pibCartaDois);
    printf("Digite a quantidade de pontos turísticos da cidade: ");
    scanf("%u", &numeroPontosTuristicosCartaDois);

    //Calculando a Densidade Populacional e o PIB per Capita
    densidadePopulacionalCartaDois = ((float) populacaoCartaDois) / areaCartaDois;
    pibPerCapitaCartaDois = pibCartaDois / ((float) populacaoCartaDois);
    superPoderCartaDois = populacaoCartaDois + areaCartaDois + pibCartaDois + numeroPontosTuristicosCartaDois
        + densidadePopulacionalCartaDois + pibPerCapitaCartaDois;

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    printf("Carta cadastrada com sucesso!\n");
    printf("Código da carta: %s\n", codigoCartaDois);
    printf("Nome da Cidade: %s\n", nomeCartaDois);
    printf("População: %d\n", populacaoCartaDois);
    printf("Área: %.2f km²\n", areaCartaDois);
    printf("PIB: %.2f milhões de R$\n", pibCartaDois);
    printf("Quantidade de pontos turísticos: %u\n", numeroPontosTuristicosCartaDois);
    printf("Densidade populacional: %.1f hab./km²\n", densidadePopulacionalCartaDois);
    printf("PIB per capita: R$ %.2f\n", pibPerCapitaCartaDois);

    // Começando a comparação entre as cartas
    printf("************************\n");
    printf("Começando a comparação entre as cartas das cidades %s e %s.\n",
        nomeCartaUm, nomeCartaDois);
    printf("************************\n");
    printf("1 = verdadeiro |||| 0 = falso\n");
    printf("A população de %s é maior que %s: %d\n",
        nomeCartaUm, nomeCartaDois, populacaoCartaUm > populacaoCartaDois);
    printf("A área de %s é maior que %s: %d\n",
        nomeCartaUm, nomeCartaDois, areaCartaUm > areaCartaDois);
    printf("O PIB de %s é maior que %s: %d\n",
        nomeCartaUm, nomeCartaDois, pibCartaUm > pibCartaDois);
    printf("A quantidade de pontos turísticos de %s é maior que %s: %d\n",
        nomeCartaUm, nomeCartaDois, numeroPontosTuristicosCartaUm > numeroPontosTuristicosCartaDois);
    printf("A densidade populacional de %s é menor que %s: %d\n",
        nomeCartaUm, nomeCartaDois, densidadePopulacionalCartaUm > densidadePopulacionalCartaDois);
    printf("O PIB per capita de %s é maior que %s: %d\n",
        nomeCartaUm, nomeCartaDois, pibPerCapitaCartaUm > pibPerCapitaCartaDois);
    printf("O Super Poder de %s é maior que %s: %d\n",
        nomeCartaUm, nomeCartaDois, populacaoCartaUm > populacaoCartaDois);

    return 0;
}