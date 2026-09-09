/*
 * Crie um algoritmo em c que utilize a estrutura switch - case 
 * para criar um menu de call center
 * utilize de 1 a 5 e tambem 9 e 0 para as seguintes opcoes
 * [1] - Financeiro
 * [2] - Suporte tecnico
 * [3] - Comercial
 * [4] - SAC
 * [5] - Qualidade
 * [9] - Outros assuntos
 * [0] - Sair
 * Utilize a estrutura enquanto - ao apertar 0 sai do menu
 */

 #include <stdio.h>
 #include <stdlib.h>

 int option;

 int main(int argc, char const *argv[])
 {

    printf("************************************* \n");
    printf("* SISTEMA DE CHAMADOS - CALL CENTER * \n");
    printf("*   ESCOLHA UMA DAS OPCOES ABAIXO   * \n");
    printf("************************************* \n");
    printf("[ 1 ] - FINANCEIRO \n");
    printf("[ 2 ] - SUPORTE TECNICO \n");
    printf("[ 3 ] - COMERCIAL \n");
    printf("[ 4 ] - SAC E ATENDIMENTO \n");
    printf("[ 5 ] - QUALIDADE \n");
    printf("[ 6 ] - CHAMADOS \n");
    printf("[ 9 ] - OUTROS ASSUNTOS \n");               //submenus futuros
    printf("[ 0 ] - SAIR DO APP \n");
    scanf("%d", &option);

    switch (option)
    {
    case 1:
        system("cls");
        printf("* [ 1 ] - OPCAO ESCOLHIDA : FINANCEIRO * \n");
        break;
    
    case 2:
        system("cls");
        printf("* [ 2 ] - OPCAO ESCOLHIDA : SUPORTE TÉCNICO * \n");
        break;

    case 3:
        system("cls");
        printf("* [ 3 ] - OPCAO ESCOLHIDA : COMERCIAL * \n");
        break;

    case 4:
        system("cls");
        printf("* [ 4 ] - OPCAO ESCOLHIDA : SAC E ATENDIMENTO * \n");
        break;
    
    case 5:
        system("cls");
        printf("* [ 5 ] - QUALIDADE * \n");
        break;

    case 6:
        system("cls");
        printf("* [ 6 ] - OPCAO ESCOLHIDA : CHAMADOS * \n");
        break;

    case 9:
        system("cls");
        printf("* [ 9 ] - OPCAO ESCOLHIDA : OUTROS ASSUNTOS * \n");
        break;
    
    case 0:
        system("cls");
        printf("* [ 0 ] - SAIR DO APP * \n");
        break;

    default:
        printf("* OPCAO INFORMADA E INVALIDA - TENTE NOVAMENTE MAIS TARDE * \n");
        break;
    }


    system("pause");
    return;
 }
 