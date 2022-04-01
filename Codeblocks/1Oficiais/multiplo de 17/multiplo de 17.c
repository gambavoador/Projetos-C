#include <stdio.h>
#include <stdlib.h>

int main()

{

int numero;
int multi;

printf("---Multiplos de 17---");
printf("\n\nDigite um numero inteiro para a quantidade de multiplicacoes: ");
scanf("%d", &numero);

for(int i = 0; i<=numero-1; i++)

{

multi = 17 * i;
printf("%d\n", multi);


}
}
