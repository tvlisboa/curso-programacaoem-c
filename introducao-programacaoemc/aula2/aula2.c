#include <stdio.h>
#include <stdlib.h>

/* biblioteca para idiomas*/
#include <locale.h>

int main(int argc, char *argv){
    /* linha abaixos - configuracoes para idioma portugues*/
    setlocale(LC_ALL, "Portuguese");

    /* linha de comando para alteracao da cor do texto*/
    system("color E");
    printf("Acentuações e utilizações de pontuações personalizadas. \n");
    system("pause");
    /*limepza da tela */
    system("cls");
    printf("@Author - Thiago Lisboa \n");
    system("pause");
    return 0;
}