/**
 * Exemplo 7 
 * Solicite ao usuario para informar 4 conversoes
 * Solicite o valor do real e do dolar
 * faca a conversao e mostre
 * na tela as informacoes
 */

 #include <stdio.h>
 #include <stdlib.h>

 int main(){

    int qtdConv;
    double valorReal;
    double valorDolar;
    double conversaoDolar;
    int cont = 1;

    printf("****************************** \n");
    printf("*   EXERCICIO - CONVERSOES   * \n");
    printf("****************************** \n");

    printf("Quantas conversoes deseja fazer? ");
    scanf("%d" , &qtdConv);

    printf("Informe os valores a seguir \n");

    while(cont <= qtdConv){

        printf("*************** \n");
        printf("Valor em real: ");
        scanf("%lf" , &valorReal);

        printf("*************** \n");
        printf("Cotacao atual do dolar: ");
        scanf("%lf" , &valorDolar);

        conversaoDolar = valorReal / valorDolar;

        cont++;
    }


    printf("Valor convertido em dolares %.2lf\n" , conversaoDolar);
    system("pause");
    return 0;

 }