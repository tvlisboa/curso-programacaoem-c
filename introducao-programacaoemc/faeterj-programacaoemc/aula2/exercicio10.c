/*
 * Calculo de salario mensal
 * Faca um algoritmo que leia
 * Nome do funcionario - seu salario atual
 * Em seguida - mostre na tela o nome do funcionario e seu salario reajustado em 10%
 */

#include <stdio.h>
#include <stdlib.h>

char nome[100];
double salario;
double novosalario;


int main(int argc, char const *argv[])
{
    printf("************************************************* \n");
    printf("*         SISTEMA DE CALCULO SALARIAL           * \n");
    printf("************************************************* \n\n");
    printf("* INSIRA AS INFORMACOES DO FUNCIONARIO A SEGUIR * \n");

    printf("Nome: ");
    scanf("%s", nome);

    printf("Salario: ");
    scanf("%lf", &salario);

    novosalario = salario+(salario*10)/100;

    printf("Dados informados do funcionario \n");
    printf("Nome funcionario: %s", nome);
    printf("\nSalario anterior: %.2lf", salario);
    printf("\nNovo salario: %.2lf", novosalario);
    return 0;
}
