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

    while (contador<=20) {

        if (contador % 2 == 0) {
            printf("%d\n" , contador);
        }
        
        contador++;
    }
    
    system("pause");
    return 0;
 }