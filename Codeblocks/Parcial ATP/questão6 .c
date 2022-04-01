#include<stdio.h>
#include <stdlib.h>
#include <locale.h>

void main()
{
int idade, tempo;
printf("digite sua idade: ");
scanf("%d", &idade);
printf("digite o seu tempo de servico: ");
scanf("%d", &tempo);

if((idade >= 65) || (tempo >= 30) || (idade >= 60 && tempo >= 25))
{
printf("Voce pode se aposentar");
}
else
{
printf("Voce nao pode se aposentar");
}
getch();
}
