/*
 * Solicite ao usuario a entrada de algumas informacoes
 * E as imprima na tela 
 * Nome - idade - cidade
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    char name[100];
    int age;
    char city[100];

    /*
     * entrada de dados do usuario
     */

    printf("Insira seu nome a seguir : ");
    gets(name);
    system("cls");

    printf("Insira sua idade a seguir : ");
    gets(age);
    system("cls");

    printf("Insira sua cidade de origem a seguir : ");
    gets(city);
    system("cls");

    if (age >= 18){
        printf("Usuario informado é maior de idade, %d\n", age);
    }else{
        printf("Usuario informado é menor de idade, %d\n", age);
    }

    /*
    * Impressão das informações na tela - informadas pelo usuario
    */

    printf("Dados informados pelo usuario : \n");
    printf("Nome do usuario : %s\n", name);
    printf("Idade do usuario : %d\n", age);
    printf("Cidade do usuario : %s\n", city);
    system("pause");
    return 0;
}


