/**
 * João recebeu seu salário de R$ 30000,00 e precisa pagar duas contas 
 * (C1=R$ 280,00 e C2=R$898,00) que estão atrasadas.
 * Como as contas estão atrasadas, João terá de pagar multa de 2% sobre cada conta. 
 * Faça um algoritmo que calcule e mostre quanto restará do salário do João
 */

 // Informe o seu salario                    OK
 // Informe a quantidade de contas a pagar   OK
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
   int quantidadeContas;
   int opcao;

   printf("*********************************** \n");
   printf("*      EXERCICIO  -  CONTAS       * \n");
   printf("*********************************** \n");
   printf("* SELECIONE UMA DAS OPCOES ABAIXO * \n");
   printf(" [ 1 ] - RECEBIMENTO DE CONTAS \n");
   printf(" [ 2 ] - CONSULTAR SALDO \n");
   printf(" [ 3 ] - INVESTIMENTOS \n");
   printf(" [ 4 ] - CÂMBIO \n");
   printf(" [ 5 ] - SAQUE DIGITAL E TRANSFERENCIAS \n");
   printf(" [ 9 ] - MAIS SERVICOS \n");
   printf(" [ 0 ] - SAIR DO APP \n");
   scanf("%d", &opcao);

   switch (opcao) {
   case 1:
      printf("********************************* \n");
      printf("* [ 1 ] - RECEBIMENTO DE CONTAS * \n");
      printf("* Informe o salario do usuario: ");
      scanf("%lf", &salario);

      printf("* Informe a quantidade de contas a pagar: * \n");
         printf(" [ 1 ] - 1 CONTA \n");
         printf(" [ 2 ] - 2 CONTAS \n");
         printf(" [ 3 ] - VOLTAR \n");
         printf(" [ 5 ] - SAIR \n");
         scanf("%d", &quantidadeContas);

         switch (quantidadeContas) {
         case 1:
            printf("* [ 1 ] - PAGAMENTO UNITARIO *\n");
            printf("* Informe o valor a ser pago: ");
            scanf("%lf", &conta1);
            break;
         
         case 2:
            printf("* [ 2 ] - PAGAMENTO MULTIPLO *\n");
            printf("* Informe os valores a serem pagos * \n");

            printf("* Conta 1: ");
            scanf("%lf", &conta1);

            printf("* Conta 2: ");
            scanf("%lf", &conta2);
            break;

         case 3:
            printf("* [ 3 ] - VOLTAR *\n");            
         break;

         case 5:
            printf("* [ 5 ] - SAIR DO APP *\n");            
         break;
         
         default:
            printf("* OPCAO INFORMADA E INVALIDA *\n");            
            printf("*      TENTE   NOVAMENTE     * \n");
            break;
         }
      break;
   
   case 2:
      printf("********************************* \n");
      printf("* [ 2 ] - CONSULTAR SALDO * \n");
      break;

   case 3:
      printf("********************************* \n");
      printf("* [ 3 ] - INVESTIMENTOS * \n");
      break;

   case 4:
      printf("********************************* \n");
      printf("* [ 4 ] - CÂMBIO * \n");
      break;

   case 5:
      printf("********************************* \n");
      printf("* [ 5 ] - PIX E SAQUE DIGITAL * \n");
      break;

   case 9:
      printf("********************************* \n");
      printf("* [ 9 ] - MAIS SERVICOS * \n");
      break;

   case 0:
      printf("********************************* \n");
      printf("* [ 0 ] - SAIR DO APP * \n");
      break;
   
   default:
      printf("************************************************************************* \n");
      printf("* OPCAO INFORMADA E INVALIDA - TENTE NOVAMENTE UTILIZANDO O MENU ABAIXO * \n");
      printf("************************************************************************* \n");
      break;
   }

   
   system("pause");
   return 0;
 }
 