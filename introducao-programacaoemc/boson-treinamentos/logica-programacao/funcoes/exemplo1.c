/**
 * Exemplo 1 
 * Utilizado funcoes
 * Solicite ao usuario dois numeros inteiros
 * Faca a sua soma e mostre na tela as informacoes
 */

 #include <stdio.h>
 #include <stdlib.h>

 int somar( int n1 , int n2){

    return (n1 + n2);

 }

 int subtrair (int n1, int n2){

    return (n1 - n2);

 }

 int main(){

    int n1, n2;
    int resultado1;
    int resultado2;

    printf("******************** \n");
    printf("*  EXEMPLO FUNCAO  * \n");
    printf("******************** \n");

    printf("Digite dois numeros a seguir: ");
    printf("Numero 1: ");
    scanf("%d" , &n1);

    printf("Numero 2: ");
    scanf("%d" , &n2);

     resultado1 = somar(n1 , n2);
     resultado2 = subtrair(n1 , n2);

    printf("Resultado da soma dos numeros informados - Numero1:  %d e Numero2: %d foi %d\n." , n1, n2, resultado1);
    printf("Resultado da sutracao dos numeros informados - Numero1:  %d e Numero2: %d foi %d\n." , n1, n2, resultado2);
    system("pause");
    return 0;
 }