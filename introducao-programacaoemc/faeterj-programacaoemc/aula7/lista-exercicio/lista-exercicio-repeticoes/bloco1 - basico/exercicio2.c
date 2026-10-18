/**
 * Exercicio 2 - Contagem regressiva
 * Uma nave espacial está se preparando para o lançamento. 
 * Faça um programa que mostre uma contagem regressiva de 10 até 1 e, 
 * ao final, exiba a mensagem “Lançamento!”.
 */

 #include <stdio.h>
 #include <stdlib.h>

 int main(){

    printf("*************************************** \n");
    printf("* EXERCICIO 2 - CONTAGEM REGRESSIVA   * \n");
    printf("*     INICIANDO LANÇAMENTO EM . . .   * \n");
    printf("*************************************** \n");

    for (int i = 10; i >=0; i--) {

        printf("%d\n" , i);
        
    }

    printf("************************************* \n");
    printf("*       LANÇAMENTO AUTORIZADO       * \n");
    printf("*              LANÇAR               * \n ");
    printf("************************************* \n");
    system("pause");
    return 0;
 }