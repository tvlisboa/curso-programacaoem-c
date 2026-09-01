/*
 * Crie um algoritmo para solicitar ao usuario
 * Nome da cidade e sua temperatura local
 * Solicite para informar se é em celsius ou fahrenheit
 * Faca suas conversoes utilizando o switch-case 
 * e validacoes
 * Acima de 15 graus - clima agradavel
 * Acima de 25 graus - clima quente
 * Entre 10 e 15 graus - clima frio mas tranquilo
 * Entre 0 e 15 - clima realmente frio
 * Abaixo de 0 - frio extremo - pretecao
 * Mostre na tela as informacoes uteis
 */

 #include <stdio.h>
 #include <stdlib.h>


 int main(int argc, char const *argv[])
 {

    char nomeCidade[100];
    double temperaturaLocal;

    printf("************************************ \n");
    printf("*     APP DE TEMPERATURA LOCAL     * \n");
    printf("* Informe nome da cidade: ");
    scanf("%s", nomeCidade);

    printf("* Temperatura local em C: ");
    scanf("%lf", &temperaturaLocal);

    /* saida de dados */
    printf("************************************ \n");
    printf("*  DADOS INFORMADOS PELO USUARIO   * \n");
    printf("************************************ \n");
    printf("%s" , nomeCidade);
    printf("\n");
    printf("%.2lf", temperaturaLocal);
    printf("\n");
    system("pause");
    return 0;
 }
 