#include <stdio.h>
    int main(){
       
        char Estado = 'B';
        char Codigo[4] = ("B02");
        char Cidade[20] = ("Rio de Janeiro");
        int Populacao = 6748000;
        float area = 1200.25;
        float PIB = 300.50;
        int numero = 30;

        printf("Estado: %c\n", Estado);

        printf("Código: %s\n", Codigo);

        printf("Nome da Cidade: %s\n", Cidade);

        printf("População: %d\n", Populacao);

        printf("Área: %.2f km²\n", area);

        printf("PIB: %.2f bilhões de reais\n", PIB);

        printf("Número de Pontos Turisticos: %d\n", numero);

    }