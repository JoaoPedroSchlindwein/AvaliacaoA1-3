#include <stdio.h>
#include <ctype.h>

int main(void)
{
    int quantidade,
        contadorProduto = 0,
        somaCompraInt,
        real,
        centavo,
        contadorDeNotas,
        notas[7] = {100, 50, 20, 10, 5, 2, 1};

    float valorUnitario = 1,
          valorPorProduto,
          somaCompra = 0,
          somaValorUnitario = 0,
          valorMedio,
          centavoFloat;

    char simOuNao = 'S';

    while (simOuNao == 'S')
    {
        somaCompra = somaValorUnitario = contadorProduto = 0;
        printf("Informe a quantidade de um produto: ");
        scanf("%d", &quantidade);

        while (quantidade > 0)
        {
            do
            {
                printf("Informe o valor unitario de um produto: ");
                scanf("%f", &valorUnitario);

                if (valorUnitario < 0)
                    printf("Eh menor que 0, valor nao contabilizado!\n");
            } while (valorUnitario < 0);

            valorPorProduto = valorUnitario * quantidade;
            somaCompra = somaCompra + valorPorProduto;
            somaValorUnitario = somaValorUnitario + valorUnitario * quantidade;
            contadorProduto = contadorProduto + quantidade;
            printf("\nInforme a quantidade de um produto: ");
            scanf("%d", &quantidade);
        }

        somaCompraInt = somaCompra * 100;
        if (contadorProduto > 0)
            valorMedio = somaValorUnitario / contadorProduto;
        else
            valorMedio = 0;
        centavo = somaCompraInt % 100;
        real = somaCompraInt / 100;
        printf("\nVALOR TOTAL DA COMPRA: R$ %.2f\n", somaCompra);
        printf("VALOR MEDIO DA COMPRA: R$ %.2f\n\n", valorMedio);
        printf("O valor total da compra eh %d reais e %d centavos.\n\n", real, centavo);
        printf("%d reais equivale a:\n\n", real);

        for (int i = 0; i < 7; i++)
        {
            contadorDeNotas = 0;
            while (real / notas[i] > 0)
            {
                real = real - notas[i];
                contadorDeNotas += 1;
            }
            if (contadorDeNotas > 0)
                printf("%d nota(s) de %d\n", contadorDeNotas, notas[i]);
        }
        printf("\nDeseja repetir o programa (S ou N)? ");
        scanf("%s", &simOuNao);
        simOuNao = toupper(simOuNao);
        printf("\n");
    }
    return 0;
}