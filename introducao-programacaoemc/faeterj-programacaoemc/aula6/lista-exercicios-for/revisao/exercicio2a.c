/**
 * João recebeu seu salário de R$ 30000,00 e precisa pagar duas contas
 * Conta 1 - R$ 280,00
 * Conta 2 - R$ 898,00
 * Como as contas estão atrasadas, João terá de pagar multa de
 * 2% sobre cada conta. 
 * Faça um algoritmo que calcule e mostre quanto restará do salário do João
 */

 #include <stdio.h>
 #include <stdlib.h>

 int main()
 {

    double salario = 30000;
    double conta1 = 280 , conta2 = 898;
    double multa = 0.02;
    double conta1Multa = conta1 + (conta1 * multa);
    double conta2Multa = conta2 + (conta2 * multa);

    double totalContas = conta1Multa + conta2Multa;
    double novoSalario = salario - totalContas;

    printf("************************ \n");
    printf("* EXERCICIO 2 - CONTAS * \n");
    printf("************************ \n");

    /* teste saida de dados*/
    printf("************************ \n");
    printf("Salario informado: %.2lf\n" , salario);
    printf("Contas informadas. \n");
    printf("Valor conta 1: %.2lf\n" , conta1);
    printf("Valor conta 2: %.2lf\n" , conta2);
    printf("Contas com multas aplicadas: \n");
    printf("Valor reajustado conta 1: %.2lf\n" , conta1Multa);
    printf("Valor reajustado conta 2: %.2lf\n" , conta2Multa);
    printf("Vlor total das contas: %.2lf\n" , totalContas);
    printf("Novo salario: %.2lf\n" , novoSalario);
    system("pause");
    return 0;
 }
 