/**
 * Alguns países medem temperaturas em graus Celsius, e outros em graus Fahrenheit. 
 * Faça um algoritmo para ler uma temperatura Celsius  e o nome da cidade 
 * e imprimi-Ia em Fahrenheit (pesquise como fazer este tipo de conversão). 
 */

 #include <stdio.h>
 #include <stdlib.h>

 int main(int argc, char const *argv[])
 {

    char nomeCidade[100];
    double temperaturaLocal;
    double temperaturaFahre;

    printf("******************************************* \n");
    printf("*  SISTEMA DE CONVERSAO DE TEMPERATURAS   * \n");
    printf("* INSIRA OS DADOS A SEGUIR PARA CONTINUAR * \n");
    printf("******************************************* \n");

    printf("* Nome da cidade: ");
    scanf("%s", nomeCidade);

    printf("* Temperatura local em CELSIUS: ");
    scanf("%lf", &temperaturaLocal);

    //conversao de temperaturas
    temperaturaFahre = (temperaturaLocal * 1.8) + 32;

    //teste de saida de dados
    printf("******************************************* \n");
    printf("*  SISTEMA DE CONVERSAO DE TEMPERATURAS   * \n");
    printf("*    DADOS  INFORMADOS  PELO  USUARIO     * \n");
    printf("Cidade informada: %s", nomeCidade);
    printf("\n");
    printf("Temperatura local: %.2lf", temperaturaLocal);
    printf("\n");
    printf("Temperatura convertida em Fahrenheit: %.3lf", temperaturaFahre);
    printf("\n");
    printf("******************************************* \n");

    system("pause");
    return 0;
 }
 