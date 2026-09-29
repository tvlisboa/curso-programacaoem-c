/**
 * Pratica 7
 * Fazer a conversao de moedas 4x
 * Solicitando os valores do real
 * Valores de euro e dola atual
 * Mostre as informações na tela
 */

 #include <stdio.h>
 #include <stdlib.h>

 int main(){

    int contador = 1;
    double valorReal , cotacaoEuro, cotacaoDolar;
    double conversaoEuro, conversaoDolar;

    printf("*********************************** \n");
    printf("*       EXERCICIO - CONVERSAO     * \n");
    printf("*********************************** \n");
    printf("* Insira as 4 conversoes a seguir * \n");

    while(contador<=4){
        printf("*********************************** \n");
        printf("* Informe os valores das CONVERSOES a seguir * \n");
        printf("* Informe valor em real: ");
        scanf("%lf", &valorReal);

        printf("* Valor do DOLAR atual: ");
        scanf("%lf", &cotacaoDolar);

        printf("* Valor do EURO atual: ");
        scanf("%lf", &cotacaoEuro);
        printf("*********************************** \n");

        conversaoDolar = valorReal / cotacaoDolar;
        conversaoEuro = valorReal / cotacaoEuro;

        printf("* VALORES DAS COTACOES * \n");
        printf("* Valor em REAL : %.2lf\n" , valorReal);
        printf("* Cotacao em DOLAR: %.2lf\n" , cotacaoDolar);
        printf("* Cotacao em EURO: %.2lf\n" , cotacaoEuro);
        printf("* Conversao em DOLAR: %.2lf\n" , conversaoDolar);
        printf("* Conversao em EURO: %.2lf\n" , conversaoEuro);
        
        contador = contador + 1;
    }

    system("print");
    return 0;
 }