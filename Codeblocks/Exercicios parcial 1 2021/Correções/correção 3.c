#include <stdio.h>
#include <stdlib.h>

int main ()
{
    float *notasalunos;
    int tamanhovetor, indice;
    float totalnotas, media;

    printf("Digite a quantidade de alunos: ");
    scanf("%d", &tamanhovetor);

    notasalunos = (float *) malloc (tamanhovetor * sizeof(float));

    for(indice = 0; indice <tamanhovetor; indice++)
{
    printf("\n Digite o valor para a posicao [%d]: ", indice);
    scanf("%f", &notasalunos[indice]);
    totalnotas = (totalnotas + notasalunos [indice]);
}
    for(indice = 0; indice <tamanhovetor; indice++)
{
    printf("\n valor do vetor na posicao [%d]: %f", indice, notasalunos[indice]);
}

    media = totalnotas / tamanhovetor;
    printf ("\n media das notas: %f ", media);




    return 0;
}
