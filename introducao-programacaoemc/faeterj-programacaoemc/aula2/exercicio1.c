/* Solicite o nome do usuario
 * Seu peso e mostre na telas informacoes
 * Nome do usuario e o peso informado
 */

#include <stdio.h>
#include <stdlib.h>


int main(){

    char name[100];
    double peso;

    printf("****************************** \n");
    printf("* Insira seu nome a seguir : * \n");
    scanf("%s", name);

    printf("Insira seu peso a seguir : ");
    scanf("%lf", &peso);

    printf("********************************* \n");
    printf("* Dados informados pelo usuario *\n");
    printf("* Nome: %s\n", name);
    printf("* Peso: %.2lf\n", peso);
    printf("\n* Fim do algoritmo! *\n");
    printf("********************************* \n");
    return 0;
 }