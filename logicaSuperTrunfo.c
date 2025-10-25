#include <stdio.h>
#include <string.h>

typedef struct {
    char estado[50];
    char codigo[10];
    char nomeCidade[50];
    int populacao;
    float area;
    float pib;
    int numPontosTuristicos;
    float densidadePopulacional;
    float pibPerCapita;
} Carta;

int main() {
    Carta carta1, carta2;

    // ---- Cadastro da Carta 1 ----
    printf("=== Cadastro da Carta 1 ===\n");
    printf("Estado: ");
    scanf(" %[^\n]", carta1.estado);
    printf("Código da carta: ");
    scanf(" %[^\n]", carta1.codigo);
    printf("Nome da cidade: ");
    scanf(" %[^\n]", carta1.nomeCidade);
    printf("População: ");
    scanf("%d", &carta1.populacao);
    printf("Área (km²): ");
    scanf("%f", &carta1.area);
    printf("PIB (em bilhões): ");
    scanf("%f", &carta1.pib);
    printf("Número de pontos turísticos: ");
    scanf("%d", &carta1.numPontosTuristicos);

    // ---- Cadastro da Carta 2 ----
    printf("\n=== Cadastro da Carta 2 ===\n");
    printf("Estado: ");
    scanf(" %[^\n]", carta2.estado);
    printf("Código da carta: ");
    scanf(" %[^\n]", carta2.codigo);
    printf("Nome da cidade: ");
    scanf(" %[^\n]", carta2.nomeCidade);
    printf("População: ");
    scanf("%d", &carta2.populacao);
    printf("Área (km²): ");
    scanf("%f", &carta2.area);
    printf("PIB (em bilhões): ");
    scanf("%f", &carta2.pib);
    printf("Número de pontos turísticos: ");
    scanf("%d", &carta2.numPontosTuristicos);

    // ---- Cálculos ----
    carta1.densidadePopulacional = carta1.populacao / carta1.area;
    carta2.densidadePopulacional = carta2.populacao / carta2.area;

    carta1.pibPerCapita = carta1.pib / carta1.populacao;
    carta2.pibPerCapita = carta2.pib / carta2.populacao;

    // ---- Exibir dados calculados ----
    printf("\n=== Dados Calculados ===\n");
    printf("Carta 1 - %s:\n", carta1.nomeCidade);
    printf("  Densidade Populacional: %.2f hab/km²\n", carta1.densidadePopulacional);
    printf("  PIB per capita: %.6f bilhões/hab\n", carta1.pibPerCapita);

    printf("Carta 2 - %s:\n", carta2.nomeCidade);
    printf("  Densidade Populacional: %.2f hab/km²\n", carta2.densidadePopulacional);
    printf("  PIB per capita: %.6f bilhões/hab\n", carta2.pibPerCapita);

    // ---- Escolha do atributo para comparação ----
    int atributo = 5; // <-- Mude aqui o atributo (1=População, 2=Área, 3=PIB, 4=Densidade, 5=PIB per capita)
    printf("\n=== Comparação de Cartas ===\n");

    // ---- Comparação ----
    switch (atributo) {
        case 1: // População
            printf("Atributo: População\n");
            printf("Carta 1 (%s): %d\n", carta1.nomeCidade, carta1.populacao);
            printf("Carta 2 (%s): %d\n", carta2.nomeCidade, carta2.populacao);
            if (carta1.populacao > carta2.populacao)
                printf("Resultado: Carta 1 (%s) venceu!\n", carta1.nomeCidade);
            else if (carta2.populacao > carta1.populacao)
                printf("Resultado: Carta 2 (%s) venceu!\n", carta2.nomeCidade);
            else
                printf("Empate!\n");
            break;

        case 2: // Área
            printf("Atributo: Área\n");
            printf("Carta 1 (%s): %.2f km²\n", carta1.nomeCidade, carta1.area);
            printf("Carta 2 (%s): %.2f km²\n", carta2.nomeCidade, carta2.area);
            if (carta1.area > carta2.area)
                printf("Resultado: Carta 1 (%s) venceu!\n", carta1.nomeCidade);
            else if (carta2.area > carta1.area)
                printf("Resultado: Carta 2 (%s) venceu!\n", carta2.nomeCidade);
            else
                printf("Empate!\n");
            break;

        case 3: // PIB
            printf("Atributo: PIB\n");
            printf("Carta 1 (%s): %.2f bilhões\n", carta1.nomeCidade, carta1.pib);
            printf("Carta 2 (%s): %.2f bilhões\n", carta2.nomeCidade, carta2.pib);
            if (carta1.pib > carta2.pib)
                printf("Resultado: Carta 1 (%s) venceu!\n", carta1.nomeCidade);
            else if (carta2.pib > carta1.pib)
                printf("Resultado: Carta 2 (%s) venceu!\n", carta2.nomeCidade);
            else
                printf("Empate!\n");
            break;

        case 4: // Densidade Populacional (menor vence)
            printf("Atributo: Densidade Populacional\n");
            printf("Carta 1 (%s): %.2f hab/km²\n", carta1.nomeCidade, carta1.densidadePopulacional);
            printf("Carta 2 (%s): %.2f hab/km²\n", carta2.nomeCidade, carta2.densidadePopulacional);
            if (carta1.densidadePopulacional < carta2.densidadePopulacional)
                printf("Resultado: Carta 1 (%s) venceu!\n", carta1.nomeCidade);
            else if (carta2.densidadePopulacional < carta1.densidadePopulacional)
                printf("Resultado: Carta 2 (%s) venceu!\n", carta2.nomeCidade);
            else
                printf("Empate!\n");
            break;

        case 5: // PIB per capita
            printf("Atributo: PIB per capita\n");
            printf("Carta 1 (%s): %.6f bilhões/hab\n", carta1.nomeCidade, carta1.pibPerCapita);
            printf("Carta 2 (%s): %.6f bilhões/hab\n", carta2.nomeCidade, carta2.pibPerCapita);
            if (carta1.pibPerCapita > carta2.pibPerCapita)
                printf("Resultado: Carta 1 (%s) venceu!\n", carta1.nomeCidade);
            else if (carta2.pibPerCapita > carta1.pibPerCapita)
                printf("Resultado: Carta 2 (%s) venceu!\n", carta2.nomeCidade);
            else
                printf("Empate!\n");
            break;

        default:
            printf("Atributo inválido!\n");
    }

    return 0;
}

