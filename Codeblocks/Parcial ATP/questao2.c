#include <stdio.h>
#include <stdlib.h>

void main()
{
int diga;
printf("Digite um numero inteiro decimal:");
scanf("%i",&diga);
oct(diga);
hex(diga);
}
  
void oct(int numo){
  long int resto = 0;
  long int result = numo;
  int i=0;
  char temp[numo/8];

  while(result>1){
    result = numo/8;
    resto = numo%8;
    temp[i] = resto;
    i++;
    numo = result;
   
   if(result==1){
    temp[i] = 1;
    i++;
   }
  }  

 printf("Em Octal: ");
  while(i>0)
  {
    printf("%d",temp[i-1]);
    i--;
  }
  
}

  
void hex(int numh){
  long int resto = 0;
  long int result = numh;
  int i=0;
  char temp[numh/16];

  while(result>1){
    result = numh/16; // 180/16 = 11 // 11/16 = 0
    resto = numh%16; // resto 4 // resto 11
    temp[i] = resto; // temp[0] = 4 // temp[1] = 11 
    i++; // i = 1 // i = 2
    numh = result; // numh = 11 // numh = 0
   if(result==1){
    temp[i] = 1;
    i++;
   }
  }
 printf("\nEm Hexadecimal: ");
  while(i>0)
  {
  if(temp[i-1]<10){  
  printf("%d",temp[i-1]);
  }
  else if(temp[i-1]==10)
  {
    printf("A");
  }
    else if(temp[i-1]==11)
  {
    printf("B");
  }
    else if(temp[i-1]==12)
  {
    printf("C");
  }
    else if(temp[i-1]==13)
  {
    printf("D");
  }
    else if(temp[i-1]==14)
  {
    printf("E");
  }
    else if(temp[i-1]==15)
  {
    printf("F");
  }
  i--; // i=1 // i=0
  }
  
}

 