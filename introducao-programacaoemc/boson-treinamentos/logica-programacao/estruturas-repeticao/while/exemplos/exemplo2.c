/**
 * Exemplo 2
 * Faca um algoritmo que imprima na tela
 * Todos os numeros pares que 
 * Esteja entre 1 e 20
 */

 #include <stdio.h>
 #include <stdlib.h>

 int main(){

    int contador = 1;
    int totPares = 0;

    printf("***************************** \n");
    printf("* EXERCICIO - NUMEROS PARES * \n");
    printf("***************************** \n");

    while (contador<=20) {

        if (contador % 2 == 0) {
            printf("%d\n" , contador);

            totPares = totPares + 1;
        }
        
        contador++;
    }
    
    printf("Total de numeros pares: %d\n" , totPares);
    system("pause");
    return 0;
 }