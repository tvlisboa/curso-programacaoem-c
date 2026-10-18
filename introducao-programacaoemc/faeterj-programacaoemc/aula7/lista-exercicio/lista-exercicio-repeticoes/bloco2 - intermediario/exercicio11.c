/**
 * Exercicio 11 - Maior e menor numero informado
 * Faça um programa que leia 10 números inteiros 
 * e mostre qual foi o maior 
 * e menor número digitado.
 */

 #include <stdio.h>
 #include <stdlib.h>

 int main(){

    int numero1;
    int numeroMaior = -999;
    int numeroMenor = 999;

    printf("*************************************** \n");
    printf("* EXERCICIO 11 - MAIOR E MENOR NUMERO * \n");
    printf("*     INFORME 10 NUMEROS A SEGUIR     * \n");
    printf("*************************************** \n");

    for (int i = 1 ; i <= 10 ; i++) {

        printf("Digite: ");
        scanf("%d" , &numero1);

        if (numero1 > numeroMaior) {
            
            numeroMaior = numero1;
            
        }
        
        if (numero1 < numeroMenor) {
            
            numeroMenor = numero1;

        }

    }
    
    printf("*************************************** \n");
    printf("Maior numero informado: %d\n" , numeroMaior);
    printf("Menor numero informado: %d\n" , numeroMenor);
    printf("*************************************** \n");
    return 0;
 }