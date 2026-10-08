/**
 * Exercicio 5 
 * Tabuada - Solicite ao usuario um numero e mostre
 * Na tela a tabuada de 1 ate 10
 */

 #include <stdio.h>
 #include <stdlib.h>

 int main(int argc, char const *argv[])
 {

    int num1;
    int resultado;
    int contador = 1;

    printf("*************************** \n");
    printf("*   EXERCICIO - TABUADA   * \n");
    printf("* INFORME UM NUMERO A SEGUIR: \n");
    printf("*************************** \n");
    printf("* Numero 1: ");
    scanf("%d" , &num1);

    printf("\nTabuada do %d:\n" , num1);

    while (contador<=10) {

        resultado = num1 * contador;
        printf("%d x %d = %d\n" , num1 , contador , resultado);
        contador++;

    }

    system("pause");
    system("cls");
    return 0;
 }
 