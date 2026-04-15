#include <stdio.h> // Biblioteca padrão para entrada e saída

int main() {

    // =========================
    // DECLARAÇÃO DAS VARIÁVEIS
    // =========================

  //Carta 1
  char estado1;                  // Armazena a letra do estado (A a H)
  char codigo1[10];              // Código da carta (ex: A01 + '\0')
  char cidade1[50];              // Nome da cidade (string com até 49 caracteres)
  unsigned long int populaçao1;                // Número de habitantes
  float area1;                   // Área em km²
  float pib1;                    // PIB da cidade
  int pontosTuristicos1;         // Quantidade de pontos turísticos
  float densidadePopulacional1;   // Densidade Populacional
  float pibPercapita1;            // PIB Per capita

  //Carta 2
  char estado2;
  char codigo2[10];
  char cidade2[50];
  unsigned long int populaçao2;
  float area2;
  float pib2;
  int pontosTuristicos2;
  float densidadePopulacional2;
  float pibPercapita2;

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


   // =========================
    // CÁLCULOS
    // =========================

  densidadePopulacional1 = populaçao1 / area1;                  // Calcula densidade populacional (habitantes por km²)
  pibPercapita1 = (pib1 * 1000000000) / populaçao1;             // Calcula PIB per capita (riqueza por pessoa)

  densidadePopulacional2 = populaçao2 / area2;
  pibPercapita2 = (pib2 * 1000000000) / populaçao2;

  // Super Poder
  float superPoder1 = populaçao1 + area1 + pib1 + pontosTuristicos1 + pibPercapita1 + (1 / densidadePopulacional1);
  float superPoder2 = populaçao2 + area2 + pib2 + pontosTuristicos2 + pibPercapita2 + (1 / densidadePopulacional2);


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
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional1);
    printf("PIB per Capita: %.2f reais\n", pibPercapita1);
    printf("Super Poder: %.2f\n", superPoder1);

    // Exibe os dados da Carta 2
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("Populacao: %d\n", populaçao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional2);
    printf("PIB per Capita: %.2f reais\n", pibPercapita2);
    printf("Super Poder: %.2f\n", superPoder2);


    // =========================
    // COMPARAÇÃO
    // =========================
    // Cada comparação usa operadores relacionais (> ou <)
    // O resultado será:
    // 1 → verdadeiro (Carta 1 vence)
    // 0 → falso (Carta 2 vence)

    // Para a maioria dos atributos, vence o MAIOR valor
    // Exceção: densidade populacional, onde vence o MENOR valor

    printf("\n=== Comparação de Cartas ===\n");

    // Compara população: vence a carta com maior número de habitantes
    printf("População: Carta 1 venceu (%d)\n", populaçao1 > populaçao2); 

    // Compara área: vence a carta com maior área territorial
    printf("Área: Carta 1 venceu (%d)\n", area1 > area2);
    
    // Compara PIB: vence a carta com maior produto interno bruto
    printf("PIB: Carta 1 venceu (%d)\n", pib1 > pib2);

    // Compara pontos turísticos: vence a carta com mais pontos turísticos
    printf("Pontos Turísticos: Carta 1 venceu (%d)\n", pontosTuristicos1 > pontosTuristicos2);

    // Compara densidade populacional: vence a carta com MENOR densidade
    printf("Densidade Populacional: Carta 1 venceu (%d)\n", densidadePopulacional1 < densidadePopulacional2);

    // Compara PIB per capita: vence a carta com maior valor por pessoa
    printf("PIB per Capita: Carta 1 venceu (%d)\n", pibPercapita1 > pibPercapita2);

    // Compara Super Poder: vence a carta com maior soma total dos atributos
    printf("Super Poder: Carta 1 venceu (%d)\n", superPoder1 > superPoder2);

return 0; // Indica que o programa terminou corretamente
} 
