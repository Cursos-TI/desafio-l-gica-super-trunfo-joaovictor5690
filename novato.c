#include <stdio.h>

int main() {
    // Carta 1
    char estado1[50], codigo1[50], nome1[50];
    int populacao1, pontos_turisticos1;
    float area1, pib1;

    // Carta 2
    char estado2[50], codigo2[50], nome2[50];
    int populacao2, pontos_turisticos2;
    float area2, pib2;

    // Cadastro da Carta 1
    printf("=== Cadastro da Carta 1 ===\n");
    printf("Estado: ");
    scanf("%s", estado1);
    printf("Codigo: ");
    scanf("%s", codigo1);
    printf("Nome da cidade: ");
    scanf("%s", nome1);
    printf("Populacao: ");
    scanf("%d", &populacao1);
    printf("Area (km²): ");
    scanf("%f", &area1);
    printf("PIB (em bilhoes): ");
    scanf("%f", &pib1);
    printf("Pontos turisticos: ");
    scanf("%d", &pontos_turisticos1);

    printf("\n");

    // Cadastro da Carta 2
    printf("=== Cadastro da Carta 2 ===\n");
    printf("Estado : ");
    scanf("%s", estado2);
    printf("Codigo: ");
    scanf("%s", codigo2);
    printf("Nome da cidade: ");
    scanf("%s", nome2);
    printf("Populacao: ");
    scanf("%d", &populacao2);
    printf("Area (km²): ");
    scanf("%f", &area2);
    printf("PIB (em bilhoes): ");
    scanf("%f", &pib2);
    printf("Pontos turisticos: ");
    scanf("%d", &pontos_turisticos2);

    printf("\n");

    // Cálculo da densidade populacional
    float densidade1 = populacao1 / area1;
    float densidade2 = populacao2 / area2;

    // Exibição das Cartas
    printf("===== CARTA 1 =====\n");
    printf("Estado: %s\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Cidade: %s\n", nome1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %.2f bilhoes\n", pib1);
    printf("Pontos Turisticos: %d\n", pontos_turisticos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);

    printf("\n===== CARTA 2 =====\n");
    printf("Estado: %s\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Cidade: %s\n", nome2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f bilhoes\n", pib2);
    printf("Pontos Turisticos: %d\n", pontos_turisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);

    printf("\n=== RESULTADO ===\n");

    // Comparação: menor densidade vence
    if (densidade1 < densidade2) {
        printf("Carta vencedora: %s (densidade %.2f hab/km²)\n", nome1, densidade1);
    } else if (densidade2 < densidade1) {
        printf("Carta vencedora: %s (densidade %.2f hab/km²)\n", nome2, densidade2);
    } else {
        printf("Empate! Ambas as cidades tem densidade %.2f hab/km²\n", densidade1);
    }

    return 0;
}
