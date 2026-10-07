/**
 * Exercicio 4
 * Maior de tres numeros
 * Solicite 3 numeros ao usuario e determine qual e o maior
 */

 #include <stdio.h>
 #include <stdlib.h>

 int main(){

    int num1 , num2 , num3;

    printf("******************************* \n");
    printf("* EXERCICIO - NUMEROS MAIORES * \n");
    printf("*  INSIRA 3 NUMEROS A SEGUIR  * \n");
    printf("******************************* \n");

    printf("Numero 1: ");
    scanf("%d" , &num1);

    printf("Numero 2: ");
    scanf("%d" , &num2);

    printf("Numero 3: ");
    scanf("%d" , &num3);

    /* saida de dados */
    printf("******************************* \n");
    printf("*      NUMEROS INFORMADOS     * \n");
    printf("* Numero 1: %d\n" , num1);
    printf("* Numero 2: %d\n" , num2);
    printf("* Numero 3: %d\n" , num3);
    system("pause");
    system("cls");
    return 0;
 }