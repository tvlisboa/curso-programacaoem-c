/*
 * Faca um algoritmo que receba quantos cavalos ha em um haras 
 * Valor de cada ferradura
 * Quantas ferraduras sao gastas para cada animal
 * E o total gasto para todos os animais do haras
 */

 #include <stdio.h>
 #include <stdlib.h>

 int main(int argc, char const *argv[])
 {

    int quantidadeCavalos;
    int quantidadeFerraduras;
    double valorFerradura;
    int quantidadeTotalFerraduras;
    double totalGasto;
    
    printf("************************************ \n");
    printf("*   EXERCICIO   HARAS  -  ESTOQUE  * \n");
    printf("************************************ \n");

    printf("* Quantidade de animais no haras: ");
    scanf("%d" , &quantidadeCavalos);

    printf("* Quantidade de ferraduras por animal: ");
    scanf("%d" , &quantidadeFerraduras);

    printf("* Valor unitario da ferradura: ");
    scanf("%lf" , &valorFerradura);

    quantidadeTotalFerraduras = quantidadeCavalos * quantidadeFerraduras;
    totalGasto = quantidadeTotalFerraduras * valorFerradura;

    /* teste de saida de dados */
    printf("Quantidade de animais: %d", quantidadeCavalos);
    printf("\n");
    printf("Quantidade de ferradura por animal: %d", quantidadeFerraduras);
    printf("\n");
    printf("Quantidade total de ferraduras: %d", quantidadeTotalFerraduras);
    printf("\n");
    printf("Valor unitario da ferradura: %.2lf", valorFerradura);
    printf("\n");
    printf("Valor total gasto em ferraduras: %.2lf", totalGasto);
    printf("\n");

    system("pause");
    return 0;
 }
 