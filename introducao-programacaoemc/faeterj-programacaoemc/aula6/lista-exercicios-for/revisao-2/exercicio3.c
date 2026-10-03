/**
 * Exercicio 3
 * Um banco concederá um crédito especial aos seus clientes, dependendo do saldo médio no último ano. 
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
    char nome[100]; 

    printf("******************************** \n");
    printf("*     EXERCICIO - BANCARIO     * \n");
    printf("*  INSIRA OS DADOS DO CLIENTE  * \n");
    printf("******************************** \n");

    printf("Nome: ");
    scanf("%s", nome);

    printf("INSIRA O SALDO DO CLIENTE: ");
    scanf("%lf" , &saldo);

        if(saldo>10000){

            printf("******************************** \n");
            printf("* SALDO ACIMA DE 10000* \n");
            printf("* Saldo informado: %.2lf\n" , saldo);
            printf("******************************** \n");

            /*  Calcular o valor do credito
                Mostrar mensagem inforamndo saldo anterior
                E o valor liberado para emprestimo
                80% de valor liberado baseado no saldo
            */

        }else if(saldo>5000){

            printf("******************************** \n");
            printf("* SALDO ACIMA DE 5000* \n");
            printf("* Saldo informado: %.2lf\n" , saldo);
            printf("******************************** \n");
            
            /*  Calcular o valor do credito
                Mostrar mensagem inforamndo saldo anterior
                E o valor liberado para emprestimo
                60% de valor liberado baseado no saldo
            */
        }else if(saldo>1000){

            printf("******************************** \n");
            printf("* SALDO ACIMA DE 1000* \n");
            printf("* Saldo informado: %.2lf\n" , saldo);
            printf("******************************** \n");

            /*  Calcular o valor do credito
                Mostrar mensagem inforamndo saldo anterior
                E o valor liberado para emprestimo
                40% de valor liberado baseado no saldo
            */
        }else{

            printf("******************************** \n");
            printf("* SALDO ABAIXO DE 1000* \n");
            printf("* Saldo informado: %.2lf\n" , saldo);
            printf("******************************** \n");

            /*  Calcular o valor do credito
                Mostrar mensagem inforamndo saldo anterior
                E o valor liberado para emprestimo
                20% de valor liberado baseado no saldo
            */
        }


    /* teste de saida de dados */
    printf("****************************** \n");
    printf("* Nome do usuario: %s\n" , nome);
    printf("* Saldo informado: %.2lf\n" , saldo);
    printf("****************************** \n");
    system("pause");
    return 0;
 }