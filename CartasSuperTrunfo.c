#include <stdio.h>

int main() {
    char Estado = 'A';
    char Codigo[4] = ("A01");
    char Cidade[14] = ("São Paulo");
    int Populacao = 12325000;
    float area = 1521.11;
    float PIB = 699.28;
    int numero = 50;

    printf("Estado: %c\n", Estado);

    printf("Código: %s\n", Codigo);

    printf("Nome da Cidade: %s\n", Cidade);

    printf("População: %d\n", Populacao);

    printf("Área: %.2f km²\n", area);

    printf("PIB: %.2f bilhões de reais\n", PIB);

    printf("Número de Pontos Turisticos: %d\n", numero);


    return 0;
}
