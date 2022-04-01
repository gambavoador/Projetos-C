#include <stdio.h>
#include <stdlib.h>


int main ()
{
    int **matrizdinamica;
    int totallinhas, totalcolunas;
    int indicelinha, indicecoluna, maiorquedez;

    printf("Digite a quantidade de linhas da matriz: ");
    scanf("%d", &totallinhas);

    printf("Digite a quantitade de colunas da matriz: ");
    scanf("%d", &totalcolunas);

   matrizdinamica = (int**)malloc(totallinhas * sizeof(int*));
   for (indicelinha = 0; indicelinha < totallinhas; indicelinha++){
    matrizdinamica = (int * ) malloc(totalcolunas * sizeof(int));
   }

   for (indicelinha = 0; indicelinha < totallinhas; indicelinha++){
    for (indicecoluna = 0; indicecoluna < totalcolunas; indicecoluna++){
        printf("Digite o valor da posicao [ %d, %d] : ", indicelinha, indicecoluna);
        scanf("%d", &matrizdinamica[indicelinha][indicecoluna]);

        if (matrizdinamica[indicelinha][indicecoluna] > 10)
            maiorquedez++;
    }
   }
   for(indicelinha - 0; indicelinha < totallinhas; indicelinha++){
    for(indicecoluna - 0; indicecoluna < totalcolunas; indicecoluna++){
        printf("Posicao [%d, %d]: %d \n", indicelinha, indicecoluna, matrizdinamica[indicelinha]);

    }
   }
   printf("Quantidade de numeros maiores que 10: %d", maiorquedez);

   free(matrizdinamica);


   return 0;
}



