#include <stdio.h>
#include <stdlib.h>

void main()
{

int mes = (1,2,3,4,5,6,7,8,9,10,11,12);
     printf("--meses do ano--\n");
     printf("1 - \n");
     printf("2 - \n");
     printf("3 - \n");
     printf("4 - \n");
     printf("5 - \n");
     printf("6 - \n");
     printf("7 - \n");
     printf("8 - \n");
     printf("9 - \n");
     printf("10 - \n");
     printf("11 - \n");
     printf("12 - \n");
     printf("escolha um numero de 1 a 12: ");

scanf("%d",&mes);
mes = tolower(mes);

switch(mes)
{
case 1:
    printf("(1)Janeiro");
break;
case 2:
     printf("(2)Fevereiro");
break;
case 3:
     printf("(3)Marco");
break;
case 4:
     printf("(4)Abril");
break;
case 5:
     printf("(5)Maio");
break;
case 6:
     printf("(6)Junho");
break;
case 7:
     printf("(7)Julho");
break;
case 8:
     printf("(8)Agosto");
break;
case 9:
     printf("(9)Setembro");
break;
case 10:
     printf("(10)Outubro");
break;
case 11:
     printf("(11)Novembro");
break;
case 12:
     printf("(12)Dezembro");
break;


default:
     printf("Opcao Invalida");
break;


}
getch();
}


