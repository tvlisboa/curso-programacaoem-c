/**
 * Pratica 7
 * Solicite ao usuario quantas vezes deseja fazer a conversao
 * Solicite o valor em real
 * Solicite o valor do dolar no dia atual
 * Solicite o valor do euro no dia atual
 * E mostre na tela os valores convertidos
 */

 #include <stdio.h>
 #include <stdlib.h>

 int main(){

    int contador = 1;
    int quantidade = 0;
    double valorReal;
    double valorDolar;
    double valorEuro;
    

    printf("********************************** \n");
    printf("*     PRATICA 7 - CONVERSOES     * \n");
    printf("* INSIRA AS INFORMACOES A SEGUIR * \n");
    printf("********************************** \n");

    printf("* Quantas conversoes deseja fazer? ");
    scanf("%d" , &quantidade);

    while (contador<=quantidade){
        printf("****************************** \n");
        printf("Informe o valor em REAIS: ");
        scanf("%lf" , &valorReal);

        printf("Informe a cotacao do DOLAR: ");
        scanf("%lf" , &valorDolar);

        printf("Informe a cotacao do EURO: ");
        scanf("%lf" , &valorEuro);
        printf("********************************** \n");
        
        /**
         * Inserir a secao de conversao de valores e mostrar na tela as informacoes abaixo
         */
        contador = contador + 1;
    }
    

    system("pause");
    return 0;
 }
