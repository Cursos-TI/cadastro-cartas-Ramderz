#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Declaração das variáveis
     char estadoA[50], estadoB[50];
     char codigoA[50], codigoB[50];
     char nomecidadeA[50], nomecidadeB[50];
     int populacaoA, populacaoB;
     float areaA, areaB;
     float pibA, pibB;
     int pontoturisticoA, pontoturisticoB;
     float densidadeA, densidadeB;
     float pibpercapitaA, pibpercapitaB;
      
        // Entrada de dados para a cidade A
        printf("Digite o nome do estado A: \n");
        scanf("%s", estadoA);
        printf("Digite o codigo do estado A: \n");
        scanf("%s", codigoA);
        printf("Digite o nome da cidade A: \n");
        scanf("%s", nomecidadeA);
        printf("Digite a populacao da cidade A: \n");
        scanf("%d", &populacaoA);
        printf("Digite a area da cidade A: \n");
        scanf("%f", &areaA);
        printf("Digite o PIB da cidade A: \n");
        scanf("%f", &pibA);
        printf("Digite o numero de pontos turisticos da cidade A: \n");
        scanf("%d", &pontoturisticoA);

        densidadeA = populacaoA / areaA;
        pibpercapitaA = pibA / populacaoA;

        // Entrada de dados para a cidade B
        printf("Digite o nome do estado B: \n");
        scanf("%s", estadoB);
        printf("Digite o codigo do estado B: \n");
        scanf("%s", codigoB);
        printf("Digite o nome da cidade B: \n");
        scanf("%s", nomecidadeB);
        printf("Digite a populacao da cidade B: \n");
        scanf("%d", &populacaoB);
        printf("Digite a area da cidade B: \n");
        scanf("%f", &areaB);
        printf("Digite o PIB da cidade B: \n");
        scanf("%f", &pibB);
        printf("Digite o numero de pontos turisticos da cidade B: \n");
        scanf("%d", &pontoturisticoB);

        densidadeB = populacaoB / areaB;
        pibpercapitaB = pibB / populacaoB;

        // Saída de dados
        printf("Parabens você finalizou o cadastro das cidades \n");
        printf("Carta 1: \n");
        printf("Estado: %s \n", estadoA);
        printf("Codigo: %s \n", codigoA);
        printf("Nome da Cidade: %s \n", nomecidadeA);
        printf("Populacao: %d \n", populacaoA);
        printf("area: %.2f \n", areaA);
        printf("PIB: %.2f \n", pibA);
        printf("Numero de Pontos Turisticos: %d \n", pontoturisticoA);
        printf("Densidade: %.2f \n", densidadeA);
        printf("PIB per capita: %.2f \n", pibpercapitaA);

        printf("Carta 2: \n");
        printf("Estado: %s \n", estadoB);
        printf("Codigo: %s \n", codigoB);
        printf("Nome da Cidade: %s \n", nomecidadeB);
        printf("Populacao: %d \n", populacaoB);
        printf("area: %.2f \n", areaB);
        printf("PIB: %.2f \n", pibB);
        printf("Numero de Pontos Turisticos: %d \n", pontoturisticoB);
        printf("Densidade: %.2f \n", densidadeB);
        printf("PIB per capita: %.2f \n", pibpercapitaB);

        return 0;

} 
