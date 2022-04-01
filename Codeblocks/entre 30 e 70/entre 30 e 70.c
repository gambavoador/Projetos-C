#include <locale.h>
#include <stdio.h>

void main()
{
int nm;
printf("digite um numero: ");
scanf("%d",&nm);

if(nm<70&&nm>30){
printf("esta entre 30 e 70");
}
else{
printf("nao esta entre 30 e 70");
}

}
