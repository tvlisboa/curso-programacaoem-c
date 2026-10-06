/**
 * Pratica 5
 * Solicite ao usuario 10 numeros
 * E faca sua soma
 * Mostre as informacoes na tela
 */

 #include <stdio.h>
 #include <stdlib.h>

 int main(){

    int numeros = 0;
    int soma = 0;
    int contador = 1;

    printf("****************************** \n");
    printf("*    PRATICA 5 - SOMADOR     * \n");
    printf("* INSIRA A SEGUIR 10 NUMEROS * \n");
    printf("****************************** \n");

    while (contador<=10) {
        printf("Digite numero a seguir: ");
        scanf("%d" , &numeros);

        soma = soma + numeros;
        contador +=1;
    }

    printf("****************************** \n");
    printf("* Soma dos numeros informados: %d\n" , soma);
    system("pause");
    return 0;
 }