#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {


    float *meuarrayfloat;
    int tamanho, indice;

    printf("Digite o tamanho do vetor: \n");
    scanf("%d", &tamanho);

    meuarrayfloat = (float *) malloc(tamanho * sizeof(float));
    printf("\n%x", &meuarrayfloat);

    printf("\n\n===== ENDERECO DAS POSICOES: =====\n\n");
    for(indice = 0; indice < tamanho; indice++){
        printf("[ %x ]", &meuarrayfloat[indice]);
    }





    return 0;
}
