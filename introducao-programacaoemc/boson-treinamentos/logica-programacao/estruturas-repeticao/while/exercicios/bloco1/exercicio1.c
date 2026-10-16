/**
 * Exercicio 1 - Solicite ao usuario um numero, se for menor do que 10
 * Imprima na tela os numeros ate chegar no numero informado
 */

 #include <stdio.h>
 #include <stdlib.h>

 int main(){

    int numero1;

    printf("******************** \n");
    printf("*    EXERCICIO 1   * \n");
    printf("******************** \n");

    printf("* Informe um numero a seguir: ");
    scanf("%d" , &numero1);

    while (numero1<0 || numero1>10) {
        printf("Numero informado e invalido - tente novamente ! \n");

        printf("* Informe um numero a seguir: ");
        scanf("%d" , &numero1);
    }

    while (numero1<=10) {
        printf("%d\n" , numero1);

        numero1++;
    }
    
    system("pause");
    return 0;
 }