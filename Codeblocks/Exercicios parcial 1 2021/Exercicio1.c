#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{


int *ponteiro;
int quantnumero;
int numimpar;

printf("Digite a quantidade de vetores: ");
scanf("%d", &quantnumero);

ponteiro = (int *) malloc(quantnumero * sizeof(int));

for (int indice = 0; indice < quantnumero; indice++)
{
printf("Digite um valor inteiro para o indice %d:", indice+1);
scanf("%d", &numimpar);

if(numimpar % 2 == 1)
{
ponteiro[indice] = numimpar;
}
}

for (int indice = quantnumero-1; indice >= 0; indice--)
{
if(ponteiro[indice] == 0)
{
printf("INDICE %d: VALOR PAR.\n", indice+1);
}
else
{
printf("INDICE %d: %d\n", indice+1, ponteiro [indice]);
}
}

system("pause");

}
