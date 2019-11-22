#include <stdio.h>
#include <stdbool.h> 

#define clear() printf("\033[H\033[J");

int main(void){
  int continuar;
  char *continuacao;
  int count = 0;
  int cod[10];
  char nome[60];
  int tel[60];
  int novo_tel;
  int opcao;
  int codigo_i;
  int cod_aux;
  char nome_i[20];
  int tel_i;

  continuar = 1;
  while(continuar == 1) {
    printf("=====================================");
    printf("\n");

    printf("*     MINHA AGENDA DE CONTATOS     *");
    printf("\n");

    printf("=====================================");
    printf("\n");

    printf("* 1 - Novo Contato                 *");
    printf("\n");
    printf("* 2 - Alterar Contato              *");
    printf("\n");
    printf("* 3 - Excluir Contato              *");
    printf("\n");
    printf("* 4 - Lista Todos os Contatos      *");
    printf("\n");

    printf("=====================================");
    printf("\n");


    printf("Informe a opcao: ");
    scanf("%d", &opcao);
    clear();

    if(opcao == 1){
      count += 1;
      printf("\n");

      printf("=====================================");
      printf("\n");

      printf("Novo Contato");
      printf("\n");

      printf("=====================================");
      printf("\n");
      
      printf("Informe o CODIGO do contato: ");
      scanf("%d", &codigo_i);
      printf("\n");

      printf("Informe o NOME do contato: ");
      fgets(nome_i, 20, stdin);
      printf("\n");


      printf("Informe o TELEFONE do contato: ");
      scanf("%d", &tel_i);
      printf("\n");
      
        
      cod[count] = codigo_i;
      // nome[count] = nome_i;
      tel[count] = tel_i;
      printf("=====================================");
      printf("\n");

      printf("Se desejar parar informe 0, se quer continuar informe 1 : ");
      scanf("%d", &continuar);
      printf("\n");
      printf("=====================================");

      clear();
    }

    if(opcao == 2) {
      printf("\n");
      printf("=====================================");
      printf("\n");

      printf("Alterar Contato");
      printf("\n");

      printf("=====================================");
      printf("\n");

      printf("Informe o CODIGO do contato: ");
      scanf("%d", &cod_aux);
      printf("\n");

      for(int i = 0; i <= count; i++){
        if(cod_aux == cod[i]) {
          printf("Informe o novo TELEFONE do contato: ");
          scanf("%d", &tel[i]);
        }
      }

      printf("Se desejar parar informe 0, se quer continuar informe 1 : ");
      scanf("%d", &continuar);
      printf("\n");

      printf("=====================================");
    
      clear();
    }

    if(opcao == 3) {
      printf("\n");
      printf("Informe o CÓDIGO do contato a ser excluido: ");
      scanf("%d", &cod_aux);
      printf("\n");

      for(int i = 0; i <= count; i++){
        if(cod_aux == cod[i]){
          cod[i] = -1;
          tel[i] = 0;
          clear();
          printf("=====================================");
          printf("\n");

          printf("O contato foi excluido");
          printf("\n");
          
          printf("=====================================");
          printf("\n");
          break;
        }
      }
      printf("Se desejar parar informe 0, se quer continuar informe 1 : ");
      scanf("%d", &continuar);
      printf("\n");

      printf("=====================================");
    
      clear();
    }



    if(opcao == 4) {
      printf("\n");
      printf("=====================================");
      printf("\n");

      printf("Lista todos os contatos");
      printf("\n");
      printf("=====================================");
      printf("\n");

      for(int i = 0; i <= count; i++){
        if(nome_i != 0){
          printf("Código do contato: %d",cod[i]);
          printf("\n");

          // printf("Nome do contato: ",nome[i]);
          // printf("\n");

          printf("Telefone do contato: %d",tel[i]);
          printf("\n");

          printf("=====================================");
          printf("\n");
        } else {
          printf("\n");
          printf("Não há contatos cadastrados na agenda.");
          printf("\n");

          printf("=====================================");
          printf("\n");
        }
      }
      printf("Se desejar parar informe 0, se quer continuar informe 1 : ");
      scanf("%d", &continuar);
      printf("\n");

      printf("=====================================");
    
      clear();
    }
  }



  return 0;
}