/**
 * Somador
 * Solicite diversos numeros inteiros ao usuario ate digitar n
 * Mostre na tela a sua soma
 */

 #include <stdio.h>
 #include <stdlib.h>
 #include <ctype.h>

 int main(){

    int numero1;                                //numero que o usuario deseja informar
    int soma = 0;                               //acumulador da soma
    char resposta;                              //resposta para fechar app ou continuar

    printf("************************** \n");
    printf("*  EXERCICIO - SOMADOR   * \n");
    printf("************************** \n");
    printf("Informe os numeros abaixo \n");

    do {

        printf("Digite os valores a seguir: ");
        scanf("%d" , &numero1);

        soma = soma + numero1;

        printf("Deseja continuar ? [S/N] \n");
        scanf(" %c" , &resposta);

        /* conversao para uppercase */
        resposta = toupper((unsigned char) resposta);

    } while (resposta !='N');

    printf("A soma dos numeros informados foi: %d\n" , soma);
    system("pause");
    system("cls");
    return 0;
 }