#include <stdio.h>
#include <string.h>

int main(void){

  char matriz[3][9];
  char nome[60];

  matriz[0][0] = 'a';
  matriz[0][1] = 'b';
  matriz[0][2] = 'c';
  matriz[0][3] = 'd';
  matriz[0][4] = 'e';
  matriz[0][5] = 'f';
  matriz[0][6] = 'g';
  matriz[0][7] = 'h';
  matriz[0][8] = 'i';

  matriz[1][0] = 'j';
  matriz[1][1] = 'k';
  matriz[1][2] = 'l';
  matriz[1][3] = 'm';
  matriz[1][4] = 'n';
  matriz[1][5] = 'o';
  matriz[1][6] = 'p';
  matriz[1][7] = 'q';
  matriz[1][8] = 'r';

  matriz[2][0] = 's';
  matriz[2][1] = 't';
  matriz[2][2] = 'u';
  matriz[2][3] = 'v';
  matriz[2][4] = 'w';
  matriz[2][5] = 'x';
  matriz[2][6] = 'y';
  matriz[2][7] = 'z';

  printf("Digite seu nome: ");
  fgets(nome, 60, stdin);
  printf("Length: %zu", strlen(nome));
  printf("o nome: %s", nome);

  for(int i = 0; i <= strlen(nome); i++){
    for(int l = 0; l <= 2; l ++){
      for(int c = 0; c <= 8; c++){
        if(matriz[l][c] == nome[i]){
          printf("%d + ", c + 1);
          // printf("Letra: %c", nome[i]);
        }
      }
    }
  }

  // for(int l = 0; l <= 2; l ++){
  //   for(int c = 0; c <= 8; c++){
  //     for(int i = 0; i <= strlen(nome); i++) {
  //       // if(matriz[l][c] == nome[i]){
  //       //   printf("Elemento %d posicao da matriz: %c", i, matriz[l][c]);
  //       // }
  //       printf("Letra: %c", nome[i]);
  //     }
  //     // printf("Valor da matriz [%c] na posicao [%d][%d] da matriz A: ",matriz[l][c], l, c);
  //   }
  // }

  
  return 0;
}