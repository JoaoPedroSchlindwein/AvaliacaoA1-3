/*b) Permitir a leitura da categoria nas execuções
sucessivas do programa.*/
#include <stdio.h>

int main(void) {
  char categoria;
  int quantidade, soma, total;
  float media;
  printf("Informe a categoria: ");
  scanf("%c", &categoria);
  while (categoria == 'A' || categoria == 'B' || categoria == 'C')
    {
      
      printf("Informe a quantidade: ");
      scanf("%d", &quantidade);
      
      soma = soma + quantidade;
      total ++;
      media = soma / quantidade;
      printf("Informe a categoria: ");
      setbuf(stdin,NULL);
      scanf("%c", &categoria);
    }
  printf("A media dos produtos eh %.2f", media);
  
  return 0;
}