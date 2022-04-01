#include <stdio.h>
#include <stdlib.h>

int main()
{
    int matriz[ 3 ][ 3 ], vetor [ 3 ], linha, coluna;

    for (linha = 0; linha < 3; linha++){
    for (coluna = 0; coluna < 3; coluna++){
        printf("Digite o numero da matriz na posicao [%d , %d] \n", linha , coluna);
        scanf( "%d", &matriz [ linha ][ coluna ]);
    }
    vetor[ linha ] = 0;
    }
    for (coluna = 0; coluna < 3; coluna++){
        for( linha = 0; linha < 3; linha++)
    {
    vetor [ coluna ] = vetor [ coluna ] + matriz [ linha ] [ coluna ];
    }
    }
    for (linha = 0; linha < 3; linha++){
    printf("[ %d ]", vetor [ linha ]);
   }
   free (matriz);
}
