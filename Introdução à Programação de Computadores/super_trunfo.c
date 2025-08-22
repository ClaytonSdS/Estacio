#include <stdio.h>

int main(){
    char estado1, estado2;                      // Caracter para o Estado
    char codigo_carta1[10], codigo_carta2[10];  // Código da Carta, e.g., 01, 02, etc.
    char cidade1[50], cidade2[50];              // Nome da Cidade
    unsigned int populacao1, populacao2;                 // População
    float area1, area2;                         // Área em km²
    float pib1, pib2;                           //  PIB do País
    unsigned short int pontos_turismo1, pontos_turismo2;       // Número de pontos turisticos
    char codigo_completo1[12], codigo_completo2[12]; // Código Concatenado entre 'estado1' e 'codigo_carta1' -> A01, A02, etc.

    float densidade_p1, densidade_p2;                // Densidade Populacional
    float pib_capita1, pib_capita2;                  // PIB per Capita

    float super_pwr1, super_pwr2;                   // SuperPoder da Carta

    unsigned int comp_populacao, comp_area, comp_pib, comp_turistico, comp_densidade, comp_pib_per_capita, comp_super_power; // Variaveis para comparação

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

    printf("Área em (km²): ");
    scanf("%f", &area2);

    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib2);

    printf("Número de Pontos Turísticos: ");
    scanf("%i", &pontos_turismo2);

    // Concatenar o caracter do Estado + Código da Carta -> 'A' + '01' = 'A01'
    sprintf(codigo_completo1, "%c%s", estado1, codigo_carta1);
    sprintf(codigo_completo2, "%c%s", estado2, codigo_carta2);

    // Calcular a densidade populacional
    densidade_p1 = (float) populacao1 / area1;        // Densidade Populacional da Cidade 1
    densidade_p2 = (float) populacao2 / area2;        // Densidade Populacional da Cidade 2
    
    // Calcular o PIB per capita
    pib_capita1 = (float) pib1 / populacao1;       // PIB per Capita da Cidade 1
    pib_capita2 = (float) pib2 / populacao2;       // PIB per Capita da Cidade 2

    // Calcular Super Poder das Cartas
    super_pwr1 = (float) populacao1 + area1 + pib1 + pib_capita1 + (1/densidade_p1) + pontos_turismo1;
    super_pwr2 = (float) populacao2 + area2 + pib2 + pib_capita2 + (1/densidade_p2) + pontos_turismo1;

    // Comparação entre as propriedades das cartas
    comp_populacao = populacao1 > populacao2;
    comp_area = area1 > area2;
    comp_pib = pib1 > pib2;
    comp_turistico = pontos_turismo1 > pontos_turismo2;
    comp_densidade = densidade_p1 < densidade_p2; // menor densidade vence
    comp_pib_per_capita = pib_capita1 > pib_capita2;
    comp_super_power = super_pwr1 > super_pwr2;

    // Printando os resultados
    printf("Comparação de Cartas:\n");

    // Comparação População
    if (comp_populacao) {printf("População: Carta 1 venceu (%u)\n", comp_populacao);} else {printf("População: Carta 2 venceu (%u)\n", comp_populacao);}

    // Comparação Área
    if (comp_area) {printf("nÁrea: Carta 1 venceu (%u)\n", comp_area);} else {printf("nÁrea: Carta 2 venceu (%u)\n", comp_area);}

    // Comparação PIB
    if (comp_pib) {printf("PIB: Carta 1 venceu (%u)\n", comp_pib);} else {printf("PIB: Carta 2 venceu (%u)\n", comp_pib);}

    // Comparação Pontos Turísticos
    if (comp_turistico) {printf("Pontos Turísticos: Carta 1 venceu (%u)\n", comp_turistico);} else {printf("Pontos Turísticos: Carta 2 venceu (%u)\n", comp_turistico);}
    
    // Comparação Densidade Populacional
    if (comp_densidade) {printf("Densidade Populacional: Carta 1 venceu (%u)\n", comp_densidade);} else {printf("Densidade Populacional: Carta 2 venceu (%u)\n", comp_densidade);}
       
    // Comparação PIB per Capita
    if (comp_pib_per_capita) {printf("PIB per Capita: Carta 1 venceu (%u)\n", comp_pib_per_capita);} else {printf("PIB per Capita: Carta 2 venceu (%u)\n", comp_pib_per_capita);}
        
    // Comparação Super Poder
    if (comp_super_power) {printf("Super Poder: Carta 1 venceu (%u)\n", comp_super_power);} else {printf("Super Poder: Carta 2 venceu (%u)\n", comp_super_power);}
