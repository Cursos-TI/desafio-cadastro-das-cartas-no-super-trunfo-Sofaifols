#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.

    // VARIÁVEIS - CARTA 1
    char estado1; //de A a H
    char codigo1[20]; // aqui pode ser qualquer codigo para carta, mas sugeri na pergunta de cadastramento 
    char cidade1[50]; //pode usar ate 49 caracteres pq termina sempre com \0, um espaço reservado
    int populacao1;
    int pontosturisticos1;
    float area1;
    float pib1;

    //VARIÁVEIS - CARTA 2
    char estado2; // de A a H
    char codigo2[20]; //aqui pode ser qualquer codigo 
    char cidade2[50]; //TIVE que definir o tanto de caracteres aqui
    int populacao2;
    int pontosturisticos2;
    float area2;
    float pib2;


      // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    


    //saudações para começar o desafio
    printf("\n -- SUPER TRUNFO --\n");
    printf("\n - CADASTRAMENTO DAS CARTAS -\n");
    
    //CADASTRAMENTO - para o usuario inserir as infos da carta 1
printf("\n º CADASTRO DA CARTA 1 º\n");

printf(" - INFORME UMA LETRA PARA REPRESENTAR O ESTADO(DE A a H):\n");
scanf(" %c", &estado1);

printf("- INFORME O CÓDIGO DA CARTA (EX.: A01, 102, B01...)\n:");
scanf("%s", codigo1);

printf("- INFORME O NOME DA CIDADE (SEM ESPAÇOS): \n");
scanf("%s", &cidade1);

printf("- INFORME O NÚMERO DA POPULAÇÃO(SEM PONTOS OU VÍRGULAS):\n");
scanf("%d", &populacao1);

printf("- INFORME A ÁREA DA CIDADE (EM KM², SEM PONTOS OU VÍRGULAS):\n");
scanf("%f", &area1);

printf(" - INFORME O PIB (SEM PONTOS OU VIRGULAS):\n ");
scanf("%f", &pib1);

printf("- INFORME A QUANTIDADE DE PONTOS TURÍSTICOS:\n");
scanf("%d", pontosturisticos1);

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
