/*
 * Perimetro de um retangulo
 * Faca um algoritmo que leia
 * A altura e a largura de um retangulo
 * Em seguida - mostre na tela o perimetro do retangulo
 * areatotal = (altura + largura) * 2
 */

#include <stdio.h>
#include <stdlib.h>

/* variaveis globais */
double alturaRetangulo;
double larguraRetangulo;
double areaTotal;

int main(int argc, char const *argv[])
{
    printf("******************** \n");
    printf("* CALCULOS DO RETANGULO * \n");
    printf("* INSIRA AS INFORMACOES ABAIXO * \n");
    printf("* Altura do retangulo: ");
    scanf("%lf", &alturaRetangulo);

    printf("* Largura do retangulo: ");
    scanf("%lf", &larguraRetangulo);

    areaTotal = (alturaRetangulo + larguraRetangulo) * 2;               //calculo area total do retangulo

    /* teste de saida de dados */
    printf("******************** \n");
    printf("* DADOS INFORMADOS *");
    printf("*\n Altura do retangulo: %.2lf", alturaRetangulo);
    printf("*\n Largura do retangulo: %.2lf", larguraRetangulo);
    printf("*\n Perimetro do retagulo: %2.lf", areaTotal);
    printf("******************** \n");
    return 0;
}
