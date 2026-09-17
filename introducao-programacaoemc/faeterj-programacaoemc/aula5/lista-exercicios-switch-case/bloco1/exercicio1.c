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
 * Mostre no final as informacoes na tela
 */

 #include <stdio.h>
 #include <stdlib.h>
 #include <math.h>

 int main(int argc, char const *argv[])
 {
    int n1, n2;
    int opcao;
    int soma, subtracao;
    double divisao, mutiplicacao;
    double potenciacao1, potenciacao2, potenciacaoTotal;

    printf("********************************** \n");
    printf("*    CALCULADORA - SWITH CASE    * \n");
    printf("********************************** \n");
    printf("\n");
    printf("*  INSIRA DOIS NUMEROS A SEGUIR  * \n");
    printf("* Numero 1: ");
    scanf("%d", &n1);

    printf("* Numero 2: ");
    scanf("%d", &n2);

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
        soma = n1 + n2;
            system("cls");
            printf("* OPCAO ESCOLHIDA - SOMA * \n");
            printf("* Numero informados pelo usuario: \n");
            printf("* Numero 1: %d\n", n1);
            printf("* Numero 2: %d\n", n2); 
            printf("* A SOMA DOS NUMEROS INFORMADOS É: %d" , soma);
            printf("\n");
        break;
    
        case 2:
        subtracao = n1 - n2;
            system("cls");
            printf("* OPCAO ESCOLHIDA - SUBTRACAO * \n");
            printf("* Numero informados pelo usuario: \n");
            printf("* Numero 1: %d\n", n1);
            printf("* Numero 2: %d\n", n2); 
            printf("* A SUBTRACAO DOS NUMEROS INFORMADOS É: %d" , subtracao);
            printf("\n");
        break;

         //NAO PERMITIR DIVISAO POR ZERO - TESTAR
        case 3:
        divisao = (n1 / n2);
            system("cls");
            printf("* OPCAO ESCOLHIDA - DIVISAO * \n");
            printf("* Numero informados pelo usuario: \n");
            printf("* Numero 1: %lf\n", n1);
            printf("* Numero 2: %lf\n", n2); 
            printf("* A DIVISAO DOS NUMEROS INFORMADOS É: %lf" , divisao);
            printf("\n");
        
        break;

        case 4:
        mutiplicacao = n1 * n2;
            system("cls");
            printf("* OPCAO ESCOLHIDA - MULTIPLICACAO * \n");
            printf("* Numero informados pelo usuario: \n");
            printf("* Numero 1: %d\n", n1);
            printf("* Numero 2: %d\n", n2); 
            printf("* A MULTIPLICACAO DOS NUMEROS INFORMADOS É: %d" , mutiplicacao);
            printf("\n");
        break;

        case 5:
        //informe qual porcentagem deseja calcular
        //porcentagem do numero 1 = (numero1/porcentagem)*100;
        //porcentagemtotal = numero1-numero1porcentagem;
            system("cls");
            printf("* OPCAO ESCOLHIDA - PORCENTAGEM DOS NUMEROS * \n");
            printf("* Numero informados pelo usuario: \n");
            printf("* Numero 1: %d\n", n1);
            printf("* Numero 2: %d\n", n2); 
            printf("* A PORCENTAGEM DOS NUMEROS INFORMADOS É: %d");
            printf("\n");
        break;

        case 6:
        potenciacao1 = pow(n1, n1);
        potenciacao2 = pow(n2, n2);
        potenciacaoTotal = potenciacao1 + potenciacao2;
            system("cls");
            printf("* OPCAO ESCOLHIDA - POTENCIACAO DOS NUMEROS * \n");
            printf("* Numero informados pelo usuario: \n");
            printf("* Numero 1: %d\n", n1);
            printf("* Numero 2: %d\n", n2); 
            printf("* Potenciacao do numero 1 %d\n :" , potenciacao1);
            printf("* Potenciacao do numero 2 %d\n :" , potenciacao2);
            printf("* A POTENCIACAO TOTAL DOS NUMEROS INFORMADOS É: %d" , potenciacaoTotal);
            printf("\n");
        break;

        case 7:                 
        double resto1 = n1 % 2;
        double resto2 = n2 % 2;
        double restototal = n1 + n2;
            system("cls");
            printf("* OPCAO ESCOLHIDA - RESTO * \n");
            printf("* Numero informados pelo usuario: \n");
            printf("* Numero 1: %d\n", n1);
            printf("* Numero 2: %d\n", n2); 
            printf("* Resto do numero 1 %d\n :" , resto1);
            printf("* Resto do numero 2 %d\n :" , resto2);
            printf("* A SOMA DOS RESTO TOTAL DOS NUMEROS INFORMADOS É: %d" , restototal);
            printf("\n");
        break;

        case 9:
            system("cls");
            printf(" MAIS INFORMACOES \n");
            //tipos matematicos
            //tipos numericos
            //conversao de base numericas
            //conversao de medidas
            //sobre o aplicativo
            //sair
        break;

        case 0:
        system("cls");
        printf("* SAIR DO APP \n");
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
 