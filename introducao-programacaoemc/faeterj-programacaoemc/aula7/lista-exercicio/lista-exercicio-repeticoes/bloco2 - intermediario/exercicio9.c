/**
 * Exercicio 9 - Maior numero informado
 * Faça um programa que leia 10 números inteiros 
 * e mostre qual foi o maior número digitado.
 */

 #include <stdio.h>
 #include <stdlib.h>

 int main (){

    int numero1;
    int numeroMaior = 0;

    printf("************************************* \n");
    printf("*     EXERCICIO 9 - MAIOR NUMERO    * \n");
    printf("*    INFORME 10 NUMEROS A SEGUIR    * \n");
    printf("************************************* \n");

    for(int i = 1; i <= 10 ; i++){

        printf("Digite: ");
        scanf("%d" , &numero1);

        if(numero1 > numeroMaior){

            numeroMaior = numero1;
        }

    }

    printf("************************************* \n");
    printf("*Maior numero informado: %d\n" , numeroMaior);
    printf("*************************************** \n");
    system("pause");
    return 0;
 }