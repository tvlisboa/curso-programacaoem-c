/**
 * Exemplo 1 
 * Faca um contador utilizando a estrutura while
 * Que conte de 0 ate 10
 * Mostre na tela as informacoes
 */

 #include <stdio.h>
 #include <stdlib.h>

 int main(){

    int contador = 1;

    while (contador <=10) {

        printf("%d\n" , contador);
        contador++;
    }
    
    system("pause");
    return 0;
 }