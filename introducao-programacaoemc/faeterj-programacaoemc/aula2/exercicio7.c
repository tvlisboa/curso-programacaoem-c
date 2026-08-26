/*
 * Soma de dois numeros
 * Faca um algoritmo que solicite dois numeros inteiros
 * e mostre na tela a soma dos dois numeros
 */

 #include <stdio.h>
 #include <stdlib.h>


 int main(int argc, char const *argv[])
 {
    int n1;
    int n2;
    int soma;

    printf("************************* \n");
    printf("* EXERCICIO - SOMATORIO * \n");
    printf("************************* \n");

    printf("* Informe dois numeros a seguir * \n");
    printf("* Numero 1: ");
    scanf("%d", &n1);

    printf("* Numero 2: ");
    scanf("%d", &n2);

    soma = n1 + n2;

    /* saida de dados*/
    printf("*************************");
    printf("\n * Numeros informados pelo usuario *");
    printf("\n * Numero 1: %d", n1);
    printf("\n * Numero 2: %d", n2);
    printf("\n * Soma dos numeros informados igual a: %d", soma);
    printf("\n *************************");

    system("pause");
    return 0;
 }
 