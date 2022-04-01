#include <stdio.h>
#include <stdlib.h>

int main ()

{

float salario, resultado;

printf("digite seu salario: ");
scanf("%f", &salario);
resultado = salario * 0.3;
printf("o valor das prestacoes serao de R$%.2f", resultado);

getch ();

}
