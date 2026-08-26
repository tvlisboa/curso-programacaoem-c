/* Solicite o nome do usuario
 * Seu peso e mostre na telas informacoes
 * Nome do usuario e o peso informado
 */

#include <stdio.h>
#include <stdlib.h>


int main(){

    char name[100];
    double peso;

    printf("Insira seu nome a seguir : ");
    scanf("%s", name);

    printf("Insira seu peso a seguir : ");
    scanf("%lf", &peso);

    printf("Dados informados pelo usuario.\n");
    printf("Nome informado do usuario: %s\n", name);
    printf("Peso informado do usuario: %.2lf", peso);
    printf("\nFim do algoritmo! \n");
    return 0;
 }