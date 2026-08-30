/*
 * Conversao de temperaturas
 * Faca um algoritmo que leia nome da cidade
 * E sua temperatura em celsius
 * Converta para fahrenheit - reaumur - Kelvin e Rnakine
 * Mostre na tela as informacoes
 * fh = (celsius * 9/5) + 32
 */

 #include <stdio.h>
 #include <stdlib.h>

 int main(int argc, char const *argv[])
 {

   char nomeCidade[100];
   double temperaturaLocal;

   printf("***************************** \n");
   printf("* CONVERSÕES DE TEMPERATURAS * \n");
   printf("***************************** \n");

   printf("Informe o nome da cidade abaixo: ");
   scanf("%s", nomeCidade);

   printf("Informe a temperatura local em Celsius: ");
   scanf("%lf", &temperaturaLocal);

   double temperaturaFh = (temperaturaLocal * 9/5) + 32;  //conversao para celsius

   printf("********************************* \n");
   printf("\n Dados informados pelo usuario: ");
   printf("\n Cidade: %s", nomeCidade);
   printf("\n Temperatura local em C: %.2lf", temperaturaLocal);
   printf("\n Temperatura local em F: %.2lf", temperaturaFh);
   system("pause");
   return 0;
 }
 

