#include <locale.h>
#include <stdio.h>

void main() {setlocale (LC_ALL,"Portuguese");
int idade;
printf("Saiba sua classe eleitoral");
printf("\ndigite sua idade: ");
scanf("%d",&idade);


if(idade<16){
        printf("voc� � um n�o eleitor",idade);}
else if(idade>=18&&idade<=65) {
        printf("Voc� � um eleitor obrigat�rio",idade);}
else if(idade>=16&&idade<=18) {
        printf("Voc� � um eleitor facultativo",idade);}
else if(idade>=65) {
        printf("Voc� � um eleitor facultativo",idade);}
else{
        printf("Voc� � um eleitor facultativo",idade);}
getch();
}
