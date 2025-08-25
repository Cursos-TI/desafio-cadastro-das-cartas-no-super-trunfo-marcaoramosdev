#include <stdio.h>

    int main(){

        char estado; /*Escolher uma letra de A a H */
        char codigo [3]; /*A letra do estado seguida de um numero de 01 a 04*/
        char cidade [20]; /*Nome da cidade */
        int populacao; /*O número de habitantes da cidade.*/
        float area; /*A área da cidade em quilômetros quadrados*/
        float pib; /*O Produto Interno Bruto da cidade.*/
        int pontosturisticos; /*A quantidade de pontos turísticos na cidade.*/
        float densidadepopulacional; /*População dividida pela area da cidade*/
        float pibpercapita; /*PIB dividido pela população*/


        printf("Super Trunfo em C: \n");

        printf("Carta 1\n");

        printf("Estado:");
        scanf("%s", &estado);

        printf("Código:");
        scanf("%s", &codigo);

        printf("Cidade:");
        scanf("%s", &cidade);

        printf("População:");
        scanf("%d", &populacao);

        printf("Area:");
        scanf("%f", &area);

        printf("PIB:");
        scanf("%f", &pib);

        printf("Pontos turísticos:");
        scanf("%d", &pontosturisticos);

        densidadepopulacional = (populacao / area);

        printf("Densidade Populacional: %.2f \n", densidadepopulacional);
        
        pibpercapita = (float)(pib / populacao);

        printf("PIB per capita: %.2f \n", pibpercapita);


        printf("\n");
        

        printf("Carta 2\n");

        printf("Estado:");
        scanf("%s", &estado);

        printf("Código:");
        scanf("%s", &codigo);

        printf("Cidade:");
        scanf("%s", &cidade);

        printf("População:");
        scanf("%d", &populacao);

        printf("Area:");
        scanf("%f", &area);

        printf("PIB:");
        scanf("%f", &pib);

        printf("Pontos turísticos:");
        scanf("%d", &pontosturisticos);

        densidadepopulacional = (populacao / area);

        printf("Densidade Populacional: %.2f \n", densidadepopulacional);
        
        pibpercapita = (float)(pib / populacao);

        printf("PIB per capita: %.2f \n", pibpercapita);
        

        return 0;


        
    }