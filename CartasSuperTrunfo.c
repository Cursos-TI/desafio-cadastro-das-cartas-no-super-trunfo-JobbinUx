#include <stdio.h>

    // Desafio Super Trunfo - Países
    // Tema 1 - Cadastro das Cartas
    // Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
    // Siga os comentários para implementar cada parte do desafio.
    //Teste larissa

int main() {
    
    printf("Desafio cartas super trunfo!\n");

    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.

    // Declaração de variáveis da Carta 1

       char estado1;
       char codigo1[4];
       char cidade1[50];
       int populacao1;
       float area1;
       float pib1;
       int pontosTuristicos1;

    // Declaração de variáveis da Carta 2

       char estado2;
       char codigo2[4];
       char cidade2[50];
       int populacao2;
       float area2;
       float pib2;
       int pontosTuristicos2;

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Entrada de dados da Carta 1

       printf("Cadastro da Carta 1\n");
       printf("Digite o estado (A-H): ");
       scanf(" %c", &estado1);

       printf("Digite o codigo da carta (ex: A01): ");
       scanf(" %s", codigo1);

       prinft("Digite o nome da cidade: ");
       scanf("%[^\n]", cidade1);

       printf("Digite a populacao: ");
       scanf("%d", &populacao1);

       printf("Digite a area em km²: ");
       scanf("%f", &area1);

       printf("Digite o PIB (em bilhoes): ");
       scanf("%f", &pib1);
       
       printf("Digite o numero de pontos turisticos");
       scanf("%d", &pontosTuristicos1);

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
