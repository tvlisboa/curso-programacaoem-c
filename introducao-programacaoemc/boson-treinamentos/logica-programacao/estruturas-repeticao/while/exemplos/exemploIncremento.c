/**
 * Exemplo - Contador ate onde usuario desejar
 * Utilizando a estrutura while
 * Faca a contagem ate onde usuario desejar
 * Solicite tambem o valor do incremento
 */

 #include <stdio.h>
 #include <stdlib.h>

 int main(){

    int resp;
    int incremento;
    int cont = 1;

    printf("************************ \n");
    printf("* EXEMPLO - INCREMENTO * \n");
    printf("************************ \n");

    printf("Qual limite da contagem ? ");
    scanf("%d" , &resp);

    printf("Qual valor do incremento ? ");
    scanf("%d" , &incremento);

    while(cont <= resp){

        printf("%d\n" , cont);
        cont = cont + incremento;

    }

    printf("Fim do algoritmo. \n");
    system("pause");
    return 0;
 }