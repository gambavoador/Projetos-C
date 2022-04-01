#include<stdio.h>
#include <stdlib.h>
#include <locale.h>

void main()
{
float carro, novo;

printf("digite o custo de fabrica: ");
scanf("%f", &carro);

if(carro <=12000.00)
{
novo = carro + (carro * 0.05);
}
else if (carro<=12000.00&&carro>=25000.00)
{
novo = carro + (carro * 0.10) + (carro * 0.15);
}
else (carro >=25000.00);
{
novo = carro + (carro * 0.15) + (carro * 0.20);
}
printf("\no seu carro vai custar R$%2.f", novo);

getch();
}
