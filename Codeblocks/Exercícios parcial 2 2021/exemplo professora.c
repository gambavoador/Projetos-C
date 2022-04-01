#include <locale.h>
#include <stdio.h>


void criarVetor (Lista * listaAtual){
    int * meuArray;
    Lista * noTemp = listaAtual;
    for (noTemp = listaAtual; noTemp != NULL; noTemp = noTemp->prox ){
        tamanhoVetor++
    }
   meuArray = (int *)malloc(tamanhoVetor * sizeof(int));
   for (noTemp = listaAtual; noTemp != NULL; noTemp = noTemp->prox ){
        meuArray[indice] = noTemp->numero;
   indice++;

   for (indice = 0; indice < tamanhoVetor; indice++){
    printf("\n Posicao [ %d ] : %d", indice, meuArray[indice]);
   }

   }

}
