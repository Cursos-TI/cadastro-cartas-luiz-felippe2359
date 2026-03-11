#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
    printf("Jogo do trunfo \n");

    char estado1[50],estado2[50];
    char codigo1[3],codigo2[3];
    char cidade1[50],cidade2[50];
    int populacao1,populacao2;
    float pib1,pib2;
    float area1,area2;
    int turistico1,turistico2;

  
  // Área para entrada de dados
    printf("cadastro da primeira carta \n");

    printf("Digite o estado: ");
    scanf("%s",estado1);
    
    printf("Digite o codigo: ");
    scanf("%s",codigo1);

    printf("Digite a cidade: ");
    scanf("%s",cidade1);

    printf("Digite o numero da populaçao: ");
    scanf("%d",&populacao1);

    printf("Digite o tamanho do territorio: ");
    scanf("%f",&area1);

    printf("Digite o numero de pontos turisticos: ");
    scanf("%d",&turistico1);

    printf("cadastro da segunda carta \n");

    printf("Digite o estado: ");
    scanf("%s",estado2);
    
    printf("Digite o codigo: ");
    scanf("%s",codigo2);

    printf("Digite a cidade: ");
    scanf("%s",cidade2);

    printf("Digite o numero da populaçao: ");
    scanf("%i",&populacao2);

    printf("Digite o tamanho do territorio: ");
    scanf("%f",&area2);

    printf("Digite o numero de pontos turisticos: ");
    scanf("%d",&turistico2);
  
  // Área para exibição dos dados da cidade
    printf("Visualizando as cartas \n");

    printf("Visualizando primeira carta \n");

    printf("Estado: %s \n",estado1);
    printf("Codigo: %s \n",codigo1);
    printf("Cidade: %s \n",cidade1);
    printf("Populaçao: %d \n", populacao1);
    printf("Territorio: %f \n",area1);
    printf("Pontos turisticos: %d \n", turistico1);

    printf("Visualizando segunda carta \n");

    printf("Estado: %s \n",estado2);
    printf("Codigo: %s \n",codigo2);
    printf("Cidade: %s \n",cidade2);
    printf("Populaçao: %d \n", populacao2);
    printf("Territorio: %f \n",area2);
    printf("Pontos turisticos: %d \n", turistico2);
  
return 0;
} 
