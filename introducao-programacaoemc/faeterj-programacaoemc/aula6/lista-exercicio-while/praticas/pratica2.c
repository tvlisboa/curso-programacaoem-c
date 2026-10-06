/**
 * Pratica 1 - Contador ate 10 ate 1
 */

 #include <stdio.h>
 #include <stdlib.h>

 int main(int argc, char const *argv[])
 {

    int contador = 10;

    printf("*********************** \n");
    printf("*      PRATICA 2      * \n");
    printf("* CONTADOR DECREMENTO * \n");
    printf("*********************** \n");

    while (contador>0)
    {
        printf("%d\n" , contador);
        contador--;
    }

    printf("*********************** \n");
    printf("*   FIM DA CONTAGEM   * \n");
    printf("*********************** \n");
    system("pause");
    return 0;
 }
 