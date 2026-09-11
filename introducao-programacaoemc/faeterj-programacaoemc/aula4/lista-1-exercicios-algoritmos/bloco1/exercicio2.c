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

    switch (option)
    {

    case 1:
        system("cls");
        printf("***************************************** \n");
        printf("* [ 1 ] - OPCAO ESCOLHIDA : CONSULTA DE ANIMAIS * \n");
        printf("* INSIRA AS INFORMACOES DO ANIMAL A SEGUIR: * \n");
        break;
    
    case 2:
        system("cls");
        printf("***************************************** \n");
        printf("* [ 2 ] - OPCAO ESCOLHIDA : CADASTRO DE ANIMAIS * \n");
        printf("* INSIRA AS INFORMACOES DO ANIMAL A SEGUIR: * \n");
        break;
    
    case 3:
        system("cls");
        printf("* [ 3 ] - OPCAO ESCOLHIDA : CONSULTA DE ESTOQUE * \n");
        break;
    
    case 4:
        system("cls");
        printf("* [ 4 ] - OPCAO ESCOLHIDA : CADASTRO DE PRODUTOS * \n");
        break;

    case 5:
        system("cls");
        printf("* [ 5 ] - OPCAO ESCOLHIDA : ORCAMENTOS * \n");
        //1 SALVAR ORCAMENTO 
        //2 EXCUIR ORCAMENTO
        //3 CANCELAR ORCAMENTO
        //4 NOVO ORCAMENTO
        printf("* Numero de animais disponiveis no haras ? ");
        scanf("%d", &cavalos);

        printf("* Valor da ferradura utilizada: ");
        scanf("%lf", &valorFerradura);

        printf("* Total de ferraduras utilizadas por animal: ");
        scanf("%d", &ferradurasAnimal);

        //valor total de ferraduras gastas por animal
        totalFerraduras = cavalos * ferradurasAnimal;
        //5 PEQUISAR
        //9 MAIS OPCOES
        //0 SAIR
        break;

    case 9:
        system("cls");
        printf("* [ 9 ] - OPCAO ESCOLHIDA : ORCAMENTOS * \n");
        break;

    case 0:
        break;
    
    default:
        printf("***************************************** \n");
        printf("* OPCAO ESCOLHIDA É INVÁLIDA * \n");
        printf("***************************************** \n");
        break;
    }

    system("pause");
    return 0;
 }
 