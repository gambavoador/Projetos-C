#include <stdio.h>
#include <stdlib.h>

void main (){
     printf("--sistema do joao--\n");
     printf("i - incluir\n");
     printf("e - excluir\n");
     printf("a - alterar\n");
     printf("s - sair\n");
     printf("Digite a opcao desejada: ");
char caractere;
scanf("%c",&caractere);
caractere = tolower(caractere); //toupper - maiusculo, tolower - minusculo

switch(caractere){
case 'i':
    printf("Opcao Incluir");
break;
case 'e':
     printf("Opcao Excluir");
break;
case 's':
     printf("Opcao Sair");
break;

default:
     printf("Opcao Invalida");
break;

}
}


