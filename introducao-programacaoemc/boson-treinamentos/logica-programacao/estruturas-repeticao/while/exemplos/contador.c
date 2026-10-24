/**
 * Exemplo - contador
 * Utilizando a estrutura while
 * Conte ate 10 iniciando em 0
 */

 #include <stdio.h>
 #include <stdlib.h>

 int main(){

    int contador = 1;

    printf("************************* \n");
    printf("* EXEMPLO 1 - CONTADOR  * \n");
    printf("************************* \n");

        while (contador <= 10) {
            
            printf("%d\n" , contador);
            contador++;

        }

    system("cls");
    return 0;
 }