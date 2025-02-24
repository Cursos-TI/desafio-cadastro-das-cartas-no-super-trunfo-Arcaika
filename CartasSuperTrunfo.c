#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.


int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades

    char Codigo1 [4];  
    char Nome1 [20];
    int Populacao1;
    float Pib1;
    int PontosTuristicos1;
    char Estado1 [20];
    
    char Codigo2 [4];  
    char Nome2 [20];
    int Populacao2;
    float Pib2;
    int PontosTuristicos2;

    char Codigo3 [4];  
    char Nome3 [20];
    int Populacao3;
    float Pib3;
    int PontosTuristicos3;
    char Estado2 [20];
    
    char Codigo4 [4];  
    char Nome4 [20];
    int Populacao4;
    float Pib4;
    int PontosTuristicos4;


    

    
    
    
    // Cadastro das Cartas: 
   printf("Digete o estado das cartas (Ex:A,B,C):");
   scanf("%s", Estado1);
   printf("Digite o código da cidade (Ex:A01,A02): \n");
   scanf("%s", Codigo1);
   printf("Digite o nome da cidade: \n");
   scanf("%s", Nome1);
   printf("Digete o número da populaçao: \n");
   scanf("%d", &Populacao1);
   printf("Digite o Pib: \n");
   scanf("%f", &Pib1);
   printf("Digite o número de pontos turísticos: \n");
   scanf("%d", &PontosTuristicos1);
   
 
   printf("Digite o código de outra cidade: \n");
   scanf("%s", Codigo2);
   printf("Digite o nome da cidade: \n");
   scanf("%s", Nome2);
   printf("Digete o número da populaçao: \n");
   scanf("%d", &Populacao2);
   printf("Digite o Pib: \n");
   scanf("%f", &Pib2);
   printf("Digite o número de pontos turísticos: \n");
   scanf("%d", &PontosTuristicos2);
   
   printf("Digete outro estado:");
   scanf("%s", Estado2);
   printf("Digite o código da cidade: \n");
   scanf("%s", Codigo3);
   printf("Digite o nome da cidade: \n");
   scanf("%s", Nome3);
   printf("Digete o número da populaçao: \n");
   scanf("%d", &Populacao3);
   printf("Digite o Pib: \n");
   scanf("%f", &Pib3);
   printf("Digite o número de pontos turísticos: \n");
   scanf("%d", &PontosTuristicos3);
   
   printf("Digite o código de outra cidade: \n");
   scanf("%s", Codigo4);
   printf("Digite o nome da cidade: \n");
   scanf("%s", Nome4);
   printf("Digete o número da populaçao: \n");
   scanf("%d", &Populacao4);
   printf("Digite o Pib: \n");
   scanf("%f", &Pib4);
   printf("Digite o número de pontos turísticos: \n");
   scanf("%d", &PontosTuristicos4);

  printf("Cidades do Estado %s\n",Estado1);
  
  printf("Código da cidade: %s\n",Codigo1);
  printf("Nome da cidade: %s\n", Nome1);
  printf("Número da população: %d\n", Populacao1);
  printf("Pib da cidade: %f\n",Pib1);
  printf("Número de pontos turisticos: %d\n",PontosTuristicos1);

  printf("Código da cidade: %s\n",Codigo2);
  printf("Nome da cidade: %s\n", Nome2);
  printf("Número da população: %d\n", Populacao2);
  printf("Pib da cidade: %f\n",Pib2);
  printf("Número de pontos turisticos: %d\n", PontosTuristicos2);

  printf("Cidades do Estado %s\n",Estado2);

  printf("Código da cidade: %s\n",Codigo3);
  printf("Nome da cidade: %s\n", Nome3);
  printf("Número da população: %d\n", Populacao3);
  printf("Pib da cidade: %f\n",Pib3);
  printf("Número de pontos turisticos: %d\n",PontosTuristicos3);

  printf("Código da cidade: %s\n",Codigo4);
  printf("Nome da cidade: %s\n", Nome4);
  printf("Número da população: %d\n", Populacao4);
  printf("Pib da cidade: %f\n",Pib4);
  printf("Número de pontos turisticos: %d\n", PontosTuristicos4);


  

   

       
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
