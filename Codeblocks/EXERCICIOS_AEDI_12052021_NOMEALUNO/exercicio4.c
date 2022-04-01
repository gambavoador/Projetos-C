#include <stdio.h>
#include <stdlib.h>

int main(){

    int compra = 1;
    float totalcompra;

    printf("Entre com o total da compra.\n");
    scanf("%f",&totalcompra);


int menudeopcoes(){

    int opcoes;

    do{
        printf("opcoes 1 - A vista com 10%¨de desconto\n");
        printf("opcoes 2 - Em duas vezes (preco da etiqueta\n) ");
        printf("opcoes 3 - De 3 até 10 vezes com 3% de juros ao mês (somente para compras acima de R$ 100,00). \n");
        scanf("%d",&opcoes);

    }
    while( (opcoes < 1 ) || (opcoes > 3) );

    return (opcoes);
}

void aVista(float conta){

    printf("VALOR A SER PAGO : %.2f R$\n",conta * 0.9);

}

void duasvezes(float conta){

    printf("2 PRESTACOES DE %.2f R$",conta / 2);
}

void tresvezes(float conta){

    int parcelas;
    float valorParcelas;

    do{

        printf("ENTRE COM O NUMERO DE PRESTACOES\n");
        scanf("%d",&parcelas);

    }while( (parcelas < 3) || (parcelas > 10) );

    valorParcelas = conta * ((parcelas * 0.03) + 1);

    printf("%d PARCELAS DE %.2f R$\n",parcelas,valorParcelas/parcelas);




    do{

        switch(menudeopcoes() ){
            case 1:
                aVista(totalcompra);
                break;
            case 2:
                duasvezes(totalcompra);
                break;
            case 3:
                if(totalcompra > 100){
                    tresvezes(totalcompra);
                    compra = 1;
                    break;
                }else{
                    printf("VALOR DA COMPRA INFERIOR A 100,00 R$ DIVIDA EM MENOS PRESTACOES.\n");
                    compra = 0;
                }
        }

    }while(compra == 0);


    system("PAUSE");
    return 0;

}
}

