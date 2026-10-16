/**
 * Exercicio 3 
 * Imprima na tela todos os numeros pares entre 1 e 20
 */

#include <stdio.h>
#include <stdlib.h>

int main(){

    int contador = 1;

    printf("************************* \n");
    printf("*      EXERCICIO 3      * \n");
    printf("************************* \n");

    while (contador <= 20) {
        
        if (contador %2 == 0) {

            printf("Numero é %d PAR \n" , contador);
        }

        contador++;

    }
    
    system("pause");
    return 0;
}