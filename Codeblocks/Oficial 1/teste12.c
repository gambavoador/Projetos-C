#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int definirTamanhoVetor3(int *vetor1, int tamanhoVetor1, int *vetor2, int tamanhoVetor2) {
    int tamanhoMaiorVetor;
    int tamanhoMenorVetor;
    int tamanhoVet3;

    // Define qual o maior vetor.
    if(tamanhoVetor1 == tamanhoVetor2){
        tamanhoMaiorVetor = tamanhoVetor1;
        tamanhoMenorVetor = tamanhoVetor1;
        tamanhoVet3 = tamanhoMaiorVetor;
    }
    else if (tamanhoVetor1 > tamanhoVetor2)
    {
        tamanhoMaiorVetor = tamanhoVetor1;
        tamanhoMenorVetor = tamanhoVetor2;
        tamanhoVet3 = tamanhoMaiorVetor + tamanhoMenorVetor;
    }
    else if(tamanhoVetor2 > tamanhoVetor1)
    {
        tamanhoMaiorVetor = tamanhoVetor2;
        tamanhoMenorVetor = tamanhoVetor1;
        tamanhoVet3 = tamanhoMaiorVetor + tamanhoMenorVetor;
    }   else {
        printf("Tamanho inválido.");
        return 0;
    }

    // Calcula o tamanho que o vetor 3 terá.
    if(tamanhoMaiorVetor == tamanhoVetor1){
        for (int indiceFora = 0; indiceFora < tamanhoVetor1; indiceFora++)
        {
            for (int indiceDentro = 0; indiceDentro < tamanhoVetor2; indiceDentro++)
            {
                if (vetor1[indiceFora] == vetor2[indiceDentro])
                {
                    tamanhoVet3--;
                }

            }

        }
    }   else {
            for (int indiceFora = 0; indiceFora < tamanhoVetor2; indiceFora++)
            {
                for (int indiceDentro = 0; indiceDentro < tamanhoVetor1; indiceDentro++)
                {
                    if (vetor2[indiceFora] == vetor1[indiceDentro])
                    {
                        tamanhoVet3--;
                    }

                }

            }
    }

    return tamanhoVet3;

}

int main() {
    setlocale(LC_ALL, "Portuguese");

    int tamanhoVet1, tamanhoVet2, tamanhoVet3;
    int *vet1;
    int *vet2;
    int *vet3;

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
    // Aloca o tamanho de Vet3.
    tamanhoVet3 = definirTamanhoVetor3(vet1, tamanhoVet1, vet2, tamanhoVet2);
    vet3 = (int *) malloc(tamanhoVet3 * sizeof(int));

    // Atribui os valores para Vet3.
    for (int indice = 0; indice < tamanhoVet1; indice++)
    {
        vet3[indice] = vet1[indice];
    }
    for (int indice = tamanhoVet1; indice < tamanhoVet3; indice++)
    {
        for (int indiceVet2 = 0; indiceVet2 < tamanhoVet2; indiceVet2++)
        {
            if (vet3[indiceVet2] != vet2[indiceVet2])
            {
                vet3[indice] = vet2[indiceVet2];
            }

        }

    }



    printf("Vetor 3:\n");

    for (int indice = 0; indice < tamanhoVet3; indice++)
    {
        printf("[%d]", vet3[indice]);
    }

    printf("\n");

    system("pause");
}
