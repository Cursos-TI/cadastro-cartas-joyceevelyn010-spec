#include <stdio.h>

/* Estrutura simples para guardar atributos */
typedef struct {
    char pais[30];
    float populacao;
    float area;
    float pib;
    float densidade;
    float pibPerCapita;
} Carta;

/* Função para mostrar menu */
void mostrarMenu(int excluir) {
    printf("\nEscolha um atributo:\n");
    if (excluir != 1) printf("1 - Populacao\n");
    if (excluir != 2) printf("2 - Area\n");
    if (excluir != 3) printf("3 - PIB\n");
    if (excluir != 4) printf("4 - Densidade Demografica\n");
    if (excluir != 5) printf("5 - PIB per Capita\n");
    printf("Opcao: ");
}

/* Função para pegar valor do atributo */
float pegarValor(Carta c, int atributo) {
    switch (atributo) {
        case 1: return c.populacao;
        case 2: return c.area;
        case 3: return c.pib;
        case 4: return c.densidade;
        case 5: return c.pibPerCapita;
        default: return 0;
    }
}

/* Nome do atributo */
const char* nomeAtributo(int a) {
    switch (a) {
        case 1: return "Populacao";
        case 2: return "Area";
        case 3: return "PIB";
        case 4: return "Densidade Demografica";
        case 5: return "PIB per Capita";
        default: return "Invalido";
    }
}

int main() {
    /* Cartas pré-cadastradas */
    Carta c1 = {"Brasil", 213000000, 8515767, 2100, 25.01, 9850};
    Carta c2 = {"Argentina", 46000000, 2780400, 640, 16.54, 13913};

    int atr1, atr2;

    /* Escolha do primeiro atributo */
    mostrarMenu(0);
    scanf("%d", &atr1);

    if (atr1 < 1 || atr1 > 5) {
        printf("Opcao invalida!\n");
        return 0;
    }

    /* Escolha do segundo atributo (menu dinâmico) */
    mostrarMenu(atr1);
    scanf("%d", &atr2);

    if (atr2 < 1 || atr2 > 5 || atr2 == atr1) {
        printf("Opcao invalida!\n");
        return 0;
    }

    /* Valores dos atributos */
    float v1a1 = pegarValor(c1, atr1);
    float v2a1 = pegarValor(c2, atr1);
    float v1a2 = pegarValor(c1, atr2);
    float v2a2 = pegarValor(c2, atr2);

    /* Comparação individual */
    int c1VenceA1 = (atr1 == 4) ? (v1a1 < v2a1) : (v1a1 > v2a1);
    int c1VenceA2 = (atr2 == 4) ? (v1a2 < v2a2) : (v1a2 > v2a2);

    /* Soma dos atributos */
    float soma1 = v1a1 + v1a2;
    float soma2 = v2a1 + v2a2;

    /* Resultado final */
    printf("\n=== Resultado da Batalha ===\n");
    printf("Carta 1: %s\n", c1.pais);
    printf("Carta 2: %s\n\n", c2.pais);

    printf("Atributos escolhidos: %s e %s\n\n", nomeAtributo(atr1), nomeAtributo(atr2));

    printf("%s - %s: %.2f | %s: %.2f\n",
           nomeAtributo(atr1), c1.pais, v1a1, c2.pais, v2a1);
    printf("Vencedor: %s\n\n", c1VenceA1 ? c1.pais : c2.pais);

    printf("%s - %s: %.2f | %s: %.2f\n",
           nomeAtributo(atr2), c1.pais, v1a2, c2.pais, v2a2);
    printf("Vencedor: %s\n\n", c1VenceA2 ? c1.pais : c2.pais);

    printf("Soma dos atributos:\n");
    printf("%s: %.2f\n", c1.pais, soma1);
    printf("%s: %.2f\n", c2.pais, soma2);

    if (soma1 > soma2)
        printf("\nResultado Final: %s venceu!\n", c1.pais);
    else if (soma2 > soma1)
        printf("\nResultado Final: %s venceu!\n", c2.pais);
    else
        printf("\nResultado Final: Empate!\n");

    return 0;
}
