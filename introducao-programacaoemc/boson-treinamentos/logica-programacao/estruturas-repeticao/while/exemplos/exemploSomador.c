/**
 * Exemplo - Solicite ao usuario 10 numeros inteiros
 * Utilizando a estrutura while
 * Faca a soma e mostre na tela
 */

 #include <stdio.h>
 #include <stdlib.h>

 int main(){

    int numeros;
    int soma = 0;
    int cont = 1;

   printf("********************* \n");
   printf("* EXEMPLO - SOMADOR * \n");
   printf("********************* \n");

   printf("Digite 10 numeros a seguir... \n");

      while(cont<=10){

         printf("Digite o %d numero: " , cont);
         scanf("%d" , &numeros);

         soma = soma + numeros;
         cont++;

      }

   printf("Soma total dos numeros informados: %d\n" , soma);
   system("pause");
   return 0;
 }