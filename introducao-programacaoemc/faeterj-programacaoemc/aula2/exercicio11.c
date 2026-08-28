/*
 * Conversao de medidas
 * Faca um algoritmo  que leia as medidas de um terreno 
 * em metros e converta a medida para centimetros
 * Mostre na tela as informacoes
 */

 #include <stdio.h>
 #include <stdlib.h>

 double altura;               //altura em metros;
 double alturaCmt;            //altura em centimetros;       alturaCmt = altura * 100;
 double largura;              //largura em metros;       
 double larguraCmt;           //largura em centimetros;      larguraCmt = largura * 100;
 double areaTotal;            //area total em metros;        areaTotal = altura * largura
 double areaTotalCmt;         //area total em centimentros;  areaTotalCmt = areaTotal * 100;
 double valorMedioMt;         //preco por metro quadrado
 double precoTotal;           //preco total da area           precoTotal = (areaTotal * valorMedioMt)

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
 