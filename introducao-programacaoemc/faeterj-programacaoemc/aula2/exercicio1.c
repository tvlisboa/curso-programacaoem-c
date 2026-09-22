/* Solicite o nome do usuario
 * Seu peso e mostre na telas informacoes
 * Nome do usuario e o peso informado
 * Idade do usuario e sua nacionalidade
 */

#include <stdio.h>
#include <stdlib.h>

int main(){

    char nome[100];
    char nacionalidade[100];
    double peso;
    int idade;

    printf("****************************** \n");
    printf("* Informe nome do usuario: * ");
    scanf("%s", nome);

    printf("Informe o peso do usuario: ");
    scanf("%lf", &peso);

    printf("Informe a idade do usuario: ");
    scanf("%d", &idade);

    printf("Nacionalidade do usuario: ");
    scanf("%s", nacionalidade);

    printf("********************************* \n");
    printf("* Dados informados pelo usuario *\n");
    printf("* Nome do usuario: %s\n", nome);
    printf("* Peso do usuario: %.2lf\n", peso);
    printf("* Idade do usuario: %d\n", idade);
    printf("* Nacionalidade do usuario: %s\n", nacionalidade);
    printf("\n* Fim do algoritmo! *\n");
    printf("********************************* \n");
    return 0;
 }