/**
 * Pratica 2 
 * Contador decrementando de 5 em 5
 * Iniciando em 50 e indo ate 5 
 */

 #include <stdio.h>
 #include <stdlib.h>

 int main(){

    int contador = 50;

    while(contador>=5){
        printf("%d\n" , contador);
        contador = contador-5;
    }

    system("pause");
    return 0;
 }