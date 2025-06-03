#include <stdio.h>
#include <string.h>

int main() {
    // Declaração de variáveis para Carta 1 e geral
    char Estado1[2], Codigo_carta1[4], Nome_cidade1[50], Primeiro_atributo, Segundo_atributo;
    unsigned long int Populacao1; //'unsigned long int' permite armazenar números inteiros grandes (populações elevadas)
    float Area1, PIB1;// Float para permitir valores com casas decimais
    int Numero_pontos_turisticos1, resultado1, resultado2;

    // Declaração de variáveis para Carta 2
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

    printf("Menu\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Número de pontos turísticos\n");
    printf("5 - Densidade Populacional\n");
    printf("6 - PIB per capita\n");

    printf("Escolha o primeiro atributo:\n");
    scanf(" %c", &Primeiro_atributo);

    switch (Primeiro_atributo)
    {
    case '1':
      printf("Você escolheu a opção População!\n");
      printf("Carta 1 - %s: %lu.\n", Nome_cidade1, Populacao1);
      printf("Carta 2 - %s: %lu.\n", Nome_cidade2, Populacao2);
      resultado1 = Populacao1 > Populacao2 ? 1 : 0;
      printf(" %s venceu no atributo População!\n", resultado1 ? "Carta 1" : "Carta 2");
     break;
    case '2':
      printf("Você escolheu a opção Área!\n");
      printf("Carta 1 - %s: %2f.\n", Nome_cidade1, Area1);
      printf("Carta 2 - %s: %2f.\n", Nome_cidade2, Area2);
      resultado1 = Area1 > Area2 ? 1 : 0;
      printf(" %s venceu no atributo área!\n", resultado1 ? "Carta 1" : "Carta 2");
     break;
    case '3':
      printf("Você escolheu a opção PIB!\n");
      printf("Carta 1 - %s: %2f.\n", Nome_cidade1, PIB1);
      printf("Carta 2 - %s: %2f.\n", Nome_cidade2, PIB2);
      resultado1 = PIB1 > PIB2 ? 1 : 0;
      printf(" %s venceu no atributo PIB!\n", resultado1 ? "Carta 1" : "Carta 2");
     break;
     case '4':
      printf("Você escolheu a opção Número de pontos turísticos!\n");
      printf("Carta 1 - %s: %d.\n", Nome_cidade1, Numero_pontos_turisticos1);
      printf("Carta 2 - %s: %d.\n", Nome_cidade2, Numero_pontos_turisticos2);
      resultado1 = Numero_pontos_turisticos1 > Numero_pontos_turisticos2 ? 1 : 0;
      printf(" %s venceu no atributo pontos turísticos!\n", resultado1 ? "Carta 1" : "Carta 2");
     break;
    case '5':
      printf("Você escolheu a opção Densidade populacional!\n");
      printf("Carta 1 - %s: %d.\n", Nome_cidade1, Densidade_populacional1);
      printf("Carta 2 - %s: %d.\n", Nome_cidade2, Densidade_populacional2);
      resultado1 = Densidade_populacional1 < Densidade_populacional2 ? 1 : 0;
      printf(" %s venceu no atributo densidade populacional!\n", resultado1 ? "Carta 1" : "Carta 2");
     break;
    case '6':
      printf("Você escolheu a opção PIB per capita!\n");
      printf("Carta 1 - %s: %d.\n", Nome_cidade1, PIB_per_capita1);
      printf("Carta 2 - %s: %d.\n", Nome_cidade2, PIB_per_capita2);
      resultado1 = PIB_per_capita1 > PIB_per_capita2 ? 1 : 0;
      printf(" %s venceu no atributo PIB per capita!\n", resultado1 ? "Carta 1" : "Carta 2");
     break;
    default:
      printf("Opção de jogo inválida!\n");
     break;
    }

    printf("Menu\n");
    printf("Atenção! Escolha um atributo diferente do primeiro");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Número de pontos turísticos\n");
    printf("5 - Densidade Populacional\n");
    printf("6 - PIB per capita\n");

    printf("Escolha o segundo atributo:\n");
    scanf(" %c", &Segundo_atributo);

    // Verifica se o usuário escolheu dois atributos diferentes
    if (Primeiro_atributo == Segundo_atributo) {
      printf("Você escolheu o mesmo atributo!\n");}
     else {

    switch (Segundo_atributo) //Avaliação do segundo atributo
    {
    case '1':
      printf("Você escolheu a opção População!\n");
      printf("Carta 1 - %s: %2f.\n", Nome_cidade1, Populacao1);
      printf("Carta 2 - %s: %2f.\n", Nome_cidade2, Populacao2);
      resultado2 = Populacao1 > Populacao2 ? 1 : 0;
      printf(" %s venceu no atributo População!\n", resultado2 ? "Carta 1" : "Carta 2");
     break;
    case '2':
      printf("Você escolheu a opção Área!\n");
      printf("Carta 1 - %s: %2f.\n", Nome_cidade1, Area1);
      printf("Carta 2 - %s: %2f.\n", Nome_cidade2, Area2);
      resultado2 = Area1 > Area2 ? 1 : 0;
      printf(" %s venceu no atributo área!\n", resultado2 ? "Carta 1" : "Carta 2");
     break;
    case '3':
      printf("Você escolheu a opção PIB!\n");
      printf("Carta 1 - %s: %2f.\n", Nome_cidade1, PIB1);
      printf("Carta 2 - %s: %2f.\n", Nome_cidade2, PIB2);
      resultado2 = PIB1 > PIB2 ? 1 : 0;
      printf(" %s venceu no atributo PIB!\n", resultado2 ? "Carta 1" : "Carta 2");
     break;
     case '4':
      printf("Você escolheu a opção Número de pontos turísticos!\n");
      printf("Carta 1 - %s: %d.\n", Nome_cidade1, Numero_pontos_turisticos1);
      printf("Carta 2 - %s: %d.\n", Nome_cidade2, Numero_pontos_turisticos2);
      resultado2= Numero_pontos_turisticos1 > Numero_pontos_turisticos2 ? 1 : 0;
      printf(" %s venceu no atributo Pontos turísticos!\n", resultado2 ? "Carta 1" : "Carta 2");
     break;
    case '5':
      printf("Você escolheu a opção Densidade populacional!\n");
      printf("Carta 1 - %s: %f.\n", Nome_cidade1, Densidade_populacional1);
      printf("Carta 2 - %s: %f.\n", Nome_cidade2, Densidade_populacional2);
      resultado2 = Densidade_populacional1 < Densidade_populacional2 ? 1 : 0;
      printf(" %s venceu no atributo Densidade populacional!\n", resultado2 ? "Carta 1" : "Carta 2");
     break;
    case '6':
      printf("Você escolheu a opção PIB per capita!\n");
      printf("Carta 1 - %s: %f.\n", Nome_cidade1, PIB_per_capita1);
      printf("Carta 2 - %s: %f.\n", Nome_cidade2, PIB_per_capita2);
      resultado2 = PIB_per_capita1 > PIB_per_capita2 ? 1 : 0;
      printf(" %s venceu no atributo PIB per capita!\n", resultado2 ? "Carta 1" : "Carta 2");
     break;
    default:
      printf("Opção de jogo inválida!\n");
     break;
    }
}

    if (resultado1 && resultado2) // Comparação das somas para definir vencedor
    {
      printf("***Parabéns, você venceu!***\n");}
     else if (resultado1 != resultado2) {
      printf("***Empatou!***\n");}
    else  {
      printf("***Infelizmente, você perdeu!***\n");
    }

    return 0;
}
 