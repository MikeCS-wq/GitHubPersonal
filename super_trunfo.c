#include <stdio.h>
//definir variaveis
int main() {

    char estado1[50], estado2[50];
    char codigo1[50], codigo2[50];
    char NomeDacidade1[50], NomeDacidade2[50];
    unsigned long int Populacao1, Populacao2;
    int NumeroDePontosTuristicos1, NumeroDePontosTuristicos2;
    float Area1, Area2, PIB1, PIB2;
    float DensidadePopulacional1, DensidadePopulacional2, PIBperCapita1, PIBperCapita2;
    float SuperPoder1, SuperPoder2;
    unsigned long int ResultadoPopulacao;
    float ResultadoArea;
    float ResultadoPIB;
    int ResultadoPontosTuristicos;
    float ResultadoDensidadePopulacional;
    float ResultadoPIBPerCapita;

    // Entrada dos dados
    printf("Carta 1: \n");

    printf("Cadastre o código: \n");
    scanf("%s", codigo1);

    printf("Cadastre o Estado: \n");
    scanf("%s", estado1);

    printf("Cadastre a Cidade: \n");
    scanf("%s", NomeDacidade1);

    printf("Cadastre a população: \n");
    scanf("%lu", &Populacao1);

    printf("Digite a área: \n");
    scanf("%f", &Area1);
    
    printf("Digite o PIB: \n");
    scanf("%f", &PIB1);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &NumeroDePontosTuristicos1);
    
    //PROXIMA CARTA/////////////////////////////////
    printf("Carta 2: \n");

    printf("Cadastre o código: \n");
    scanf("%s", codigo2);

    printf("Cadastre o Estado: \n");
    scanf("%s", estado2);

    printf("Cadastre a Cidade: \n");
    scanf("%s", NomeDacidade2);

    printf("Cadastre a população: \n");
    scanf("%lu", &Populacao2);

    printf("Digite a área: \n");
    scanf("%f", &Area2);
    
    printf("Digite o PIB: \n");
    scanf("%f", &PIB2);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &NumeroDePontosTuristicos2);
    
    //CALCULO DE DP E PIBPERCAPITA

    DensidadePopulacional1 = Populacao1 / Area1;
    PIBperCapita1 = PIB1 / Area1;

    DensidadePopulacional2 = Populacao2 / Area2;
    PIBperCapita2 = PIB2 / Area2;
// calculo de superpoder
    SuperPoder1 = Populacao1 + Area1 + PIB1 + NumeroDePontosTuristicos1 + PIBperCapita1 + DensidadePopulacional1;
    SuperPoder2 = Populacao2 + Area2 + PIB2 + NumeroDePontosTuristicos2 + PIBperCapita2 + DensidadePopulacional2;

//imprimir para o usuario as cartas que foram cadastradas
    printf("Carta 1: \n");
    printf("Código: %s \n", codigo1);
    printf("Super Poder: %5.f \n", SuperPoder1);
    printf("Estado: %s \n", estado1);
    printf("Nome da Cidade: %s \n", NomeDacidade1);
    printf("População: %lu \n", Populacao1);
    printf("Área: %f \n", Area1);
    printf("PIB: %f \n", PIB1 );
    printf("Número de Pontos Turísticos: %d \n", NumeroDePontosTuristicos1);
    printf("Densidade Populacional: %.2f \n", DensidadePopulacional1);
    printf("PIB per Capita: %.2f \n", PIBperCapita1);

    printf("Carta 2: \n");
    printf("Código: %s \n", codigo2);
    printf("Super Poder: %5.f \n", SuperPoder1);
    printf("Estado: %s \n", estado2);
    printf("Nome da Cidade: %s \n", NomeDacidade2);
    printf("População: %lu \n", Populacao2);
    printf("Área: %f \n", Area2);
    printf("PIB: %f \n", PIB2 );
    printf("Número de Pontos Turísticos: %d \n", NumeroDePontosTuristicos2);
    printf("Densidade Populacional: %.2f \n", DensidadePopulacional2);
    printf("PIB per Capita: %.2f \n", PIBperCapita2);

    //comparação das cartas

    ResultadoPopulacao = Populacao1 >= Populacao2;
    ResoltadoArea = Area1 >= Area2;
    ResultadoPIB = PIB1 >= PIB2;
    ResultadoPontosTuristicos = NumeroDePontosTuristicos1 >= NumeroDePontosTuristicos2;
    ResultadoDensidadePopulacional = DensidadePopulacional1 <= DensidadePopulacional2;
    ResultadoPIBPerCapita= PIBperCapita1 >= PIBperCapita2;
    ResultadoSuperPoder= SuperPoder1 >= SuperPoder2;

    printf("População: %lu \n", ResultadoPopulacao);
    printf("Area: %f \n", ResultadoArea);
    printf("PIB: %f \n", ResultadoPIB);
    printf("Pontos Turisticos: %d", ResultadoPontosTuristicos);
    printf("Densidade Populacional: %f \n", ResultadoDensidadePopulacional);
    printf("PIB per Capita: %f \n", ResultadoPIBPerCapita);
    printf("Super Poder: %f \n", ResultadoSuperPoder);


    return 0;




}
