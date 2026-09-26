/**
 * Utilizando a estrutura for
 * Solicite ao usuario 10 numeros diferentes
 * Calcule a suma soma e mostre na tela
 */

 #include <stdio.h>
 #include <stdlib.h>

 int main(){

    int numero1;
    int soma = 0;

    printf("******************************* \n");
    printf("*         EXERCICIO 9         * \n");
    printf("*      INICIO DA CONTAGEM     * \n");
    printf("* Informe 10 numeros a seguir * \n");

    for (int i = 1; i <=10; i++) {
        printf("Informe um numero a seguir: ");
        scanf("%d", &numero1);

        soma = soma +  numero1;
    }

    printf("Soma dos numeros informados: %d\n" , soma);
    printf("*      FIM DA CONTAGEM      * \n");
    system("pause");
    return 0;
 }