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
    printf("Digite a altura do terreno em mt: ");
    scanf("%lf", &altura);

    printf("Digite a largura do terreno em mt: ");
    scanf("%lf", &largura);

    /* calculo da area do terreno */
    area = largura * altura;

    /* saida de dados */
    printf("****************************************");
    printf("\nAltura do terreno em mt: %.2lf", altura);
    printf("\nLargura do terreno em mt: %.2lf", largura);
    printf("\nArea total do terreno em mt: %.2lf", area);
    printf("\n**************************************** \n");
    return 0;
 }
 