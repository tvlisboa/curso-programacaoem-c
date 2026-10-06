/**
 * Exercicio 2
 * Leia dois numeros inteiros e informe ao usuario
 * Qual e o maior numero informado e se sao iguais
 */

 #include <stdio.h>
 #include <stdlib.h>

 int main(){

    int num1, num2;

    printf("******************************** \n");
    printf("*  EXERCICIO - MAIOR & MENOR   * \n");
    printf("* INSIRA DOIS NUMEROS A SEGUIR * \n");
    printf("******************************** \n");

    printf("Numero 1: ");
    scanf("%d" , &num1);

    printf("Numero 2: ");
    scanf("%d" , &num2);

    if(num1>num2){
        printf("******************************** \n");
        printf("Numero 1: %d, informado pelo usuario é MAIOR. " , num1);
        printf("\n******************************** \n");
    }else if(num2>num1){
        printf("******************************** \n");
        printf("Numero 2: %d, informado pelo usuario é MAIOR. " , num2);
        printf("\n******************************** \n");
    }else{
        printf("******************************** \n");
        printf("Numero 1: %d, e Numero 2: %d informados pelo usuario SÃO IGUAIS. " , num1 , num2);
        printf("\n******************************** \n");
    }

    system("pause");
    system("cls");
    return 0;
 }
