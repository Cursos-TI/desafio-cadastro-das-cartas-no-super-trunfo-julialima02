#include <stdio.h>

// Estrutura de dados da carta
typedef struct {
    char codigo[4];           // Código da cidade (ex: A01, B02)
    int populacao;            // População da cidade
    float area;               // Área em km²
    float pib;                // PIB em bilhões
    int pontos_turisticos;    // Número de pontos turísticos
} Carta;

int main() {
    // Cadastro manual direto no código
    Carta carta1 = {"A01", 1200000, 450.5, 38.2, 12};
    Carta carta2 = {"B02", 800000, 320.7, 25.4, 8};

    // Exibição dos dados cadastrados
    printf("=== Dados da primeira carta ===\n");
    printf("Código: %s\n", carta1.codigo);
    printf("População: %d\n", carta1.populacao);
    printf("Área: %.2f km²\n", carta1.area);
    printf("PIB: %.2f bilhões\n", carta1.pib);
    printf("Pontos turísticos: %d\n", carta1.pontos_turisticos);

    printf("\n=== Dados da segunda carta ===\n");
    printf("Código: %s\n", carta2.codigo);
    printf("População: %d\n", carta2.populacao);
    printf("Área: %.2f km²\n", carta2.area);
    printf("PIB: %.2f bilhões\n", carta2.pib);
    printf("Pontos turísticos: %d\n", carta2.pontos_turisticos);

    return 0;
}
