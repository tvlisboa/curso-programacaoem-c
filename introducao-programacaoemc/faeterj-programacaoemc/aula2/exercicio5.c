/*
 * Numeros antecessores e sucessores
 * Faca um algoritmo que solicite um numero inteiro
 * ao usuario - calcule seu numero antecessor e sucessor
 * Mostre as informacoes na tela
 */

 #include <stdio.h>
 #include <stdlib.h>

 int main(int argc, char const *argv[])
 {
    int n1;
    int antecessor;
    int sucessor;

    printf("************************** \n");
    printf("* ANTECESSOR OU SUCESSOR * \n");
    printf("************************** \n");

    printf("* Informe um numero a seguir *");
    printf("\n *Numero 1: ");
    scanf("%d", &n1);

        /* nao aceita numeros menores que zero*/
        while (n1<0)
        {
            printf("Numero informado é invalido - tente novamente! \n");
            printf("Numero 1: ");
            scanf("%d", &n1);
        }
    

    /* numeros antecessores e sucessores*/
    antecessor = n1 - 1 ;
    sucessor = n1 + 1;

    printf("**************************");
    printf("\n*     DADOS INFORMADOS   *");
    printf("\n*Numero informado: %d", n1);
    printf("\n*Numero antecessor: %d", antecessor);
    printf("\n*Numero sucessor: %d", sucessor);
    printf("\n*Fim do algoritmo!");
    printf("\n************************** \n");
    system("pause");
    return 0;
 }
 