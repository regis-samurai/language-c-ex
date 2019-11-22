#include <stdio.h>


// void decToBase(int *num_dec, int base) {
//   int resto;
//   int valor_base;
//    if(num_dec == 0) {
//      printf("0\n");
//    }
//    while(num_dec > 0) {
//      resto = num_dec % base;
//      num_dec = num_dec / base;
//      valor_base = valor_base + resto;
//    }
//    printf("Valor: %d", valor_base);
// }

int main(void){
  int decimal, base, resto, valor_base;

  printf("Informe o numero de base decimal que queira converter: \n");
  scanf("%d", &decimal);

  printf("Informe para qual base quer (2 a 36): \n");
  scanf("%d", &base);


  if(decimal == 0){
    printf("0\n");
  }

  while(decimal > 0){
    resto = decimal % base;
    decimal = decimal / base;
    valor_base = valor_base + resto;
  }

  printf("Valor: %d", valor_base);

  return 0;
}