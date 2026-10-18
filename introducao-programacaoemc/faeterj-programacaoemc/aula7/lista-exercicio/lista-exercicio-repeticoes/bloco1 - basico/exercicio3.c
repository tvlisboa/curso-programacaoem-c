/**
 * Exercicio 3 - Numeros pares
 * Faça um programa que mostre todos 
 * os números pares de 2 até 50.
 */

 #include <stdio.h>
 #include <stdlib.h>

 int main(){

    int totPar = 0;
    int soma = 0;

    printf("*************************************** \n");
    printf("* EXERCICIO 3 - SOMA NUMEROS PARES    * \n");
    printf("*************************************** \n");

    for ( int i = 1 ; i <=50 ; i++) {
        
        if( i % 2 == 0){

            printf("Numero é par %d\n" , i);
            totPar = totPar + 1;
            soma = soma + i;
            
        }

    }

    printf("Quantidade de numeros pares: %d\n" , totPar);
    printf("Soma dos numeros pares: %d\n" , soma);
    system("pause");
    return 0;

 }