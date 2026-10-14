/**
 * Exemplo 3 - Solicite ao usuario para informar um numero
 * E faca a sua tabuada
 * Mostre na tela as informacoes
 */

 #include <stdio.h>
 #include <stdlib.h>

 int main(){

    int numero1;
    int resultado;
    int contador = 1;

    printf("******************** \n");
    printf(" EXERCICIO - CALC  * \n");

    printf("Digite um numero: ");
    scanf("%d" , &numero1);

    do {

        resultado = numero1 * contador;
        printf("%d X %d = %d\n" , numero1 , contador , resultado);
        contador++;

    } while (contador<=10);
    
    system("pause");
    system("cls");
    return 0;

 }