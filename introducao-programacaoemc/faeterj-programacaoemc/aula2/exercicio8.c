/*
 * Produto de dois valores
 * Faca um algoritmo que leia dois valores
 * Calcule o resultado da multiplicacao entre eles
 */

 #include <stdio.h>
 #include <stdlib.h>


 int main(int argc, char const *argv[])
 {
    double n1;
    double n2;

    printf("************************ \n");
    printf("* PRODUTO DE 2 VALORES * \n");
    printf("************************ \n");

    printf("Informe 2 numeros a seguir \n");
    printf("Numero 1: ");
    scanf("%lf", &n1);

    printf("Numero 2: ");
    scanf("%lf", &n2);

    double mult = (n1 * n2);

    printf("* Numeros informados pelo usuario *");
    printf("* \nNumero 1: %.2f", n1);
    printf("* \nNumero 2: %.2f", n2);
    printf("* \nResultado do produto dos numeros informados: %.2f", mult);
    system("\npause");
    return 0;
 }
 