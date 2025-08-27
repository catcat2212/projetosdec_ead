#include <stdio.h>

int main() {
   
    char nomeestado1[10], letraestado1[4], nomecidade1[20];
    unsigned long int populacao1;
    float pib1, area1, densidadepopulacao1, pibpercapita1, superpoder1;
    int pontosturisticos1;

    
    printf("=== Cadastro da Carta 1 ===\n");
    printf("Digite o estado (A-H): ");
    scanf(" %s", nomeestado1);
    printf("Digite o código da carta (ex: 22): ");
    scanf("%s", letraestado1);
    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", nomecidade1);
    printf("Digite o número da população: ");
    scanf("%lu", &populacao1);
    printf("Digite o PIB: ");
    scanf("%f", &pib1);
    printf("Digite a área em km²: ");
    scanf("%f", &area1);
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontosturisticos1);

    // Cálculo da densidade populacional e PIB per capita
    densidadepopulacao1 = (float)populacao1 / area1;
    pibpercapita1 = pib1 * 1000000 / populacao1;

    // Cálculo do Super Poder
    superpoder1 = (float)populacao1 + area1 + pib1 + pontosturisticos1 + pibpercapita1 + (1 / densidadepopulacao1);

    // Declaração das variáveis para a segunda carta
    char nomeestado2[10], letraestado2[4], nomecidade2[20];
    unsigned long int populacao2;
    float pib2, area2, densidadepopulacao2, pibpercapita2, superpoder2;
    int pontosturisticos2;

    // Leitura dos dados da segunda carta
    printf("\n=== Cadastro da Carta 2 ===\n");
    printf("Digite o estado (A-H): ");
    scanf(" %s", nomeestado2);
    printf("Digite o código da carta (ex: 22): ");
    scanf("%s", letraestado2);
    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", nomecidade2);
    printf("Digite o número da população: ");
    scanf("%lu", &populacao2);
    printf("Digite o PIB: ");
    scanf("%f", &pib2);
    printf("Digite a área em km²: ");
    scanf("%f", &area2);
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontosturisticos2);


    densidadepopulacao2 = (float)populacao2 / area2;
    pibpercapita2 = pib2 * 1000000 / populacao2;

    
    superpoder2 = (float)populacao2 + area2 + pib2 + pontosturisticos2 + pibpercapita2 + (1 / densidadepopulacao2);

    // Comparação dos atributos
    printf("\nComparação de Cartas:\n");

    printf("População: %s venceu (%d)\n", 
           (populacao1 > populacao2) ? "Carta 1" : "Carta 2", 
           (populacao1 > populacao2) ? 1 : 0);

    printf("Área: %s venceu (%d)\n", 
           (area1 > area2) ? "Carta 1" : "Carta 2", 
           (area1 > area2) ? 1 : 0);

    printf("PIB: %s venceu (%d)\n", 
           (pib1 > pib2) ? "Carta 1" : "Carta 2", 
           (pib1 > pib2) ? 1 : 0);

    printf("Pontos Turísticos: %s venceu (%d)\n", 
           (pontosturisticos1 > pontosturisticos2) ? "Carta 1" : "Carta 2", 
           (pontosturisticos1 > pontosturisticos2) ? 1 : 0);

    printf("Densidade Populacional: %s venceu (%d)\n", 
           (densidadepopulacao1 < densidadepopulacao2) ? "Carta 1" : "Carta 2", 
           (densidadepopulacao1 < densidadepopulacao2) ? 1 : 0);

    printf("PIB per Capita: %s venceu (%d)\n", 
           (pibpercapita1 > pibpercapita2) ? "Carta 1" : "Carta 2", 
           (pibpercapita1 > pibpercapita2) ? 1 : 0);

    printf("Super Poder: %s venceu (%d)\n", 
           (superpoder1 > superpoder2) ? "Carta 1" : "Carta 2", 
           (superpoder1 > superpoder2) ? 1 : 0);

    return 0;
}
