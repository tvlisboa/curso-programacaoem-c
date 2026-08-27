/*
 * Conversao de medidas
 * Faca um algoritmo  que leia as medidas de um terreno 
 * em metros e converta a medida para centimetros
 * Mostre na tela as informacoes
 */

 #include <stdio.h>
 #include <stdlib.h>

 double altura;
 double largura;
 double areaTotal;
 double preco;
 double precoTotal;

 int main(int argc, char const *argv[])
 {
    printf("************************ \n");
    printf("* CONVERSAO DE MEDIDAS * \n");
    printf("************************ \n");

    printf("Informe as medidas do terreno: \n");
    printf("Altura do terreno: ");
    scanf("%lf", &altura);

    printf("Largura do terreno: ");
    scanf("%lf", &largura);
    return 0;
 }
 