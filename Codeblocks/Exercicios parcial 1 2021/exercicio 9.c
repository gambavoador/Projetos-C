#include <stdio.h>
#include <stdlib.h>


void main()

{
	float *vetor;
	int tamanho, indice;

	printf("Informe o tamanho do vetor: ");
	scanf("%d", &tamanho);

	for (indice = 0; indice < tamanho ; indice++) {
		printf("Digite o valor para a posicao %d do vetor: ", indice);
		scanf("%f", &vetor[indice]);
	}

	for (indice = 0; indice < tamanho ; indice++) {
		printf("Posicao %d: %.2f \n", indice, vetor[indice]);
	}



}






