#include <stdio.h>
#include <stdlib.h>

int main()
{
    int **matriz;
    int linhas, colunas, quantidadelinhas, quantidadecolunas, maiorquedez;

    printf("digite a quantidade de linhas: ");
    scanf("%d", &linhas);
    printf("digite a quantidade de colunas: ");
    scanf("%d", &colunas);

    matriz = (int**) malloc (linhas * sizeof(int*));

    for (quantidadelinhas = 0; quantidadelinhas < linhas; quantidadelinhas++){

        matriz = (int**) malloc (linhas * sizeof(int*));
    }

    for (quantidadelinhas = 0; quantidadelinhas < linhas; quantidadelinhas++){
        for (quantidadecolunas = 0; quantidadecolunas < colunas; quantidadecolunas++){
            printf("digite o numero da posicao [%d] [%d]: ", quantidadelinhas, quantidadecolunas);
            scanf("%d", &matriz[quantidadelinhas] [quantidadecolunas]);
            if (matriz[quantidadelinhas] [quantidadecolunas] >= 10)
                maiorquedez++;
        }
    }
    for (quantidadelinhas = 0; quantidadelinhas < linhas; quantidadelinhas++){
        for (quantidadecolunas = 0; quantidadecolunas < colunas; quantidadecolunas++){
            printf("numero da posicao [%d] [%d] : %d \n", quantidadelinhas, quantidadecolunas, matriz[quantidadelinhas] [quantidadecolunas]);
        }
    }
    printf("quantidade de numeros maiores que dez: %d", maiorquedez);
    free(matriz[quantidadelinhas] [quantidadecolunas]);
}
