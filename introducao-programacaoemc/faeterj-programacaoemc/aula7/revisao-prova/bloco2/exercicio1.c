/**
 * Exercicio 1
 * Utilizando o switch-case
 * Crie um menu de operações onde
 * 1 - Soma
 * 2 - Subtracao
 * 3 - Multiplicacao
 * 4 - Divisao
 * Solicite apos a selecao do menu - dois numeros ao usuario
 * Faca as operacoes e mostre na tela
 */

 #include <stdio.h>
 #include <stdlib.h>

 int main (){

   int opcao;
   int n1, n2;

   printf("**************************** \n");
   printf("* EXERCICIO - CALCULADORA  * \n");
   printf("*  UTILIZE O MENU ABAIXO   * \n");
   printf(" [ 1 ] - SOMA \n");
   printf(" [ 2 ] - SUBTRACAO \n");
   printf(" [ 3 ] - MUTIPLICACAO \n");
   printf(" [ 4 ] - DIVISAO \n");
   printf(" [ 9 ] - MAIS OPCOES \n");
   printf(" [ 0 ] - SAIR DO APP \n");
   printf("**************************** \n");
   scanf("%d" , &opcao);

   switch (opcao) {
   case 1:
      int soma;

      printf("**************************** \n");
      printf("*  OPCAO ESCOLHIDA - SOMA  * \n");
      printf("Informe dois numeros a seguir. \n");
      printf("Numero 1: ");
      scanf("%d" , &n1);

      printf("Numero 2: ");
      scanf("%d" , &n2);
      
      soma = (n1 + n2);

      printf("Resultado: %d\n" , soma);
      printf("**************************** \n");
      break;

   case 2:
      int subtracao;

      printf("**************************** \n");
      printf("*  OPCAO ESCOLHIDA - SUBTRACAO  * \n");
      printf("Informe dois numeros a seguir. \n");
      printf("Numero 1: ");
      scanf("%d" , &n1);

      printf("Numero 2: ");
      scanf("%d" , &n2);
      
      subtracao = (n1 - n2);

      printf("Resultado: %d\n" , subtracao);
      printf("**************************** \n");
      break;

   case 3:
      int multiplicacao;
      
      printf("**************************** \n");
      printf("*  OPCAO ESCOLHIDA - MULTIPLICACAO  * \n");
      printf("Informe dois numeros a seguir. \n");
      printf("Numero 1: ");
      scanf("%d" , &n1);

      printf("Numero 2: ");
      scanf("%d" , &n2);
      
      multiplicacao = (n1 * n2);

      printf("Resultado: %d\n" , multiplicacao);
      printf("**************************** \n");
      break;

   case 4:
      int divisao;
      
      printf("**************************** \n");
      printf("*  OPCAO ESCOLHIDA - DIVISAO  * \n");
      printf("Informe dois numeros a seguir. \n");
      printf("Numero 1: ");
      scanf("%d" , &n1);

      printf("Numero 2: ");
      scanf("%d" , &n2);
      
      divisao = (n1 / n2);

      printf("Resultado: %d\n" , divisao);
      printf("**************************** \n");
      break;

   case 9:
      printf("*********************************** \n");
      printf("*  OPCAO ESCOLHIDA - MAIS OPCOES  * \n");
      printf("*     UTILIZE O MENU ABAIXO       * \n");
      printf(" [ 5 ] - POTENCIACAO \n");
      printf(" [ 6 ] - RADICIACAO \n");
      printf(" [ 7 ] - RESTO \n");
      printf(" [ 8 ] - NUMERO AO CUBO \n");
      printf(" [ 0 ] - SAIR DO APP \n");
      printf("**************************** \n");
      scanf("%d" , &opcao);

      switch (opcao) {
      case 5:
         printf("**************************** \n");
         printf("*  OPCAO ESCOLHIDA - POTENCIACAO * \n");
         break;

      case 6:
         printf("**************************** \n");
         printf("*  OPCAO ESCOLHIDA - RACICIACAO  * \n");
         break;

      case 7:
         printf("**************************** \n");
         printf("*  OPCAO ESCOLHIDA - DIVISAO RESTO  * \n");
         break;

      case 8:
         printf("**************************** \n");
         printf("*  OPCAO ESCOLHIDA - NUMERO AO CUBO  * \n");
         break;

      case 0:
         printf("**************************** \n");
         printf("*  OPCAO ESCOLHIDA - SAIR DO APP * \n");
         printf("* OBRIGADO POR UTILIZAR NOSSO SISTEMA * \n");
         printf("**************************** \n");
         break;
      
      default:
         break;
      }

      break;

   case 0:
      printf("SAIR DO APP \n");
      break;
   
   default:
      printf("OPCAO INVALIDA \n");
      break;
   }

    system("pause");
    system("cls");
    return 0;
 }