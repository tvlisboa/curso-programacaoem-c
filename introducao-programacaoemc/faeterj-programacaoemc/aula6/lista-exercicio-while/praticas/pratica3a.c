/**
 * Pratica 3
 * Crie um algoritmo utilizando a estrutura while
 * Que faca a contagem ate onde o usuario quiser
 * Incremente 1 
 */

 #include <stdio.h>
 #include <stdlib.h>


 int main(){

    int contador = 1;
    int numero1;

    printf("********************** \n");
    printf("* PRATICA - CONTAGEM * \n");
    printf("********************** \n");

    printf("Insira um numero a seguir: \n");
    scanf("%d" , &numero1);

    while(contador <= numero1){
        printf("%d\n" , contador);
        contador++;
    }

    system("pause");
    return 0;
 }
