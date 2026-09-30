/**
 * Pratica 3 - Exibir a tabuada de um numero 
 * Qualquer na tela
 */

 #include <stdio.h>
 #include <stdlib.h>

 int main(){

    int contador = 1;
    int numero1;
    int resultado = 0;

    printf("*********************** \n");
    printf("* EXERCICIO - TABUADA * \n");
    printf("*********************** \n");

    printf("* INFORME UM NUMERO A SEGUIR :*");
    scanf("%d", &numero1);

    do {

        resultado = numero1 * contador;

        printf("%d\n %d\n %d\n" , " X" , numero1 , contador , " = " , resultado);
        contador = contador + 1;

    } while (contador>10);

    system("pause");
    return 0;
 }