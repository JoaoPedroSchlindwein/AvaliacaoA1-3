/*
   Faça o programa que apresente a seguinte
saída como no exemplo, perguntando ao usuário o
número máximo (deve ser positivo)*/

#include <stdio.h>
#include <ctype.h>

int main(void) {
  int num;
  char simOuNao = 'S';
  while (simOuNao == 'S'){
    printf("Informe um numero positivo: ");
    scanf("%d",&num);
    for (int i = 1; i <= num; i++){
      for(int j = 1; j <= i; j++)
        printf("%d\t",i);
      printf("\n");
    }
    printf("\n\n");
    printf("Deseja digitar outro numero (S ou N): ");
    scanf("%s",&simOuNao);
    simOuNao = toupper(simOuNao);
    printf("\n");
  }
    return 0;
}