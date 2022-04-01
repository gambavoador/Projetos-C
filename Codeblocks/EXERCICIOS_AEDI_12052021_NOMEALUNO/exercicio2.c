#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
int valor1, valor2, indice;


printf("Informe o primeiro valor: ");
scanf("%d", &valor1);

printf("Informe o segundo valor: ");
scanf("%d", &valor2);

if (valor1 == valor2){
   printf("valores iguais\n");
}

      if (valor1 < valor2) {

    for(indice = valor1; indice <= valor2; indice++){
      printf("%d \n", indice);
    }
  }

  else {
    for(indice = valor1; indice >= valor2; indice--){
      printf("%d \n", indice);
    }
  }

}

