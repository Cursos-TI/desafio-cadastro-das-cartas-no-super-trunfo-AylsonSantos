#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste Aylson


int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.

    char estado, codigo[5], cidade[50];
    float pib, area;
    int populacao, pontosTur;
    
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.

    printf("\nDigite as informações para a carta:\n");
    
    // Lendo o estado da carta
    printf("Estado (A a H): ");
    scanf(" %c", &estado);
    
    // Lendo o código da carta
    printf("Código da Carta (Ex: A01, B03): ");
    scanf("%s", &codigo);
    
    // Lendo o nome da cidade
    printf("Nome da Cidade: ");
    scanf(" %[^\n]", &cidade);  // Leitura com espaços
    
    // Lendo a população da cidade
    printf("População: ");
    scanf("%d", &populacao);
    
    // Lendo a área da cidade
    printf("Área (em km²): ");
    scanf("%f", &area);
    
    // Lendo o PIB da cidade
    printf("PIB: ");
    scanf("%f", &pib);
    
    // Lendo o número de pontos turísticos
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTur);




    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
