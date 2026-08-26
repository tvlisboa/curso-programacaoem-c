/* 
 * Faca um algoritmo que leia dois valores
 * do terreno - altura e largura
 * Calcule a area do terreno e mostre na tela
 * area = altura * largura
 */

 #include <stdio.h>
 #include <stdlib.h>

 int main(int argc, char const *argv[])
 {
    double altura, largura, area;

    printf("**************************************** \n");
    printf("*       CALCULO DE AREA DO TERRENO     * \n");
    printf("* Insira as medidas do terreno abaixo: * \n");
    printf("**************************************** \n");
    printf("* Inicio do algoritmo. *\n");

    /* entrada de dados pelo usuario*/
    printf("Digite a altura do terreno em mt²: ");
    scanf("%lf", &altura);

    printf("Digite a largura do terreno em mt²: ");
    scanf("%lf", &largura);

    /* calculo da area do terreno */
    area = largura * altura;

    return 0;
 }
 