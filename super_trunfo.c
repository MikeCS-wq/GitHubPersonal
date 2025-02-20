#include <stdio.h>

int main() {
    char estado[50];
    char codigo[50];
    char NomeDacidade[50];
    int Populacao, NumeroDePontosTuristicos;
    float Area, PIB;

    printf("Cadastre o Estado: \n");
    scanf("%s", estado);

    printf("Digite o código: \n");
    scanf("%s", codigo);

    printf("Digite o nome da cidade: \n");
    scanf("%s", NomeDacidade);

    printf("Cadastre a população: \n");
    scanf("%d", &Populacao);

    printf("Digite a área: \n");
    scanf("%f", &Area);

    printf("Digite o PIB: \n");
    scanf("%f", &PIB);

    printf("Digite o número de pontos turisticos: \n");
    scanf("%d", &NumeroDePontosTuristicos);

    printf("Carta 1: \n");
    printf("Estado: %s \n", estado);
    printf("Código: %s \n", codigo);
    printf("Nome da Cidade: %s \n", NomeDacidade);
    printf("População: %d \n", Populacao);
    printf("Área: %f \n", Area);
    printf("PIB: %f \n", PIB );
    printf("Número de Pontos Turísticos: %d \n", NumeroDePontosTuristicos);



    return 0;




}
