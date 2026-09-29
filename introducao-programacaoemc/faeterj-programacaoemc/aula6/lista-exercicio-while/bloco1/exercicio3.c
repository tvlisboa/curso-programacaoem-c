/**
 * Exercicio 3
 * Numeros pares - mostre todos os numeros pares
 * Entre 1 e 20
 */

 #include <stdio.h>
 #include <stdlib.h>

 int main(){

    int contador = 0;

    printf("****************************** \n");
    printf("*  EXERCICIO - NUMEROS PARES * \n");
    printf("****************************** \n");

    while (contador<=20) {

        printf("%d", contador);

        if(contador % 2 == 1){

        }

        contador = contador + 1;
    }
    




    system("pause");
    return 0;
 }