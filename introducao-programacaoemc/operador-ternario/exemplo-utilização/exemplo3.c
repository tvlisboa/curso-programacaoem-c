/**
 * Maior entre os numeros
 * Solicite dois numeros inteiros ao usuario
 * Utilizando o operador ternario
 * Informe qual e o maior 
 * Caso eles sejam iguais - "Numeros Iguais"
 */

 #include <stdio.h>
 #include <stdlib.h>


 int main(int argc, char const *argv[])
 {

    int n1, n2;

    printf("************************* \n");
    printf("* COMPARACAO DE NUMEROS * \n");
    printf("************************* \n");
    printf("\n");

    printf("* Informe dois numeros a seguir maiores que 0 \n");
    printf("* Numero 1: ");
    scanf("%d", &n1);

    printf("* Numero 2: ");
    scanf("%d", &n2);

    /* teste de saida de dados */
    printf("************************ \n");
    printf("Numero 1 informado: %d" , n1);
    printf("\n");

    printf("Numero 2 informado: %d" , n2);
    printf("\n");

    system("pause");
    return 0;
 }
 