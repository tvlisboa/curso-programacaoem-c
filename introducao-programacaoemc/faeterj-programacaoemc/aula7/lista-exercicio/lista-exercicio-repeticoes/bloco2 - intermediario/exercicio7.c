/**
 * Exercicio 7 - Controle de vendas
 * Uma loja deseja registrar as vendas realizadas durante 7 dias. 
 * Faça um programa que leia o valor vendido em cada dia e,
 * ao final, informe o total vendido na semana.
 */

 #include <stdio.h>
 #include <stdlib.h>

 int main(){

   double vendasDia = 0;
   double totalVendido = 0;

   printf("****************************************** \n");
   printf("*     EXERCICIO 7 - CONTROLE DE VENDAS   * \n");
   printf("*  INFORME AS VENDAS NOS ULTIMOS 7 DIAS  * \n");
   printf("****************************************** \n");

   for (int i = 1; i <= 7; i++) {
      
      printf("Valor total diario: ");
      scanf("%lf" , &vendasDia);

      totalVendido = totalVendido + vendasDia;

   }
   
   printf("****************************************** \n");
   printf("Valor total vendido na semana: %.2lf\n" , totalVendido);
   printf("****************************************** \n");
   system("pause");
   return 0;
 }