/**
 * Exercicio 4 - Tabuada
 * Faça um programa que leia um número inteiro 
 * e mostre a tabuada desse número, de 1 a 10
 * Exemplo: se o usuário digitar 5, 
 * o programa deverá mostrar 
 * 5 x 1 = 5, 
 * 5 x 2 = 10 
 * e assim sucessivamente.
 */

 #include <stdio.h>
 #include <stdlib.h>


 int main(){

    int numero1;
    int resultado = 0;

    printf("************************* \n");
    printf("* EXERCICIO 4 - TABUADA * \n");
    printf("************************* \n");
    printf("Informe numero a seguir - para calcular a sua tabuada \n");
    scanf("%d" , &numero1);

        for (int i = 1; i <= 10; i++) {
            
            resultado = numero1 * i;
            printf("%d x %d = %d\n" , numero1 , i , resultado);

        }

    system("pause");
    return 0;
 }