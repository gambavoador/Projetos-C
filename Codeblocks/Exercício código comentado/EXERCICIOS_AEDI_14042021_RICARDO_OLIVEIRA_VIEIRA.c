#include <stdio.h>
#include <stdlib.h>

struct listaDupla { //Nesta linha definimos o tipo de dado que ir� ter na lista
	int info; // Definimos o dado que ir� conter na lista que � do tipo inteiro
	struct listaDupla* ant; // Estrutura onde definimos um ponteiro que ir� apontar para o n�mero anterior a ele
	struct listaDupla* prox; // Estrutura onde definimos um ponteiro que ir� apontar para o pr�ximo n�mero
};
typedef struct listaDupla ListaDupla; // Onde � definido o tipo da estrutura e o que ser� usado pela estrutura


ListaDupla* inicializar () { // Onde o ponteiro inicializa, e aponta para o final da lista que � NULL
	return NULL; // A lista n�o retorna nenhum dado porqu� est� vazia
}

ListaDupla* inserir (ListaDupla* minhaLista, int info) { //Insere um dado do tipo inteiro, e aponta para o primeiro elemento
	ListaDupla* novo = (ListaDupla*) malloc(sizeof(ListaDupla)); //Faz a aloca��o din�mica da lista

	novo->info = info; //Insere dados na vari�vel info
	novo->prox = minhaLista; // Insere que o novo elemento declarado ir� apontar para o pr�ximo elemento da lista
	novo->ant = NULL; //Insere que o novo elemento ir� apontar para o anterior que � nulo, pois n�o h� nenhum elemento antes dele

	if (minhaLista != NULL)
		minhaLista->ant = novo; //Verifica se a lista � diferente de nulo, e caso seja, a lista passar� a receber a vari�vel novo, que anteriormente recebia nulo

	return novo;
}

ListaDupla* buscar (ListaDupla* minhaLista, int valorBusca){ // Cria uma fun��o que busca um valor do tipo inteiro declarado como ValorBusca, e um elemento que aponta para a MinhaLista, que � a lista que ser� buscada
	ListaDupla* listaTemp; // Cria uma lista tempor�ria para armazenar os valores buscados

	for (listaTemp = minhaLista; listaTemp != NULL; listaTemp = listaTemp->prox) { //Fun��o que percorre a lista para fazer a busca do valor
		if (listaTemp->info == valorBusca)
		return listaTemp; // Faz a verifica��o se o valor buscado est� na lista, e se estiver, faz a consulta na lista com a fun��o return
	}

	return NULL;
}

ListaDupla* remover (ListaDupla* minhaLista, int valor) { //Cria uma fun��o de remover elementos do tipo inteiro da lista, um ponteiro aponta para a fun��o de remo��o, e o outro aponta de onde ser� removido, que � a lista
	ListaDupla* ant = NULL; // Declara que o elemento anterior da lista � nulo
	ListaDupla* listaTemp = minhaLista; // Declara que a lista ir� receber os dados que foram buscados e inseridos na lista tempor�ria

	while (listaTemp != NULL && listaTemp->info != valor) { //Estrutura que define que os valores buscados que s�o a listaTemp devem ser diferentes de nulo, e tamb�m que as informa��es da listaTemp n�o devem ser removidas pela fun��o remover
		ant = listaTemp;
		listaTemp = listaTemp->prox;
	}

	if (listaTemp == NULL )
		return minhaLista; //Verifica se a lista tempor�ria � nula, e se caso for, retornar� os elementos da minhaLista

		if (ant == NULL) {
		minhaLista = listaTemp->prox; //Verifica se os elementos da lista s�o nulos, e se caso for, receber� os pr�ximos elementos da lista tempor�ria
	}
	else {
		listaTemp->ant->prox = listaTemp->prox; //Caso n�o for nulo, os elementos anteriores e pr�ximos da lista tempor�ria passar�o a receber apenas os pr�ximos elementos da lista tempor�ria.
	}

	if (listaTemp->prox != NULL)
		listaTemp->prox->ant = listaTemp->ant; //Verifica se o ponteiro prox da lista tempor�ria n�o s�o nulos, caso n�o forem nulos, recebe o ponteiro ant


	return minhaLista;
}

void imprimir (ListaDupla* listaImprimir) { //Cria��o da fun��o de impress�o da lista, criando uma lista de impress�o
	ListaDupla* listaTemp; // Define que os elementos da lista tempor�ria tamb�m estar�o contidos na lista

	for (listaTemp = listaImprimir; listaTemp != NULL; listaTemp = listaTemp->prox) { //Fun��o para percorrer a lista a fim de imprimir os elementos da lista
		printf("Numero dentro do no: %d \n", listaTemp->info);
	}
}

int main(int argc, char *argv[]) {

	ListaDupla* listaFinal; //Aponta que os elementos da lista ir�o fazer parte da vari�vel listaFinal

	listaFinal = inicializar(); //Fun��o para iniciar a implementa��o da lista com os dados
	listaFinal = inserir(listaFinal, 68);
	listaFinal = inserir(listaFinal, 89);
	listaFinal = inserir(listaFinal, 41);
	listaFinal = inserir(listaFinal, 14); // Fun��es para inserir dados na lista

	printf("Lista:\n");
	imprimir(listaFinal); //Fun��o para imprimir a listaFinal

	listaFinal = remover(listaFinal, 68);
	listaFinal = remover(listaFinal, 14); //Fun��es que removem dados previamente inseridos na listaFinal

	printf("Lista:\n");
	imprimir(listaFinal);

	return 0;
}
