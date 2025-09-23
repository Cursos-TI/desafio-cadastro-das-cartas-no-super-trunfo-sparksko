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
    unsigned long int populacao1, populacao2; // População da cidade
    float area1, area2;                       // Area da cidade em km²
    float pib1, pib2;                         // PIB da cidade
    int pontosTuristicos1, pontosTuristicos2; // numero de pontos turisticos
    float densidade1, densidade2;             // densidade populacional
    float pibpercapita1, pibpercapita2;       // PIB per capita
       float superPoder1, superPoder2;           // Super Poder
    
      
    // Apresentação do jogo e das cartas
    printf("Super Trunfo \n");
    printf("Cadastro de cartas \n");

    // Coleta de dados da carta 1

    printf("Insira os dados da carta 1: \n");

    printf("Digite o  estado (Uma letra de A a H): \n");
    scanf(" %c", &estado1);

    printf("Digite o codigo da carta (Ex: A01) \n");
    scanf("%3s", codigo1);

    printf("Digite o nome da cidade \n");
    scanf(" %49[^\n]", nomeCidade1);

    printf("Digite a população da cidade \n");
    scanf("%lu", &populacao1);

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
    scanf("%3s", codigo2);

    printf("Digite o nome da cidade \n");
    scanf(" %49[^\n]", nomeCidade2);

    printf("Digite a população da cidade \n");
    scanf("%lu", &populacao2);

    printf("Digite a area da cidade em km2 \n");
    scanf("%f", &area2);

    printf("Digite o PIB da cidade (em bilhões de reais) \n");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turisticos \n");
    scanf("%d", &pontosTuristicos2);


    //Calcular os valores da densidade e pib per capita antes da exibição

       densidade1 = (float)populacao1 / area1;
       pibpercapita1 = (pib1 * 1000000000) / populacao1;

       densidade2 = (float)populacao2 / area2;
       pibpercapita2 = (pib2 * 1000000000) / populacao2;


         // Super Poder
    superPoder1 = (float)populacao1 + area1 + (pib1 * 1000000000.0f) + pontosTuristicos1 + pibpercapita1 + (1.0f / densidade1);
    superPoder2 = (float)populacao2 + area2 + (pib2 * 1000000000.0f) + pontosTuristicos2 + pibpercapita2 + (1.0f / densidade2);

    // Exibir cartas
    printf("\nCarta 1:\nEstado: %c\nCódigo: %s\nCidade: %s\nPopulação: %lu\nÁrea: %.2f km²\nPIB: %.2f bilhões\nPontos Turísticos: %d\nDensidade Populacional: %.2f hab/km²\nPIB per Capita: %.2f reais\nSuper Poder: %.2f\n",
           estado1, codigo1, nomeCidade1, populacao1, area1, pib1, pontosTuristicos1, densidade1, pibpercapita1, superPoder1);

    printf("\nCarta 2:\nEstado: %c\nCódigo: %s\nCidade: %s\nPopulação: %lu\nÁrea: %.2f km²\nPIB: %.2f bilhões\nPontos Turísticos: %d\nDensidade Populacional: %.2f hab/km²\nPIB per Capita: %.2f reais\nSuper Poder: %.2f\n",
           estado2, codigo2, nomeCidade2, populacao2, area2, pib2, pontosTuristicos2, densidade2, pibpercapita2, superPoder2);


     // Comparação final: Super Poder
    printf("\n--- Comparacao Final (Atributo: Super Poder) ---\n");
    printf("Carta 1 - %s (%c): %.2f\n", nomeCidade1, estado1, superPoder1);
    printf("Carta 2 - %s (%c): %.2f\n", nomeCidade2, estado2, superPoder2);

    if (superPoder1 > superPoder2) {
        printf("Resultado: Carta 1 (%s) venceu!\n", nomeCidade1);
    } else if (superPoder2 > superPoder1) {
        printf("Resultado: Carta 2 (%s) venceu!\n", nomeCidade2);
    } else {
        printf("Resultado: Empate!\n");
    }
    return 0;

}