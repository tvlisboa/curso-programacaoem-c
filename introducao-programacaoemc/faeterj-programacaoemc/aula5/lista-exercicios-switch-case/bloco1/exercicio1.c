/**
 * Faca um programa em C - que leia dois numeros inteiros
 * Nao aceite numeros inferiores a zero, em seguida peça para o usuario
 * selecionar uma operacao
 * O meu deve continuar aparecendo - enquanto o usuario nao escolher o 0
 * 1 - SOMA
 * 2 - SUBTRACAO
 * 3 - DIVISAO
 * 4 - MULTIPLICACAO
 * 5 - PORCENTAGEM
 * 6 - POTENCIACAO
 * 7 - RESTO
 * 9 - MAIS INFORMACOES
 * 0 - SAIR
 */

 #include <stdio.h>
 #include <stdlib.h>
 #include <math.h>


 int main(int argc, char const *argv[])
 {
    int n1, n2;
    int opcao;

    printf("********************************** \n");
    printf("*    CALCULADORA - SWITH CASE    * \n");
    printf("********************************** \n");
    printf("\n");
    printf("*  INSIRA DOIS NUMEROS A SEGUIR  * \n");
    printf("* Numero 1: ");
    scanf("%d", &n1);

    /* nao aceita numeros menores do que zero */
    while (n1<0 || n2<0) {
        printf("* Dados informados estao incorretos - tente novamente \n");
        printf("* Numero 1: ");
        scanf("%d", &n1);

        printf("* Numero 2: ");
        scanf("%d", &n2);
    }

    printf("\n");
    printf("* UTILIZE AS OPCOES DO MEU ABAIXO * \n");
        printf("* ( 1 ) - SOMA \n");
        printf("* ( 2 ) - SUBTRACAO \n");
        printf("* ( 3 ) - DIVISAO \n");
        printf("* ( 4 ) - MULTIPLICACAO \n");
        printf("* ( 5 ) - PORCENTAGEM \n");
        printf("* ( 6 ) - POTENCIACAO \n");
        printf("* ( 7 ) - RESTO \n");
        printf("* ( 9 ) - MAIS INFORMACOES \n");
        printf("* ( 0 ) - SAIR DO APP \n");
    scanf("%d", &opcao);

    switch (opcao) {

        case 1:
            system("cls");
            printf("SOMA");
        break;
    
        case 2:
            system("cls");
            printf("SUBTRACAO");
        break;

        case 3:
            system("cls");
            printf("DIVISAO");
        break;

        case 4:
            system("cls");
            printf("MULTIPLICACAO");
        break;

        case 5:
            system("cls");
            printf("PORCENTAGEM");
        break;

        case 6:
            system("cls");
            printf("POTENCIACAO \n");
        break;

        case 7:
            system("cls");
            printf("RESTO \n");
        break;

        case 9:
            system("cls");
            printf(" MAIS INFORMACOES \n");
        break;

        case 0:
        break;


        default:
            printf("************************************************ \n");
            printf("* OPCAO INFORMADA É INVALIDA - TENTE NOVAMENTE * \n");
            printf("************************************************ \n");
        break;
    }

    system("pause");
    return 0;
 }
 