#include <stdio.h>

    int main(){

        char estado; /*Escolher uma letra de A a H */
        char codigo [3]; /*A letra do estado seguida de um numero de 01 a 04*/
        char cidade [20]; /*Nome da cidade */
        int populacaoc1, populacaoc2; /*O número de habitantes da cidade.*/
        float areac1, areac2; /*A área da cidade em quilômetros quadrados*/
        float pibc1, pibc2; /*O Produto Interno Bruto da cidade.*/
        int pontosturisticosc1, pontosturisticosc2; /*A quantidade de pontos turísticos na cidade.*/
        float densidadepopulacionalc1, densidadepopulacionalc2; /*População dividida pela area da cidade o resultado será a quantidade de habitantes por Km2*/
        float pibpercapitac1, pibpercapitac2; /*PIB dividido pela população*/
        float SuperPoderc1, SuperPoderc2; /*Soma dos atributos numéricos e o inverso da densidade populacional*/
        int resultado;

        printf("Super Trunfo \n");

        printf("Carta 1\n");

        printf("Estado:");
        scanf("%s", &estado);

        printf("Código:");
        scanf("%s", &codigo);

        printf("Cidade:");
        scanf("%s", &cidade);

        printf("População:");
        scanf("%d", &populacaoc1);

        printf("Area:");
        scanf("%f", &areac1);

        printf("PIB:");
        scanf("%f", &pibc1);

        printf("Pontos turísticos:");
        scanf("%d", &pontosturisticosc1);

        densidadepopulacionalc1 = (populacaoc1 / areac1);

        printf("Densidade Populacional: %.2f \n", densidadepopulacionalc1);
        
        pibpercapitac1 = (float)(pibc1 / populacaoc1);

        printf("PIB per capita: %.2f \n", pibpercapitac1);

        SuperPoderc1 = (populacaoc1 + areac1 + pibc1 + pontosturisticosc1 + pibpercapitac1 + (1 / densidadepopulacionalc1));

        printf("Super Poder: %.2f", SuperPoderc1);
        
        printf("\n");
        printf("\n");

        printf("Carta 2\n");

        printf("Estado:");
        scanf("%s", &estado);

        printf("Código:");
        scanf("%s", &codigo);

        printf("Cidade:");
        scanf("%s", &cidade);

        printf("População:");
        scanf("%d", &populacaoc2);

        printf("Area:");
        scanf("%f", &areac2);

        printf("PIB:");
        scanf("%f", &pibc2);

        printf("Pontos turísticos:");
        scanf("%d", &pontosturisticosc2);

        densidadepopulacionalc2 = (populacaoc2 / areac2);

        printf("Densidade Populacional: %.2f \n", densidadepopulacionalc2);
        
        pibpercapitac2 = (float)(pibc2 / populacaoc2);

        printf("PIB per capita: %.2f \n", pibpercapitac2);

        SuperPoderc2 = (populacaoc2 + areac2 + pibc2 + pontosturisticosc2 + pibpercapitac2 + (1 / densidadepopulacionalc2));

        printf("Super Poder: %.2f \n", SuperPoderc2);
        

        
        resultado = SuperPoderc1 > SuperPoderc2;
        printf("Carta vencedora: %d \n", resultado);

        return 0;


        
    }