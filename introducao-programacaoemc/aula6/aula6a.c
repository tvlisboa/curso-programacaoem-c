/* 
 * utilizando o switch-case
 * faca um menu onde o usuario
 * possa selecionar os dias da semana
 * 1 - dias da semana
 * 2 - fins de semana
 * 3 - mais informacoes
 * 4 - sair
 * 5 - opcao invalida
 */

 #include <stdio.h>
 #include <stdlib.h>

 /* variaveis globais */
 int option;

 int main(int argc, char const *argv[])
 {

    printf("*********************************** \n");
    printf("* SELECIONE UMA DAS OPCOES ABAIXO * \n");
    printf("*     UTILIZE O MENU A SEGUIR     * \n");
    printf("[ 1 ] - DIAS DA SEMANA \n");
    printf("[ 2 ] - FINAIS DE SEMANA \n");
    printf("[ 3 ] - MAIS INFORMACOES \n");
    printf("[ 4 ] - VOLTAR \n");
    printf("[ 5 ] - SAIR \n");
    scanf("%d", &option);

    switch (option)
    {

    case 1:
        printf("Dias da semana selecionado[...] \n");
        printf("* SELECIONE UMA DAS OPCOES ABAIXO * \n");
        printf("*     UTILIZE O MENU A SEGUIR     * \n");
        printf("[ 2 ] - SEGUNDA-FEIRA \n");
        printf("[ 3 ] - TERCA-FEIRA \n");
        printf("[ 4 ] - QUARTA-FEIRA \n");
        printf("[ 5 ] - QUINTA-FEIRA \n");
        printf("[ 6 ] - SEXTA-FEIRA \n");
        printf("[ 9 ] - VOLTAR \n");
        printf("[ 0 ] - SAIR \n");

        /* utilizando switch-case aninhado  */
        switch (option)
        {

        case 2:
            printf("* DIAS DE SEMANA SELECIONADO * \n");
            printf("* [ 2 ] - SEGUNDA-FEIRA \n");
            break;

        case 3:
            printf("* DIAS DE SEMANA SELECIONADO * \n");
            printf("* [ 3 ] - TERCA-FEIRA \n");
            break;

        case 4:
            printf("* DIAS DE SEMANA SELECIONADO * \n");
            printf("* [ 4 ] - QUARTA-FEIRA \n");
            break;

        case 9:
            printf("* VOLTAR * \n");
            break;

        case 0:
            printf("* [ 0 ] - SAIR DO APP * \n");
            break;
        
        default:
            printf(" OPCAO INFORMADA É INVALIDA - TENTE NOVAMENTE \n");
            break;
        }
        break;
    
    case 2:
        system("cls");
        printf("Finais de semana selecionado[...] \n");
        break;

    case 3:
        system("cls");
        printf("Mais informacoes selecionado[...] \n");
        break;

    case 4:
        system("cls");
        printf("Voltar selecionado[...] \n");
        break;

    case 5:
        system("cls");
        printf("Sair[...] \n");
    break;

    default:
        system("cls");
        printf("Opcao informada é invalida - Tente novamente \n");
        break;
    }
    
    system("pause");
    return 0;
 }
 