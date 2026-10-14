/**
 * Exercicio - Calculadora
 * Crie um algoritmo em c
 * Faca uma calculadora, onde receba 2 numeros inteiros e faca 
 * as 4 principais operacoes matematicas
 * Utilize switch case e funcoes para esse exercicio
 */

 #include <stdio.h>
 #include <stdlib.h>
 #include <math.h>

 double somar(double numero1, double numero2){
    
    return(numero1 +  numero2);
 }

 double subtrair(double numero1, double numero2){
    
    return(numero1 - numero2);
 }

 double multiplicar(double numero1 , double numero2){
    
    return(numero1 * numero2);
 }

 double dividir(double numero1, double numero2){

    return(numero1 / numero2);
 }


 int main(){

    int opcao;
    double numero1, numero2;
    double resultado;

    printf("*************************** \n");
    printf("* EXERCICIO - CALCULADORA * \n");
    printf("*  UTILIZE O MENU ABAIXO  * \n");
    printf("*************************** \n");
    printf(" [ 1 ] - SOMAR \n");
    printf(" [ 2 ] - SUBTRAIR \n");
    printf(" [ 3 ] - MULTIPLICAR \n");
    printf(" [ 4 ] - DIVIDIR \n");                              //nao permitir a divisao por zero e implementar as demais funcoes matematicas com suas funcoes
    printf(" [ 9 ] - MAIS OPCOES \n");
    printf(" [ 0 ] - SAIR \n");
    scanf("%d" , &opcao);

    switch (opcao) {
    case 1:
            printf("*************************** \n");
            printf("*  OPCAO ESCOLHIDA - SOMA * \n");
            printf("*   INFORME DOIS NUMEROS  * \n");
            printf("* Numero 1: ");
            scanf("%lf" , &numero1);

            printf("* Numero 2: ");
            scanf("%lf" , &numero2);

            resultado = somar(numero1 , numero2);
            printf("Resultado da operacao: %.2lf\n" , resultado);
        break;

    case 2:
            printf("******************************** \n");
            printf("*  OPCAO ESCOLHIDA - SUBTRACAO * \n");
            printf("*     INFORME DOIS NUMEROS     * \n");
            printf("* Numero 1: ");
            scanf("%lf" , &numero1);

            printf("* Numero 2: ");
            scanf("%lf" , &numero2);

            resultado = subtrair(numero1 , numero2);
            printf("Resultado da operacao: %.2lf\n" , resultado);
        break;

        /**
         * Implementar as demais operacoes
         * Quando fizermos a divisao - devemos utilizar o if-else para validar numero dividido por 0
         * if(numero2 == 0){
         *      printf("Nao e possivel dividir por 0 !");
         * }else{
         *      resultado = divisao(numero1 , numero 2);
         *      printf("Resultado da operacao: %.2fl\n" , resultado);
         * }
         */

    default:
        break;
    }

    system("pause");
    return 0;
 }