#include <stdio.h>


int main() {


    char estado; /*Escolher uma letra de A a H*/
    char codigo[3];/*A letra do estado seguida de um numero de 01 a 04*/
    char nome[20]; /*Nome da cidade */
    int populacao; /*O número de habitantes da cidade.*/
    float area; /*A área da cidade em quilômetros quadrados*/
    float pib; /*O Produto Interno Bruto da cidade.*/
    int pontosturisticos; /*A quantidade de pontos turísticos na cidade.*/



    printf("Carta 1\n");

    printf("Estado:"); 
    scanf("%s", &estado);

    printf("Codigo:");
    scanf("%s", &codigo);

    printf("Nome da Cidade:");
    scanf("%s", &nome);
    
    printf("População:");
    scanf("%d", &populacao);

    printf("Area em Km2:");
    scanf("%f", &area);

    printf("PIB:" );
    scanf("%f", &pib);

    printf("Numero de pontos turisticos:");
    scanf("%d", &pontosturisticos);

    printf("\n");

    
    printf("Carta 2\n");

    printf("Estado:"); 
    scanf("%s", &estado);

    printf("Codigo:");
    scanf("%s", &codigo);

    printf("Nome da Cidade:");
    scanf("%s", &nome);
    
    printf("População:");
    scanf("%d", &populacao);

    printf("Area em Km2:");
    scanf("%f", &area);

    printf("PIB:" );
    scanf("%f", &pib);

    printf("Numero de pontos turisticos:");
    scanf("%d", &pontosturisticos);



    return 0;
}
