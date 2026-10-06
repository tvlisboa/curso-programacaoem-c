/**
 * Pratica 2 - Contador de 100 ate 1
 * Decrementando 10 em 10
 */

 #include <stdio.h>
 #include <stdlib.h>

 int main(){

    int contador = 100;

    while (contador>=1) {
        printf("%d\n" , contador);
        contador-=10;
    }
    
    system("pause");
    return 0;
 }