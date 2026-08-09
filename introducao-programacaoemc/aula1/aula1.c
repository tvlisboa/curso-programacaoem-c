/* utilização de bibliotecas - definicao de entrada e saida */
#include <stdio.h>

/* utilização de bibliotecas - funcoes basicas do sistema */
#include <stdlib.h>

/*
* comentarios em bloco - explicacao de trechos de codigo
*/

int main(){

    printf("********************************* \n");
    printf("***** PRIMEIRAS AULAS COM C ***** \n");
    printf("********************************* \n");

    int a = 10;
    int b = 5;

    int soma = a + b;
    int subtracao = a - b;
    int multiplicacao = a * b;
    int divisao = a / b;
    int resto = a % b;

    printf("**************************************** \n");
    printf("***** OPERACOES MATEMATICAS ************ \n");
    printf("**************************************** \n");

    printf("**** NUMEROS INFORMADOS PELO USUARIO ***** \n");
    printf("* Primeiro numero informado: %d \n", a);
    printf("* Segundo numero informado: %d \n", b);
    printf("* Soma entre os numeros informados: %d \n", soma);
    printf("* Subtracao entre os numeros informados %d \n" , subtracao);
    printf("* Multiplicacao entre os numeros informados %d \n" , multiplicacao);
    printf("* Divisao entre os numeros informados %d \n", divisao);
    printf("* Resto da equacao:", resto);
    printf("**************************************** \n");

    system("Pressione qualquer tecla para continuar...");
    return 0;
}