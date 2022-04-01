#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float num1, num2, soma, quadrado, produto, raiz, quadradonum2, modulo;
    printf("Digite o primeiro numero: ");
    scanf("%f", &num1);
    printf("Digite o segundo valor: ");
    scanf("%f", &num2);

    soma = num1 + num2;
    printf("Resultado Soma: %f", soma);

    produto = num1 * (num2 * num2);
    printf("\nResultado produto do quadrado: %f", produto);

    quadrado = (num1 * num1);
    printf("\nResultado do quadrado do primeiro numero: %f", quadrado);

    quadradonum2 = (num2 * num2);
    raiz = sqrt(quadrado + quadradonum2);


    printf("\nResultado da raiz quadrada da soma dos quadrados: %f", raiz);

    modulo = num1 * -1;
    printf("\nModulo do primeiro numero: %f", modulo);

    return 0;
}
