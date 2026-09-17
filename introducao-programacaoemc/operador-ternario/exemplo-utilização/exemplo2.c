/**
 * Sintaxe e exemplo de utilização do operador ternário em c
 * Solicite um numero inteiro ao usuario e verifique se é POSITIVO ou NEGATIVO ou NEUTRO
 * Utilize o operador ternario
 */

 #include <stdio.h>
 #include <stdlib.h>

 int main(int argc, char const *argv[])
 {
    int n1;

    printf("************************** \n");
    printf("* OPERADOR TERNARIO EM C * \n");
    printf("************************** \n");
    printf("\n");

    printf("VERIFICAR SE NUMERO E POSITIVO - NEGATIVO - NEUTRO \n");
    printf("* Informe um numero a seguir: \n");
    scanf("%d", &n1);

    /* se o numero for maior que zero - positivo , se for menor - negativo , caso contrario - neutro */
    n1 >0 ? printf("Numero informado é positivo %d\n" , n1) :
    n1 <0 ? printf("Numero informado é negativo %d\n" , n1) : printf("Numero informado é neutro %d\n" , n1);

    system("pause");
    return 0;
 }
 

