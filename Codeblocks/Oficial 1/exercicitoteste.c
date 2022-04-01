#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int definirTamanhoVetor3(int vetor1, int tamanhoVetor1, int vetor2, int tamanhoVetor2) {
    int tamanhoMaiorVetor;
    int tamanhoMenorVetor;
    int tamanhoVet3;

    vetor1 = (int *) malloc(tamanhoVetor1 * sizeof(int));
    vetor2 = (int *) malloc(tamanhoVetor2 * sizeof(int));

    // Define qual o maior vetor
    if(tamanhoVetor1 == tamanhoVetor2){
        tamanhoMaiorVetor = tamanhoVetor1;
        tamanhoMenorVetor = tamanhoVetor1;
    }
    else if (tamanhoVetor1 > tamanhoVetor2)
    {
        tamanhoMaiorVetor = tamanhoVetor1;
        tamanhoMenorVetor = tamanhoVetor2;
    }
    else if(tamanhoVetor2 > tamanhoVetor1)
    {
        tamanhoMaiorVetor = tamanhoVetor2;
        tamanhoMenorVetor = tamanhoVetor1;
    }   else {
        printf("Tamanho inválido.");
    }

    tamanhoVet3 = tamanhoMaiorVetor;

    for (int indice = 0; indice < tamanhoMaiorVetor; indice++)
    {
        for (int indiceV = 0; indiceV < tamanhoMenorVetor; indiceV++)
        {
            if (vetor1[indice] != vetor2[indiceV])
            {
                tamanhoVet3++;
            }

        }

    }


    printf("\n%d", tamanhoVet3);

}

int main() {
    setlocale(LC_ALL, "Portuguese");

    int tamanhoVet1, tamanhoVet2;
    int *vet1;
    int *vet2;

    printf("Digite a quantidade de índices para o vetor 1: ");
    scanf("%d", &tamanhoVet1);

    printf("Digite a quantidade de índices para o vetor 2: ");
    scanf("%d", &tamanhoVet2);

    vet1 = (int *) malloc(tamanhoVet1 * sizeof(int));

    printf("Vetor1:\n");

    for (int indice = 0; indice < tamanhoVet1; indice++)
    {
        printf("Digite um valor inteiro para o índice %d: ", indice+1);
        scanf("%d", &vet1[indice]);
    }

    vet2 = (int *) malloc(tamanhoVet2 * sizeof(int));

    printf("Vetor2:\n");

    for (int indice = 0; indice < tamanhoVet2; indice++)
    {
        printf("Digite um valor inteiro para o índice %d: ", indice+1);
        scanf("%d", &vet2[indice]);
    }

    definirTamanhoVetor3(*vet1, tamanhoVet1, *vet2, tamanhoVet2);

    system("pause");
}
