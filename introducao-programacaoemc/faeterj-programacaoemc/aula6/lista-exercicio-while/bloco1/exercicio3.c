/**
 * Exercicio 3
 * Numeros pares - mostre todos os numeros pares
 * Entre 1 e 20
 */

 #include <stdio.h>
 #include <stdlib.h>

 int main(){

    int contador = 1;

    printf("****************************** \n");
    printf("*  EXERCICIO - NUMEROS PARES * \n");
    printf("****************************** \n");

    while (contador<=20) {

        if(contador % 2 == 0){
            printf("Numeros pares: %d\n" , contador);
        }

        contador = contador + 1;
    }
    
    system("pause");
    return 0;
 }