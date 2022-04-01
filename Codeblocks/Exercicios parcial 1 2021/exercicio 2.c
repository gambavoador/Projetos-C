#include <stdio.h>
#include <stdlib.h>

int verificaprimo(int num)
{
    int sinalizadorprimo = 0;
    for (int indice = 2; indice <= num/2; indice++)
{
    if(num % indice == 0)
{
    sinalizadorprimo++;
    break;
}
}
    return sinalizadorprimo;
}

int main()
{

    int *vetorPonteiro;
    int quantidadeValores, contadorPrimo;

    printf("Digite a quantidade de valores que deseja inserir no vetor: ");
    scanf("%d", &quantidadeValores);

    vetorPonteiro = (int *) malloc(quantidadeValores * sizeof(int));

    for (int indice = 0; indice < quantidadeValores; indice++)
    {
        printf("Digite um valor inteiro para o índice %d: ", indice+1);
        scanf("%d", &vetorPonteiro[indice]);
    }

    printf("Segue abaixo todos os números primos do vetor:\n");

    for (int indice = 0; indice < quantidadeValores; indice++)
    {
        contadorPrimo = verificaprimo(vetorPonteiro[indice]);
        if(contadorPrimo == 0) {
            printf("ÍNDICE %d: %d.\n", indice, vetorPonteiro[indice]);
        }
    }

    system("pause");

}
