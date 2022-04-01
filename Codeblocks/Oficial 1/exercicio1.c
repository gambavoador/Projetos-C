#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//incompleto

int main()
{
    int *vetor1, *vetor2;
    int tamanhovetor1;
    int tamanhovetor2;
    int indice;

    printf("Digite o tamanho do primeiro vetor: ");
    scanf("%d", &tamanhovetor1);
    vetor1 = (int*)malloc(tamanhovetor1 * sizeof(int));
    for (indice = 0; indice < tamanhovetor1; indice++){
        printf("Digite o numero da posicao [ %d ]: ", indice);
    scanf ("%d", &vetor1[indice]);
    }
    printf("Digite o tamanho do segundo vetor: ");
    scanf("%d", &tamanhovetor2);
    vetor2 = (int*)malloc(tamanhovetor2 * sizeof(int));
    for (indice = 0; indice < tamanhovetor2; indice++){
        printf("Digite o numero da posicao [ %d ]: ", indice);
    scanf("%d", &vetor2[indice]);
    }



    return 0;
}
