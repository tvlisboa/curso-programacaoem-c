/**
 * Solicite ao usuario 10 numeros diferentes
 * Mostre na tela as seguintes informações
 * Soma dos numeros informados
 * Quantos sao positivos
 * Quantos sao negativos
 * Quantos sao neutros.
 */

 #include <stdio.h>
 #include <stdlib.h>

 int main(int argc, char const *argv[]) {

    int n1;
    int totPositivo, totNegativo , totNeutro;
    int positivo, negativo, neutro;
    int soma = 0;
    double media= 0;

    printf("******************************** \n");
    printf("*          EXERCICIO 5         * \n");
    printf("*      INICIO DA CONTAGEM      * \n");
    printf("* Informe 10 numeros a seguir: * \n");

    for (int i = 1; i <=10; i++) {
        printf("Informe o numero a seguir: ");
        scanf("%d", &n1);

        if(n1 >0){
            totPositivo = totPositivo + 1;
            positivo++;
        }else if(n1 == 0){
            totNeutro = totNeutro + 1;
            neutro++;
        }else{
            totNegativo = totNegativo + 1;
            negativo++;
        }

        soma = soma + n1;
    }

    media = (double)soma/10;

    printf("A soma dos numeros informados foi: %d\n" , soma);
    printf("A media dos numeros informados foi: %.2lf\n" , media);
    printf("A quantidade de numeros positivos foi: %d\n", totPositivo);
    printf("A quantidade de numeros negativos foi: %d\n", totNegativo);
    printf("A quantidade de numeros neutros foi: %d\n", totNeutro);
    system("pause");
    return 0;
 }
 