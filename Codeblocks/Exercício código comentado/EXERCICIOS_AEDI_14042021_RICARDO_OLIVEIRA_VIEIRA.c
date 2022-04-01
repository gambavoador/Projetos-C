#include <stdio.h>
#include <stdlib.h>

struct listaDupla { //Nesta linha definimos o tipo de dado que irá ter na lista
	int info; // Definimos o dado que irá conter na lista que é do tipo inteiro
	struct listaDupla* ant; // Estrutura onde definimos um ponteiro que irá apontar para o número anterior a ele
	struct listaDupla* prox; // Estrutura onde definimos um ponteiro que irá apontar para o próximo número
};
typedef struct listaDupla ListaDupla; // Onde é definido o tipo da estrutura e o que será usado pela estrutura


ListaDupla* inicializar () { // Onde o ponteiro inicializa, e aponta para o final da lista que é NULL
	return NULL; // A lista não retorna nenhum dado porquê está vazia
}

ListaDupla* inserir (ListaDupla* minhaLista, int info) { //Insere um dado do tipo inteiro, e aponta para o primeiro elemento
	ListaDupla* novo = (ListaDupla*) malloc(sizeof(ListaDupla)); //Faz a alocação dinâmica da lista

	novo->info = info; //Insere dados na variável info
	novo->prox = minhaLista; // Insere que o novo elemento declarado irá apontar para o próximo elemento da lista
	novo->ant = NULL; //Insere que o novo elemento irá apontar para o anterior que é nulo, pois não há nenhum elemento antes dele

	if (minhaLista != NULL)
		minhaLista->ant = novo; //Verifica se a lista é diferente de nulo, e caso seja, a lista passará a receber a variável novo, que anteriormente recebia nulo

	return novo;
}

ListaDupla* buscar (ListaDupla* minhaLista, int valorBusca){ // Cria uma função que busca um valor do tipo inteiro declarado como ValorBusca, e um elemento que aponta para a MinhaLista, que é a lista que será buscada
	ListaDupla* listaTemp; // Cria uma lista temporária para armazenar os valores buscados

	for (listaTemp = minhaLista; listaTemp != NULL; listaTemp = listaTemp->prox) { //Função que percorre a lista para fazer a busca do valor
		if (listaTemp->info == valorBusca)
		return listaTemp; // Faz a verificação se o valor buscado está na lista, e se estiver, faz a consulta na lista com a função return
	}

	return NULL;
}

ListaDupla* remover (ListaDupla* minhaLista, int valor) { //Cria uma função de remover elementos do tipo inteiro da lista, um ponteiro aponta para a função de remoção, e o outro aponta de onde será removido, que é a lista
	ListaDupla* ant = NULL; // Declara que o elemento anterior da lista é nulo
	ListaDupla* listaTemp = minhaLista; // Declara que a lista irá receber os dados que foram buscados e inseridos na lista temporária

	while (listaTemp != NULL && listaTemp->info != valor) { //Estrutura que define que os valores buscados que são a listaTemp devem ser diferentes de nulo, e também que as informações da listaTemp não devem ser removidas pela função remover
		ant = listaTemp;
		listaTemp = listaTemp->prox;
	}

	if (listaTemp == NULL )
		return minhaLista; //Verifica se a lista temporária é nula, e se caso for, retornará os elementos da minhaLista

		if (ant == NULL) {
		minhaLista = listaTemp->prox; //Verifica se os elementos da lista são nulos, e se caso for, receberá os próximos elementos da lista temporária
	}
	else {
		listaTemp->ant->prox = listaTemp->prox; //Caso não for nulo, os elementos anteriores e próximos da lista temporária passarão a receber apenas os próximos elementos da lista temporária.
	}

	if (listaTemp->prox != NULL)
		listaTemp->prox->ant = listaTemp->ant; //Verifica se o ponteiro prox da lista temporária não são nulos, caso não forem nulos, recebe o ponteiro ant


	return minhaLista;
}

void imprimir (ListaDupla* listaImprimir) { //Criação da função de impressão da lista, criando uma lista de impressão
	ListaDupla* listaTemp; // Define que os elementos da lista temporária também estarão contidos na lista

	for (listaTemp = listaImprimir; listaTemp != NULL; listaTemp = listaTemp->prox) { //Função para percorrer a lista a fim de imprimir os elementos da lista
		printf("Numero dentro do no: %d \n", listaTemp->info);
	}
}

int main(int argc, char *argv[]) {

	ListaDupla* listaFinal; //Aponta que os elementos da lista irão fazer parte da variável listaFinal

	listaFinal = inicializar(); //Função para iniciar a implementação da lista com os dados
	listaFinal = inserir(listaFinal, 68);
	listaFinal = inserir(listaFinal, 89);
	listaFinal = inserir(listaFinal, 41);
	listaFinal = inserir(listaFinal, 14); // Funções para inserir dados na lista

	printf("Lista:\n");
	imprimir(listaFinal); //Função para imprimir a listaFinal

	listaFinal = remover(listaFinal, 68);
	listaFinal = remover(listaFinal, 14); //Funções que removem dados previamente inseridos na listaFinal

	printf("Lista:\n");
	imprimir(listaFinal);

	return 0;
}
