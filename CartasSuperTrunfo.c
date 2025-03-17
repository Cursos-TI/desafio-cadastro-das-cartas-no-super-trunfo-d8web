#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    char state1[3]; // Primeira cidade
    char code1[5]; // Código
    char name1[50]; // Nome
    int population1; // População
    float km1; // Kilometros quadrados
    float pib1; // Produto interno bruto
    int touristPoints1; // Pontos turisticos

    char state2[3];
    char code2[5];
    char name2[50];
    int population2;
    float km2;
    float pib2;
    int touristPoints2;

    // Capturar os dados das duas cartas
    printf("Digite o estado 1 (de A a H):\n");
    scanf("%2s", state1);

    printf("Digite o código 1 (ex: A01):\n");
    scanf("%4s", code1);

    printf("Digite o nome da cidade 1:\n");
    scanf(" %49[^\n]s", name1);

    printf("Digite a população 1:\n");
    scanf("%d", &population1);

    printf("Digite a kilometragem 1 (em km²):\n");
    scanf("%f", &km1);

    printf("Digite o PIB 1 (em bilhões de reais):\n");
    scanf("%f", &pib1);

    printf("Digite a quantidade de pontos turísticos 1:\n");
    scanf("%d", &touristPoints1);

    printf("\nDigite o estado 2 (de A a H):\n");
    scanf("%2s", state2);

    printf("Digite o código 2 (ex: B02):\n");
    scanf("%4s", code2);

    printf("Digite o nome da cidade 2:\n");
    scanf(" %49[^\n]s", name2);

    printf("Digite a população 2:\n");
    scanf("%d", &population2);

    printf("Digite a kilometragem 2 (em km²):\n");
    scanf("%f", &km2);

    printf("Digite o PIB 2 (em bilhões de reais):\n");
    scanf("%f", &pib2);

    printf("Digite a quantidade de pontos turísticos 2:\n");
    scanf("%d", &touristPoints2);

    // Exibir os dados de cada carta
    printf("\nCarta 1:\n");
    printf("Estado: %s\n", state1);
    printf("Código: %s\n", code1);
    printf("Nome da Cidade: %s\n", name1);
    printf("População: %d\n", population1);
    printf("Área: %.2f km²\n", km1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", touristPoints1);

    printf("\nCarta 2:\n");
    printf("Estado: %s\n", state2);
    printf("Código: %s\n", code2);
    printf("Nome da Cidade: %s\n", name2);
    printf("População: %d\n", population2);
    printf("Área: %.2f km²\n", km2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", touristPoints2);

    return 0;
}
