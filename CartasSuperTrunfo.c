#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
   
    char Estado1 [20];
    char Codigo1 [4];  
    char Nome1 [20];
    int Populacao1;
    float Pib1;
    int PontosTuristicos1;
    float Area1;
    
    char Codigo2 [4];  
    char Nome2 [20];
    int Populacao2;
    float Pib2;
    int PontosTuristicos2;
    float Area2;
   /*--------------------------------------*/
    char Estado2 [20];
    char Codigo3 [4];  
    char Nome3 [20];
    int Populacao3;
    float Pib3;
    int PontosTuristicos3;
    float Area3;

    char Codigo4 [4];  
    char Nome4 [20];
    int Populacao4;
    float Pib4;
    int PontosTuristicos4;
    float Area4;

    // Cadastro das Cartas: 
   printf("Digite o estado das cartas (Ex:A,B,C):");
   scanf("%s", Estado1);
   printf("Digite o código da cidade (Ex:A01,A02): \n");
   scanf("%s", Codigo1);
   printf("Digite o nome da cidade: \n");
   scanf("%s", Nome1);
   printf("Digite o número da populaçao: \n");
   scanf("%d", &Populacao1);
   printf("Digite o Pib: \n");
   scanf("%f", &Pib1);
   printf("Digite o número de pontos turísticos: \n");
   scanf("%d", &PontosTuristicos1);
   printf("Digite a área (em km²): \n");
   scanf("%f", &Area1);
   
   printf("\n----------------------------------\n"); /*Para melhor organização*/
 
   printf("Digite o código de outra cidade: \n"); /*informações da segunda cidade do Estado*/
   scanf("%s", Codigo2);
   printf("Digite o nome da cidade: \n");
   scanf("%s", Nome2);
   printf("Digite o número da populaçao: \n");
   scanf("%d", &Populacao2);
   printf("Digite o Pib: \n");
   scanf("%f", &Pib2);
   printf("Digite o número de pontos turísticos: \n");
   scanf("%d", &PontosTuristicos2);
   printf("Digite a área (em km²): \n");
   scanf("%f", &Area2);
   printf("\n----------------------------------\n"); /*Para melhor organização*/

   printf("Digite outro estado:"); /*Estado 2*/
   scanf("%s", Estado2);
   printf("Digite o código da cidade: \n");
   scanf("%s", Codigo3);
   printf("Digite o nome da cidade: \n");
   scanf("%s", Nome3);
   printf("Digite o número da populaçao: \n");
   scanf("%d", &Populacao3);
   printf("Digite o Pib: \n");
   scanf("%f", &Pib3);
   printf("Digite o número de pontos turísticos: \n");
   scanf("%d", &PontosTuristicos3);
   printf("Digite a área (em km²): \n");
   scanf("%f", &Area3);
   printf("\n----------------------------------\n"); /*Para melhor organização*/

   printf("Digite o código de outra cidade: \n"); /*Segunda cidade do estado*/
   scanf("%s", Codigo4);
   printf("Digite o nome da cidade: \n");
   scanf("%s", Nome4);
   printf("Digite o número da populaçao: \n");
   scanf("%d", &Populacao4);
   printf("Digite o Pib: \n");
   scanf("%f", &Pib4);
   printf("Digite o número de pontos turísticos: \n");
   scanf("%d", &PontosTuristicos4);
   printf("Digite a área (em km²): \n");
   scanf("%f", &Area4);

  printf("\n----------------------------------\n"); /*Para melhor organização*/
  printf("Cartas de cidades do Estado %s\n",Estado1);
  printf("\n");/*Para melhor organização*/

  printf("Código da cidade: %s\n",Codigo1);
  printf("Nome da cidade: %s\n", Nome1);
  printf("Número da população: %d\n", Populacao1);
  printf("Pib da cidade: %f\n",Pib1);
  printf("Número de pontos turisticos: %d\n",PontosTuristicos1);
  
  printf("\n\n");/*Para melhor organização*/

  printf("Código da cidade: %s\n",Codigo2);
  printf("Nome da cidade: %s\n", Nome2);
  printf("Número da população: %d\n", Populacao2);
  printf("Pib da cidade: %f\n",Pib2);
  printf("Número de pontos turisticos: %d\n", PontosTuristicos2);

  printf("\n----------------------------------\n"); /*Para melhor organização*/
  printf("Cartas de cidades do Estado %s\n",Estado2);
  printf("\n");/*Para melhor organização*/

  printf("Código da cidade: %s\n",Codigo3);
  printf("Nome da cidade: %s\n", Nome3);
  printf("Número da população: %d\n", Populacao3);
  printf("Pib da cidade: %f\n",Pib3);
  printf("Número de pontos turisticos: %d\n",PontosTuristicos3);

  printf("\n\n"); /*Para melhor organização*/

  printf("Código da cidade: %s\n",Codigo4);
  printf("Nome da cidade: %s\n", Nome4);
  printf("Número da população: %d\n", Populacao4);
  printf("Pib da cidade: %f\n",Pib4);
  printf("Número de pontos turisticos: %d\n", PontosTuristicos4);
  printf("\n----------------------------------\n"); /*Para melhor organização*/A

    return 0;
}
