/**
 * Solicite ao usuario 10 numeros
 * Soma-los e mostre na tela seu resultado
 */

 #include <stdio.h>
 #include <stdlib.h>

 int main(){

    int contador = 1;
    int soma = 0;
    int numero1;

    printf("****************************** \n");
    printf("*     EXERCICIO - SOMADOR    * \n");
    printf("* INSIRA 10 NUMEROS A SEGUIR * \n");
    printf("****************************** \n");

    while (contador<=10) {
        printf("Digite: ");
        scanf("%d" , &numero1);

        soma = soma + numero1;
        contador = contador + 1;
    }

    printf("A soma dos numeros informados foi: %d\n" , soma);
    system("pause");
    return 0;
 }