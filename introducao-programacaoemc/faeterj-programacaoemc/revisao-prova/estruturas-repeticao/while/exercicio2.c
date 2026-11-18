/**
 * Exercicio 2
 * Apresente os números ímpares entre 1 e 100.
 */

 #include <stdio.h>
 #include <stdlib.h>

 int main(){

    printf("******************************* \n");
    printf("*  EXEMPLO 2 - CONTADOR IMPAR * \n");
    printf("*      INICIANDO CONTAGEM     * \n");

    int cont=0;

    while(cont<=100){

        if(cont % 2 == 1){

            printf("%d\n" , cont);
        }
        
        cont++;

    }

    printf("Fim do algoritmo \n");    
    system("pause");
    system("cls");
    return 0;
 }