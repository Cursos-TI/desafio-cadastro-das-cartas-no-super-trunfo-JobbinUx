#include <stdio.h>

// Função para limpar o buffer do teclado (descartar Enter e outros caracteres restantes)
void limparBuffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF) {}
}

int main() {
    printf("Desafio cartas super trunfo!\n");

    // ===== Declaração de variáveis da Carta 1 =====
    char estado1;
    char codigo1[4];
    char cidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;

    // ===== Declaração de variáveis da Carta 2 =====
    char estado2;
    char codigo2[4];
    char cidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;

    // ===== Entrada de dados da Carta 1 =====
    printf("\n=== Cadastro da Carta 1 ===\n");
    printf("Digite o estado (A-H): ");
    scanf(" %c", &estado1); // espaço antes do %c para ignorar Enter
    limparBuffer();

    printf("Digite o codigo da carta (ex: A01): ");
    scanf("%3s", codigo1); // limita para evitar ultrapassar tamanho do array
    limparBuffer();

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", cidade1); // lê até o Enter
    limparBuffer();

    printf("Digite a populacao: ");
    scanf("%d", &populacao1);
    limparBuffer();

    printf("Digite a area em km²: ");
    scanf("%f", &area1);
    limparBuffer();

    printf("Digite o PIB (em bilhoes): ");
    scanf("%f", &pib1);
    limparBuffer();

    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontosTuristicos1);
    limparBuffer();

    // ===== Entrada de dados da Carta 2 =====
    printf("\n=== Cadastro da Carta 2 ===\n");
    printf("Digite o estado (A-H): ");
    scanf(" %c", &estado2);
    limparBuffer();

    printf("Digite o codigo da carta (ex: B02): ");
    scanf("%3s", codigo2);
    limparBuffer();

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", cidade2);
    limparBuffer();

    printf("Digite a populacao: ");
    scanf("%d", &populacao2);
    limparBuffer();

    printf("Digite a area em km²: ");
    scanf("%f", &area2);
    limparBuffer();

    printf("Digite o PIB (em bilhoes): ");
    scanf("%f", &pib2);
    limparBuffer();

    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontosTuristicos2);
    limparBuffer();

    // ===== Exibição da Carta 1 =====
    printf("\n=== Carta 1 ===\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %.2f Bilhoes de reais\n", pib1);
    printf("Numero de pontos turisticos: %d\n", pontosTuristicos1);

    // ===== Exibição da Carta 2 =====
    printf("\n=== Carta 2 ===\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f Bilhoes de reais\n", pib2);
    printf("Numero de pontos turisticos: %d\n", pontosTuristicos2);

    return 0;
}
