#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main() {

    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.

    char codigo[10], nome[50], estado[50];
    int  populacao;
    float area, pib;

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    printf("Entre com o Código da Cidade: \n");
    scanf("%s", &codigo);

    printf("Entre com o Nome da Cidade: \n");
    scanf("%s", &nome);

    printf("Entre com o estado da Cidade: \n");
    scanf("%s", &estado);

    printf("Qual a população da Cidade: \n");
    scanf("%d", &populacao);

    printf("Qual a área da Cidade: \n");
    scanf("%f", &area);

    printf("Qual o PIB da Cidade: \n");
    scanf("%f", &pib);

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    printf("Código da Cidade: %s \n", codigo);
    printf("Nome da Cidade: %s \n", nome);
    printf("Estado da Cidade: %s \n", estado);
    printf("População da Cidade: %d \n", populacao);
    printf("Área da Cidade: %f \n", area);
    printf("O PIB da Cidade: %f \n", pib);

    return 0;
}
