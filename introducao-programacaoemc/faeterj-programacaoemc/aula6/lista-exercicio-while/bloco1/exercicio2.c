/**
 * Exercicio 2
 * Contagem regressiva
 * Mostre os numeros em ordem, iniciando em 10 
 * E terminando em 1
 */

 #include <stdio.h>
 #include <stdlib.h>

 int main(){

    int contador = 10;

    printf("********************** \n");
    printf("* EXERCICIO CONTADOR * \n");
    printf("********************** \n");

    while(contador>=1){
        printf("%d\n" , contador);

        contador = contador - 1;
    }

    system("pause");
    return 0;
 }