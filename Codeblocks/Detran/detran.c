#include <stdio.h>
#include <stdlib.h>

void main()

{

int mes = (1,2,3,4,5,6,7,8,9,10,11,12);
   printf("---data de vencimento IPVA---\n");
   printf("digite o ultimo numero da sua placa (de 0 a 9): ");

scanf("%d",&mes);
mes = tolower(mes);


switch(mes)
{
  case 0:
      printf("(0)Seu IPVA vence em Outubro");
  break;

  case 1:
      printf("(1)Seu IPVA vence em Janeiro");
  break;

  case 2:
      printf("(2)Seu IPVA vence em Fevereiro");
  break;

  case 3:
      printf("(3)Seu IPVA vence em Marco");
  break;

  case 4:
      printf("(4)Seu IPVA vence em Abril");
  break;

  case 5:
      printf("(5)Seu IPVA vence em Maio");
  break;

  case 6:
      printf("(6)Seu IPVA vence em Junho");
  break;

  case 7:
      printf("(7)Seu IPVA vence em Julho");
  break;

  case 8:
      printf("(8)Seu IPVA vence em Agosto");
  break;

  case 9:
      printf("(9)Seu IPVA vence em Setembro");
  break;

  default:
     printf("Numero invalido");
  break;



}
getch();
}














