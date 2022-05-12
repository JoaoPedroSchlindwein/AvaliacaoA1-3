#include <stdio.h>

int main(void) {

  int menor = 0,
      maior = 0, 
      numero,
      numColunas, 
      col = 0,
      divisor, 
      contadorDePrimos = 0, 
      primo = 1, 
      contadorDeColunas = 0;
  
  while (menor <= 1){

    setbuf(stdin,NULL);
    printf("Informe o valor do limite inferior do intervalo: ");
    scanf("%d",&menor);
    
  }

  numero = menor;
  
  while (maior < menor){
  
    setbuf(stdin,NULL);
    printf("Informe o valor do limite superior do intervalo: ");
    scanf("%d", &maior);
    
  }
  
  printf("Informe quantos numeros deseja imprimir por linha: ");
  scanf("%d", &numColunas);
   
  while (numero <= maior){
    
    divisor = 2;  
    primo = 1;
   
    while (divisor < numero){
   
      if (numero % divisor == 0)
        primo = 0;

      divisor++; 
    }

    if (primo == 1){

      printf("%d\t",numero);  
      col += 1;
      
      if  (col == numColunas){
      
        col = 0;
        printf("\n");
      
      }
    
    }
    
    numero++;
  
  }
  
  return 0;
}