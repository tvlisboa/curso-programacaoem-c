/**
 * Exemplo - Contador ate 10
 * Utilizando a estrutura while
 * Faca a contagem ate 10
 */

 #include <stdio.h>
 #include <stdlib.h>

 int main(){

    int cont = 1;

    printf("************************ \n");
    printf("* EXEMPLO 1 - CONTADOR * \n");
    printf("************************ \n");

    printf("Inicio do algoritmo... \n");

        while(cont<=10){

            printf("%d\n" , cont);
            cont++;

        }

        
    printf("Fim do algoritmo \n");
    system("pause");
    system("cls");
    return 0;
 }