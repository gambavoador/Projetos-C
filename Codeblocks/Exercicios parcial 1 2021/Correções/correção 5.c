#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv[]){

    int **matrizdinamica;
    int totallinhas, totalcolunas;
    int indicelinha, indicecoluna;
    int maiorvalor, linhamaiorvalor, colunamaiorvalor;

    srand(time(NULL));


    // solicitar ao user a dimensao da matriz

    printf("Informe a quantidade de linhas: \n");
    scanf("%d", &totallinhas);

    printf("Informe a quantidade de colunas: \n");
    scanf("%d", &totalcolunas);

    //aloca dinamicamente as linhas com apontadores para as colunas

    matrizdinamica = (int**) malloc (totallinhas * sizeof(int*));

    // a cada linha, aloca dinamicamente as colunas

    for(indicelinha = 0; indicelinha <= totallinhas; indicelinha++){
        matrizdinamica[indicelinha] = (int *) malloc (totalcolunas * sizeof(int));
    }
    //alimenta a matriz randmicamente

    for(indicelinha = 0; indicelinha <= totallinhas; indicelinha++){
        for (indicecoluna = 0; indicecoluna < totalcolunas; indicecoluna++){
            matrizdinamica[indicelinha][indicecoluna] = rand() %100;
             printf("[ %d ]", matrizdinamica[indicelinha][indicecoluna]);

            //o maior valor passa a ser o primeiro elemento da matriz
            // na posicao de linha 0 e coluna 0

            if(indicelinha ==0 && indicecoluna ==0)
                maiorvalor = matrizdinamica [0][0];

                //checa se o item da linha x coluna lida e maior que o maiorvalor
                // se for, atualiza o maiorvalor
                if(matrizdinamica[indicelinha][indicecoluna] > maiorvalor){
                    maiorvalor = matrizdinamica[indicelinha][indicecoluna];
                    linhamaiorvalor = indicelinha;
                    colunamaiorvalor = indicecoluna;
                }
        }
        printf("\n");
    }

    printf("O maior valor da matriz e: %d na posicao [%d, %d]", maiorvalor, linhamaiorvalor, colunamaiorvalor);

    free(matrizdinamica);
    return 0;
}
