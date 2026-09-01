/*
 * Crie um algoritmo para solicitar ao usuario
 * Nome da cidade e sua temperatura local
 * Solicite para informar se é em celsius ou fahrenheit
 * Faca suas conversoes utilizando o switch-case 
 * e validacoes
 * Acima de 25 graus - clima quente
 * Acima de 15 graus - clima agradavel
 * Entre 10 e 15 graus - clima frio mas tranquilo
 * Entre 0 e 15 - clima realmente frio
 * Abaixo de 0 - frio extremo - pretecao
 * Mostre na tela as informacoes uteis
 */

 #include <stdio.h>
 #include <stdlib.h>
 #include <string.h>
 #include <ctype.h>

 int main(int argc, char const *argv[])
 {

    char nomeCidade[100];
    char mensagem[100];
    double temperaturaLocal;

    printf("************************************ \n");
    printf("*     APP DE TEMPERATURA LOCAL     * \n");
    printf("* Informe nome da cidade: ");
    scanf("%99s", nomeCidade);

    printf("* Temperatura local em C: ");
    scanf("%lf", &temperaturaLocal);

    /* validacoes de temperatura */
    if (temperaturaLocal>=25){
        strcpy(mensagem, "Local esta com clima, considerado quente! \n");
    }else if(temperaturaLocal>=15){
        strcpy(mensagem, "Local esta com clima, considerado agradavel! \n");
    }else if(temperaturaLocal>=10){
        strcpy(mensagem, "Local esta com clima frio, porém agradavel! \n");
    }else if(temperaturaLocal>=0){
        strcpy(mensagem, "Local esta com clima frio! \n");
    }else{
        strcpy(mensagem, "Local esta com clima frio extremo - proteja-se! \n");
    }

    //conversao nome da cidade para uppercase
    for (int i = 0; nomeCidade[i] !='\0'; i++)              
    {
        nomeCidade[i] = toupper(nomeCidade[i]);
    }

    /* saida de dados */
    printf("************************************ \n");
    printf("*  DADOS INFORMADOS PELO USUARIO   * \n");
    printf("************************************ \n");
    printf("Cida informada: %s" , nomeCidade);
    printf("\n");
    printf("Temperatura local: %.2lf", temperaturaLocal);
    printf("\n");
    printf("%s", mensagem);
    printf("\n");
    system("pause");
    system("cls");
    return 0;
 }