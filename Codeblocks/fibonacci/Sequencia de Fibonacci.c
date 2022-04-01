#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    // S�rie de Fibonacci: 0,1,2,3,5,8,13,21...
    int fib1, fib2, auxiliar, i, n;

    fib1 = 0;
    fib2 = 1;

    printf("Sequ�ncia de Fibonacci");
    printf("\nDigite um valor para a quantidade de linhas para calcular: ");
    scanf("%d", &n);
    printf("S�rie de Fibonacci:");
    printf("\n%d\n%d\n", fib1, fib2);

    for(i = 0; i < n; i++) {
        auxiliar = fib1 + fib2;
        fib1 = fib2;
        fib2 = auxiliar;

        printf("%d\n", auxiliar);
    }

    system("pause");

getch();
}
