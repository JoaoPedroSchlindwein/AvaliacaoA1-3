/* 7 - A Ler a quantidade e o respectivo valor de
produtos. Parar a leitura quando informado valor 0 ou
negativo para a quantidade. Ler o valor somente se
informada quantidade válida (positivo).
a) Calcular o valor total da compra.
*/
  #include <stdio.h>

int main(void) {
    int quantidade,
        contadorProduto = 0;

    float valorUnitario = 1, 
        valorPorProduto = 0, 
        somaCompra = 0, 
        somaValorUnitario = 0, 
        valorMedio;

    printf("Quantidade: ");
    scanf("%d",&quantidade);

    while (quantidade > 0){
        do{
            printf("Valor: ");
            scanf("%f",&valorUnitario);
            if (valorUnitario < 0)
                printf("Eh menor que 0, valor nao contabilizado!\n");
        }while (valorUnitario < 0);

        valorPorProduto = valorUnitario * quantidade;
        somaCompra = somaCompra + valorPorProduto;
        somaValorUnitario = somaValorUnitario + valorUnitario;
        contadorProduto = contadorProduto + 1;
        printf("\nQuantidade: ");
        scanf("%d",&quantidade);
    }

    for (int i = 0; i < 25; i++){
        printf("-");
    }

    valorMedio = somaValorUnitario/contadorProduto;
    printf("\nTotal final: %.2f\n",somaCompra);
    printf("Valor medio dos itens: %.2f",valorMedio);

    return 0;
}