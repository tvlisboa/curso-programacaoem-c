/**
 * Exercicio 2
 * Solicite ao usuario para informar um numero
 * Entre 1 e 10
 * Mostre a ordem crescente ate chegar a 100
 * Solicite ao usuario para informar o salto.
 */

 #include <stdio.h>
 #include <stdlib.h>

 int main (){

    int num1;
    int salto;

    printf("******************** \n");
    printf("*   EXERCICIO 2    * \n");
    printf("******************** \n");

    printf("Digite um numero a seguir - entre 1 e 10: ");
    scanf("%d" , &num1);

    while (num1<0 || num1>10) {

        printf("Dados informados estao incorretos - tente novamente \n");
        printf("Digite um numero a seguir - entre 1 e 10: ");
        scanf("%d" , &num1);

    }

    printf("Informe o salto a seguir: ");
    scanf("%d" , &salto);

    while (num1<=100) {
        
        printf("%d\n" , num1);
        num1 = num1 + salto;
    }

    printf("Fim do exercicio \n");
    system("pause");
    return 0;
 }