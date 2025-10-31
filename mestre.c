#include <stdio.h>

int main() {
    // Carta 1
    char estado1[30], cidade1[30];
    int codigo1, populacao1, pontos1;
    float area1, pib1;

    // Carta 2
    char estado2[30], cidade2[30];
    int codigo2, populacao2, pontos2;
    float area2, pib2;

    int atributo1, atributo2;

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
    printf("\nCarta 1 - %s:\n", cidade1);
    printf("Estado: %s | Código: %d | População: %d | Área: %.2f | PIB: %.2f | Pontos Turísticos: %d | Densidade: %.2f\n",
           estado1, codigo1, populacao1, area1, pib1, pontos1, populacao1 / area1);

    printf("\nCarta 2 - %s:\n", cidade2);
    printf("Estado: %s | Código: %d | População: %d | Área: %.2f | PIB: %.2f | Pontos Turísticos: %d | Densidade: %.2f\n",
           estado2, codigo2, populacao2, area2, pib2, pontos2, populacao2 / area2);

    // Menu dinâmico
    printf("\nEscolha dois atributos para comparar:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Populacional\n");

    printf("Digite o número do primeiro atributo: ");
    scanf("%d", &atributo1);
    printf("Digite o número do segundo atributo: ");
    scanf("%d", &atributo2);

    // Inicialização de pontos
    int pontosCarta1 = 0, pontosCarta2 = 0;

    // Função de comparação com lógica avançada
    for (int i = 0; i < 2; i++) {
        int escolha = (i == 0) ? atributo1 : atributo2;

        switch (escolha) {
            case 1:
                pontosCarta1 += (populacao1 > populacao2) ? 1 : 0;
                pontosCarta2 += (populacao2 > populacao1) ? 1 : 0;
                break;
            case 2:
                pontosCarta1 += (area1 > area2) ? 1 : 0;
                pontosCarta2 += (area2 > area1) ? 1 : 0;
                break;
            case 3:
                pontosCarta1 += (pib1 > pib2) ? 1 : 0;
                pontosCarta2 += (pib2 > pib1) ? 1 : 0;
                break;
            case 4:
                pontosCarta1 += (pontos1 > pontos2) ? 1 : 0;
                pontosCarta2 += (pontos2 > pontos1) ? 1 : 0;
                break;
            case 5:
                pontosCarta1 += ((populacao1 / area1) < (populacao2 / area2)) ? 1 : 0;
                pontosCarta2 += ((populacao2 / area2) < (populacao1 / area1)) ? 1 : 0;
                break;
            default:
                printf("Atributo inválido: %d\n", escolha);
        }
    }

    // Resultado final
    printf("\nResultado Final:\n");
    if (pontosCarta1 > pontosCarta2)
        printf("%s venceu com %d ponto(s) contra %d.\n", cidade1, pontosCarta1, pontosCarta2);
    else if (pontosCarta2 > pontosCarta1)
        printf("%s venceu com %d ponto(s) contra %d.\n", cidade2, pontosCarta2, pontosCarta1);
    else
        printf("Empate! Ambas as cartas obtiveram %d ponto(s).\n", pontosCarta1);

    return 0;
}