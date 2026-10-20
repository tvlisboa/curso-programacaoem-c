/**
 * Exemplo 3 
 * Solicite ao usuario para informar diversos numeros
 * Mostre na tela quais numeros sao pares e a quantidade de 
 * numeros pares
 */

 #include <stdio.h>
 #include <stdlib.h>

 int main(){

    int quantidade;
    int numero1;
    int totpar = 0;
    int soma = 0;

    printf(" EXEMPLO 3 - CONTADOR \n");
    printf(" Quantos numeros quer informar ? \n");
    scanf("%d" , &quantidade);

    for (int cont = 1 ; cont<= quantidade ; cont++) {
        printf("Digite: ");
        scanf("%d" , &numero1);

        if(numero1 % 2 == 0){

            totpar = totpar + 1;                //quantidade de numeros pares
            soma = soma + numero1;              //soma total dos numeros pares

        }
    }

    printf("Total de numeros pares informados: %d\n" , totpar);
    printf("Soma dos numeros pares informados: %d\n" , soma);
    system("pause");
    system("cls");
    return 0;
 }