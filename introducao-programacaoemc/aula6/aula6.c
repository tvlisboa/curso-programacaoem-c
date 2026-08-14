/*
* utilizacao de variaveis globais
* utilizacao do menu de escolha - switch-case
*/

# include <stdio.h>
# include <stdlib.h>

/* variaveis globais */
int option;

int main(int argc, char *argv[]){

    printf("***************************** \n");
    printf("*   Sistemas Operacionais.  * \n");
    printf("* Escolha uma opcao abaixo: * \n");
    printf("[ 1 ] - Windows.\n");
    printf("[ 2 ] - Zorin OS.\n");
    printf("[ 3 ] - Pop OS.\n");
    printf("[ 4 ] - Linux Mint.\n");
    printf("[ 5 ] - Steam OS.\n");
    printf("[ 6 ] - Mac.\n");
    printf("[ 9 ] - Mais opcoes.\n");
    printf("[ 0 ] - Sair.\n");
    scanf("%d", &option);
    
    switch (option)
    {
    case 1:
        system("cls");
        printf("Iniciando o Windows...\n");       
        break;

    case 2:
        system("cls");
        printf("Iniciando o Zorin OS...\n");
        break;

    case 3:
        system("cls");
        printf("Iniciando o Pop OS...\n");
        break;

    case 4:
        system("cls");
        printf("Iniciando o Linux Mint...\n");
        break;

    case 5:
        system("cls");
        printf("Iniciando o Steam OS...\n");
        break;

    case 6:
        system("cls");
        printf("Iniciando o Mac...\n");
        break;

    case 9:
        system("cls");
        printf("Mais opcoes...\n");
        break;
    
    case 0:
        system("cls");
        printf("Sair...\n");
        break;

    default:
        system("cls");
        printf("Opcao invalida, tente novamente \n");
        break;
    }

    system("pause");
    return 0;
}