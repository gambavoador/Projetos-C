#include <stdio.h>
#include <stdlib.h>

int main()
{
    float **matriz;
    int linhas, colunas, quantidadelinhas, quantidadecolunas;

    printf("digite a quantidade de linhas: ");
    scanf("%d", &linhas);
    printf("digite a quantidade de colunas: ");
    scanf("%d", &colunas);

    matriz = (float**) malloc (linhas * sizeof(int*));

    for (quantidadelinhas = 0; quantidadelinhas < linhas; quantidadelinhas++){

        matriz = (float**) malloc (linhas * sizeof(int*));
    }

    for (quantidadelinhas = 0; quantidadelinhas < linhas; quantidadelinhas++){
        for (quantidadecolunas = 0; quantidadecolunas < colunas; quantidadecolunas++){
            printf("digite o numero da posicao [%d] [%d]: ", quantidadelinhas, quantidadecolunas);
            scanf("%f", &matriz[quantidadelinhas] [quantidadecolunas]);
        }
    }
    for (quantidadelinhas = 0; quantidadelinhas < linhas; quantidadelinhas++){
        for (quantidadecolunas = 0; quantidadecolunas < colunas; quantidadecolunas++){
            printf("numero da posicao [%d] [%d] : %.2f\n", quantidadelinhas, quantidadecolunas, matriz[quantidadelinhas] [quantidadecolunas]);
        }
    }

}
