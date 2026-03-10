#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

int main() {
 //____________Variaveis____________    
    
    char entrada[50]; 
    char estado1[50], estado2[50];
    char cidade1[50], cidade2[50];
    char codigo1[30], codigo2[30];
    int carta1, carta2;
    int pontos_turisticos1, pontos_turisticos2; 
    int populacao1, populacao2;
    float densidade_populacional1, densidade_populacional2;
    float area1, area2;
    float pib1, pib2;
    float pib_per_capita1, pib_per_capita2;
 
 //________Informações_Carta1_______
    
    printf("\n___DIGITE AS INFORMAÇÕES REQUISITADAS REFERENTE A CARTA 1___");
    
    //__estado__  
    printf("\n\nDigite o estado:\n ");
    fgets(estado1, 50, stdin);
    estado1[strcspn(estado1, "\n")] = '\0';
    
    //__codigo__
    printf("\nDigite o codigo sendo ele a primeira letra do estado e um numero de 01 a 04:\n ");
    fgets(codigo1, 50, stdin);
    codigo1[strcspn(codigo1, "\n")] = '\0';
    
    //__cidade__
    printf("\nDigite o cidade:\n ");
    fgets(cidade1, 50, stdin);
    cidade1[strcspn(cidade1, "\n")] = '\0';
   
    //__população__
    printf("\nDigite o numero de habitantes(apenas numero e sem ponto ou/e virguls):\n ");
    fgets(entrada, 50, stdin);
    entrada[strcspn(entrada, "\n")] = '\0';
    populacao1 = atoi(entrada); //transfoma str em inteiros
    entrada[0] = '\0'; // esvazia a variavel apos a transferencia
    
    //__area__
    printf("\nDigite área da cidade em quilometros quadrados:\n ");
    fgets(entrada, 50, stdin);
    entrada[strcspn(entrada, "\n")] = '\0';
    area1 = atof(entrada); 
    entrada[0] = '\0';

    //__PIB__
    printf("\nDigite o PIB da cidade:\n ");
    fgets(entrada, 50, stdin);
    entrada[strcspn(entrada, "\n")] = '\0';
    pib1 = atof(entrada); 
    entrada[0] = '\0';


    //__pontos turisticos__
    printf("\nDIgite a quantidade de pontos turisticos na cidade:\n ");
    fgets(entrada, 50, stdin);
    entrada[strcspn(entrada, "\n")] = '\0';
    pontos_turisticos1 = atoi(entrada); 
    entrada[0] = '\0';

    //__Densidade Populacional__
    densidade_populacional1 = populacao1 / area1;

    //__PIB per Capita__
    pib_per_capita1 = pib1 / populacao1;

    //________Informações_Carta2_______

    printf("\n\n___DIGITE AS INFORMAÇÕES REQUISITADAS REFERENTE A CARTA 2___");

     //__estado__  
    printf("\n\nDigite o estado:\n ");
    fgets(estado2, 50, stdin);
    estado2[strcspn(estado2, "\n")] = '\0';
    
    //__codigo__
    printf("\nDigite o codigo sendo ele a primeira letra do estado e um numero de 01 a 04:\n ");
    fgets(codigo2, 50, stdin);
    codigo2[strcspn(codigo2, "\n")] = '\0';
    
    //__cidade__
    printf("\nDigite o cidade:\n ");
    fgets(cidade2, 50, stdin);
    cidade2[strcspn(cidade2, "\n")] = '\0';
   
    //__população__
    printf("\nDigite o numero de habitantes(apenas numero e sem ponto ou/e virguls):\n ");
    fgets(entrada, 50, stdin);
    entrada[strcspn(entrada, "\n")] = '\0';
    populacao2 = atoi(entrada); 
    entrada[0] = '\0';
    
    //__area__
    printf("\nDigite área da cidade em quilometros quadrados:\n ");
    fgets(entrada, 50, stdin);
    entrada[strcspn(entrada, "\n")] = '\0';
    area2 = atof(entrada); 
    entrada[0] = '\0';

    //__PIB__
    printf("\nDigite o PIB da cidade:\n ");
    fgets(entrada, 50, stdin);
    entrada[strcspn(entrada, "\n")] = '\0';
    pib2 = atof(entrada); 
    entrada[0] = '\0';

    //__pontos turisticos__
    printf("\nDIgite a quantidade de pontos turisticos na cidade:\n ");
    fgets(entrada, 50, stdin);
    entrada[strcspn(entrada, "\n")] = '\0';
    pontos_turisticos2 = atoi(entrada); 
    entrada[0] = '\0';

    //__Densidade Populacional__
    densidade_populacional2 = populacao2 / area2;

    //__PIB per Capita__
    pib_per_capita2 = pib2 / populacao2;

    //exibição da carta 1
    printf("\n\n----CARTA 1----\n");
    printf("Estado: %s\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos Turisticos: %d\n", pontos_turisticos1);
    printf("A Densidade Populacional: %.2f hab/km²\n",densidade_populacional1);
    printf("O Pib per capita: %.2f reais\n", pib_per_capita1);

    //exibição da carta 2
    printf("\n\n----CARTA 2----\n");
    printf("Estado: %s\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos Turisticos: %d\n", pontos_turisticos2);
    printf("A Densidade Populacional: %.2f hab/km²\n",densidade_populacional2);
    printf("O Pib per capita: %.2f reais\n", pib_per_capita2);

    printf("\n\n----RESULTADO----\n\n");
    
    if(populacao1 > populacao2){
      printf("População: Carta 1 venceu!\n");
    } else {
      printf("População: Carta 2 venceu!\n");
    }
   
    if(area1 > area2){
      printf("Area: Carta 1 venceu!\n");
    } else {
      printf("Area: Carta 2 venceu!\n");
    }
    
    if(pib1 > pib2){
      printf("Pib: Carta 1 venceu!\n");
    } else {
      printf("Pib: Carta 2 venceu!\n");
    }
    
    if (pontos_turisticos1 > pontos_turisticos2){
      printf("Pontos turisticos: Carta 1 venceu!\n");
    } else {
      printf("Pontos turisticos: Carta 2 venceu!\n");
    }
    
    if(densidade_populacional1 < densidade_populacional2){
      printf("Densidade populacional: Carta 1 venceu!\n");
    } else {
      printf("Densidade populacional: Carta 2 venceu!\n");
    }
    
    if(pib_per_capita1 > pib_per_capita2){
      printf("Pib per capita: Carta 1 venceu!\n ");
    } else {
      printf("Pib per capita: Carta 2 venceu!\n");
    }

    return 0;



}