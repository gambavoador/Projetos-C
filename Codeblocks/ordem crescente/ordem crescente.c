#include <stdio.h>
 #include <stdlib.h>

typedef struct LISTA{

int dado;
struct LISTA *prox;




}lista;

lista *insere(lista *p, int valor){

lista *novo;
novo=(lista*)malloc(sizeof(lista));
novo->dado = valor;
novo->prox = p;
return novo;

 }


void imprime(lista *p){
lista *novo;
for(novo = p; novo!= NULL; novo=novo->prox){
    printf("%d",novo->dado);

}


 }
 lista *ordemCrescente(lista *p){
lista *aux = NULL;
lista *novo = p;


int *recebe;
int x=0;
int menor=0;
while(novo != NULL){
    if(novo->dado < menor){
        aux = novo->prox;
         novo = novo->dado;
         novo->dado = aux;
    return p;
    }

    novo= novo->prox;
}

     }






     main(){

  lista *l,i;
  lista *primeiro, *ultimo;
l = NULL;
l = insere(l, 20);
l = insere(l, 30);
l = insere(l, 40);
l = insere(l, 50);
l = insere(l, 60);


imprime(l);
printf("\n");
l = ordemCrescente(l);
imprime(teste);
  }

