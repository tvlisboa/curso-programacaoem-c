/**
 * Exemplo do_while
 * Faca um contador ate 10
 * Utilizando a estrutura de repeticao do_while
 */

 #include <stdio.h>
 #include <stdlib.h>

 int main(){

    int contador = 1;

    printf("Inicio da contagem \n");

    do{

        printf("%d\n" , contador);
        contador++;

    }while(contador<=10);

    system("pause");
    return 0;
 }