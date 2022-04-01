#include<stdio.h>
#include <stdlib.h>

void main(){
float diga;
printf("Digite uma medicao em metros:");
scanf("%f",&diga);
float decimetro = diga * 10;
printf("Decimetros: %.2f \n", decimetro);
float centimetro = diga * 100;
printf("Centimetros: %.2f \n", centimetro);
float milimetros = diga * 1000;
printf("Milimetros: %.2f", milimetros);
}
