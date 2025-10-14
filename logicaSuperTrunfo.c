#include <stdio.h>

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

    // Comparação entre as duas cartas
    printf("\nComparação de Cartas (Atributo: PIB per Capita):\n");
    printf("Carta 1 - %s: %.2f reais\n", nome_cidade_1, pib_per_capita_1);
    printf("Carta 2 - %s: %.2f reais\n", nome_cidade_2, pib_per_capita_2);

    if (pib_per_capita_1 > pib_per_capita_2) {
        printf("Resultado: Carta 1 (%s) venceu!\n", nome_cidade_1);
    } else if (pib_per_capita_1 < pib_per_capita_2) {
        printf("Resultado: Carta 2 (%s) venceu!\n", nome_cidade_2);
    } else {
        printf("Resultado: Empate!\n");
    }

    return 0;
}