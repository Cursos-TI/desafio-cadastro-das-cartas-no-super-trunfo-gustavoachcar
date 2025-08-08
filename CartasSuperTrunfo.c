#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Aluno - Gustavo Achcar

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    char estado1, estado2, codigo1[5], codigo2[5], nome1[20], nome2[20];
    int pop1, pop2, num1, num2;
    float area1, area2, pib1,pib2;

 
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    printf("Digite o estado da carta 1: \n");
    scanf("%s", &estado1);

    printf("Digite o código da cidade da carta 1: \n");
    scanf("%s", &codigo1);
    
    printf("Digite o nome da cidade da carta 1: \n");
    scanf("%s", &nome1);

    printf("Digite a população da cidade da carta 1: \n");
    scanf("%d", &pop1);

    printf("Digite o número de pontos turísticos da cidade da carta 1: \n");
    scanf("%d", &num1);

    printf("Digite a área em Km² da cidade da carta 1: \n");
    scanf("%f", &area1);

    printf("Digite o PIB da cidade da carta 1: \n");
    scanf("%f", &pib1);

    printf("Digite o estado da carta 2: \n");
    scanf("%s", &estado2);

    printf("Digite o código da cidade da carta 2: \n");
    scanf("%s", &codigo2);
    
    printf("Digite o nome da cidade da carta 2: \n");
    scanf("%s", &nome2);

    printf("Digite a população da cidade da carta 2: \n");
    scanf("%d", &pop2);

    printf("Digite o número de pontos turísticos da cidade da carta 2: \n");
    scanf("%d", &num2);

    printf("Digite a área em Km² da cidade da carta 2: \n");
    scanf("%f", &area2);

    printf("Digite o PIB da cidade da carta 2: \n");
    scanf("%f", &pib2);




    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
