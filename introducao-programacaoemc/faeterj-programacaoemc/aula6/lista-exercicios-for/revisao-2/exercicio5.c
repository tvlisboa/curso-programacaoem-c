/**
 * Exercicio 5 - Índice de Massa Corporal (IMC) é um critério Mundial da Saúde, 
 * O que dá uma indicação das condições do peso de uma pessoa. 
 * A sua fórmula é: peso /(altura*altura). 
 * Portanto elabore um programa em C onde leia:
 * O peso do usuario
 * A sua altura de um adulto e mostre a sua condição em
 * acordo com a tabela ditada abaixo: (2,0)
 * 
 * Condições do IMC - atualizado 2026
 * Acima de 40 = Obesidade III - Grave
 * Acima de 35 = Obesidade II
 * Acima de 30 = Obesidade I
 * Acima de 25 = Sobrepeso
 * Acima de 18,5 = Peso normal ou Adequado
 * Menor que 18,5 = Baixo peso
 */


 #include <stdio.h>
 #include <stdlib.h>

 int main(){

    char nomeUsuario[100];
    double pesoUsuario;
    double alturaUsuario;

    printf("*************************** \n");
    printf("*     EXERCICIO - IMC     * \n");
    printf("*************************** \n");

    printf("* INSIRA AS INFORMACOES A SEGUIR * \n");

    printf("* Nome do usuario: ");
    scanf("%s" , nomeUsuario);

    printf("* Peso do usuario: ");
    scanf("%lf" , &pesoUsuario);

    printf("* Altura do usuario: ");
    scanf("%lf" , &alturaUsuario);

    /* utilizando o do-while - nao aceitar dados abaixo de zero */

    /* calculo de imc */
    double imc = pesoUsuario / (alturaUsuario * alturaUsuario);

    /* conversao do texto de entrada para uppercase*/

    /* condicoes do imc */
    if(imc>=40){
        printf("*************************** \n");
        printf("* OBESIDADE GRAU III - GRAVE ☠ * \n");
        printf("*************************** \n");
    }else if(imc>=35){
        printf("*************************** \n");
        printf("* OBESIDADE GRAU II * \n");
        printf("*************************** \n");
    }else if(imc>=30){
        printf("*************************** \n");
        printf("* OBESIDADE GRAU I * \n");
        printf("*************************** \n");
    }else if(imc >= 25){
        printf("*************************** \n");
        printf("* SOBREPESO * \n");
        printf("*************************** \n");
    }else if(imc >=  16,5){
        printf("*************************** \n");
        printf("* PESO NORMAL OU ADEQUADO *\n");
        printf("*************************** \n");
    }else{
        printf("*************************** \n");
        printf("*    ☠  BAIXO PESO ☠     * \n");
        printf("*************************** \n");
    }

    /* teste de saida de dados*/
    printf("*************************** \n");
    printf("* DADOS PREENCHIDOS PELO USUARIO * \n");
    printf("* Nome do usuario: %s\n" , nomeUsuario);
    printf("* Peso do usuario: %.2lf\n" , pesoUsuario);
    printf("* Altura do usuario: %.2lf\n" , alturaUsuario);
    printf("*     FIM DO ALGORITMO    * \n");
    printf("*************************** \n");

    system("pause");
    return 0;
 }