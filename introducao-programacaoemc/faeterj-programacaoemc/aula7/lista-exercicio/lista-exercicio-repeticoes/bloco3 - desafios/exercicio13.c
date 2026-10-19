/**
 * Exercicio 13 - Sequência de fibonacci
 * Faça um programa que mostre os primeiros 15 termos da sequência de Fibonacci, começando por:
 * 0, 1, 1, 2, 3, 5, 8, 13…
 * Cada termo, a partir do terceiro, é obtido pela soma dos dois termos anteriores.
 */

#include <stdio.h>
#include <stdlib.h>

int main() {

    int inicio = 0;
    int final = 1;
    int proximo;

    printf("************************************\n");
    printf("*   EXERCICIO 13  -  FIBONACCI     *\n");
    printf("************************************\n");

    printf("%d, %d", inicio, final);
    printf("* Inicio da contagem de Fibonacci  * \n");

    for (int i = 1; i <= 15; i++) {

        proximo = (inicio + final);

        printf(", %d", proximo);

        inicio = final;
        final = proximo;
    }


    printf("* Fim da contagem de Fibonacci  * \n");
    system("pause");
    return 0;
}