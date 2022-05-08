#include <stdio.h>

int main(void) {
  int menor, maior, n, divisor, contadorDePrimos = 0, primo = 1;
  
  menor = maior = 0;
  while (menor <= 1){
    setbuf(stdin,NULL);
    printf("Informe o valor do limite inferior do intervalo: ");
    scanf("%d",&menor);
    
  }
  while (maior < menor){
    setbuf(stdin,NULL);
    printf("Informe o valor do limite superior do intervalo: ");
    scanf("%d", &maior);
    
  }
  int listaDePrimos [maior];
  printf("Informe quantos numeros deseja imprimir por linha: ");
  scanf("%d", &n);
  
  while (menor < maior){
    
    divisor = 2;
    
    primo = 1;
    while (divisor < menor){
      if (menor % divisor == 0)
        primo = 0;
      divisor++;
    }
    if (primo){
      listaDePrimos[contadorDePrimos] = menor;
      
      contadorDePrimos += 1;
      
    }
    
    menor++;
  }
  for (int i = 0; i < contadorDePrimos; i++){
    printf("%d\t",listaDePrimos[i]);
    if ((i+1)%n == 0)
      printf("\n");
  }
  return 0;
}