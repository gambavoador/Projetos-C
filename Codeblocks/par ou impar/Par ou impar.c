#include <locale.h>
#include <stdio.h>
int main() {setlocale (LC_ALL,"Portuguese");
int nmr1, media_final;
printf("Descubra se o seu numero � par ou impar.");
printf("\nDigite o seu n�mero: ");
scanf("%d",&nmr1);

media_final = nmr1 % 2;

if(media_final!=1){
    printf("O numero � par!");
}
else{
    printf("O n�mero � �mpar.");
}
getch();
}

