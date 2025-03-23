#include <stdio.h>
#include <string.h>

int main() {
   //Declaração de variáveis
   char Estado [2], Codigo_carta [4], Nome_cidade [50]; //Dentro dos "[]" delimitei a quantidade de caracteres
   int Populacao;
   float Area;
   float PIB;
   int Numero_pontos_turisticos;

    
    //Entrada e saída de dados para a primeira carta
    printf("Desafio Super Trunfo - Países!\n");
    printf("\nCarta 1\n");

    printf("\nDigite a letra do estado1 (uma letra de 'A' a 'H', que represente um dos oito estados): ");
    scanf(" %s", Estado); //Captura a sigla do estado
    //Utilizei o espaço antes de %s para que o programa ignore  espaços em branco e pule diretamente para a entrada válida.
    //"Printf()" Exibe os dados de forma clara

    printf("Digite o código da carta1 (a letra do estado seguida de um número de 01 a 04): ");
    scanf(" %s", Codigo_carta); //Captura o código da carta
    //Utilizei o espaço novamente aqui pelo mesmo motivo do anterior
    //Utilizei o "s" ao lado do %, pois as respostas são strings
    //Não utilizei o "&", pois como as respostas são strings não necessita adicionar

    getchar(); //Pesquisei como utilizar o "getchar", pois o programa estava dando erro utilizando o "fgets" sem essa função antes.
    //Função limpa o buffer do teclado

    printf("Digite o nome da cidade1: ");
    fgets(Nome_cidade, sizeof(Nome_cidade), stdin);//Captura o nome da cidade
    Nome_cidade[strcspn(Nome_cidade, "\n")] = '\0'; //Remove quebra de linha
    //Utilizei o fgets conforme estava nos textos da aula "Variáveis e tipos de dados"
    //Como "fgets" pode ser adicionado nome composto de estado, pois aceita espaços, escolhi usar.
    
    printf("Digite o número da população1: ");
    scanf("%d", &Populacao); //Captura população
    //"&" Necessário para armazenar valores corretamente
    //"d" A resposta será em um número inteiro

    printf("Digite o número da área1 (em km²): ");
    scanf("%f", &Area); //Captura da Área
    // "&" Mesmo motivo do anterior
    //"f" A resposta sera com variável de ponto flutuante

    printf("Digite o número do PIB1 (Produto Interno Bruto da Cidade): ");
    scanf("%f", &PIB); //Captura do PIB
    //"&" e "f" segue os mesmos motivos do anterior

    printf("Digite o número de pontos turísticos1: " );
    scanf("%d", &Numero_pontos_turisticos); //Captura a quantidade de pontos turísticos


    //Na carta dois será repetido o mesmo processo que foi realizado até aqui
    printf("\nCarta 2\n");

    printf("\nDigite a letra do estado2 (uma letra de 'A' a 'H', que represente um dos oito estados): ");
    scanf(" %s", Estado);

    printf("Digite o código da carta2 (a letra do estado seguida de um número de 01 a 04): ");
    scanf(" %s", Codigo_carta);

    getchar();

    printf("Digite o nome da cidade2: ");
    fgets(Nome_cidade, sizeof(Nome_cidade), stdin);
    Nome_cidade[strcspn(Nome_cidade, "\n")] = '\0';
    
    printf("Digite o número da população2: ");
    scanf("%d", &Populacao);

    printf("Digite o número da área2 (em km²): ");
    scanf("%f", &Area);

    printf("Digite o número do PIB2 (Produto Interno Bruto da Cidade): ");
    scanf("%f", &PIB);

    printf("Digite o número de pontos turísticos2: " );
    scanf("%d", &Numero_pontos_turisticos);

    
    //Exibição dos dados da primeira carta
    //Utilizei "\n" para pular linha antes e depois.
    //Cada linha de codigo está com o nome da variável no final para mostrar os dados armazenado em cada uma
    printf("\nCarta 1:\n");
    printf("Estado: %s\n", Estado);
    printf("Código: %s\n", Codigo_carta);
    printf("Nome da cidade: %s\n", Nome_cidade);
    printf("População: %d\n", Populacao);
    printf("Área: %.2f km²\n", Area); // Utilizei o ".2" no "%f" para os dados serem formatados com duas casas decimais
    printf("PIB: %.2f\n", PIB);
    printf("Número de pontos turísticos: %d\n", Numero_pontos_turisticos);

    //Exibição dos dados da segunda carta

    printf("\nCarta 2:\n");
    printf("Estado: %s\n", Estado);
    printf("Código: %s\n", Codigo_carta);
    printf("Nome da cidade: %s\n", Nome_cidade);
    printf("População: %d\n", Populacao);
    printf("Área: %.2f km²\n", Area); 
    printf("PIB: %.2f\n", PIB);
    printf("Número de pontos turísticos: %d\n", Numero_pontos_turisticos);

    return 0; //finaliza o programa
}
