/**
 * Exemplo - utilizacao do_while 
 * Criacao de um menu
 */

 #include <stdio.h>
 #include <stdlib.h>

 int main(){

    int opcao;

    do{

        printf("************************** \n");
        printf("* UTILIZE O MENU ABAIXO  * \n");
        printf("* ( 1 ) - CADASTRAR USUARIO \n");
        printf("* ( 2 ) - CONSULTAR USUARIO \n");
        printf("* ( 3 ) - EXCLUIR USUARIO \n");
        printf("* ( 5 ) - MAIS OPCOES \n");
        printf("* ( 9 ) - SAIR DO APP \n");
        scanf("%d" , &opcao);
    
    }while (opcao!=0);

    printf("Fim do algoritmo ! \n");
    system("pause");
    return 0;
 }