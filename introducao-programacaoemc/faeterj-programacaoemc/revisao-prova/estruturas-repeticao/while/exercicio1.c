/**
 * Exercicio 1
 * Apresente os números de 1 até 50 utilizando while.
 */

 #include <stdio.h>
 #include <stdlib.h>

 int main (){

    int cont = 1;

    printf("************************* \n");
    printf("*  EXEMPLO 1 - CONTADOR * \n");
    printf("*   INICIANDO CONTAGEM  * \n");

    while(cont<=50){

        printf("%d\n" , cont);
        cont++;
    }

    printf("Fim do algoritmo \n");    
    system("pause");
    system("cls");
    return 0;
 }