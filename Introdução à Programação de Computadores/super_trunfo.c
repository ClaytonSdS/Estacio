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
    unsigned short int comparacao; // Variavel para armazenar a opção seleciona para comparação do atributo.

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
    scanf("%hu", &pontos_turismo1);

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

    printf("Número de Pontos Turísticos:");
    scanf("%hu", &pontos_turismo2);

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

    // Menu Interativo para o jogador seleciona qual atributo quer comparar.
    printf("\n Selecione qual atributo você gostaria de comparar entre as cartas.\n");
    printf("1. População \n2. Área \n3. PIB \n4. Número de pontos turísticos \n5. Densidade demográfica\n \n");
    scanf("%hu", &comparacao); // Armazenar o resultado

    printf("Carta 1: %s | Carta 2: %s \n", cidade1, cidade2);

    switch (comparacao){
        case 1: // População
            printf("Atributo comparado: População \n");
            printf("População 1: %u | População 2: %u \n", populacao1, populacao2);

            // if-else para comparação de qual carta possui o atributo mais forte.
            if (populacao1 > populacao2){printf("A carta 1 venceu! \n");}
            else if (populacao1 < populacao2){printf("A carta 2 venceu! \n");}
            else {printf("Empate! \n");}
            break;

        case 2: // Área
            printf("Atributo comparado: Área \n");
            printf("Área 1: %.2f | Área 2: %.2f \n", area1, area2);

            // if-else para comparação de qual carta possui o atributo mais forte.
            if (area1 > area2){printf("A carta 1 venceu! \n");}
            else if (area1 < area2){printf("A carta 2 venceu! \n");}
            else {printf("Empate! \n");}
            break;

        case 3: // PIB
            printf("Atributo comparado: PIB \n");
            printf("PIB 1: %.2f | PIB 2: %.2f \n", pib1, pib2);

            // if-else para comparação de qual carta possui o atributo mais forte.
            if (pib1 > pib2){printf("A carta 1 venceu! \n");}
            else if (pib1 < pib2){printf("A carta 2 venceu! \n");}
            else {printf("Empate! \n");}
            break;

        case 4: // Número de Pontos Turísticos
            printf("Atributo comparado: Número de Pontos Turísticos \n");
            printf("Número de Pontos Turísticos 1: %hu | Número de Pontos Turísticos 2: %hu \n", pontos_turismo1, pontos_turismo2);

            // if-else para comparação de qual carta possui o atributo mais forte.
            if (pontos_turismo1 > pontos_turismo2){printf("A carta 1 venceu! \n");}
            else if (pontos_turismo1 < pontos_turismo2){printf("A carta 2 venceu! \n");}
            else {printf("Empate! \n");}
            break;

        case 5: // Densidade Demográfica
            printf("Atributo comparado: Densidade Demográfica \n");
            printf("Densidade Demográfica 1: %.2f | Densidade Demográfica 2: %.2f \n", densidade_p1, densidade_p2);

            // if-else para comparação de qual carta possui o atributo mais forte.
            if (densidade_p1 < densidade_p2){printf("A carta 1 venceu! \n");}
            else if (densidade_p1 > densidade_p2){printf("A carta 2 venceu! \n");}
            else {printf("Empate! \n");}
            break;

        default: // Jogador selecionou um número diferente do esperado [1,5]
            printf("Atributo invalido, selecione uma opção entre 1 e 5. \n");
            break;
    }


return 0;  
}
