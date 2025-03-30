#include <stdio.h>

int main() {
   // carta 1 variaveis
    char Estado1 = 'A';
    char Codigo1[4] = ("A01");
    char Cidade1[14] = ("São Paulo");
    int Populacao1 = 12325;
    float area1 = 1521.11;
    float PIB1 = 699.2;
    int numero1 = 50;

    printf("Carta 1 \n");
    printf("Estado: %c\n", Estado1);
    printf("Código: %s\n", Codigo1);
    printf("Nome da Cidade: %s\n", Cidade1);
    printf("População: %d\n", Populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", PIB1);
    printf("Número de Pontos Turisticos: %d\n", numero1);

    //Inicio do nivel aventureiro densidade e capita
    float densidade1;
    densidade1 = (float)(Populacao1 / area1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);

    // Mestre densidade invertida
    float densidadeIn1;
    densidadeIn1 = (float)(densidade1 / 1);

    float capita1;
    capita1 = (float)(PIB1 / Populacao1);
    printf("PIB per Capita: %f reais\n", capita1);

    // Mestre Super Poder carta 1

    float poder1;
    poder1 = (float)(Populacao1 + area1 + PIB1 + densidadeIn1 + capita1 + numero1 );
    printf("Super Poder : %.2f\n", poder1);
   
    // Carta 2 variaveis
    char Estado2 = 'B';
    char Codigo2[4] = ("B02");
    char Cidade2[20] = ("Rio de Janeiro");
    int Populacao2 = 6748;
    float area2 = 1200.25;
    float PIB2 = 300.5;
    int numero2 = 30;

    printf("Carta 2 \n");
    printf("Estado: %c\n", Estado2);
    printf("Código: %s\n", Codigo2);
    printf("Nome da Cidade: %s\n", Cidade2);
    printf("População: %d\n", Populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", PIB2);
    printf("Número de Pontos Turisticos: %d\n", numero2);

    //Inicio do nivel aventureiro densidade e capita
    float densidade2;
    densidade2 = (float)(Populacao2 / area2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);

    // Mestre densidade invertida
    float densidadeIn2;
    densidadeIn2 = (float)(densidade2 / 1);

    float capita2;
    capita2 = (float)(PIB2 / Populacao2);
    printf("PIB per Capita: %f reais\n", capita2);

    // Mestre Super Poder carta 2

    float poder2;
    poder2 = (float)(Populacao2 + area2 + PIB2 + densidadeIn2 + capita2 + numero2 );
    printf("Super Poder : %.2f\n", poder2);

    // Comparações
    int resultado1, resultado2, resultado3, resultado4, resultado5, resultado6, resultado7;

    resultado1 = Populacao1 > Populacao2;
    resultado2 = area1 > area2;
    resultado3 = PIB1 > PIB2;
    resultado4 = numero1 > numero2;
    resultado5 = densidadeIn1 < densidadeIn2;
    resultado6 = capita1 > capita2;
    resultado7 = poder1 > poder2;
   
    printf("Comparação de Cartas:\n");
    
    
    return 0;


}
