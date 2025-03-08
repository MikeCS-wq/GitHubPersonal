#include <stdio.h>
//definir variaveis
int main() {
    char estado[50];
    char codigo[50];
    char NomeDacidade[50];
    int Populacao, NumeroDePontosTuristicos;
    float Area, PIB;
    float DensidadePopulacional, PIBperCapita;
    
    // Entrada dos dados
    printf("Carta 1: \n");
    printf("Cadastre o Estado: \n");
    gets(estado, sizeof(estado), stdin);
    //remove o '\n'
    estado[strcspn(estado, "\n")] = 0;

    printf("Cadastre a Cidade: \n");
    fgets(NomeDacidade, sizeof(NomeDacidade), stdin);
    //remove o '\n'
    NomeDacidade[strcspn(NomeDacidade, "\n")] = 0;

    printf("Cadastre a população: \n");
    scanf("%d", &Populacao);

    printf("Digite a área: \n");
    scanf("%f", &Area);

    //Limpar o buffer antes de ler o PIB
    while (getchar() != '\n'); // Remove caracteres extras do buffer
    
    printf("Digite o PIB: \n");
    scanf("%f", &PIB);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &NumeroDePontosTuristicos);
    
    DensidadePopulacional = Populacao / Area;
    PIBperCapita = PIB / Area;


    printf("Carta 1: \n");
    printf("Estado: %s \n", estado);
    printf("Código: %s \n", codigo);
    printf("Nome da Cidade: %s \n", NomeDacidade);
    printf("População: %d \n", Populacao);
    printf("Área: %f \n", Area);
    printf("PIB: %f \n", PIB );
    printf("Número de Pontos Turísticos: %d \n", NumeroDePontosTuristicos);
    printf("Densidade Populacional: %.2f", DensidadePopulacional);
    printf("PIB per Capita: %.2f", PIBperCapita);

    printf("Carta 2: \n");

    while (getchar() != '\n');

    printf("Cadastre o Estado: \n");
    gets(estado, sizeof(estado), stdin);
    //remove o '\n'
    estado[strcspn(estado, "\n")] = 0;

    printf("Cadastre a Cidade: \n");
    fgets(NomeDacidade, sizeof(NomeDacidade), stdin);
    //remove o '\n'
    NomeDacidade[strcspn(NomeDacidade, "\n")] = 0;

    printf("Cadastre a população: \n");
    scanf("%d", &Populacao);

    printf("Digite a área: \n");
    scanf("%f", &Area);

    //Limpar o buffer antes de ler o PIB
    while (getchar() != '\n'); // Remove caracteres extras do buffer
    
    printf("Digite o PIB: \n");
    scanf("%f", &PIB);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &NumeroDePontosTuristicos);

    
    DensidadePopulacional = Populacao / Area;
    PIBperCapita = PIB / Area;

    printf("Carta 2: \n");
    printf("Estado: %s \n", estado);
    printf("Código: %s \n", codigo);
    printf("Nome da Cidade: %s \n", NomeDacidade);
    printf("População: %d \n", Populacao);
    printf("Área: %f \n", Area);
    printf("PIB: %f \n", PIB );
    printf("Número de Pontos Turísticos: %d \n", NumeroDePontosTuristicos);
    printf("Densidade Populacional: %.2f", DensidadePopulacional);
    printf("PIB per Capita: %.2f", PIBperCapita);


    return 0;




}
