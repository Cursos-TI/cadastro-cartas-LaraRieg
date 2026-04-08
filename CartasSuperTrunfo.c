#include <stdio.h> // Biblioteca padrão para entrada e saída

int main() {

    // =========================
    // DECLARAÇÃO DAS VARIÁVEIS
    // =========================

  //Carta 1
  char estado1;                // Armazena a letra do estado (A a H)
  char codigo1[10];            // Código da carta (ex: A01 + '\0')
  char cidade1[50];            // Nome da cidade (string com até 49 caracteres)
  int populaçao1;              // Número de habitantes
  float area1;                 // Área em km²
  float pib1;                  // PIB da cidade
  int pontosTuristicos1;       // Quantidade de pontos turísticos

  //Carta 2
  char estado2;
  char codigo2[10];
  char cidade2[50];
  int populaçao2;
  float area2;
  float pib2;
  int pontosTuristicos2;

  //Entrada de dados - Carta 1
  printf("=== Cadastro da Carta 1 ===\n");

  // Lê o estado (espaço antes do %c evita erro de leitura)
  printf("Estado: ");
  scanf(" %c", &estado1);

  // Lê o código da carta
  printf("Código da Carta: ");
  scanf("%s", &codigo1);

  // Lê nome da cidade (permite espaços)
  printf("Nome da Cidade: ");
  scanf(" %[^\n]", &cidade1);

  // Lê população
  printf("População: ");
  scanf("%d", &populaçao1);

  // Lê área 
  printf("Área (em km²): ");
  scanf("%f", &area1);

  // Lê PIB
  printf("PIB: ");
  scanf("%f", &pib1);

  // Lê número de pontos turísticos
  printf("Número de Pontos Turísticos: ");
  scanf("%d", &pontosTuristicos1);


   //Entrada de dados - Carta 2
  printf("=== Cadastro da Carta 2 ===\n");

  printf("Estado: ");
  scanf(" %c", &estado2);

  printf("Código da Carta: ");
  scanf("%s", &codigo2);

  printf("Nome da Cidade: ");
  scanf(" %[^\n]", &cidade2);

  printf("População: ");
  scanf("%d", &populaçao2);

  printf("Área (em km²): ");
  scanf("%f", &area2);

  printf("PIB: ");
  scanf("%f", &pib2);

  printf("Número de Pontos Turísticos: ");
  scanf("%d", &pontosTuristicos2);


  //Saída de dados
  printf("\n===== CARTAS CADASTRADAS =====\n");

  // Exibe os dados da Carta 1
  printf("\nCarta 1\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("Populacao: %d\n", populaçao1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos1);

    // Exibe os dados da Carta 2
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("Populacao: %d\n", populaçao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos2);


return 0; // Indica que o programa terminou corretamente
} 
