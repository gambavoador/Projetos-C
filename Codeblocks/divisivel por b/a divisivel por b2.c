#include<stdio.h>
int main()
{
int a, b;
float bolo;
printf("descubra se a é divisivel por b");
printf("\ndigite o valor a: ");
scanf("%d",&a);
printf("digite o valor b: ");
scanf("%d",&b);

bolo = a % b;

if(bolo == 0){
printf("os numeros sao divisiveis");
}

else{
printf("os numeros n sao divisiveis");
}
}
