/**
 * Pratica 1 - Contador ate 10
 */

 #include <stdio.h>
 #include <stdlib.h>

 int main(int argc, char const *argv[])
 {
    
    int contador = 1;

    printf("******************** \n");
    printf("*     PRATICA 1    * \n");
    printf("******************** \n");

    while (contador<=10) {
        printf("%d\n" , contador);
        contador++;
    }
    
    system("pause");
    return 0;
 }
 