#include <locale.h>
#include <stdio.h>

void main() {setlocale (LC_ALL,"Portuguese");
int idade;
printf("Saiba sua classe eleitoral");
printf("\ndigite sua idade: ");
scanf("%d",&idade);


if(idade<16){
        printf("você é um não eleitor",idade);}
else if(idade>=18&&idade<=65) {
        printf("Você é um eleitor obrigatório",idade);}
else if(idade>=16&&idade<=18) {
        printf("Você é um eleitor facultativo",idade);}
else if(idade>=65) {
        printf("Você é um eleitor facultativo",idade);}
else{
        printf("Você é um eleitor facultativo",idade);}
getch();
}
