//c) Garantir que a quantidade seja maior que 0.
#include <stdio.h>
#include <ctype.h>

int main(void)
{
  char categoria;
  
  int quantidade = 0,
      soma,
      total;

  float media;
  setbuf(stdin,NULL);
  printf("Informe a categoria: ");
  scanf("%c", &categoria);
  categoria = toupper(categoria);
  
  while (categoria == 'A' || categoria == 'B' || categoria == 'C'){
    do{
        printf("Informe a quantidade: ");
        scanf("%d", &quantidade);
      }while (quantidade <= 0);
    soma = soma + quantidade;
    total++;
    media = soma / quantidade;
    setbuf(stdin,NULL);
    printf("Informe a categoria: ");
    scanf("%c", &categoria);
    categoria = toupper(categoria);
  }

  printf("A media dos produtos eh %.2f", media);

  return 0;
}