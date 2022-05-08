#include <stdio.h>

int main(void) {
    int quantidade, 
      contadorProduto = 0,
      somaCompraInt,
      real,
      centavo;
    
  
  float valorUnitario = 1, 
        valorPorProduto = 0, 
        somaCompra = 0, 
        somaValorUnitario = 0, 
        valorMedio,
        centavoFloat;

    printf("Informe a quantidade de um produto: ");
    scanf("%d",&quantidade);

    while (quantidade > 0){
        do{
            printf("Informe o valor unitario de um produto: ");
            scanf("%f",&valorUnitario);

            if (valorUnitario < 0)
                printf("Eh menor que 0, valor nao contabilizado!\n");
        }while (valorUnitario < 0);

        valorPorProduto = valorUnitario * quantidade;
        somaCompra = somaCompra + valorPorProduto;
        somaValorUnitario = somaValorUnitario + valorUnitario * quantidade;
        contadorProduto = contadorProduto + quantidade;
        printf("\nInforme a quantidade de um produto: ");
        scanf("%d",&quantidade);
    }

   

    somaCompraInt = somaCompra * 100;
    if (contadorProduto > 0)
        valorMedio = somaValorUnitario/contadorProduto;
    else
        valorMedio = 0;
    centavo = somaCompraInt % 100;
    centavoFloat = (float)centavo / 100;
    real = somaCompraInt / 100;
    printf("\nVALOR TOTAL DA COMPRA: R$ %.2f\n",somaCompra);
    printf("VALOR MEDIO DA COMPRA: R$ %.2f\n\n",valorMedio);
    printf("O valor total da compra eh %d reais e %d centavos.\n",real, centavo);

    return 0;
}