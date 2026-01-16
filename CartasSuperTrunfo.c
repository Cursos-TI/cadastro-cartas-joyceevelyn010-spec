#include <stdio.h>
#include <string.h>

int main() {
    /* Carta 1 */
    char estado1[] = "SP";
    char codigo1[] = "A01";
    char cidade1[] = "Sao Paulo";
    int populacao1 = 12300000;
    float area1 = 1521.11;
    float pib1 = 699.28;
    int pontos1 = 50;

    /* Carta 2 */
    char estado2[] = "RJ";
    char codigo2[] = "B02";
    char cidade2[] = "Rio de Janeiro";
    int populacao2 = 6000000;
    float area2 = 1200.25;
    float pib2 = 300.50;
    int pontos2 = 30;

    /* Cálculos */
    float densidade1 = populacao1 / area1;
    float densidade2 = populacao2 / area2;

    float pibPerCapita1 = pib1 / populacao1;
    float pibPerCapita2 = pib2 / populacao2;

    /* Escolha do atributo para comparação (fixo no código) */
    int atributoEscolhido = 1;
    /*
       1 = População
       2 = Área
       3 = PIB
       4 = Densidade Populacional
       5 = PIB per Capita
    */

    printf("=== Comparacao de Cartas ===\n");

    if (atributoEscolhido == 1) {
        printf("Atributo: Populacao\n");
        printf("Carta 1 - %s (%s): %d\n", cidade1, estado1, populacao1);
        printf("Carta 2 - %s (%s): %d\n", cidade2, estado2, populacao2);

        if (populacao1 > populacao2) {
            printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
        } else {
            printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
        }
    }

    else if (atributoEscolhido == 2) {
        printf("Atributo: Area\n");
        printf("Carta 1 - %s (%s): %.2f\n", cidade1, estado1, area1);
        printf("Carta 2 - %s (%s): %.2f\n", cidade2, estado2, area2);

        if (area1 > area2)
            printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
        else
            printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
    }

    else if (atributoEscolhido == 3) {
        printf("Atributo: PIB\n");
        printf("Carta 1 - %s (%s): %.2f\n", cidade1, estado1, pib1);
        printf("Carta 2 - %s (%s): %.2f\n", cidade2, estado2, pib2);

        if (pib1 > pib2)
            printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
        else
            printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
    }

    else if (atributoEscolhido == 4) {
        printf("Atributo: Densidade Populacional\n");
        printf("Carta 1 - %s (%s): %.2f\n", cidade1, estado1, densidade1);
        printf("Carta 2 - %s (%s): %.2f\n", cidade2, estado2, densidade2);

        /* Para densidade, menor vence */
        if (densidade1 < densidade2)
            printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
        else
            printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
    }

    else if (atributoEscolhido == 5) {
        printf("Atributo: PIB per Capita\n");
        printf("Carta 1 - %s (%s): %.6f\n", cidade1, estado1, pibPerCapita1);
        printf("Carta 2 - %s (%s): %.6f\n", cidade2, estado2, pibPerCapita2);

        if (pibPerCapita1 > pibPerCapita2)
            printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
        else
            printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
    }

    return 0;
}

