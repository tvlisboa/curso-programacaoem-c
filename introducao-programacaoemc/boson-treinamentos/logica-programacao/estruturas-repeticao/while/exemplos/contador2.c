/**
 * Exemplo 2 
 * Utilizando a estrutura while
 * Conte de 0 a 100 - incrementando 2 a 2
 */

 #include <stdio.h>
 #include <stdlib.h>

 int main(){

    int cont = 1;

    printf("************************ \n");
    printf("* EXEMPLO 2 - CONTADOR * \n");
    printf("************************ \n");
    printf("\n");

    printf("Iniciando contagem[....] \n");

    while(cont <=100){

        printf("%d\n" , cont);
        cont+=2;

    }

    printf("Fim da contagem... \n");
    system("pause");
    return 0;
 }