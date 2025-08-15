#include <stdio.h>

    int main(){

        char estado1[3], estado2[3];         
        char codigo1[5], codigo2[5];         
        char cidade1[50], cidade2[50];

        int   populacaoc1, populacaoc2;
        float areac1, areac2;
         float pibc1, pibc2;                  
        int   pontosturisticosc1, pontosturisticosc2;

        float densidadepopulacionalc1, densidadepopulacionalc2;
        float pibpercapitac1, pibpercapitac2;
        float SuperPoderc1, SuperPoderc2;

        printf("Super Trunfo \n");

        printf("\nCarta 1\n");

         printf("Estado: ");
         scanf(" %s", estado1);

        printf("Codigo: ");
        scanf(" %s", codigo1);

        printf("Cidade: ");
         scanf(" %49[^\n]", cidade1);         

        printf("Populacao: ");
        scanf(" %d", &populacaoc1);

        printf("Area: ");
        scanf(" %f", &areac1);

        printf("PIB: ");
        scanf(" %f", &pibc1);

        printf("Pontos turisticos: ");
        scanf(" %d", &pontosturisticosc1);

        densidadepopulacionalc1 = (populacaoc1 / areac1);

        printf("Densidade Populacional: %.2f \n", densidadepopulacionalc1);
        
        pibpercapitac1 = (float)(pibc1 / populacaoc1);

        printf("PIB per capita: %.2f \n", pibpercapitac1);

        SuperPoderc1 = (populacaoc1 + areac1 + pibc1 + pontosturisticosc1 + pibpercapitac1 + (1 / densidadepopulacionalc1));

        printf("Super Poder: %.2f", SuperPoderc1);
        
        printf("\n");
        printf("\n");

        printf("Carta 2\n");

        printf("Estado: ");
        scanf(" %s", estado2);

        printf("Codigo: ");
        scanf(" %s", codigo2);

        printf("Cidade: ");
        scanf(" %49[^\n]", cidade2);         

        printf("Populacao: ");
        scanf(" %d", &populacaoc2);

        printf("Area: ");
        scanf(" %f", &areac2);

        printf("PIB: ");
        scanf(" %f", &pibc2);

        printf("Pontos turisticos: ");
        scanf(" %d", &pontosturisticosc2);

        densidadepopulacionalc2 = (populacaoc2 / areac2);

        printf("Densidade Populacional: %.2f \n", densidadepopulacionalc2);
        
        pibpercapitac2 = (float)(pibc2 / populacaoc2);

        printf("PIB per capita: %.2f \n", pibpercapitac2);

        SuperPoderc2 = (populacaoc2 + areac2 + pibc2 + pontosturisticosc2 + pibpercapitac2 + (1 / densidadepopulacionalc2));

        printf("Super Poder: %.2f \n", SuperPoderc2);
             
        printf("\n");
        printf("\n");
        
        printf("***Comparação de atributos:***\n");
        printf("         População\n");
        printf("Carta 1 - %s: %d\n", cidade1, populacaoc1);
        printf("Carta 2 - %s: %d\n", cidade2, populacaoc2);
        printf("\n");
        if(populacaoc1 > populacaoc2){
           printf("=====***Carta 1 é a grande vencedora!***=====\n");
        }
        else {
            printf("=====***Carta 2 é a grande vencedora!***=====\n");
        }
        
        

        return 0;
        



        
    }