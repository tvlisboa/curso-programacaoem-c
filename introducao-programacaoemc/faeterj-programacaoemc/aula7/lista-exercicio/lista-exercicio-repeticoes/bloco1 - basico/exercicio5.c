/**
 * Exercicio 5 - Soma dos numeros informados
 * Faça um programa que calcule e mostre a soma de todos os números inteiros de 1 até 100.
 */

 #include <stdio.h>
 #include <stdlib.h>

 int main (){

    int soma = 0;

    printf("************************** \n");
    printf(" EXERCICIO 5 - SOMATORIO * \n");
    printf("*   INICIANDO CONTAGEM   * \n");
    printf("************************** \n");

    for (int i = 1; i<=100 ; i++) {

        printf("%d\n", i);              //imprimi na tela 1 a 1 ate chegar a 100
        soma = soma + i;                //inicializa com valor = e vai incrementando o valor ate chegar a soma total
        
    }

    printf("Soma dos numeros informados: %d\n" , soma);
    system("pause");
    return 0;
 }