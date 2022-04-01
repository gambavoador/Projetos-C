#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {


    int variavel01, variavel02;
    int *p1, *p2;

    printf("digite o valor da variavel 01: \n");
    scanf("%d", &variavel01);

    printf("digite o valor da variavel 02: \n");
    scanf("%d", &variavel02);

    p1 = &variavel01;
    p1 = &variavel02;

    if(p1 > p2)
        printf("\nEndereco da variavel 1 %x e maior que o da variavel 2 %x", p1, p2);

    else
         printf("\nEndereco da variavel 2 %x e maior que o da variavel 1 %x", p2, p1);



return 0;
}
