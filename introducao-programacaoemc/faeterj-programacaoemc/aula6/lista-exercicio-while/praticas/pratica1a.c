/* 
 * Pratica 1
 * Contador ate 100 - Pulando de 10 em 10
*/

#include <stdio.h>
#include <stdlib.h>

int main (){

    int contador = 0;

    printf("******************************** \n");
    printf("* PRATICA 1 - CONTADOR ATE 100 * \n");
    printf("******************************** \n");

    printf("Iniciando a contagem(....) \n");
    
    while(contador<=100){
        printf("%d\n" , contador);
        contador = contador + 10;
    }

    system("pause");
    return 0;
}