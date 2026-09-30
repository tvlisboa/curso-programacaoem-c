/**
 * Prática 5 - Calcule o fatorial de um numero
 * Utilizando a estrutura do_while
 */

 #include <stdio.h>
 #include <stdlib.h>

 int main(){

    int contador , n1 , fat;

    printf("************************* \n");
    printf("* EXERCICIO - FATORIAL  * \n");
    printf("************************* \n");

    printf("*INSIRA UM NUMERO A SEGUIR: ");
    scanf("%d" , &n1);

    contador = n1;
    fat = 1;

    do
    {

        printf("%d\n" , contador , " X ");
        fat = fat * contador;
        contador = fat - 1;

    } while (contador<1);

    system("pause");
    return 0;
 }