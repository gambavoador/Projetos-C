#include <stdio.h>
#include <stdlib.h>

//incompleto

    typedef struct lista{
    int numero;
    struct lista* prox;
    }
    Lista;

    inicializa(){
    return NULL;
    }

    Lista* inserir(Lista* ListaInserir, int numeroInserir){
        Lista* listatemporaria = (Lista*)malloc(sizeof(Lista));
        listatemporaria -> numero = numeroInserir;
        listatemporaria -> prox = ListaInserir;
        return listatemporaria;
    };
    void imprimir(Lista* listaImprimir){

    }

    int main()
    {
    Lista * novaLista;
    novaLista = inicializa();
    novaLista = inserir (novaLista, 1);
    novaLista = inserir (novaLista, 2);
    novaLista = inserir (novaLista, 3);
    printf("%d\n", novaLista);

    return 0;
    }
