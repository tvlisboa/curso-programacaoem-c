/**
 * Exemplo - Coversor de moedas
 * Solicite ao usuario quantas vezes deseja executar uma conversao
 * Solicite a cotacao do dolar atual e do euro
 * Mostre no final os dados da conversao
 */

 #include <stdio.h>
 #include <stdlib.h>
 

 int main(){

    char resp[2];                   //continua rodando - ate apertar n
    int qtd;                        //quantidade de conversoes feitas
    double valorReal;
    double cotaDolar;
    double cotaEuro;
    double convDolar;               //valorReal / cotaDolar
    double convEuro;                //valorReal / cotaEuro
    int cont = 1;

    printf("************************* \n");
    printf("*  EXEMPLO - CONVERSAO  * \n");
    printf("************************* \n");

    printf(" Quantas vezes deseja fazer a conversao ?");
    scanf("%d" , &qtd);

    printf("Informe os valores a seguir \n");

    while(cont<=qtd){

            printf("******************** \n");
            printf("Valor em Real R$: ");
            scanf("%lf" , &valorReal);

            printf("Valor do dolar atual U$$: ");
            scanf("%lf" , &cotaDolar);

            printf("Valor do euro atual $$: ");
            scanf("%lf" , &cotaEuro);

            /* faz a covnversao dos valores */
            convDolar = (valorReal / cotaDolar);
            convEuro = (valorReal / cotaEuro);

            
            printf("Valor convertido em DOLAR: %.2lf\n" , convDolar);
            printf("Valor convertido em EURO: %.2lf\n" , convEuro);
            cont++;

    }
    system("pause");
    return 0;
 }