#include <stdio.h>
int main(void){

  int matrizA[3][2];
  int matrizB[2][2];
  int matrizAB[3][2];
  int soma;


  for(int l = 0; l < 3; l++){
    for(int c = 0; c < 2; c++){
      printf("Informe o valor da posicao [%d][%d] da matriz A: ", l, c);
      scanf("%d", &matrizA[l][c]);
    }
  }

  for(int l = 0; l < 2; l++){
    for(int c = 0; c < 2; c++){
      printf("Informe o valor da posicao [%d][%d] da matriz B: ", l, c);
      scanf("%d", &matrizB[l][c]);
    }
  }

  for(int l = 0; l < 3; l++){
    for(int c = 0; c < 2; c++){
      soma = 0;
      for(int i = 0;i <= 3; i++) soma += matrizA[l][i] * matrizB[i][c];
      matrizAB[l][c] = soma;
    }
  }
  for(int l = 0; l < 3; l++){
    for(int c = 0; c < 2; c++){
     printf("%d", matrizAB[l][c]);
    }
    printf("\n");
  }

  
  return 0;
}