#include <stdio.h>

int main(){
    char estado1, estado2;                      // Caracter para o Estado
    char codigo_carta1[10], codigo_carta2[10];  // Código da Carta, e.g., 01, 02, etc.
    char cidade1[50], cidade2[50];              // Nome da Cidade
    int populacao1, populacao2;                 // População
    float area1, area2;                         // Área em km²
    float pib1, pib2;                           //  PIB do País
    int pontos_turismo1, pontos_turismo2;       // Número de pontos turisticos
    char codigo_completo1[12], codigo_completo2[12]; // Código Concatenado entre 'estado1' e 'codigo_carta1' -> A01, A02, etc.


    // Código Para Solicitar as Informações da Primeira Carta (CARTA 1)
    printf("Informações para o preenchimento da CARTA 1:\n");
    printf("Caracter para o Estado (apenas 1 letra): ");
    scanf(" %c", &estado1);

    printf("Código (exemplo 01, 02, ...): ");
    scanf("%s", codigo_carta1);

    printf("Nome da Cidade (sem espaços): ");
    scanf("%s", cidade1);

    printf("População: ");
    scanf("%i", &populacao1);

    printf("Área (em km²): ");
    scanf("%f", &area1);

    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib1);

    printf("Número de Pontos Turísticos: ");
    scanf("%i", &pontos_turismo1);

    // Código Para Solicitar as Informações da Segunda Carta  (CARTA 1)
    printf("\nInformações para o preenchimento da CARTA 2:\n");
    printf("Caracter para o Estado (apenas 1 letra): ");
    scanf(" %c", &estado2);

    printf("Código (exemplo 01, 02, ...): ");
    scanf("%s", codigo_carta2);

    printf("Nome da Cidade (sem espaços): ");
    scanf("%s", cidade2);

    printf("População: ");
    scanf("%i", &populacao2);

    printf("Área em km²: ");
    scanf("%f", &area2);

    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib2);

    printf("Número de Pontos Turísticos: ");
    scanf("%i", &pontos_turismo2);

    // Concatenar o caracter do Estado + Código da Carta -> 'A' + '01' = 'A01'
    sprintf(codigo_completo1, "%c%s", estado1, codigo_carta1);
    sprintf(codigo_completo2, "%c%s", estado2, codigo_carta2);

    // Print com as Informações da Carta 1
    printf("\nCarta 1: \nEstado: %c\nCódigo: %s\nNome da Cidade: %s\nPopulação: %i\nÁrea: %f km²\nPIB: %f bilhões de reais\nNúmero de Pontos Turísticos: %i\n \n", 
                      estado1, codigo_completo1, cidade1, populacao1, area1, pib1, pontos_turismo1);

    // Print com as Informações da Carta 2
    printf("Carta 2: \nEstado: %c\nCódigo: %s\nNome da Cidade: %s\nPopulação: %i\nÁrea: %f km²\nPIB: %f bilhões de reais\nNúmero de Pontos Turísticos: %i\n", 
                      estado2, codigo_completo2, cidade2, populacao2, area2, pib2, pontos_turismo2);

}