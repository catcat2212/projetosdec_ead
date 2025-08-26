#include <stdio.h>
    int main(){
        char nomeestado1[10];
        char letraestado1[4];
        char nomecidade1[20];
        int populacao1;
        float pib1;
        float area1;
        int pontosturisticos1;

    printf("Insira os dados da carta 1:\n");
    printf("Digite o estado (A-H) %c\n:");
    scanf("%s", &nomeestado1);
   
    printf("Digite o código da carta (ex:22):\n");
    scanf("%s", letraestado1);
   
    printf("Digite o nome da cidade:\n");
    scanf("%s", nomecidade1);
    
    printf("Digite o numero da populacao:\n");
    scanf("%d", &populacao1);
    
    printf("Digite o PIB:\n");
    scanf("%f", &pib1);
    
    printf("Digite a área em km:\n");
    scanf("%f", &area1);
    
    printf("Digite o número de pontos turisticos:\n");
    scanf("%d", &pontosturisticos1);

    printf("\nCarta 1:\n");
    printf("Estado: %c\n", nomeestado1);
    printf("Código: %s\n", letraestado1);
    printf("Nome da Cidade: %s\n", nomecidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosturisticos1);


        char nomeestado2[10];
        char letraestado2[4];
        char nomecidade2[20];
        int populacao2;
        float pib2;
        float area2;
        int pontosturisticos2;

printf("Insira os dados da carta 2:\n");
    printf("Digite o estado (A-H) %c\n:");
    scanf("%s", &nomeestado2);
   
    printf("Digite o código da carta (ex:22):\n");
    scanf("%s", letraestado2);
   
    printf("Digite o nome da cidade:\n");
    scanf("%s", nomecidade2);
    
    printf("Digite o numero da populacao:\n");
    scanf("%d", &populacao2);
    
    printf("Digite o PIB:\n");
    scanf("%f", &pib2);
    
    printf("Digite a área em km:\n");
    scanf("%f", &area2);
    
    printf("Digite o número de pontos turisticos:\n");
    scanf("%d", &pontosturisticos2);

printf("\nCarta 2:\n");
    printf("Estado: %c\n", nomeestado2);
    printf("Código: %s\n", letraestado2);
    printf("Nome da Cidade: %s\n", nomecidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosturisticos2);

return 0;

}