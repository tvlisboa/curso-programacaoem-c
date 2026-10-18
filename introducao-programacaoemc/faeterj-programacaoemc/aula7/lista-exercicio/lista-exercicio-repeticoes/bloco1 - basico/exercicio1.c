/**
 * Exercicio 1 - Contagem crescente
 * Faça um programa que mostre na tela os números de 1 até 10, 
 * utilizando o comando for.
 */

 #include <stdio.h>
 #include <stdlib.h>

 int main(){

    printf("************************** \n");
    printf("* EXERCICIO 1 - CONTADOR * \n");
    printf("*   Iniciando contagem   * \n");
    printf("************************** \n");

    for(int i = 1 ; i<=10 ; i++){

        printf("%d\n" , i);

    }

    system("pause");
    return 0;
 }