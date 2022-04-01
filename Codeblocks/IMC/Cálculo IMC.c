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
    printf("Seu imc é %.2f, Você tá muito magro mermão, vai comer!, ",imc_result);}

else if(imc_result>=18.5&&imc_result<=24.5) {
        printf("Seu imc é %.2f, você ta bem bacana, normalzão, parabéns!",imc_result);
}

else if(imc_result>=25.0&&imc_result<=29.9) {
    printf("Seu imc é %.2f, você tá acima do peso amigão, bora dar uma caminhada.",imc_result);}
else if(imc_result>=30.0&&imc_result<=39.9) {
    printf("Seu imc é %.2f, mano, namoral tu ta gordasso, procure um médico e um nutricionista.",imc_result);}

else{printf("Seu imc é %.2f, é parceiro, você ta obeso, nem guindaste te tira do chão, procure um médico.",imc_result);}

getch();
}

