#include<stdio.h>
#include <stdlib.h>

void main(){
float diga;
printf("Digite um valor:");
scanf("%f",&diga);
float celsiusF =(diga-32.0)*(5.0/9.0);
int celsiusI = (diga-32)*(5/9); //pegadinha do malandro
printf("Inteiro: %d \n",celsiusI); // qualquer coisa * 0 é 0
printf("Float: %.2f",celsiusF);
}