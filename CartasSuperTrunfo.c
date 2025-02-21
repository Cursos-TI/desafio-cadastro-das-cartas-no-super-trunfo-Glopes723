#include <stdio.h>

int main() {
    // Variáveis para armazenar informações da primeira cidade
    char codigo1[4] = "A01";
    char nome1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontos_turisticos1;
    
    // Variáveis para armazenar informações da segunda cidade
    char codigo2[4] = "B01";
    char nome2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontos_turisticos2;
    
    printf("Bem-vindo ao Super Trunfo - Países!\n\n");

     // Cadastro da primeira cidade
     printf("Cadastro da cidade %s\n", codigo1);
     printf("Nome da cidade: ");
     scanf(" %[^\n]", nome1); 
     printf("População: ");
     scanf("%d", &populacao1);
     printf("Área: ");
     scanf("%f", &area1);
     printf("PIB: ");
     scanf("%f", &pib1);
     printf("Número de pontos turísticos: ");
     scanf("%d", &pontos_turisticos1);
     printf("\n");
 
     // Cadastro da segunda cidade
     printf("Cadastro da cidade %s\n", codigo2);
     printf("Nome da cidade: ");
     scanf(" %[^\n]", nome2);
     printf("População: ");
     scanf("%d", &populacao2);
     printf("Área: ");
     scanf("%f", &area2);
     printf("PIB: ");
     scanf("%f", &pib2);
     printf("Número de pontos turísticos: ");
     scanf("%d", &pontos_turisticos2);
     printf("\n");
 
     // Exibir a primeira cidade cadastrada
     printf("Cidade: %s\n", codigo1);
     printf("Nome: %s\n", nome1);
     printf("População: %d\n", populacao1);
     printf("Área: %.2f\n", area1);
     printf("PIB: %.2f\n", pib1);
     printf("Número de pontos turísticos: %d\n", pontos_turisticos1);
     printf("\n");
 
     // Exibir a segunda cidade cadastrada
     printf("Cidade: %s\n", codigo2);
     printf("Nome: %s\n", nome2);
     printf("População: %d\n", populacao2);
     printf("Área: %.2f\n", area2);
     printf("PIB: %.2f\n", pib2);
     printf("Número de pontos turísticos: %d\n", pontos_turisticos2);
     printf("\n");
 
     return 0;
 }