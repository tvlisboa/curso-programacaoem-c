/**
 * Exemplo 4 
 * Utilizando uma funcao
 * Solicite ao usuario um numero
 * E calcule a sua sequencia de fibonacci
 */

#include <stdio.h>
#include <stdlib.h>

int main(){

    int cont;
    int t1 = 0;
    int t2 = 1;
    int t3;

    printf("Informe o valor de t1: ");
    scanf("%d" , &t1);

    printf("Informe o valor de t2: ");

        for(cont = 3; cont<=10 ; cont++){

            t3 += t1 + t2;
            printf("%d\n" , t3);

            t1 += t2;
            t3 =+ t3;

        }

    system("pauses");
    return 0;
}