#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Declaração das variáveis
     char estadoA[50], estadoB[50];
     char codigoA[50], codigoB[50];
     char nomecidadeA[50], nomecidadeB[50];
     unsigned long int populacaoA, populacaoB;
     float areaA, areaB;
     float pibA, pibB;
     int pontoturisticoA, pontoturisticoB;
     float densidadeA, densidadeB;
     float pibpercapitaA, pibpercapitaB;
     float SuperTrunfoA, SuperTrunfoB;
     int Rpopulacao;
     int Rarea;
     int Rpib;
     int Rdensidade;
     int Rpibpercapita;
     int Rsupertrunfo;
     int Rpontoturistico;
      
        // Entrada de dados para a cidade A
        printf("Digite o nome do estado A: \n");
        scanf("%s", estadoA);
        printf("Digite o codigo do estado A: \n");
        scanf("%s", codigoA);
        printf("Digite o nome da cidade A: \n");
        scanf("%s", nomecidadeA);
        printf("Digite a populacao da cidade A: \n");
        scanf("%lu", &populacaoA);
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
        scanf("%lu", &populacaoB);
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
        printf("Populacao: %lu \n", populacaoA);
        printf("area: %.2f \n", areaA);
        printf("PIB: %.2f \n", pibA);
        printf("Numero de Pontos Turisticos: %d \n", pontoturisticoA);
        printf("Densidade: %.2f \n", densidadeA);
        printf("PIB per capita: %.2f \n", pibpercapitaA);

        printf("Carta 2: \n");
        printf("Estado: %s \n", estadoB);
        printf("Codigo: %s \n", codigoB);
        printf("Nome da Cidade: %s \n", nomecidadeB);
        printf("Populacao: %lu \n", populacaoB);
        printf("area: %.2f \n", areaB);
        printf("PIB: %.2f \n", pibB);
        printf("Numero de Pontos Turisticos: %d \n", pontoturisticoB);
        printf("Densidade: %.2f \n", densidadeB);
        printf("PIB per capita: %.2f \n", pibpercapitaB);

      // Comparação das cartas
        Rpopulacao = populacaoA > populacaoB;
        Rarea = areaA > areaB;
        Rpib = pibA > pibB;
        Rpontoturistico = pontoturisticoA > pontoturisticoB;
        Rdensidade = densidadeA > densidadeB;
        Rpibpercapita = pibpercapitaA > pibpercapitaB;
        SuperTrunfoA = populacaoA + areaA + pibA + pontoturisticoA + (densidadeA / 1) + pibpercapitaA;
        SuperTrunfoB = populacaoB + areaB + pibB + pontoturisticoB + (densidadeB / 1) + pibpercapitaB;
        Rsupertrunfo = SuperTrunfoA > SuperTrunfoB;

        // Saida de dados de compração
        printf("Comparacao de cartas: \n");
        printf("Populacao: %d \n", Rpopulacao);
        printf("Area: %d \n", Rarea);
        printf("PIB: %d \n", Rpib);
        printf("Numero de Pontos Turisticos: %d \n", Rpontoturistico);
        printf("Densidade: %d \n", Rdensidade);
        printf("PIB per capita: %d \n", Rpibpercapita);
        printf("Super trunfo : %d \n", Rsupertrunfo);



        return 0;

} 
