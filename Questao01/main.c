//b) Permitir a leitura da categoria nas execuções sucessivas do programa.
#include <stdio.h>
#include <ctype.h>

int main(void)
{
  char categoria;
  
  int quantidade,
      soma,
      total;

  float media;
  setbuf(stdin,NULL);
  printf("Informe a categoria: ");
  scanf("%c", &categoria);
  categoria = toupper(categoria);
  
  while (categoria == 'A' || categoria == 'B' || categoria == 'C'){

    printf("Informe a quantidade: ");
    scanf("%f", &quantidade);
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