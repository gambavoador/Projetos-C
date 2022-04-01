#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#include <string.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    char tipo_juros[9];
    float capital, juros, taxa, tempo_meses, montante;

    printf("\nCalculadora de Juros Simples e Composto\n");
    printf("\nQual tipo de juros será calculado?");
    printf("\nDigite SIMPLES para calcular juros simples ou COMPOSTO para calcular juros compostos: ");
    scanf("%s", tipo_juros);

    if(stricmp(tipo_juros, "simples") == 0) {

        printf("\nJUROS SIMPLES\n");
        printf("\nDigite o valor em reais do capital: ");
        scanf("%f", &capital);
        printf("Digite a porcentagem da taxa (ao mês): ");
        scanf("%f", &taxa);
        printf("Digite a quantidade de meses a serem calculados: ");
        scanf("%f", &tempo_meses);
        printf("Calculando...");

        taxa =  taxa / 100;
        juros = capital * taxa * tempo_meses;
        montante = capital + juros;

        printf("\nO juros total será R$%.2f e o montante R$%.2f.\n\n", juros, montante);

        system("pause");

    }
    else if(stricmp(tipo_juros, "compostos") == 0 || stricmp(tipo_juros, "composto") == 0) {

        printf("~~~~~~~~~~~~~~~~~~~~");
        printf("\nJUROS COMPOSTOS\n");
        printf("~~~~~~~~~~~~~~~~~~~~");
        printf("\nDigite o valor em reais do capital: ");
        scanf("%f", &capital);
        printf("Digite a porcentagem da taxa (ao mês): ");
        scanf("%f", &taxa);
        printf("Digite a quantidade de meses: ");
        scanf("%f", &tempo_meses);
        printf("Calculando...");

        taxa =  taxa / 100;
        montante = capital * (pow(1 + taxa, tempo_meses));
        juros = montante - capital;

        printf("\nO juros total será R$%.2f e o montante R$%.2f.", juros, montante);

    }
    else {
        printf("Entrada inválida.");
    }
getch();
}
