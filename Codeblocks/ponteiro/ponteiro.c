#include <stdio.h>
#include <stdlib.h>

void main()
{
int *num;
int count = 10;
num = &count;

count = 11;

printf("%d\n Valor armazenado na memoria: ", *num); // aponta para o valor armazenado no espa�o num;
printf("%d\n Espaco de endere�amento: ", num); // exibe o endere�o armazendado em num;
printf("%d Variavel", count); // exibe o valor da variavel count;

}


