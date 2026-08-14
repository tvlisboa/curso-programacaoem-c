/*
* Utilizando o switch - case 
* Faca um menu de jogo
* 1 - Load Game
* 2 - Resume Game
* 3 - Options
* 4 - Map
* 5 - Stats
* 6 - Quit game
*/

#include <stdio.h>
#include <stdlib.h>

int option;

int main(int argc, char const *argv[]){

    printf("************************* \n");
    printf("*     MENU DE JOGOS     * \n");
    printf("* UTILIZE O MENU ABAIXO * \n");
    printf("* [ 1 ] - LOAD GAME.    * \n");
    printf("* [ 2 ] - RESUME GAME.  * \n");
    printf("* [ 3 ] - OPTIONS.      * \n");
    printf("* [ 4 ] - MAP.          * \n");
    printf("* [ 5 ] - STATS.        * \n");
    printf("* [ 6 ] - QUIT GAME.    * \n");
    printf("************************* \n");
    scanf("%d\n", &option);

    switch (option)
    {
    case 1:
        system("cls");
        printf("Loading Game ... \n");
        break;

    case 2:
        system("cls");
        printf("Resume Game ...\n");
        break;

    case 3:
        system("cls");
        printf("Options ...\n");
        break;

    case 4:
        system("cls");
        printf("Map ...\n");
        break;

    case 5:
        system("cls");
        printf("Stats ...\n");
        break;

    case 9:
        system("cls");
        printf("Quit Game ...\n");
        break;
    
    default:
        system("cls");
        printf("Invalid Option ...\n");
        break;
    }

    system("pause");
    return 0;
}
