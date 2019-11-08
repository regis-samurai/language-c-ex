#include <stdio.h>
int main(void){

  int matrizA[3][2];
  int matrizB[2][2];


  for(int l = 0; l <= 3; l++){
    for(int c = 0; c <= 2; c++){
      printf("Informe o valor da posicao [%d][%d] da matriz A", l, c);
    }
  }
  return 0;
}