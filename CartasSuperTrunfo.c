#include <stdio.h>
#include <string.h>

int main() {
    // Declaração de variáveis para Carta 1
    char Estado1[2], Codigo_carta1[4], Nome_cidade1[50];
    int Populacao1;
    float Area1, PIB1;
    int Numero_pontos_turisticos1;

    // Declaração de variáveis para Carta 2
    char Estado2[2], Codigo_carta2[4], Nome_cidade2[50];
    int Populacao2;
    float Area2, PIB2;
    int Numero_pontos_turisticos2;

    // Entrada de dados para a primeira carta
    printf("Desafio Super Trunfo - Países!\n");
    printf("\nCarta 1\n");

    printf("\nDigite a letra do estado1 (uma letra de 'A' a 'H', que represente um dos oito estados): ");
    scanf(" %s", Estado1);

    printf("Digite o código da carta1 (a letra do estado seguida de um número de 01 a 04): ");
    scanf(" %s", Codigo_carta1);

    getchar(); // Limpa buffer antes do fgets

    printf("Digite o nome da cidade1: ");
    fgets(Nome_cidade1, sizeof(Nome_cidade1), stdin);
    Nome_cidade1[strcspn(Nome_cidade1, "\n")] = '\0';

    printf("Digite o número da população1: ");
    scanf("%d", &Populacao1);

    printf("Digite o número da área1 (em km²): ");
    scanf("%f", &Area1);

    printf("Digite o número do PIB1 (Produto Interno Bruto da Cidade): ");
    scanf("%f", &PIB1);

    printf("Digite o número de pontos turísticos1: ");
    scanf("%d", &Numero_pontos_turisticos1);

    // Entrada de dados para a segunda carta
    printf("\nCarta 2\n");

    printf("\nDigite a letra do estado2 (uma letra de 'A' a 'H', que represente um dos oito estados): ");
    scanf(" %s", Estado2);

    printf("Digite o código da carta2 (a letra do estado seguida de um número de 01 a 04): ");
    scanf(" %s", Codigo_carta2);

    getchar(); // Limpa buffer antes do fgets

    printf("Digite o nome da cidade2: ");
    fgets(Nome_cidade2, sizeof(Nome_cidade2), stdin);
    Nome_cidade2[strcspn(Nome_cidade2, "\n")] = '\0';

    printf("Digite o número da população2: ");
    scanf("%d", &Populacao2);

    printf("Digite o número da área2 (em km²): ");
    scanf("%f", &Area2);

    printf("Digite o número do PIB2 (Produto Interno Bruto da Cidade): ");
    scanf("%f", &PIB2);

    printf("Digite o número de pontos turísticos2: ");
    scanf("%d", &Numero_pontos_turisticos2);

    // Cálculo da densidade populacional e PIB per capita após entrada dos dados
    float Densidade_populacional1 = Populacao1 / Area1;
    float PIB_per_capita1 = PIB1 / Populacao1;

    float Densidade_populacional2 = Populacao2 / Area2;
    float PIB_per_capita2 = PIB2 / Populacao2;

    // Exibição dos dados da primeira carta
    printf("\nCarta 1:\n");
    printf("Estado: %s\n", Estado1);
    printf("Código: %s\n", Codigo_carta1);
    printf("Nome da cidade: %s\n", Nome_cidade1);
    printf("População: %d\n", Populacao1);
    printf("Área: %.2f km²\n", Area1);
    printf("PIB: %.2f\n", PIB1);
    printf("Número de pontos turísticos: %d\n", Numero_pontos_turisticos1);
    printf("Densidade Populacional: %.2f hab./km²\n", Densidade_populacional1);
    printf("PIB per Capita: R$ %.2f\n", PIB_per_capita1);

    // Exibição dos dados da segunda carta
    printf("\nCarta 2:\n");
    printf("Estado: %s\n", Estado2);
    printf("Código: %s\n", Codigo_carta2);
    printf("Nome da cidade: %s\n", Nome_cidade2);
    printf("População: %d\n", Populacao2);
    printf("Área: %.2f km²\n", Area2);
    printf("PIB: %.2f\n", PIB2);
    printf("Número de pontos turísticos: %d\n", Numero_pontos_turisticos2);
    printf("Densidade Populacional: %.2f hab./km²\n", Densidade_populacional2);
    printf("PIB per Capita: R$ %.2f\n", PIB_per_capita2);

    return 0;
}
