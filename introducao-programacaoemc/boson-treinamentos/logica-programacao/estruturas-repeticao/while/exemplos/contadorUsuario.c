/**
 * Exemplo - Contador ate onde usuario desejar
 * Utilizando a estrutura while
 * Faca a contagem ate onde usuario desejar
 */

 #include <stdio.h>
 #include <stdlib.h>

 int main(){

    int resp;
    int cont = 1;

    printf("************************* \n");
    printf("* EXERCICIO - CONTADOR  * \n");
    printf("************************* \n");

    printf("Qual limite da contagem? \n");
    scanf("%d" , &resp);

    printf("Iniciando a contagem.... \n");
    
        while(cont<=resp){

            printf("%d\n" , cont);
            cont++;

        }

    printf("Fim da contagem ... \n");
    system("pause");
    return 0;
 }