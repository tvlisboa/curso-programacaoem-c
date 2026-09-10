/* 
 * Faca um algoritmo que leia 3 valores inteiros
 * A - B - C 
 * mostre na tela a soma de a + b e se e menor que c
 */

 #include <stdio.h>
 #include <stdlib.h>


 int main(int argc, char const *argv[])
 {
    int a;
    int b;
    int c;

    printf("************************* \n");
    printf("*    ALGORITMO SOMA     * \n");
    printf("************************* \n");

    printf("* INFORME 3 NUMEROS A SEGUIR MAIORES QUE 0 * \n");
    printf("* Numero 1 : ");
    scanf("%d", &a);

    printf("* Numero 2 : ");
    scanf("%d", &b);

    printf("* Numero 3 : ");
    scanf("%d", &c);


    /* teste de saida de dados */
    printf("Numero 1 informado : %d", a);
    printf("\n");

    printf("Numero 2 informado : %d", b);
    printf("\n");

    printf("Numero 3 informado : %d", c);
    printf("\n");

    system("pause");
    return 0;
 }
 