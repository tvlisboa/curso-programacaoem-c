/**
 * Solicite ao usuario um numero inteiro 
 * Utilizando o operador ternario verifique
 * Numero positivo
 * Numero negativo
 * Numero neutro
 */

 #include <stdio.h>
 #include <stdlib.h>

 int main(int argc, char const *argv[])
 {

    int n1;

    printf("*************************************** \n");
    printf("* NUMERO POSITIVO - NEGATIVO - NEUTRO * \n");
    printf("*************************************** \n");
    printf("\n");


    printf("Insira um numero inteiro a seguir: ");
    scanf("%d", &n1);

    n1>0 ? printf("Numero informado é positivo : %d\n" , n1) :
    n1<0 ? printf("Numero informado é negativo : %d\n" , n1) :
           printf("Numero informado é neutro : %d\n" , n1);

    system("pause");
    return 0;
 }
 