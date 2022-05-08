/*Implemente um programa que adivinhe o
"número mágico" entre 0 e 10. O programa deverá
imprimir a mensagem "Certo! %d é o número mágico"
quando o jogador acerta o número mágico, a mensagem
"Errado, muito alto", caso o jogador tenha digitado
um número maior que o número mágico e a mensagem
"Errado, muito baixo", caso o jogador tenha digitado
um número menor que o número mágico. O número
mágico é produzido usando o gerador de números
randômicos de C (função rand(), que exige o uso da
biblioteca stdlib.h).
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void) {
  int num;
  srand(time(0));//Utiliza um valor baseado no horário atual, o que garante variedade entre as execuções
  num = rand() % 10;
  int comparador = -1;
  printf("Insira um numero:\n>>> ");
  while (comparador != num){
    scanf("%d",&comparador);
    if (comparador < num)
      printf("Errado, muito baixo\n>>> ");
    else if (comparador > num)
      printf("Errado, muito alto\n>>> ");
    else
      printf("Certo! %d eh o numero magico\n",num);
    
  }
  return 0;
}