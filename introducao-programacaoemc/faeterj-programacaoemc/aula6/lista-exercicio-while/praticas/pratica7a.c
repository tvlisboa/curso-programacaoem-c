/**
 * Pratica 7
 * Solicite ao usuario 4x a conversao de moedas
 * Solicite o valor em real
 * Solicite o valor do dolar no dia atual
 * Solicite o valor do euro no dia atual
 * E mostre na tela os valores convertidos
 */

 #include <stdio.h>
 #include <stdlib.h>

 int main(){

    int contador = 1;
    double valorReal;
    double valorDolar;
    double valorEuro;
    double conversaoDolar , conversaoEuro;

    printf("*********************************** \n");
    printf("* PRATICA 7 - CONVERSOR DE MOEDAS * \n");
    printf("* INFORME AS CONVERSOES A SEGUIR  * \n");
    printf("*********************************** \n");

    while (contador<=4) {

        printf("Informe o valor em real R$: ");
        scanf("%lf", &valorReal);

        printf("Informe a cotacao do DOLAR U$$: ");
        scanf("%lf" , &valorDolar);

        printf("Informe a cotacao do EURO U$$: ");
        scanf("%lf" , &valorEuro);

        conversaoDolar = valorReal / valorDolar;
        conversaoEuro = valorReal / valorEuro;

            printf("*********************************** \n");
            printf("*  DADOS INFORMADOS PELO USUARIO  * \n");
            printf("* Valor informado em R$: %.2lf\n" , valorReal);
            printf("* Valor informado em U$$: %.2lf\n" , valorDolar);
            printf("* Valor informado em EU: %.2lf\n" , valorEuro);
            printf("* Valor convertido em DOLARES: %.2lf\n" , conversaoDolar);
            printf("* Valor convertido em EURO: %.2lf\n" , conversaoEuro);
            printf("*********************************** \n");

        contador = contador + 1;
    }

    system("pause");
    system("cls");
    return 0;
 }