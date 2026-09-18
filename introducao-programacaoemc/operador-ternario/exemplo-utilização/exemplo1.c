/**
 * Sintaxe e exemplo de utilização do operador ternário em c
 * Solicite um numero inteiro ao usuario e verifique se é maior que 10
 * Sendo maior - incremente 
 * Sendo menor - decremente
 * Utilize o operador ternario
 */

 #include <stdio.h>
 #include <stdlib.h>

 int main(int argc, char const *argv[])
 {
    int n1;
    int option;

    printf("************************** \n");
    printf("* OPERADOR TERNARIO EM C * \n");
    printf("************************** \n");
    printf("\n");

        printf("* Digite um numero a seguir: ");
        scanf("%d", &n1);

        /* nao aceita numeros menores que 0 */
        while (n1<0) {
            printf("* Numero informado e invalido - tente novamente * \n");
            printf("* Digite um numero a seguir: ");
            scanf("%d", &n1);
        }
        
        /* teste de saida de dados - antes da validacao */
        printf("Numero informado pelo usuario: %d", n1);
        printf("\n");

        /* 
         * incrementa se for maior que 10
         * decrementa se for menor que 10
         * numero++ : numero = numero + 1
         * numero-- : numero = numero - 1 
         */

        n1 >= 10 ? n1++ : n1--;
        printf("Novo valor do numero 1:  %d", n1);
        printf("\n");

    system("pause");
    return 0;
 }
 