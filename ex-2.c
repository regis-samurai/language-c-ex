#include <stdio.h>
int main(void){

  int matriz[4][9];
  char letter = 'a';
  printf("%d", (char)(((int)letter) + 1));
  
  // for(int l = 0; l < 4; l++){
  //   for(int c = 0; c < 9; c++){
     

  //     if(l == 1 && c == 0){
  //       matriz[l][c] = letter;
  //       continue;
  //     }

  //     matriz[l][c] = (char)(((int)letter) + 1);
  //     printf("%s", matriz[l][c]);
  //     printf("%s", matriz[l][c]);
  //   }
  // }

  
  return 0;
}