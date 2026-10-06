/**
 * Pratica 1
 * Contador ate 10 - pulando de 2 em 2
 */

 #include <stdio.h>
 #include <stdlib.h>

 int main (){

    int contador = 0;

    while(contador<=10){
        printf("%d\n" , contador);
        contador+=2;
    }


    system("pause");
    return 0;
 }