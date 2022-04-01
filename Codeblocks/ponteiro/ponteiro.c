#include <stdio.h>
#include <stdlib.h>

void main()
{
int *num;
int count = 10;
num = &count;

count = 11;

printf("%d\n Valor armazenado na memoria: ", *num); // aponta para o valor armazenado no espaço num;
printf("%d\n Espaco de endereçamento: ", num); // exibe o endereço armazendado em num;
printf("%d Variavel", count); // exibe o valor da variavel count;

}


