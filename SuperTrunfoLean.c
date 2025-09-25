#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades

        int codigo; //código da carta
              
            //variaveis carta 01
            char estado1;
            char cidade1[20];
            float area1;
            int populacao1;
            float pib1;
            int turisticos1;
            float densidadepopulacional1;  //populacao dividido pela area
            float pibpercapta1;           // Divida o PIB da cidade pela sua população

                //variaveis carta 2
                char estado2;
                char cidade2[15];
                float area2;
                int populacao2;
                float pib2;
                int turisticos2;
                float densidadepopulacional2; //populacao dividido pela area
                float pibpercapta2;          // Divida o PIB da cidade pela sua população

        // Área para entrada de dados
            //começou o jogo
            printf("****************super trunfo****************\n\n");

    //pede carta 01
    printf("digite o estado da cidade(Apenas um caractere): "); scanf("%c", &estado1);
    printf("digite o nome da cidade: "); scanf("%s", &cidade1);
    printf("digite o numero da populaçao: "); scanf("%d", &populacao1);
    printf("digite o numero da area: "); scanf("%f", &area1);
    printf("digite o numero do pib: "); scanf("%f", &pib1);
    printf("digite o numero de pontos turisticos: "); scanf("%d", &turisticos1);
    printf("\n\n");

        //pede carta 2
        printf("digite o estado da cidade 2 (Apenas um caractere) : "); scanf(" %c", &estado2);
        printf("digite o nome da cidade 2: "); scanf("%s", &cidade2);
        printf("digite o numero da populaçao: "); scanf("%d", &populacao2);
        printf("digite o numero da area 2: "); scanf("%f", &area2);
        printf("digite o numero do pib: "); scanf("%f", &pib2);
        printf("digite o numero de pontos turisticos: "); scanf("%d", &turisticos2);
        printf("\n\n");

        // Área para exibição dos dados da cidade
                                                                                                                                                                                                                             
    //mostra carta 1

    codigo = 1;//codigo 1

    printf("Carta 01:\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %c%d\n", estado1, codigo);
    printf("Nome da cidade: %s\n", cidade1);
    printf("população: %d\n", populacao1);
    printf("area: %.2f\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("pontos turisticos: %d\n\n", turisticos1);

    densidadepopulacional1 =  populacao1 / area1; //populacao dividido pela area
    pibpercapta1 = pib1 / populacao1;            //pib pela populacao

    printf("densidade populacional: %f habitantes por quilômetro quadrado\n", densidadepopulacional1);
    printf("Pib per capta: %.2f\n\n", pibpercapta1);
    printf("\n\n");

        //mostra carta 2

        codigo = 2; //codigo 2

        printf("Carta 02:\n");
        printf("Estado: %c\n", estado2);
        printf("Codigo: %c%d\n", estado2, codigo);
        printf("Nome da cidade: %s\n", cidade2);
        printf("população: %d\n", populacao2);
        printf("area: %.2f\n", area2);
        printf("PIB: %.2f\n", pib2);
        printf("pontos turisticos: %d\n\n", turisticos2); 

        densidadepopulacional2 = populacao2 / area2; //populacao dividido pela area
        pibpercapta2 = (float) pib2 / populacao2;    // pib divido pela população

        printf("densidade populacional: %f  habitantes por quilômetro quadrado\n", densidadepopulacional2);
        printf("Pib per capta: %f\n\n", pibpercapta2);
        printf("\n\n");


return 0;
} 
