#include <stdio.h>

int main(){
    printf("SUPER TRUNFO \n");

    //Carta número 1

    char estado1;
    char codigo1 [5];
    char cidade1 [50];
    int população1;
    float area1;
    float pib1;
    int pontos1;

    //Carta número 2

    char estado2;
    char codigo2 [5];
    char cidade2 [50];
    int população2;
    float area2;
    float pib2;
    int pontos2;

    //Coleta de dados da carta número 1
    printf("Dados da carta número 1: \n");
    printf("Estado (Letra de A a H): \n");
    scanf("%c", &estado1);
    printf("Código da Carta (ex: A01): \n");
    scanf("%s", &codigo1);
    printf("Nome da Cidade: \n");
    scanf("%s", &cidade1);
    printf("População: \n");
    scanf("%d", &população1);
    printf("Aréa (em km²): \n");
    scanf("%f", &area1);
    printf("PIB: \n");
    scanf("%f", &pib1);
    printf("Número de Pontos Turísticos: \n");
    scanf("%d", &pontos1);

    //Coleta de dados da carta número 2
    printf("Dados da carta número 2: \n");
    printf("Estado (Letra de A a H): \n");
    scanf("%c", &estado2);
    printf("Código da Carta (ex: A02): \n");
    scanf("%s", &codigo2);
    printf("Nome da Cidade: \n");
    scanf("%s", &cidade2);
    printf("População: \n");
    scanf("%d", &população2);
    printf("Aréa (em km²): \n");
    scanf("%f", &area2);
    printf("PIB: \n");
    scanf("%f", &pib2);
    printf("Número de Pontos Turísticos: \n");
    scanf("%d", &pontos2);

    //Exibindo as informações das cartas
    printf("Carta 1: \n");
    printf("Estado: %c", estado1);
    printf("Código: %s", codigo1);
    printf("Nome da cidade: %s", cidade1);
    printf("População: %d", população1);
    printf("Área: %.2f km²", area1);
    printf("PIB: %.2f bilhões de reais", pib1);
    printf("Número de Pontos Turísticos: %d", pontos1);

    printf("Carta 2: \n");
    printf("Estado: %c", estado2);
    printf("Código: %s", codigo2);
    printf("Nome da cidade: %s", cidade2);
    printf("População: %d", população2);
    printf("Área: %.2f km²", area2);
    printf("PIB: %.2f bilhões de reais", pib2);
    printf("Número de Pontos Turísticos: %d", pontos02);

    return 0;


}