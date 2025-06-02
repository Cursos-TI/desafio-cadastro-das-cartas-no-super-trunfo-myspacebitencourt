#include <stdio.h>
#include <string.h>

int main() {
    // Declaração de variáveis para Carta 1
    char Estado1[2], Codigo_carta1[4], Nome_cidade1[50];
    unsigned long int Populacao1; //'unsigned long int' permite armazenar números inteiros grandes (populações elevadas)
    float Area1, PIB1;// Float para permitir valores com casas decimais
    int Numero_pontos_turisticos1;

    // Declaração de variáveis para Carta 2 (Iguais às da carta 1)
    char Estado2[2], Codigo_carta2[4], Nome_cidade2[50];
    unsigned long int Populacao2;
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
    fgets(Nome_cidade1, sizeof(Nome_cidade1), stdin); // Permite nomes compostos
    Nome_cidade1[strcspn(Nome_cidade1, "\n")] = '\0'; 

    printf("Digite o número da população1: ");
    scanf("%lu", &Populacao1); // %lu para ler unsigned long int

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
    scanf("%lu", &Populacao2);

    printf("Digite o número da área2 (em km²): ");
    scanf("%f", &Area2);

    printf("Digite o número do PIB2 (Produto Interno Bruto da Cidade): ");
    scanf("%f", &PIB2);

    printf("Digite o número de pontos turísticos2: ");
    scanf("%d", &Numero_pontos_turisticos2);

    // Cálculo da densidade populacional e PIB per capita após entrada dos dados
    float Densidade_populacional1 = Populacao1 / Area1;
    float PIB_per_capita1 = PIB1 / Populacao1;
    float SuperPoder1 = Populacao1+Area1+PIB1+Numero_pontos_turisticos1+PIB_per_capita1+(1/Densidade_populacional1); // Só soma positiva, inverso da densidade valoriza espaço

    float Densidade_populacional2 = Populacao2 / Area2;
    float PIB_per_capita2 = PIB2 / Populacao2;
    float SuperPoder2 = Populacao2+Area2+PIB2+Numero_pontos_turisticos2+PIB_per_capita2+(1/Densidade_populacional2);

    // Exibição dos dados da primeira carta
    printf("\nCarta 1:\n");
    printf("Estado: %s\n", Estado1);
    printf("Código: %s\n", Codigo_carta1);
    printf("Nome da cidade: %s\n", Nome_cidade1);
    printf("População: %lu\n", Populacao1);
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
    printf("População: %lu\n", Populacao2);
    printf("Área: %.2f km²\n", Area2);
    printf("PIB: %.2f\n", PIB2);
    printf("Número de pontos turísticos: %d\n", Numero_pontos_turisticos2);
    printf("Densidade Populacional: %.2f hab./km²\n", Densidade_populacional2);
    printf("PIB per Capita: R$ %.2f\n", PIB_per_capita2);

    /* Para cada atributo, imprimimos "Carta 1 venceu (1)" se for verdadeiro
     e "Carta 1 venceu (0)" se Carta 2 vencer (pois a condição será falsa)*/

    printf("População: Carta 1 venceu (%d)\n", Populacao1>Populacao2);
    printf("Área: Carta 1 venceu (%d)\n", Area1>Area2);
    printf("PIB: Carta 1 venceu (%d)\n", PIB1 > PIB2);
    printf("Pontos Turísticos: Carta 1 venceu (%d)\n", Numero_pontos_turisticos1>Numero_pontos_turisticos2);
    printf("Densidade Populacional: Carta 1 venceu (%d)\n", Densidade_populacional1<Densidade_populacional2); // Menor densidade vence
    printf("PIB per Capita: Carta 1 venceu (%d)\n", PIB_per_capita1>PIB_per_capita2);
    printf("Super Poder: Carta 1 venceu (%d)\n", SuperPoder1 > SuperPoder2);

    return 0;
}
