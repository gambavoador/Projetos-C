#include <stdio.h>
#include <locale.h>
int main()

{

float nota1, nota2, nota3, nota4, media_final;

printf("Para o aluno ser aprovado, a media final deve ser maior ou igual a 7.");
printf("\nDigite a nota 1: ");
scanf("%f",&nota1);
printf("Digite a nota 2: ");
scanf("%f",&nota2);
printf("Digite a nota 3: ");
scanf("%f",&nota3);
printf("Digite a nota  4: ");
scanf("%f",&nota4);

media_final = (nota1+nota2+nota3+nota4)/4;

if(media_final<4)

{
    printf("reprovado.");
}

else if (media_final>4&&media_final<7)

{
    printf("prova final.");
}

else if (media_final>=7)

{
    printf("aprovado.");
}

getch();
}

