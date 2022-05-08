/*a) Ler a quantidade somente se a categoria é válida
(categorias A, B e C válidas).*/
#include <stdio.h>
#include <ctype.h>

int main(void)
{
  char categoria;
  
  int quantidade,
      soma,
      total;

  float media;
  
  printf("Informe a categoria: ");
  scanf("%c", &categoria);
  categoria = toupper(categoria);
  
  while (categoria == 'A' || categoria == 'B' || categoria == 'C'){

    printf("Informe a quantidade: ");
    scanf("%f", &quantidade);
    soma = soma + quantidade;
    total++;
    media = soma / quantidade;
    printf("Informe a categoria: ");
    scanf("%c", &categoria);
  
  }

  printf("A media dos produtos eh %.2f", media);

  return 0;
}