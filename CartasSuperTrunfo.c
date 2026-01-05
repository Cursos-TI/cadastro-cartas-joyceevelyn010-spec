#include <stdio.h>

 int main () {
     char codigo [4];
     int populacao;
     float area;
     float pib;
     int pontosTuristicos; 

     //Entrada de dados
    printf("=== Cadastro de cartas - SuperTrunco (Paises) ===/n");
  
    printf("Digite o codigo da carta (ex: A01): ");
    scanf("%s", codigo);

    printf("Digite a populacao da cidade: ");
    scanf("%d", &populacao);

    printf("Digite a area da cidade (em km²): ");
    scanf("%f", &area);

    printf("Digite o PIB da cidade: ");
    scanf("%f", &pib);

    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontosTuristicos);

   //saída de dados

   printf("\n=== Dados da Carta Cadastrada ===\n");
   printf("Codigo da carta: %s\n", codigo);
   printf("Populacao: %d habitantes\n", populacao);
   printf("Area: %.2f km²\n", area);
   printf("PIB: %.2f\n", pib);
   printf("Pontos Turisticos: %d\n", pontosTuristicos);
  

return 0;
} 
