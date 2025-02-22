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

    return 0;


}
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.