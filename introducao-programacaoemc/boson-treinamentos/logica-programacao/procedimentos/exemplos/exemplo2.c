/**
 * Exemplo 2 - Soma
 * Receba dois numeros inteiros pelo usuario
 * Utilize uma funcao soma
 * E faca a soma dos dois valores
 * E mostre as informacoes na tela
 */

 #include <stdio.h>
 #include <stdlib.h>

soma(int n1, int n2){

    return n1+n2;
 }

 int main(){

    int n1 , n2;

    printf("******************** \n");
    printf("*   EXEMPLO SOMA   * \n");
    printf("******************** \n");

    printf("Informe 2 numeros a seguir  \n");
    printf("Numero 1: ");
    scanf("%d" , &n1);

    printf("Numero 2: ");
    scanf("%d" , &n2);

    soma(n1, n2);

    system("pause");
    return 0;
 }