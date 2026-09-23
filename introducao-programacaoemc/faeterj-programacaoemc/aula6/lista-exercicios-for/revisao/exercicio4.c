/**
 * Faça um programa em C que leia dois números inteiros e informe a potencia entre eles n1 elevado n1 e n2 elevado a n2
 */

 #include <stdio.h>
 #include <stdlib.h>
 #include <math.h>


 int main(int argc, char const *argv[])
 {

    int n1 , n2;
    double potenciaN1 , potenciaN2;

    printf("************************* \n");
    printf("* EXERCICIO POTENCIACAO * \n");
    printf("************************* \n");

    printf(" * INFORME DOIS NUMEROS A SEGUIR * \n");
    printf("* Numero 1: ");
    scanf("%d", &n1);

    printf("* Numero 2: ");
    scanf("%d", &n2);

    /* potenciacao dos numeros */
    potenciaN1 = pow(n1, n1);
    potenciaN2 = pow(n2, n2);

    /* teste de saida de dados */
    printf("Numero 1: %d\n" , n1);
    printf("Numero 2: %d\n" , n2);
    printf("Potencia do %d\n é igual %.2lf\n" , n1 , potenciaN1);
    printf("Potencia do %d\n é igual %.2lf\n" , n2 , potenciaN2);
    system("pause");
    return 0;
 }
 