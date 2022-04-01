#include<stdio.h>
#include <stdlib.h>

void main(){
float diga;
printf("Digite um valor:");
scanf("%f",&diga);
if(diga>=100){
diga = diga + (diga*0.2);
}else{
diga = diga + (diga*0.1);
}
printf("Novo valor: R$ %.2f", diga);
}