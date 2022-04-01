#include<stdio.h>
#include <stdlib.h>

void main(){
float digaUm, digaDois, digaTres;
printf("Digite o primeiro valor:");
scanf("%f",&digaUm);
printf("Digite o segundo valor:");
scanf("%f",&digaDois);
printf("Digite o terceiro valor:");
scanf("%f",&digaTres);
if(digaUm>=0 && digaDois>= 0 && digaTres>=0){
    if(digaUm == digaDois && digaDois == digaTres)
    {
        printf("Triangulo equilatero");
    }
    else if(digaUm != digaDois && digaDois != digaTres && digaUm != digaTres)
    {
        printf("Triangulo escaleno");
    }
    else
    {
        printf("Triangulo isosceles");
    }
    
} else{
    printf("Não pode ser triangulo");
}
}