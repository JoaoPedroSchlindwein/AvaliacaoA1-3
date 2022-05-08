//c) Garantir que a quantidade seja maior que 0.
#include <stdio.h>
#include <ctype.h>

int main(void)
{
  char categoria;
  
  int quantidade = 0,
      soma = 0,
      total = 0;

  float media = 0;

  setbuf(stdin, NULL);
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
    setbuf(stdin,NULL);
    printf("Informe a categoria: ");
    scanf("%c", &categoria);
    categoria = toupper(categoria);
  }

  media = (float)soma / (float)total;

  if (total > 0)
    printf("A media dos produtos eh %.2f\n", media);

  else 
    printf("Nenhuma operacao valida foi realizada!\n");
    
  return 0;
}