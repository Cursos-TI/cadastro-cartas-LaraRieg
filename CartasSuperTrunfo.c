#include <stdio.h>

int main() {

  //Carta 1
  char estado1;
  char codigo1[10];
  char cidade1[50];
  int populaçao1;
  float area1;
  float pib1;
  int pontosTuristicos1;

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

  printf("Estado: ");
  scanf("%c", &estado1);

  printf("Código da Carta: ");
  scanf("%s", &codigo1);

  printf("Nome da Cidade: ");
  scanf(" %[^\n]", &cidade1);

  printf("População: ");
  scanf("%d", &populaçao1);

  printf("Área (em km²): ");
  scanf("%f", &area1);

  printf("PIB: ");
  scanf("%f", &pib1);

  printf("Número de Pontos Turísticos: ");
  scanf("%d", &pontosTuristicos1);


   //Entrada de dados - Carta 2
  printf("=== Cadastro da Carta 2 ===\n");

  printf("Estado: ");
  scanf("%c", &estado2);

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

  printf("\nCarta 1\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("Populacao: %d\n", populaçao1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos1);

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("Populacao: %d\n", populaçao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos2);


return 0;
} 
