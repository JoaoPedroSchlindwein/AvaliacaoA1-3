/*A figura a seguir representa uma árvore de
decisão para identificar se um paciente está saudável
ou doente. Elabore um programa que implementa essa
árvore de decisão.*/

#include <stdio.h>

int main(void) {
  float temp;
  char simOuNao;
  printf("Paciente esta bem? \n");
  scanf("%s",&simOuNao);
  if (simOuNao == 'S' || simOuNao == 's')
    printf("Saudavel");
    
  else {
    printf("Paciente tem dor? \n");
    scanf("%s",&simOuNao);
    
    if (simOuNao == 'S' || simOuNao == 's')
      printf("Doente");
      
    else{
      printf("Temperatura do paciente \n");
      scanf("%f",&temp);
      
      if (temp > 37)
        printf("Doente");
        
      else
        printf("Saudavel");
    }
  }
  return 0;
}
