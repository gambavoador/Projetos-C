#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	int a,b,*p1, *p2;

	a = 3;
	b = 2;

	p1 = &a;
	p2 = p1;

	printf("\nvalor de a = %d | valor de b = %d \n", a, b);
	printf("valor de p1 = %d | valor de p2 = %d \n", *p1, *p2);

	*p2 = *p1 + 3;


	printf("\nvalor de a = %d | valor de b = %d \n", a, b);
	printf("valor de p1 = %d | valor de p2 = %d \n", *p1, *p2);


	b = b * (*p1);

	printf("\nvalor de a = %d | valor de b = %d \n", a, b);
	printf("valor de p1 = %d | valor de p2 = %d \n", *p1, *p2);

	(*p2)++;

	printf("\nvalor de a = %d | valor de b = %d \n", a, b);
	printf("valor de p1 = %d | valor de p2 = %d \n", *p1, *p2);

	p1 = &b;

    printf("\nvalor de a = %d | valor de b = %d \n", a, b);
	printf("valor de p1 = %d | valor de p2 = %d \n", *p1, *p2);


	return 0;
}
