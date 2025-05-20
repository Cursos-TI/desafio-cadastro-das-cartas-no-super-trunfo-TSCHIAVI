#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    char estado1[02];
    char codigo1[03];
    char cidade1[30];
    int populacao1, turisticos1;
    float area1, pib1;

    char estado2[02];
    char codigo2[03];
    char cidade2[30];
    int populacao2, turisticos2;
    float area2, pib2;
    // declaração das variaveis.

    printf("Digite o primeiro Estado: \n");
    scanf("%s", &estado1);

    printf("Digite o codigo da primeira carta: \n");
    scanf("%s", &codigo1);

    printf("Digite a primeira cidade: \n");
    scanf("%s", &cidade1);

    printf("Digite a população da primeira carta: \n");
    scanf("%d", &populacao1);

    printf("Digite a área da primeira carta: \n");
    scanf("%f", &area1);

    printf("Digite o PIB da primeira carta: \n");
    scanf("%f", &pib1);

    printf("Digite o numero de pontos turisticos da primeira carta: \n");
    scanf("%d", &turisticos1);

    printf("Digite o segundo Estado: \n");
    scanf("%s", &estado2);

    printf("Digite o codigo da segunda carta: \n");
    scanf("%s", &codigo2);

    printf("Digite a segunda cidade: \n");
    scanf("%s", &cidade2);

    printf("Digite a população da segunda carta: \n");
    scanf("%d", &populacao2);

    printf("Digite a área da segunda carta: \n");
    scanf("%f", &area2);

    printf("Digite o PIB da segunda carta: \n");
    scanf("%f", &pib2);

    printf("Digite o numero de pontos turisticos da segunda carta: \n");
    scanf("%d", &turisticos2);
    // printf= imprime a mensagem solicitando que o usuário insira as informações.
    // \n= indica um pulo de linha.
    // scanf= coleta os dados digitados e os insere na variavel. 

    printf("Carta 1\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f Bilhões de Reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n\n", turisticos1);
    
    printf("Carta 2\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f Bilhões de Reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", turisticos2);

    // Os códigos acima mostram o resultado das cartas conforme digitados pelo usuário.


    return 0;
}
