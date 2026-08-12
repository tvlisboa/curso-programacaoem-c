/*
* utilizacao de variaveis globais
* utilizacao do menu de escolha - switch-case
*/

# include <stdio.h>
# include <stdlib.h>

/* variaveis globais */
int option;

int main(int argc, char *argv[]){

    printf("* Sistemas Operacionais. *\n");
    printf("[ 1 ] - Windows \n");
    printf("[ 2 ] - Linux \n");
    printf("[ 3 ] - Mac \n");
    printf("\nEscolha uma opcao acima: \n");
    scanf("%d", &option);
    
    switch (option)
    {
    case 1:
        system("cls");
        printf("Inciando o Windows... \n");       
        break;

    case 2:
        system("cls");
        printf("Inciando o Linux... \n");
        break;

    case 3:
        system("cls");
        printf("Inciando o Mac... \n");
        break;

    case 4:
        system("cls");
        printf("Mais opcoes... \n");
        break;

    case 9:
        system("cls");
        printf("Sair... \n");
        break;

    default:
        system("cls");
        printf("Opcao invalida, tente novamente \n");
        break;
    }

    system("pause");
    return 0;
}