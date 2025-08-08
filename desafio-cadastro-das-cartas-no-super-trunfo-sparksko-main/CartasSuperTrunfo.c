#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
// Teste larissa

int main()
{
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    char estado1, estado2;                    // Uma letra de 'A' a 'H'
    char codigo1[4], codigo2[4];              // A letra do estado seguida de um número de 01 a 04
    char nomeCidade1[50], nomeCidade2[50];    // Nome da cidade
    int populacao1, populacao2;               // População da cidade
    float area1, area2;                       // Area da cidade em km²
    float pib1, pib2;                         // PIB da cidade
    int pontosTuristicos1, pontosTuristicos2; // numero de pontos turisticos
    float densidade1, densidade2;             // densidade populacional
    float pibpercapita1, pibpercapita2;       // PIB per capita

    // Apresentação do jogo e das cartas
    printf("Super Trunfo \n");
    printf("Cadastro de cartas \n");

    // Coleta de dados da carta 1

    printf("Insira os dados da carta 1: \n");

    printf("Digite o  estado (Uma letra de A a H): \n");
    scanf(" %c", &estado1);

    printf("Digite o codigo da carta (Ex: A01) \n");
    scanf("%s", codigo1);

    printf("Digite o nome da cidade \n");
    scanf("%s", nomeCidade1);

    printf("Digite a população da cidade \n");
    scanf("%d", &populacao1);

    printf("Digite a area da cidade em km2 \n");
    scanf("%f", &area1);

    printf("Digite o PIB da cidade (em bilhões de reais) \n");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turisticos \n");
    scanf("%d", &pontosTuristicos1);

    // Coleta de dados da carta 2

    printf("Insira os dados da carta 2: \n");

    printf("Digite o  estado (Uma letra de A a H): \n");
    scanf(" %c", &estado2);

    printf("Digite o codigo da carta (Ex: A01) \n");
    scanf("%s", codigo2);

    printf("Digite o nome da cidade \n");
    scanf("%s", nomeCidade2);

    printf("Digite a população da cidade \n");
    scanf("%d", &populacao2);

    printf("Digite a area da cidade em km2 \n");
    scanf("%f", &area2);

    printf("Digite o PIB da cidade (em bilhões de reais) \n");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turisticos \n");
    scanf("%d", &pontosTuristicos2);

//Calcular os valores da densidade e pib per capita antes da exibição

       densidade1 = populacao1 / area1;
       pibpercapita1 = (pib1 * 1000000000) / populacao1;

       densidade2 = populacao2 / area2;
       pibpercapita2 = (pib2 * 1000000000) / populacao2;


    // Exibir os dados das cartas cadastradas

    printf("\nCartas cadastradas com sucesso!\n");

   printf("\nCarta 1:\nEstado: %c\nCódigo: %s\nCidade: %s\nPopulação: %d\nÁrea: %.2f km²\nPIB: %.2f bilhões\nPontos Turísticos: %d\nDensidade Populacional:%.2f hab/km²\nPIB per Capita:%.2f reais",
           estado1, codigo1, nomeCidade1, populacao1, area1, pib1, pontosTuristicos1, densidade1, pibpercapita1);

    printf("\nCarta 2:\nEstado: %c\nCódigo: %s\nCidade: %s\nPopulação: %d\nÁrea: %.2f km²\nPIB: %.2f bilhões\nPontos Turísticos: %d\nDensidade Populacional:%.2f hab/km²\nPIB per Capita:%.2f reais",
           estado2, codigo2, nomeCidade2, populacao2, area2, pib2, pontosTuristicos2, densidade2, pibpercapita2);

    printf("\nPressione qualquer tecla para sair...\n");
    
    scanf(" %c"); // Espera por uma tecla para encerrar o programa

    return 0;
} 
