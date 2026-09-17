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

    /* verifica se os numeros informados sao menores que zero */
    do  {

        printf("* Informe dois numeros a seguir maiores que 0 \n");
        printf("* Numero 1: ");
        scanf("%d", &n1);

        printf("* Numero 2: ");
        scanf("%d", &n2);

        if (n1 <0 || n2 <0) {
            printf("Numeros informados são invalidos - tente novamente \n");
        }

    } while (n1<0 || n2 <0);
    
    n1>n2 ? printf("Numero informado %d e maior: \n" , n1):
    n2>n1 ? printf("Numero informado %d e maior: \n" , n2): 
            printf("Numeros informados - são iguais \n");

    /* teste de saida de dados */
    printf("\n");
    printf("************************ \n");
    printf("Numero 1 informado: %d" , n1);
    printf("\n");

    printf("Numero 2 informado: %d" , n2);
    printf("\n");
    printf("************************ \n");
    printf("\n");

    system("pause");
    return 0;
 }
 