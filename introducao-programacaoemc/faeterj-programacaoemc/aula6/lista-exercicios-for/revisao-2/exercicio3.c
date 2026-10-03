/**
 * Exercicio 3
 * Um banco concederá um crédito especial aos seus clientes,
 * Dependendo do saldo médio no último ano. 
 * Faça um programa em C que leia:
 * Saldo médio de um cliente 
 * E calcule o valor do crédito de acordo com a tabela abaixo. 
 * Mostre uma mensagem informando o saldo médio e o valor que ele poderá pegar de empréstimo.
 * 
 * 0 a 1000 - > Credito de 20% do valor do saldo 
 * 1001 a 5000 -> Crédito de 40% do valor do saldo
 * 5001 a 10000 - > Credito de 60% do valor do saldo
 * Maior que 10.000 – 80% do valor do saldo
 */

 #include <stdio.h>
 #include <stdlib.h>

 int main(){

    double saldo; 
    double novoSaldo;
    double percentual;
    char nome[100]; 

    printf("******************************** \n");
    printf("*     EXERCICIO - BANCARIO     * \n");
    printf("*  INSIRA OS DADOS DO CLIENTE  * \n");
    printf("******************************** \n");

    printf("Nome: ");
    scanf("%s", nome);

    printf("Saldo do cliente: ");
    scanf("%lf" , &saldo);

        if(saldo>10000){

            percentual = 0.80;

        }else if(saldo>5000){

            percentual = 0.60;

        }else if(saldo>1000){

            percentual = 0.40;

        }else{

            percentual = 0.20;

        }

        novoSaldo = saldo * percentual;

    /* teste de saida de dados */
    printf("\n");
    printf("****************************** \n");
    printf("*   INFORMACOES DO CREDITO   * \n");
    printf("****************************** \n");
    printf("* Nome do usuario: %s\n" , nome);
    printf("* Saldo informado R$: %.2lf\n" , saldo);
    printf("* Percentual de credito: %.0lf%%\n" , percentual * 100);
    printf("* Credito aprovado R$: %.2lf\n", novoSaldo);
    printf("****************************** \n");
    system("pause");
    return 0;
 }