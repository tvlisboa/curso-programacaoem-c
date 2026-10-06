/**
 * Pratica 1
 * Crie um contador de 0 ate 30 - pulando de 3 em 3
 */

 #include <stdio.h>
 #include <stdlib.h>

 int main(){

    int contador = 0;

    printf("******************************** \n");
    printf("* PRATICA 1 - CONTADOR ATE 30  * \n");
    printf("******************************** \n");

    printf("Iniciando a contagem . . . . \n");

    while(contador<=30){
        printf("%d\n" , contador);
        contador = contador + 3;
    }

    printf("******************************** \n");
    printf("*        FIM DA CONTAGEM       * \n");
    printf("******************************** \n");

    system("pause");
    return 0;
 }