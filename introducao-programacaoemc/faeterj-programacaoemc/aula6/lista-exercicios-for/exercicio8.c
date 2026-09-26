/**
 * Faca um algoritmo que solicite ao usuario as seguintes informacoes
 * Ate qual numero deseja contar
 * Qual e seu incremento
 * A soma dos numeros informados
 * A media dos numeros informados
 * Quantos numeros sao positivos
 * Quantos numeros sao negativos
 * Quantos numeros sao neutros
 */

 #include <stdio.h>
 #include <stdlib.h>

 int main(int argc, char const *argv[])
 {

    int n1 , i;
    int incremento;
    int soma;
    int totPositivo, totoNegativo, totNeutro;
    int positivo, negativo, neutro;
    double media;

    printf("*************************** \n");
    printf("*       EXERCICIO 8       * \n");
    printf("*    INICIO DA CONTAGEM   * \n");
    printf("Deseja contar ate quanto ?  \n");
    scanf("%d", &n1);

    printf("Qual valor do incremento ? \n");
    scanf("%d", &incremento);

    for (i = 1; i < n1; i+incremento) {
        printf
    }
    

    /* teste de saida de dados */
    printf("*   FIM DA CONTAGEM  * \n");
    system("pause");
    return 0;
 }
 