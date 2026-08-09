#include <stdio.h>
#include <stdlib.h>

/*
* mini - exercicio 
* usando entrada de dados
* fornecida pelo usuário
*/

int main(int argc, char *argv[])
{
    /*
    * declaracao das variaveis
    */
   
    char name[30];
    int age;

    printf("Insira seu nome : ");
    gets(name);
    system("cls");

    printf("Insira sua idade : ");
    gets(age);
    system("cls");

    /* imprimi na tela o valor da variavel */
    printf("Seja bem - vindo %s\n" , name , "\n");
    printf("Idade do usuario %s\n" , age , "\n");
    system("pause");
    return 0;
}