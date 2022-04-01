#include <stdio.h>
#include <stdlib.h>

int main()

{

float maria = 1.10, joao = 1.50;
int anos;

anos = 0;

while (maria <= joao)

{

maria = maria + 0.03;
joao = joao + 0.02;
anos = anos + 1;

}

printf("vai precisar de %d anos para que maria seja maior que joao.", anos);

getch();

}
