/**
 * Exemplo 2 - Faca uma tabuada ate 10
 */

 #include <stdio.h>
 #include <stdlib.h>

 int main(int argc, char const *argv[]) {
    
    int num1;
    int resultado;
    int contador = 1;

    printf("************************** \n");
    printf("*   EXERCICIO TABUADA    * \n");
    printf("* DIGITE NUMERO A SEGUIR * \n");
    printf("************************** \n");

    printf("Digite: ");
    scanf("%d" , &num1);

    do {

        resultado = num1 * contador;
        printf("%d X %d = %d\n" , num1 , contador , resultado);
        contador++;

    } while (contador<=10);

    system("pause");
    system("cls");
    return 0;
 }
 