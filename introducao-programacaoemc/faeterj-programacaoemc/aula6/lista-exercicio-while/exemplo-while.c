/* Exemplo de utilização da estrutura while - Contador */

/**
 * Utilizando a estrutura while
 * Conte ate 10
 * Iniciando em 1
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{

    int numero1 = 1;

    printf("********************** \n");
    printf("* Exemplo - contador * \n");
    printf("********************** \n");

    while (numero1<=10) {
        printf("Numero: %d\n" , numero1) ;
        numero1++;
    }

    system("pause");
    return 0;
}


