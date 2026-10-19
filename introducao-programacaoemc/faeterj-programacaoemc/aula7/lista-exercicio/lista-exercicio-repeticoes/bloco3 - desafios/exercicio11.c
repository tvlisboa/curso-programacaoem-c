/**
 * Exercicio 11 - Calculo de um fatorial
 * Faça um programa que leia um número inteiro não negativo e calcule seu fatorial.
 * Exemplo: se o usuário digitar 5, o programa deverá mostrar:
 * 5! = 120
 */


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

    int numero1;
    int contador;
    int fatorial;
    char resposta[2];

    do {

        printf("Informe um numero a seguir, maior ou igual a 0: ");
        scanf("%d", &numero1);

        fatorial = 1;

        if (numero1 < 0) {

            printf("Nao existem fatoriais para numeros negativos!\n");

        } else {

            for (contador = numero1; contador >= 1; contador--) {

                fatorial = fatorial * contador;

            }

            printf("O valor do fatorial de %d e igual a %d\n",
                   numero1, fatorial);
        }

        printf("Deseja continuar - informe [S/N]? ");
        scanf("%1s", resposta);

    } while (strcmp(resposta, "N") != 0);

    return 0;
}
