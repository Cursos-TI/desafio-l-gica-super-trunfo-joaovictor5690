#include <stdio.h>

int main() {
    // Carta 1
    char estado1[30], cidade1[50];
    int codigo1, populacao1, pontos1;
    float area1, pib1;

    // Carta 2
    char estado2[30], cidade2[50];
    int codigo2, populacao2, pontos2;
    float area2, pib2;

    int opcao;

    // Entrada de dados da Carta 1
    printf("Cadastro da Carta 1:\n");
    printf("Estado: ");
    scanf("%s", estado1);
    printf("Código: ");
    scanf("%d", &codigo1);
    printf("Cidade: ");
    scanf("%s", cidade1);
    printf("População: ");
    scanf("%d", &populacao1);
    printf("Área (km²): ");
    scanf("%f", &area1);
    printf("PIB (bilhões): ");
    scanf("%f", &pib1);
    printf("Pontos Turísticos: ");
    scanf("%d", &pontos1);

    // Entrada de dados da Carta 2
    printf("\nCadastro da Carta 2:\n");
    printf("Estado: ");
    scanf("%s", estado2);
    printf("Código: ");
    scanf("%d", &codigo2);
    printf("Cidade: ");
    scanf("%s", cidade2);
    printf("População: ");
    scanf("%d", &populacao2);
    printf("Área (km²): ");
    scanf("%f", &area2);
    printf("PIB (bilhões): ");
    scanf("%f", &pib2);
    printf("Pontos Turísticos: ");
    scanf("%d", &pontos2);

    // Exibição das cartas
    printf("\nCarta 1:\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %d\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões\n", pib1);
    printf("Pontos Turísticos: %d\n", pontos1);
    printf("Densidade Populacional: %.2f hab/km²\n", populacao1 / area1);

    printf("\nCarta 2:\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %d\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões\n", pib2);
    printf("Pontos Turísticos: %d\n", pontos2);
    printf("Densidade Populacional: %.2f hab/km²\n", populacao2 / area2);

    // Menu de comparação
    printf("\nEscolha o atributo para comparar:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Populacional\n");
    printf("Opção: ");
    scanf("%d", &opcao);

    // Comparação
    printf("\nResultado da Comparação:\n");

    if (opcao == 1) {
        if (populacao1 > populacao2)
            printf("%s venceu pela maior população.\n", cidade1);
        else if (populacao1 < populacao2)
            printf("%s venceu pela maior população.\n", cidade2);
        else
            printf("Empate em população.\n");
    } else if (opcao == 2) {
        if (area1 > area2)
            printf("%s venceu pela maior área.\n", cidade1);
        else if (area1 < area2)
            printf("%s venceu pela maior área.\n", cidade2);
        else
            printf("Empate em área.\n");
    } else if (opcao == 3) {
        if (pib1 > pib2)
            printf("%s venceu pelo maior PIB.\n", cidade1);
        else if (pib1 < pib2)
            printf("%s venceu pelo maior PIB.\n", cidade2);
        else
            printf("Empate em PIB.\n");
    } else if (opcao == 4) {
        if (pontos1 > pontos2)
            printf("%s venceu pelos pontos turísticos.\n", cidade1);
        else if (pontos1 < pontos2)
            printf("%s venceu pelos pontos turísticos.\n", cidade2);
        else
            printf("Empate em pontos turísticos.\n");
    } else if (opcao == 5) {
        float dens1 = populacao1 / area1;
        float dens2 = populacao2 / area2;
        if (dens1 < dens2)
            printf("%s venceu pela menor densidade populacional.\n", cidade1);
        else if (dens1 > dens2)
            printf("%s venceu pela menor densidade populacional.\n", cidade2);
        else
            printf("Empate em densidade populacional.\n");
    } else {
        printf("Opção inválida.\n");
    }

    return 0;
}