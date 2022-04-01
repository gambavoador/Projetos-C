#include <stdio.h>
#include <stdlib.h>

int main(void) {

    int a, b, soma;

    printf("Digite um numero inteiro: ");
    scanf("%d", &a);
    printf("Digite um numero inteiro: ");
    scanf("%d", &b);
    printf("O valor da soma = %d\n", somaf(a, b));

    system("pause");
    return 0;
}
int somaf(int valor1, int valor2) {
    int soma =  valor1 + valor2;
    return soma;
}
