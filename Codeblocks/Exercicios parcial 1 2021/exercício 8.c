#include <stdio.h>
#include <stdlib.h>

int main()
{
    int variavelum, variaveldois;

    printf("--Descobrir qual e a maior variavel--");

    printf("\n\n digite um numero para a variavel um: ");
    scanf("%d", &variavelum);

    printf("digite um numero para a variavel dois: ");

    scanf("%d", &variaveldois);

    if (variavelum > variaveldois){
        printf("\nvariavel um e maior");
    }
    else {
    printf("\nvariavel dois e maior");
    }


}
