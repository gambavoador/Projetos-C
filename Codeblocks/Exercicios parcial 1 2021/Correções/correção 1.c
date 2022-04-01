#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int *inteiroimpar;
    int tamanhovetor, indice, valorlido;

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tamanhovetor);

    inteiroimpar = malloc(tamanhovetor * sizeof(int));
    // [0] [1] [2] [3]
    // [1] [5] [6] [8]
    // indice = 3
    //inteirosimpares [3]

    //for ( indice = 0; ;) { }

    // for para atribuir valor ao vetor
    for (indice = 0; indice < tamanhovetor; indice++)
    {
        printf("\n Digite o valor para posicao [ %d]", indice);
        scanf ("%d", &valorlido);

        if (valorlido %2 !=0)
            inteiroimpar[indice] = valorlido;
        else
            inteiroimpar[indice] = -1;
    }
    // for para imprimir valores do vetor
     for (indice = tamanhovetor -1; indice >=0 ; indice--)
     {
         printf("\n Valor do vetor na posicao [%d]: %d", indice, inteiroimpar[indice]);
     }

}



