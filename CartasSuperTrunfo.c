#include <stdio.h>
#include <string.h> 

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Aluno - Gustavo Achcar

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    char estado1, estado2;
    char codigo1[5], codigo2[5], nome1[50], nome2[50];
    int num1, num2, c;
    unsigned long int pop1, pop2;
    float area1, area2, pib1,pib2;

 
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    printf("Digite o estado da carta 1: \n");
    scanf(" %c", &estado1);

    printf("Digite o código da cidade da carta 1: \n");
    scanf("%s", codigo1);
    
    printf("Digite o nome da cidade da carta 1: \n");
    ((c = getchar()) != '\n' && c !=EOF);
    fgets ( nome1, sizeof (nome2), stdin);

    printf("Digite a população da cidade da carta 1: \n");
    scanf("%lu", &pop1);

    printf("Digite o número de pontos turísticos da cidade da carta 1: \n");
    scanf("%d", &num1);

    printf("Digite a área em Km² da cidade da carta 1: \n");
    scanf("%f", &area1);

    printf("Digite o PIB da cidade da carta 1: \n");
    scanf("%f", &pib1);

    printf("Digite o estado da carta 2: \n");
    scanf(" %c", &estado2);

    printf("Digite o código da cidade da carta 2: \n");
    scanf("%s", codigo2);
    
    printf("Digite o nome da cidade da carta 2: \n");
    ((c = getchar()) != '\n' && c !=EOF);
    fgets ( nome2, sizeof (nome2), stdin);

    printf("Digite a população da cidade da carta 2: \n");
    scanf("%lu", &pop2);

    printf("Digite o número de pontos turísticos da cidade da carta 2: \n");
    scanf("%d", &num2);

    printf("Digite a área em Km² da cidade da carta 2: \n");
    scanf("%f", &area2);

    printf("Digite o PIB da cidade da carta 2: \n");
    scanf("%f", &pib2);

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    printf("\n --- Dados da Carta 1 --- \n");
    printf("\nEstado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s", nome1);
    printf("População: %lu habitantes\n", pop1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", num1);

    printf("\n --- Dados da Carta 2 --- \n");
    printf("\nEstado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s", nome2);
    printf("População: %lu habitantes\n", pop2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n\n", num2);

    return 0;
}
