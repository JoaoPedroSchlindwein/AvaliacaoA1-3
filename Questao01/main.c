#include <stdio.h>
#include <ctype.h>
int main(void) {
  char categoria;

  int quantidade,
  soma = 0,
  total = 0;

  float media = 0;

  printf("Informe a categoria: ");
  scanf("%s", &categoria);
  categoria = toupper(categoria);

  while (categoria == 'A' || categoria == 'B' || categoria == 'C')
    {
      quantidade = 0;
      do{
        printf("Informe a quantidade: ");
        scanf("%d", &quantidade);
        
      }while (quantidade <= 0);

      soma = soma + quantidade;
      total++;
      printf("Informe a categoria: ");
      scanf("%s", &categoria);
      categoria = toupper(categoria);
    }

  if (total > 0){

    media = (float)soma / (float)total;
    printf("A media dos produtos eh %.2f", media);

  }

  else
    printf("Nao ha produtos!");
  
  return 0;
}