/**
 * Exemplo - Contador ate 0
 * Utilizando a estrutura while
 * Faca a contagem de 10 ate 0
 */

 #include <stdio.h>
 #include <stdlib.h>

 int main(){

    int cont = 10;

    printf("************************ \n");
    printf("* EXEMPLO 2 - CONTADOR * \n");
    printf("************************ \n");

    printf("Inicio do algoritmo... \n");

        while(cont>=0){

            printf("%d\n" , cont);
            cont--;

        }

    printf("Fim do algoritmo. \n");
    system("pause");
    return 0;
 }