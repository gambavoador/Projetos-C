#include <stdio.h>
#include <stdlib.h>

void main()

{

float peso, result, massa;

int planeta = (1,2,3,4,5,6);
    printf("---Descubra seu peso em outro planeta---\n");
    printf("Digite seu peso: ");

    scanf("%f",&peso);

    printf("Planeta (1) Mercurio\n");
    printf("Planeta (2) Venus\n");
    printf("Planeta (3) Marte\n");
    printf("Planeta (4) Jupiter\n");
    printf("Planeta (5) Saturno\n");
    printf("Planeta (6) Urano\n");
    printf("Digite o numero do seu planeta: ");

    scanf("%d",&planeta);

    massa = peso/9.8;


switch(planeta)

{

case 1:
    result = massa*0.37;
    printf("neste planeta, voce teria %f de peso", result);
break;

case 2:
    result = massa*0.88;
    printf("neste planeta, voce teria %f de peso", result);
break;

case 3:
    result = massa*0.38;
    printf("neste planeta, voce teria %f de peso", result);
break;

case 4:
    result = massa*2.64;
    printf("neste planeta, voce teria %f de peso", result);
break;

case 5:
    result = massa*1.15;
    printf("neste planeta, voce teria %f de peso", result);
break;

case 6:
    result = massa*1.17;
    printf("neste planeta, voce teria %f de peso", result);
break;

default:
     printf("Numero invalido");
break;

}
getch();
}





