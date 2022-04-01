#include<stdio.h>
int main()
{
int num1, num2;
printf("descubra se o seu numero e igual ou diferente");
printf("\ndigite seu numero: ");
scanf("%d",&num1);
printf("digite outro numero: ");
scanf("%d",&num2);
if(num1==num2){
printf("os numeros %d e %d sao iguais", num1, num2);
}
else{printf("os numeros %d e %d sao diferentes", num1, num2);
}
}
