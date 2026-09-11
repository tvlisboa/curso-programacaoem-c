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

    int option;                         //selecao do menu
    int cavalos;                        //quantidade de cavalos no haras
    double valorFerradura;              //valor de cada ferradura
    int ferradurasAnimal;               //quantas ferraduras cada animal gasta
    int totalFerraduras;                //total gasto de ferraduras por animal
    double valorTotalFerraduras;        //total em dinheiro gasto por ferraduras

    printf("***************************************** \n");
    printf("*   HARAS - BOM COMPANHEIRO , BEMVINDO  * \n");
    printf("*     SELECIONE UMA DAS OPCOES ABAIXO   * \n");
    printf("***************************************** \n");
    printf("* [ 1 ] - CONSULTA DE ANIMAIS  * \n");
    printf("* [ 2 ] - CADASTRO DE ANIMAIS  * \n");
    printf("* [ 3 ] - CONSULTA DE ESTOQUE  * \n");
    printf("* [ 4 ] - CADASTRO DE PRODUTOS * \n");
    printf("* [ 5 ] - ORCAMENTOS  * \n");
    printf("* [ 9 ] - MAIS OPCOES * \n");
    printf("* [ 0 ] - SAIR * \n");
    scanf("%d", &option);

    
    system("pause");
    return 0;
 }
 