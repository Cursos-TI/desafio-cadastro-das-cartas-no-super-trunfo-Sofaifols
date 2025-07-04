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
    unsigned long int populacao1;
    int pontosturisticos1;
    float area1;
    float pib1;
    float densidadepopulacional1;
    float pibpercapita1;
    float superpoder1;
    

    //VARIÁVEIS - CARTA 2
    char estado2; // de A a H
    char codigo2[20]; //aqui pode ser qualquer codigo 
    char cidade2[50]; //TIVE que definir o tanto de caracteres aqui
    unsigned long int populacao2;
    int pontosturisticos2;
    float area2;
    float pib2;
    float densidadepopulacional2;
    float pibpercapita2;
    float superpoder2;


      // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    


    //saudações para começar o desafio
    printf("\n --------- SUPER TRUNFO ---------\n");
    printf("\n ---- CADASTRAMENTO DAS CARTAS ----\n");
    
    //CADASTRAMENTO - para o usuario inserir as infos da carta 1
printf("\n º CADASTRO DA CARTA 1 º\n");

printf(" \n- INFORME UMA LETRA PARA REPRESENTAR O ESTADO (DE A a H):\n");
scanf(" %c", &estado1);

printf("- INFORME O CÓDIGO DA CARTA (EX.: A01, 102, B01...):\n");
scanf("%s", codigo1);

printf("- INFORME O NOME DA CIDADE (SEM ESPAÇOS): \n");
scanf("%s", cidade1);

printf("- INFORME O NÚMERO DA POPULAÇÃO(SEM PONTOS OU VÍRGULAS):\n");
scanf("%dlu", &populacao1);

printf("- INFORME A ÁREA DA CIDADE (EM KM², SEM PONTOS OU VÍRGULAS):\n");
scanf("%f", &area1);

printf(" - INFORME O PIB (SEM PONTOS OU VÍRGULAS):\n ");
scanf("%f", &pib1);

printf("- INFORME A QUANTIDADE DE PONTOS TURÍSTICOS:\n");
scanf("%d", &pontosturisticos1);

//CADASTRAMENTO PARA O USUÁRIO INSERIR OS DADOS DA CARTA 2

printf("\n º CADASTRO DA CARTA 2 º\n");

printf("\n - INFORME UMA LETRA PARA REPRESENTAR O ESTADO (DE A a H):\n");
scanf(" %c", &estado2);

printf("- INFORME O CÓDIGO DA CARTA (EX.: A01, 102, B01...):\n");
scanf("%s", codigo2); 

printf(" - INFORME O NOME DA CIDADE (SEM ESPAÇOS):\n");
scanf("%s", cidade2);

printf("- INFORME O NÚMERO DA POPULAÇÃO:\n");
scanf("%lu", &populacao2);

printf("- INFORME A ÁREA DA CIDADE (EM KM², SEM PONTOS OU VÍRGULAS):\n");
scanf("%f", &area2);

printf(" - INFORME O PIB (SEM PONTOS OU VÍRGULAS):\n ");
scanf("%f", &pib2);

printf("- INFORME A QUANTIDADE DE PONTOS TURÍSTICOS:\n");
scanf("%d", &pontosturisticos2);

densidadepopulacional1 = (float) populacao1 / area1;
densidadepopulacional2 = (float) populacao2 / area2;
//usei o castingggggggggg
pibpercapita1 = (float) pib1 / populacao1;
pibpercapita2 = (float) pib2 / populacao2;


// adicionar a soma para depois calcular
superpoder1 = (float)populacao1 + area1 + pib1 + pontosturisticos1 + pibpercapita1 +(1/ densidadepopulacional1); // 1/densidade por conta que
// é o inverso da densidade que vai tá comparando
superpoder2 = (float)populacao2 + area2 + pib2 + pontosturisticos2 + pibpercapita2 + (1/ densidadepopulacional2);




printf("\n ----- EXIBIÇÃO DOS DADOS CADASTRADOS PARA AS CARTAS -----\n");

//Exibição dos dados da carta 1:

  printf("\n -=- CARTA 1 -=- \n");

    printf("\n--> Estado: %c\n", estado1);

    printf("--> Código da carta: %s\n", codigo1);

    printf("--> Nome da Cidade: %s\n", cidade1); //aqui a mesma coisa, o especificador está apresentando erro

    printf("--> População: %d \n", populacao1);

    printf("--> Área: %f km²\n", area1);

    printf("--> PIB: %f bilhões de reais\n", pib1);

    printf("--> Quantidade de pontos turísticos: %d\n", pontosturisticos1);

    printf("--> A densidade demográfica dessa cidade é:  %f habitantes por km² \n", densidadepopulacional1);

    printf("--> PIB PER CAPITA da cidade é:  %f R$ \n",pibpercapita1);

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.


 // Exibição dos dados da carta 2:

printf("\n -=- CARTA 2 -=-\n");

    printf("--> Estado: %c \n", estado2);

    printf("--> Código da carta: %s \n", codigo2);

    printf("--> Nome da cidade: %s \n", cidade2);

    printf("--> População: %d \n", populacao2);

    printf("--> Área: %f km²\n", area2); //delimitei o tanto de casas com .2

    printf("--> PIB: %f bilhões de reais\n", pib2); //delimitei o tanto de casas com o .2

    printf("--> Quantidade de pontos turísticos: %d \n", pontosturisticos2);

    printf("--> A densidade demográfica desse estado é:  %f habitantes por km² \n", densidadepopulacional2);
    
    printf("--> PIB PER CAPITA da cidade é:  %fR$ \n",pibpercapita2);



      printf("\n ============== COMPARAÇÃO DE CARTAS ==============\n");
      printf("\n -LEMBRETE: O = FALSO     1 = VERDADEIRO.\n");
      printf("População: A carta 1 venceu? [%d] \n", populacao1 > populacao2);
      printf("Área: A carta 1 venceu? [%d]\n",area1>area2);
      printf("PIB: A carta 1 venceu? [%d]\n", pib1>pib2);
      printf("Pontos turísticos: A carta 1 venceu? [%d]\n", pontosturisticos1>pontosturisticos2);
      printf("Densidade demográfica: A carta 1 venceu? [%d]\n", densidadepopulacional1<densidadepopulacional2);
      printf("PIB per capita: A carta 1 venceu? [%d]\n", pibpercapita1>pibpercapita2);
      printf("SUPER PODER: Carta 1 venceu? [%d] \n", superpoder1>superpoder2);



    //estou tendo problemas com as casas decimais dos valores grandes: como área, população e o pib
    // acredito que existam funções e comandos para "regular" esse pontos e vírgulas, mas ainda 
    // não foi passado na sala.
  printf("\n=========FIM=========\n");
 printf("\n \n");

    return 0;
}
