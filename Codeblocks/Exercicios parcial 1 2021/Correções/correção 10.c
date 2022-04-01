#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {

    float **matrizfloat;
    int totallinhas, totalcolunas;
    int indicelinha, indicecoluna;

    printf("informe o total de linhas: \n");
    scanf("%d", &totallinhas);

    printf("informe o total de colunas: \n");
    scanf("%d", &totalcolunas);

    //sintaxe basica de alocacao dinamica de matrizes

    matrizfloat = (float **)malloc(totallinhas * sizeof(float*));
    for(indicelinha = 0; indicelinha < totallinhas; indicecoluna++)
        matrizfloat[indicelinha] = (float *)malloc(totalcolunas * sizeof(float));

    for(indicelinha = 0; indicelinha < totallinhas; indicecoluna++){

        for (indicecoluna = 0; indicecoluna < totalcolunas; indicecoluna++)
        printf("[ %x ]", &matrizfloat[indicelinha][indicecoluna]);

    printf("\n");

    }

    free(matrizfloat);

    return 0;
}
