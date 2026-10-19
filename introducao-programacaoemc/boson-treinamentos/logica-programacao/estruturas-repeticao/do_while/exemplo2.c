/**
 * Exemplo - Tabuada
 * Utilizando a estrutura do_while
 * Faca uma tabuada de 1 ate 10
 */

 #include <stdio.h>
 #include <stdlib.h>

 int main(){

    int numero1 = 5;
    int contador = 1;
    int resultado = 0;

    do{

        resultado = numero1 * contador;
        printf("%d x %d = %d\n" , numero1 , contador , resultado);
        contador++;

    }while(contador<=10);

    system("pause");
    return 0;
 }