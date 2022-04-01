#include<stdio.h>
#include <stdlib.h>
#include <locale.h>

void main()
{

int codigo, quantidade;
float valoruni, valortotal;

printf("\n---Lanchonete---");
printf("\n\n---Cardapio---");
printf("\n100 - cachorro quente - R$1,20");
printf("\n101 - bauru simples - R$1,30");
printf("\n102 - bauru com ovo - R$1,50");
printf("\n103 - hamburguer - R$1,20");
printf("\n104 - cheeseburguer - R$1,70");
printf("\n105 - suco de laranja hmmm que delicia cara - R$2,20");
printf("\n106 - meu nome e refrigerante - R$1,00");

printf("\ndigite o codigo do produto: ");
scanf("%d", &codigo);

switch(codigo)
{
case 100:
valoruni= 1.20;
break;

case 101:
valoruni= 1.30;
break;

case 102:
valoruni= 1.50;
break;

case 103:
valoruni= 1.20;
break;

case 104:
valoruni= 1.70;
break;

case 105:
valoruni = 2.20;
break;

case 106:
valoruni = 1.00;
break;

default:
printf("numero invalido");

}
printf("\ndigite a quantidade: ");
scanf("%d", &quantidade);

valortotal = valoruni * quantidade;

printf("\nvalor total - R$%2.f", valortotal);


getch();
}
