#include <stdio.h>

int main(void)
{

    int matriz[5][5];

    // Inicializando os elementos dos vetores em 0
    int soma_linhas[5] = {0, 0, 0, 0, 0};
    int soma_colunas[5] = {0, 0, 0, 0, 0};

    int i, j;

    // Montando a matriz

    printf("Insira os dados da matriz: \n");
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            printf("%d:%d = ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    // Calculando a soma das linhas e colunas

    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            // A cada loop externo a soma de uma linha inteira é realizada.
            soma_linhas[i] += matriz[i][j];

            // Aqui eu usei o valor do j para incrementar no vetor de colunas a soma da coluna correspondente.
            // Ou seja, em cada loop externo cada uma das somas das colunas é parcialmente incrementada, ao contrário das linhas.
            soma_colunas[j] += matriz[i][j];
        }
    }

    // A partir daqui é so a impressão da matriz e das somas de linhas/colunas

    printf("MATRIZ: \n");
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            printf("(%d)", matriz[i][j]);
        }
        printf("\n");
    }

    printf("SOMA DAS LINHAS: ");
    for (i = 0; i < 5; i++)
    {
        printf("%d, ", soma_linhas[i]);
    }
    printf("\n");

    printf("SOMA DAS COLUNAS: ");
    for (i = 0; i < 5; i++)
    {
        printf("%d, ", soma_colunas[i]);
    }
    printf("\n");

    return 0;
}