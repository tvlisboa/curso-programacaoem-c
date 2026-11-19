/**
 * Exemplo funcao 
 * Utilizando funcoes
 * Crie um algoritmo que receba dois numeros inteiros
 * e faca sua soma
 * Mostre as informacoes na tela
 */

 #include <stdio.h>
 #include <stdlib.h>

 int somar(int numero1, int numero2){

    return numero1 + numero2;

 }

 int main(){

    int a;
    int b;
    int resultado;

    printf("********************** \n");
    printf("* EXEMPLO 1 - FUNCAO * \n");
    printf("********************** \n");

    printf("Digite dois numeros a seguir: \n");
    printf("Numero 1: ");
    scanf("%d" , &a);

    printf("Numero 2: ");
    scanf("%d" , &b);

    resultado = somar(a , b);

    printf("A soma dos valores informados foi: %d\n " , resultado);
    system("pause");
    system("cls");
    return 0;
 }