#include <locale.h>
#include <stdio.h>
int main() {setlocale (LC_ALL,"Portuguese");
int nmr1, media_final;
printf("Descubra se o seu numero é par ou impar.");
printf("\nDigite o seu número: ");
scanf("%d",&nmr1);

media_final = nmr1 % 2;

if(media_final!=1){
    printf("O numero é par!");
}
else{
    printf("O número é ímpar.");
}
getch();
}

