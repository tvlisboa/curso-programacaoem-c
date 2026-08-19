#include <stdio.h>
#include <stdlib.h>

/*
 * Utilização de strings e char dentro da linguagem c
 * Iremos armazenar um dado e mostrar na tela
 */

 int main(int argc, char const *argv[])
 {
    char name[50];

    /* entrada de dados do usuario */
    printf("Insira seu nome a seguir:");
    gets(name);
    

    /* saida de dados na tela*/
    system("cls");
    printf("Nome informado do usuario %s\n" , name);
    system("pause");
    return 0;
 }
 