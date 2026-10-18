/**
 * Exercicio 14 - Caixa eletrônico & total de saques
 * Um caixa eletrônico precisa registrar os saques de 12 clientes. 
 * Faça um programa que leia o valor sacado por cada cliente e, ao final, mostre:
 * O valor total sacado.
 * A média dos valores sacados.
 * O maior valor de saque registrado.
 */

 #include <stdio.h>
 #include <stdlib.h>


 int main(){

    double valorSaque = 0;                       //valor que usuario ira informar
    double maiorSaque = 0;                       //maior valor sacado
    double menorSaque = 0;                       //menor valor sacado
    double valorTotalSacado = 0;                 //valor total sacado
    double mediaSaques = 0;                      //media de saques feitos
    int qtdSaques = 0;                           //qtd de saques feitos
    
    printf("******************************************* \n");
    printf("*    EXERCICIO 14 - CAIXA ELETRONICO      * \n");
    printf("*   INFORME O VALOR DOS SAQUES A SEGUIR   * \n");
    printf("******************************************* \n");

    for (int i =1 ; i<=5 ; i++) {
        
        printf("Digite o valor do saque: ");
        scanf("%lf" , &valorSaque);

     if(i == 1){
        maiorSaque = valorSaque;
        menorSaque = valorSaque;
     }

     if( valorSaque > maiorSaque){

        maiorSaque = valorSaque;

     }else if(valorSaque < menorSaque){

        menorSaque = valorSaque;

     }

        valorTotalSacado = valorTotalSacado + valorSaque;
        qtdSaques = qtdSaques + 1;
        
    }
    
    mediaSaques = valorTotalSacado / qtdSaques;
    
    printf("******************************************* \n");
    printf("Total de valor sacado: %.2lf\n" , valorTotalSacado);
    printf("Media de saques: %.2lf\n" , mediaSaques);
    printf("Maior saque: %.2lf\n" , maiorSaque);
    printf("Menor saque: %.2lf\n" , menorSaque);
    printf("Total de saques feitos: %d\n" , qtdSaques);
    system("pause");
    return 0;

 }