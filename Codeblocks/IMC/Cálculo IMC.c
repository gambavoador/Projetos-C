#include <locale.h>
#include <stdio.h>
#include <math.h>
int main() {setlocale (LC_ALL,"Portuguese");
float peso, altura, imc_result;
printf("Calcule o seu IMC.");
printf("\nDigite o seu peso: ");
scanf("%f",&peso);
printf("Digite a sua altura: ");
scanf("%f",&altura);

imc_result =peso/pow(altura,2);

if(imc_result<18.5){
    printf("Seu imc � %.2f, Voc� t� muito magro merm�o, vai comer!, ",imc_result);}

else if(imc_result>=18.5&&imc_result<=24.5) {
        printf("Seu imc � %.2f, voc� ta bem bacana, normalz�o, parab�ns!",imc_result);
}

else if(imc_result>=25.0&&imc_result<=29.9) {
    printf("Seu imc � %.2f, voc� t� acima do peso amig�o, bora dar uma caminhada.",imc_result);}
else if(imc_result>=30.0&&imc_result<=39.9) {
    printf("Seu imc � %.2f, mano, namoral tu ta gordasso, procure um m�dico e um nutricionista.",imc_result);}

else{printf("Seu imc � %.2f, � parceiro, voc� ta obeso, nem guindaste te tira do ch�o, procure um m�dico.",imc_result);}

getch();
}

