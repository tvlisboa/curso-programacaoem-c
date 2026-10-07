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
      printf("PASSOU AQUI \n");
      break;
   
   default:
      printf("OPCAO INVALIDA \n");
      break;
   }

    system("pause");
    system("cls");
    return 0;
 }