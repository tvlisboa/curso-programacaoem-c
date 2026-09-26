/**
 * Utilizando a estrutura for
 * Solicite ao usuario 5 numeros diferentes
 * Calcule sua media e mostre na tela as informações
 */

 #include <stdio.h>
 #include <stdlib.h>

 int main(int argc, char const *argv[])
 {

    int numero1;
    int soma = 0;
    double media;
    
    printf("************************* \n");
    printf("*      EXERCICIO 5      * \n");
    printf("*   INICIO DA CONTAGEM  * \n");

    /* quantos numeros serao digitados pelo usuario */
    for (int i = 1; i <=5; i++) {
        printf("Informe um numero a seguir: ");
        scanf("%d", &numero1);

        soma = soma + numero1;
    }

    media = (double)soma / 5;
    printf("A media dos numeros informados foi: %.1lf\n" , media);
    printf("A soma dos numeros informados foi: %d\n" , soma);
    printf("*      FIM DA CONTAGEM      * \n");
    system("pause");
    return 0;
 }
 