/**
 * Pratica 1
 * Contador de 10 ate 0
 * Decrementando 2
 */

 #include <stdio.h>
 #include <stdlib.h>

 int main(){

    int contador = 10;

    while (contador>=0) {
        printf("%d\n" , contador);
        contador = contador - 2;
    }
    
    system("pause");
    return 0;
 }