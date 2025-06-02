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

    printf("\nComparação de Cartas!\n\n"); // início da seção de comparações entre os atributos das cartas.

    printf("(Atributo: População):\n"); //Compara os valores de população entre as duas cartas. A carta com o maior valor vence.
    if (Populacao1 > Populacao2) {
        printf("Carta 1 - %s: %lu.\n", Estado1, Populacao1);
        printf("Carta 2 - %s: %lu.\n", Estado2, Populacao2);
        printf("***Resultado: Carta 1 venceu!***\n");}
      else if (Populacao1 < Populacao2) {
        printf("Carta 1 - %s: %lu.\n", Estado1, Populacao1);
        printf("Carta 2 - %s: %lu.\n", Estado2, Populacao2);
        printf("***Carta 2 venceu!***\n");}
     else {
        printf("***Empate!***\n");
     }

     printf("(Atributo: Área):\n"); //Compara a área territorial das duas cidades. A cidade com área maior vence.
     if (Area1>Area2) {
        printf("Carta 1 - %s: %2f.\n", Estado1, Area1);
        printf("Carta 2 - %s: %2f.\n", Estado2, Area2);
        printf("***Resultado: Carta 1 venceu!***\n");}
      else if (Area1 < Area2) {
        printf("Carta 1 - %s: %2f.\n", Estado1, Area1);
        printf("Carta 2 - %s: %2f.\n", Estado2, Area2);
        printf("***Carta 2 venceu!***\n");}
      else {
        printf("***Empate!***\n");
     }

    printf("(Atributo: PIB):\n"); //Compara o Produto Interno Bruto. A cidade com maior PIB vence.
    if (PIB1 > PIB2) {
        printf("Carta 1 - %s: %2f.\n", Estado1, PIB1);
        printf("Carta 2 - %s: %2f.\n", Estado2, PIB2);
        printf("***Resultado: Carta 1 venceu!***\n");}
      else if (PIB1 < PIB2) {
        printf("Carta 1 - %s: %d.\n", Estado1, PIB1);
        printf("Carta 2 - %s: %d.\n", Estado2, PIB2);
        printf("***Carta 2 venceu!***\n");}
      else {
        printf("***Empate!***\n");
     }
    
    printf("(Atributo: Número de Pontos Turísticos):\n");//Compara o número de pontos turísticos. Quem tiver mais pontos turísticos vence.
    if (Numero_pontos_turisticos1 > Numero_pontos_turisticos2) {
        printf("Carta 1 - %s: %d.\n", Estado1, Numero_pontos_turisticos1);
        printf("Carta 2 - %s: %d.\n", Estado2, Numero_pontos_turisticos2);
        printf("***Resultado: Carta 1 venceu!***\n");}
      else if (Numero_pontos_turisticos1 < Numero_pontos_turisticos2) {
        printf("Carta 1 - %s: %d.\n", Estado1, Numero_pontos_turisticos1);
        printf("Carta 2 - %s: %d.\n", Estado2, Numero_pontos_turisticos2);
        printf("***Carta 2 venceu!***\n");}
      else {
        printf("***Empate!***\n");
     }
    
    printf("(Atributo: Densidade Populacional):\n"); //vence quem tiver MENOR densidade populacional
    if (Densidade_populacional1 < Densidade_populacional2) {
        printf("Carta 1 - %s: %d.\n", Estado1, Densidade_populacional1);
        printf("Carta 2 - %s: %d.\n", Estado2, Densidade_populacional2);
        printf("***Resultado: Carta 1 venceu!***\n");}
      else if (Densidade_populacional1 > Densidade_populacional2) {
        printf("Carta 1 - %s: %d.\n", Estado1, Densidade_populacional1);
        printf("Carta 2 - %s: %d.\n", Estado2, Densidade_populacional2);
        printf("***Carta 2 venceu!***\n");}
      else {
        printf("***Empate!***\n");
     }
    
    printf("(Atributo: PIB Per Capita):\n"); //Compara o PIB per capita das duas cidades. Vence a cidade com maior valor,
    if (PIB_per_capita1 > PIB_per_capita2) {
        printf("Carta 1 - %s: %d.\n", Estado1, PIB_per_capita1);
        printf("Carta 2 - %s: %d.\n", Estado2, PIB_per_capita2);
        printf("***Resultado: Carta 1 venceu!***\n");}
      else if (PIB_per_capita1 < PIB_per_capita2) {
        printf("Carta 1 - %s: %d.\n", Estado1, PIB_per_capita1);
        printf("Carta 2 - %s: %d.\n", Estado2, PIB_per_capita2);
        printf("***Carta 2 venceu!***\n");}
      else {
        printf("***Empate!***\n");
     }
    
    printf("(Atributo: Super Poder):\n"); //Vence quem tiver o maior super poder.
    if (SuperPoder1 > SuperPoder2) {
        printf("Carta 1 - %s: %2f.\n", Estado1, SuperPoder1);
        printf("Carta 2 - %s: %2f.\n", Estado2, SuperPoder2);
        printf("***Resultado: Carta 1 venceu!***\n");}
      else if (SuperPoder1 < SuperPoder2) {
        printf("Carta 1 - %s: %2f.\n", Estado1, SuperPoder1);
        printf("Carta 2 - %s: %2f.\n", Estado2, SuperPoder2);
        printf("***Carta 2 venceu!***\n");}
      else {
        printf("***Empate!***\n");
     }
        
    return 0;
}