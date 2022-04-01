#include <locale.h>
#include <stdio.h>
int main() {setlocale (LC_ALL,"Portuguese");
float prova1, prova2, prova3, prova4, media_final;
printf("Para o aluno ser aprovado, a média final deve ser maior ou igual a 6.");
printf("\nDigite a nota da prova 1: ");
scanf("%f",&prova1);
printf("Digite a nota da prova 2: ");
scanf("%f",&prova2);
printf("Digite a nota da prova 3: ");
scanf("%f",&prova3);
printf("Digite a nota da prova 4: ");
scanf("%f",&prova4);

media_final = (prova1+prova2+prova3+prova4)/4;

if(media_final>=6){
    printf("O aluno está aprovado!");
}
else{
    printf("O aluno está reprovado.");
}
getch();
}

