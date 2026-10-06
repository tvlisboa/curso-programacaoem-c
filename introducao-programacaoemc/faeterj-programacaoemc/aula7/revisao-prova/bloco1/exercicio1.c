/**
 * Exercicio 1
 * Soma de dois numeros 
 * Crie um algoritmo que - declare duas variaveis inteiras
 * Leie dois numeros pelo teclado
 * Calcule a soma e mostre na tela seu resultado
 */

 #include <stdio.h>
 #include <stdlib.h>

 int main(){

    int num1, num2;
    int soma;

    printf("************************** \n");
    printf("*   EXERCICIO 1 - SOMA   * \n");
    printf("*  INFORME DOIS NUMEROS  * \n");
    printf("************************** \n");

    printf("Numero 1: ");
    scanf("%d" , &num1);

    printf("Numero 2: ");
    scanf("%d" , &num2);

    soma = (num1 + num2);

    /* sada de dados */
    printf("************************** \n");
    printf("*    Dados informados    * \n");
    printf("* Numero 1: %d\n" , num1);
    printf("* Numero 2: %d\n" , num2);
    printf("* Soma dos numeros: %d\n" , soma);
    printf("************************** \n");
    system("pause");
    system("cls");
    return 0;
 }

