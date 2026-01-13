#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    /* Carta 1 */
    char estado1;
    char codigo1[5];
    char cidade1[50];
    unsigned long int populacao1;
    float area1, pib1;
    int pontos1;
    float densidade1, pibPerCapita1, superPoder1;

    /* Carta 2 */
    char estado2;
    char codigo2[5];
    char cidade2[50];
    unsigned long int populacao2;
    float area2, pib2;
    int pontos2;
    float densidade2, pibPerCapita2, superPoder2;

    /* Entrada Carta 1 */
    printf("=== Carta 1 ===\n");
    printf("Estado: "); scanf(" %c", &estado1);
    printf("Codigo: "); scanf("%4s", codigo1);
    printf("Cidade: "); scanf(" %[^\n]", cidade1);
    printf("Populacao: "); scanf("%lu", &populacao1);
    printf("Area (km2): "); scanf("%f", &area1);
    printf("PIB (bilhoes): "); scanf("%f", &pib1);
    printf("Pontos turisticos: "); scanf("%d", &pontos1);

    densidade1 = (float)populacao1 / area1;
    pibPerCapita1 = (pib1 * 1000000000.0f) / (float)populacao1;

    /* Entrada Carta 2 */
    printf("\n=== Carta 2 ===\n");
    printf("Estado: "); scanf(" %c", &estado2);
    printf("Codigo: "); scanf("%4s", codigo2);
    printf("Cidade: "); scanf(" %[^\n]", cidade2);
    printf("Populacao: "); scanf("%lu", &populacao2);
    printf("Area (km2): "); scanf("%f", &area2);
    printf("PIB (bilhoes): "); scanf("%f", &pib2);
    printf("Pontos turisticos: "); scanf("%d", &pontos2);

    densidade2 = (float)populacao2 / area2;
    pibPerCapita2 = (pib2 * 1000000000.0f) / (float)populacao2;

    /* Super Poder */
    superPoder1 = (float)populacao1 + area1 + pib1 + pontos1 + pibPerCapita1 + (1.0f / densidade1);
    superPoder2 = (float)populacao2 + area2 + pib2 + pontos2 + pibPerCapita2 + (1.0f / densidade2);

    /* Comparações */
    printf("\n=== Comparacao de Cartas ===\n");

    printf("Populacao: Carta 1 venceu (%d)\n", populacao1 > populacao2);
    printf("Area: Carta 1 venceu (%d)\n", area1 > area2);
    printf("PIB: Carta 1 venceu (%d)\n", pib1 > pib2);
    printf("Pontos Turisticos: Carta 1 venceu (%d)\n", pontos1 > pontos2);

    /* Para densidade: menor vence */
    printf("Densidade Populacional: Carta 1 venceu (%d)\n", densidade1 < densidade2);

    printf("PIB per Capita: Carta 1 venceu (%d)\n", pibPerCapita1 > pibPerCapita2);
    printf("Super Poder: Carta 1 venceu (%d)\n", superPoder1 > superPoder2);

    return 0;
}

