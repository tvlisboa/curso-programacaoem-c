/**
 * Exercicio 4
 * Solicite ao usuario para digitar um numero
 * entre 1 e 10
 * ao digitar , faca sua ordem decrescente ate 0
 * decrementando 1
 */

 #include <stdio.h>
 #include <stdlib.h>

 int main (){

    int numero1;

    printf("*********************** \n");
    printf("*     EXERCICIO 4     * \n");
    printf("*  ORDEM DECRESCENTE  * \n");

    printf("Digite um numero a seguir: ");
    scanf("%d" , &numero1);

    while (numero1>=0) {

        printf("%d\n" , numero1);
        numero1--;

    }
    
    system("pause");
    return 0;
 }