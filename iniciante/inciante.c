#include <stdio.h>

int  main (){
    char estado[3], codigo[20], cidade[200];
    int popu, turismo;
    float area, pib, densidade, capital;

    char estado2[3], codigo2[20], cidade2[200];
    int popu2, turismo2;
    float area2, pib2, densidade2, capital2;

    // 2

    printf("Digite seu Estado: ");
    scanf("%s", estado);

    printf("Digite o Codigo da Carta: ");
    scanf("%s", codigo);

    printf("Digite o Nome da Cidade: ");
    scanf("%s", cidade);

    printf("Digite a Populacao: ");
    scanf("%i", &popu);

    printf("Digite a Area: ");
    scanf("%f", &area);

    printf("Digite o PIB: ");
    scanf("%f", &pib);
    
    printf("Digite  o Numero de pontos Turisticos: ");
    scanf("%d", &turismo);

    
    densidade = (popu / area);

    capital = (pib / popu);

    // 2
    printf("Digite seu Estado: ");
    scanf("%s", estado2);

    printf("Digite o Codigo da Carta: ");
    scanf("%s", codigo2);

    printf("Digite o Nome da Cidade: ");
    scanf("%s", cidade2);

    printf("Digite a Populacao: ");
    scanf("%i", &popu2);

    printf("Digite a area  ");
    scanf("%f", &area2);

    printf("Digite o PIB ");
    scanf("%f", &pib2);
    
    printf("Digite  o Numero de pontos Turisticos: ");
    scanf("%d", &turismo2);

    densidade2 = (popu2 / area2);

    capital2 = (pib2 / popu2);
    
    // 
    printf("\n Carta 1: \n");
    printf("Estado: %s \n", estado);
    printf("Código da Carta: %s \n", codigo);
    printf("Nome da Cidade: %s \n", cidade);
    printf("Populacao: %i \n", popu);
    printf("Area: %.2f km2\n", area);
    printf("PIB %.2f bilhoes de reais:\n", pib);
    printf("Numero de Pontos Turisticos: %d \n", turismo);
     printf("densidade populacional e: %f hab/km2\n", densidade);
    printf("PIB per capita: %f reais\n", capital);
// 

     
    printf("\n Carta 2: \n");
    printf("Estado: %s \n", estado2);
    printf("Codigo da Carta: %s \n", codigo2);
    printf("Nome da Cidade: %s \n", cidade2);
    printf("Populacao: %i \n", popu2);
    printf("Area: %.2f km2\n", area2);
    printf("PIB %.2f bilhoes de reais:rn\n", pib2);
    printf("Numero de Pontos Turisticos: %d \n", turismo2);
    printf("densidade populacional e: %f hab/km2\n", densidade2);
    printf("PIB per capita: %f reais\n", capital2);

    return 0;
     }

