#include <stdio.h>
#include <string.h>

float calcular_densidade_populacional(unsigned long int populacao, float area) {
    return (float) populacao / area;
}

float calcular_pib_per_capita(float pib, unsigned long int populacao) {
    return (float) (pib * 1000000000) / populacao;
}

float calcular_super_poder(unsigned long int populacao, float area, float pib, int pontos_turisticos, float pib_per_capita, float densidade_populacional) {
    return populacao + area + pib + pontos_turisticos + pib_per_capita + (1 / densidade_populacional);
}

int main() {
    // Dados da primeira carta
    char estado_1;
    char codigo_carta_1[4];
    char nome_cidade_1[50];
    unsigned long int populacao_1;
    float area_1;
    float pib_1;
    int pontos_turisticos_1;
    float densidade_populacional_1;
    float pib_per_capita_1;
    float super_poder_1;

    // Dados da segunda carta
    char estado_2;
    char codigo_carta_2[4];
    char nome_cidade_2[50];
    unsigned long int populacao_2;
    float area_2;
    float pib_2;
    int pontos_turisticos_2;
    float densidade_populacional_2;
    float pib_per_capita_2;
    float super_poder_2;

    // Diálogo com o usuário para inserir os dados da primeira carta
    printf("\nInsira os dados da primeira carta:");
    printf("\nEscolha uma letra para representar o estado (de 'A' a 'H'): ");
    scanf(" %c", &estado_1);

    printf("Insira o código da carta (A letra do estado seguida por um número de 01 a 04): ");
    scanf("%3s", codigo_carta_1);

    printf("Insira o nome da cidade: ");
    scanf("%49s", nome_cidade_1);

    printf("Insira a população da cidade: ");
    scanf("%d", &populacao_1);

    printf("Insira a área da cidade (em km²): ");
    scanf("%f", &area_1);
    densidade_populacional_1 = calcular_densidade_populacional(populacao_1, area_1);

    printf("Insira o Produto Interno Bruto da cidade (em bilhões de reais): ");
    scanf("%f", &pib_1);
    pib_per_capita_1 = calcular_pib_per_capita(pib_1, populacao_1);

    printf("Insira o número de pontos turísticos da cidade: ");
    scanf("%d", &pontos_turisticos_1);
    super_poder_1 = calcular_super_poder(populacao_1, area_1, pib_1, pontos_turisticos_1, pib_per_capita_1, densidade_populacional_1);

    // Diálogo com o usuário para inserir os dados da segunda carta
    printf("\nInsira os dados da segunda carta:");
    printf("\nEscolha uma letra para representar o estado (de 'A' a 'H'): ");
    scanf(" %c", &estado_2);

    printf("Insira o código da carta (A letra do estado seguida por um número de 01 a 04): ");
    scanf("%3s", codigo_carta_2);

    printf("Insira o nome da cidade: ");
    scanf("%49s", nome_cidade_2);

    printf("Insira a população da cidade: ");
    scanf("%d", &populacao_2);

    printf("Insira a área da cidade (em km²): ");
    scanf("%f", &area_2);
    densidade_populacional_2 = calcular_densidade_populacional(populacao_2, area_2);

    printf("Insira o Produto Interno Bruto da cidade (em bilhões de reais): ");
    scanf("%f", &pib_2);
    pib_per_capita_2 = calcular_pib_per_capita(pib_2, populacao_2);

    printf("Insira o número de pontos turísticos da cidade: ");
    scanf("%d", &pontos_turisticos_2);
    super_poder_2 = calcular_super_poder(populacao_2, area_2, pib_2, pontos_turisticos_2, pib_per_capita_2, densidade_populacional_2);

    // Exibir os dados da primeira carta
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado_1);
    printf("Código: %s\n", codigo_carta_1);
    printf("Nome da Cidade: %s\n", nome_cidade_1);
    printf("População: %d\n", populacao_1);
    printf("Área: %.2f km²\n", area_1);
    printf("PIB: %.2f bilhões de reais\n", pib_1);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos_1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional_1);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita_1);

    // Exibir os dados da segunda carta
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado_2);
    printf("Código: %s\n", codigo_carta_2);
    printf("Nome da Cidade: %s\n", nome_cidade_2);
    printf("População: %d\n", populacao_2);
    printf("Área: %.2f km²\n", area_2);
    printf("PIB: %.2f bilhões de reais\n", pib_2);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos_2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional_2);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita_2);

    // Comparação entre as duas cartas (primeiro atributo)
    printf("\nEscolha o primeiro atributo para comparar\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Populacional\n");
    printf("6 - PIB per Capita\n");
    
    int atributo_escolhido_1, atributo_escolhido_2, resultado_comparacao_1, resultado_comparacao_2;
    char nome_atributo_1[30];
    char nome_atributo_2[30];
    scanf("%d", &atributo_escolhido_1);

    switch(atributo_escolhido_1) {
        case 1:
            strcpy(nome_atributo_1, "População");
            resultado_comparacao_1 = populacao_1 > populacao_2 ? 1 : 0;
            break;
        case 2:
            strcpy(nome_atributo_1, "Área");
            resultado_comparacao_1 = area_1 > area_2 ? 1 : 0;
            break;
        case 3:
            strcpy(nome_atributo_1, "PIB");
            resultado_comparacao_1 = pib_1 > pib_2 ? 1 : 0;
            break;
        case 4:
            strcpy(nome_atributo_1, "Pontos Turísticos");
            resultado_comparacao_1 = pontos_turisticos_1 > pontos_turisticos_2 ? 1 : 0;
            break;
        case 5:
            strcpy(nome_atributo_1, "Densidade Populacional");
            resultado_comparacao_1 = densidade_populacional_1 < densidade_populacional_2 ? 1 : 0;
            break;
        case 6:
            strcpy(nome_atributo_1, "PIB per Capita");
            resultado_comparacao_1 = pib_per_capita_1 > pib_per_capita_2 ? 1 : 0;
            break;
        default:
            printf("Opção inválida!\n");
    }
    
    // Comparação entre as duas cartas (segundo atributo)
    printf("\nEscolha o segundo atributo para comparar\n");
    scanf("%d", &atributo_escolhido_2);

    if (atributo_escolhido_2 == atributo_escolhido_1) {
        printf("Você já escolheu esse atributo. Escolha outro.\n");
        scanf("%d", &atributo_escolhido_2);
    }

    switch(atributo_escolhido_2) {
        case 1:
            strcpy(nome_atributo_2, "População");
            resultado_comparacao_2 = populacao_1 > populacao_2 ? 1 : 0;
            break;
        case 2:
            strcpy(nome_atributo_2, "Área");
            resultado_comparacao_2 = area_1 > area_2 ? 1 : 0;
            break;
        case 3:
            strcpy(nome_atributo_2, "PIB");
            resultado_comparacao_2 = pib_1 > pib_2 ? 1 : 0;
            break;
        case 4:
            strcpy(nome_atributo_2, "Pontos Turísticos");
            resultado_comparacao_2 = pontos_turisticos_1 > pontos_turisticos_2 ? 1 : 0;
            break;
        case 5:
            strcpy(nome_atributo_2, "Densidade Populacional");
            resultado_comparacao_2 = densidade_populacional_1 < densidade_populacional_2 ? 1 : 0;
            break;
        case 6:
            strcpy(nome_atributo_2, "PIB per Capita");
            resultado_comparacao_2 = pib_per_capita_1 > pib_per_capita_2 ? 1 : 0;
            break;
        default:
            printf("Opção inválida!\n");
    }

    printf("Comparação de Cartas (Atributos: %s e %s):\n", nome_atributo_1, nome_atributo_2);
    if (resultado_comparacao_1 && resultado_comparacao_2) {
        printf("Resultado: Carta 1 venceu!\n");
    } else if (resultado_comparacao_1 != resultado_comparacao_2) {
        printf("\nResultado: Empate!\n");
    } else {
        printf("Resultado: Carta 2 venceu!\n"); 
    }

    return 0;
}