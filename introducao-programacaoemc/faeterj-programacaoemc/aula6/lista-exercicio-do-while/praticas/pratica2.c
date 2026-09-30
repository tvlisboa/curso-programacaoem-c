/**
 * Pratica 1 - Utilizando a estrutura do_while
 * Faca um algoritmo que conte de 1 até 10
 */

 #include <stdio.h>
 #include <stdlib.h>


 int main(){

    int contador = 1;


    printf("************************ \n");
    printf("* EXERCICIO DO - WHILE * \n");
    printf("************************ \n");

    do {

        printf("%d\n" , contador);
        contador = contador + 1;
        
    } while (contador<=10);

    system("pause");
    return 0;
 }