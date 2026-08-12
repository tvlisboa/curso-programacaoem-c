#include <stdio.h>
#include <stdlib.h>


int main(){

    /* variavel que aceita caracteres - delimita o tamanho da variavel */
    char name[50];

    printf("******************************* \n");
    printf("* Insira seus dados a seguir * \n");
    printf("* Nome do usuario: ");
    gets(name);
    system("cls");

    /* escreve a mensagem na tela */
    printf("Seja bem - vindo %s\n" , name);
    system("pause");
    return 0;
}