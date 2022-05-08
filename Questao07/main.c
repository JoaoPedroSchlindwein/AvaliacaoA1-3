/* 7 - A Ler a quantidade e o respectivo valor de
produtos. Parar a leitura quando informado valor 0 ou
negativo para a quantidade. Ler o valor somente se
informada quantidade válida (positivo).
a) Calcular o valor total da compra.
*/
  #include <stdio.h>

int main(void) {
  int quantidade;
  float valor = 1, valorPorProduto = 0, soma = 0;
  printf("Quantidade: ");
  scanf("%d",&quantidade);
  while (quantidade > 0){
    do{
    printf("Valor: ");
    scanf("%f",&valor);
    if (valor < 0)
      printf("Eh menor que 0, valor nao contabilizado!\n");
    }while (valor < 0);
    
    valorPorProduto = valor * quantidade;
    //printf("Valor por produto: R$ %.2f\n",valorPorProduto); Teste de semântica, verificando o funcionamento do valor
    // por produto
    //valor = 0; Teste de sintaxe
    soma = soma + valorPorProduto;
    //printf("Total parcial: R$ %.2f\n\n",soma); Teste de semântica
      
    
    printf("\nQuantidade: ");
    scanf("%d",&quantidade);
  
    }
  for (int i = 0; i < 25; i++){
    printf("-");
  }
  
  printf("\nTotal final: %.2f\n\n",soma);
  
  return 0;
}