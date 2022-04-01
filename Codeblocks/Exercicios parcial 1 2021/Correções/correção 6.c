#include <stdio.h>
#include <stdlib.h>


int main (int argc, char *argv[]){

    int **matriz01;
    int **matriz02;
    int **matrizsoma;
    int totallinhas, totalcolunas;
    int indicelinha, indicecoluna;


    // solicitar ao user a dimensao da matriz

    printf("Informe a quantidade de linhas: \n");
    scanf("%d", &totallinhas);

    printf("Informe a quantidade de colunas: \n");
    scanf("%d", &totalcolunas);

    //aloca dinamicamente as linhas com apontadores para as coluna

    matriz01 = (int **) malloc (totallinhas * sizeof(int*));
    matriz02 = (int **) malloc (totallinhas * sizeof(int*));
    matrizsoma = (int **) malloc (totallinhas * sizeof(int*));

    // a cada linha, aloca dinamicamente as colunas
    //lembrar de indicar a linha onde esta se alocando as colunas

    for(indicelinha = 0; indicelinha <= totallinhas; indicelinha++){
        matriz01[indicelinha] = (int *) malloc (totalcolunas * sizeof(int));
        matriz02[indicelinha] = (int *) malloc (totalcolunas * sizeof(int));
        matrizsoma[indicelinha] = (int *) malloc (totalcolunas * sizeof(int));
    }

    for (indicelinha = 0; indicelinha < totallinhas; indicelinha++){
        for(indicecoluna = 0; indicecoluna < totalcolunas; indicecoluna++){
            matriz01[indicelinha][indicecoluna] = rand() % 50;
            matriz02[indicelinha][indicecoluna] = rand() % 50;
            matrizsoma[indicelinha][indicecoluna] = matriz01[indicelinha][indicecoluna]+
                                                    matriz02[indicelinha][indicecoluna];
        }
    }
    printf("\n\n===== MATRIZ 01: =====\n\n");
    for (indicelinha = 0; indicelinha < totallinhas; indicelinha++){
        for(indicecoluna = 0; indicecoluna < totalcolunas; indicecoluna++)
            printf("[ %d ]", matriz01[indicelinha][indicecoluna]);

            printf("\n");
    }

    printf("\n\n===== MATRIZ 02: =====\n\n");
    for (indicelinha = 0; indicelinha < totallinhas; indicelinha++){
        for(indicecoluna = 0; indicecoluna < totalcolunas; indicecoluna++)
            printf("[ %02d ]", matriz01[indicelinha][indicecoluna]);

            printf("\n");
    }

    printf("\n\n===== MATRIZ SOMA: =====\n\n");
    for (indicelinha = 0; indicelinha < totallinhas; indicelinha++){
        for(indicecoluna = 0; indicecoluna < totalcolunas; indicecoluna++)
            printf("[ %02d ]", matriz01[indicelinha][indicecoluna]);

            printf("\n");
    }

free(matriz01);
free(matriz02);
free(matrizsoma);

return 0;
}
