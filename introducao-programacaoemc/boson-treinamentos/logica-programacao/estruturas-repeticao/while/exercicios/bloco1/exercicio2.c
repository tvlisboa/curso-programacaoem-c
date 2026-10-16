/**
 * Exercicio 2
 * Solicite ao usuario para informar um numero
 * Entre 1 e 10
 * Mostre a ordem crescente ate chegar a 100
 * Pulando de 2 em 2
 */

 #include <stdio.h>
 #include <stdlib.h>

 int main (){

    int num1;

    printf("******************** \n");
    printf("*   EXERCICIO 2    * \n");
    printf("******************** \n");

    printf("Digite um numero a seguir - entre 1 e 10: ");
    scanf("%d" , &num1);

    while (num1<0 || num1>10) {

        printf("Dados informados estao incorretos - tente novamente");
        printf("Digite um numero a seguir - entre 1 e 10: ");
        scanf("%d" , &num1);

    }

    while (num1<=100) {
        
        printf("%d\n" , num1);
        num1+=2;
    }

    system("pause");
    return 0;
 }