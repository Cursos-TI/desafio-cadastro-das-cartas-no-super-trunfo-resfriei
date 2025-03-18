#include <stdio.h>

int main(){
    printf("JOGOS DE CARTA SUPER TRUNFO \n");
    printf("\n");

//Declarações das variáveis

//Carta número 1

    char estado1 [25];
    char codigo1 [25];
    char cidade1 [25];
    float população1;
    float area1;
    float pib1;
    int pontos1;
    float densidadepopulacional1;
    float PIBpercapita1;

//Carta número 2

    char estado2 [25];
    char codigo2 [25];
    char cidade2 [25];
    float população2;
    float area2;
    float pib2;
    int pontos2;
    float densidadepopulacional2;
    float PIBpercapita2;


//Coleta de dados da carta número 1

    printf("** Dados da carta número 1 **\n");

    printf("Digite o estado (Letra de A a H): \n");
    scanf("%s", &estado1);

    printf("Digite o código da carta (ex: A01): \n");
    scanf("%s", &codigo1);

    printf("Digite o nome da cidade: \n");
    scanf("%s", &cidade1);

    printf("Digite a população: \n");
    scanf("%f", &população1);

    printf("Aréa (em km²): \n");
    scanf("%f", &area1);

    printf("PIB: \n");
    scanf("%f", &pib1);

    printf("Número de Pontos Turísticos: \n");
    scanf("%d", &pontos1);


//Coleta de dados da carta número 2

    printf("** Dados da carta número 2 **\n");

    printf("Digite o estado (Letra de A a H): \n");
    scanf("%s", &estado2);

    printf("Digite o código da carta (ex: A01): \n");
    scanf("%s", &codigo2);

    printf("Digite o nome da cidade: \n");
    scanf("%s", &cidade2);

    printf("Digite a população: \n");
    scanf("%f", &população2);

    printf("Aréa (em km²): \n");
    scanf("%f", &area2);

    printf("PIB: \n");
    scanf("%f", &pib2);

    printf("Número de Pontos Turísticos: \n");
    scanf("%d", &pontos2);

//Calculo da densidade populacional das cartas 1 e 2

    densidadepopulacional1 = (float) (população1 / area1);

    densidadepopulacional2 = (float) (população2 / area2);

//Calculo do PIB per capita das cartas 1 e 2

    PIBpercapita1 = (float) (pib1 / população1);
    PIBpercapita2 = (float) (pib2 / população2);


//Exibindo as informações das cartas 1 e 2

//Carta 1
    printf("Carta 1: \n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da cidade: %s\n", cidade1);
    printf("População: %.6f\n", população1);
    printf("Área: %.9f km²\n", area1);
    printf("PIB: %.9f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontos1);
    printf("A densidade populacional é: %.9f\n", densidadepopulacional1);
    printf("O PIB per capita é: %.9f\n", PIBpercapita1);

//Carta 2
    printf("Carta 2: \n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da cidade: %s\n", cidade2);
    printf("População: %.6f\n", população2);
    printf("Área: %.9f km²\n", area2);
    printf("PIB: %.9f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontos2);
    printf("A densidade populacional é: %.9f\n", densidadepopulacional2);
    printf("O PIB per capita é: %.9f\n", PIBpercapita2);


    return 0;
}