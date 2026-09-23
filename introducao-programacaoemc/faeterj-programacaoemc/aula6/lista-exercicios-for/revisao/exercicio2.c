/**
 * João recebeu seu salário de R$ 30000,00 e precisa pagar duas contas 
 * (C1=R$ 280,00 e C2=R$898,00) que estão atrasadas.
 * Como as contas estão atrasadas, João terá de pagar multa de 2% sobre cada conta. 
 * Faça um algoritmo que calcule e mostre quanto restará do salário do João
 */

 // Informe o seu salario
 // Informe a quantidade de contas a pagar
 // Informe os valores das contas - conta1 && conta2
 // conta1 = conta1+(conta1*2)/100
 // conta2 = conta2+(conta2*2)/100
 // totalcontas = conta1 +  conta2 
 // desconto salario = salario - totalcontas

 #include <stdio.h>
 #include <stdlib.h>


 int main(int argc, char const *argv[])
 {

   double salario, novoSalario;
   double conta1, conta2;


   printf("******************************** \n");
   printf("*     EXERCICIO  -  CONTAS     * \n");
   printf("******************************** \n");

   printf("* Insira o salario do cliente a seguir. * \n");
   printf("* Salario: ");
   scanf("%lf", &salario);
    


   /* teste de saida de dados */
   printf("Salario do cliente: %.2lf\n", salario);
   system("pause");
   return 0;
 }
 