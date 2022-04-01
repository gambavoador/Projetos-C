#include <stdio.h>
#include <stdlib.h>


int main()

{

int tabuada = 0;
  printf("Digite um numero para obter a tabuada: \n");
  scanf("%i", &tabuada);
for(int i = 1; i<=10; ++i)

{

  printf("%ix%i = %i \n", i, tabuada, i* tabuada);

}

getch();



}
