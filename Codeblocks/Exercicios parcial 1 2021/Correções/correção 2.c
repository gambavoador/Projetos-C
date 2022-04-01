#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv[]){

int *meuarraynumeros;
int tamanho, indice, contadornumero, contadorprimo;

printf("Informe o tamanho do vetor: \n");
    scanf("%d", &tamanho);

meuarraynumeros = (int *) malloc (tamanho * sizeof(int));

for (indice = 0; indice < tamanho; indice++){
    printf("Digite o valor para o indice %d do vetor: \n", indice);
    scanf("%d", &meuarraynumeros[indice]);
}
printf("\n ===== MEU VETOR =====\n");
for (indice = 0; indice < tamanho; indice++)

//numero 1 excecao
//pula a checagem do 1
      if(meuarraynumeros[indice] != 1){

      for(contadornumero = 1; contadornumero <= meuarraynumeros[indice]; contadornumero++){
        if(meuarraynumeros[indice] %contadornumero == 0){
          contadorprimo++;
        }
      }

//checa a quantidade de divisores

     if (contadorprimo >0 && contadorprimo <= 2){
     printf("Numero %d na posicao [%d] e primo \n", meuarraynumeros [indice], indice);
     }
    printf("numero na posicao [ %d ] %d\n", indice, meuarraynumeros[indice]);
}
}

