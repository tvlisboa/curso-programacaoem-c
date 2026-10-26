/**
 * Exemplo 2 - Calculadora 
 * Utilizando funcoes
 * Crie uma calculadora que receba 2 numeros inteiros
 * E faca as 4 operacoes matematicas
 * Utilizando o switch-case , faca o seguinte menu
 * 1 - Somar
 * 2 - Subtrair
 * 3 - Multiplicar
 * 4 - Dividir
 * 5 - Porcentagem
 * 9 - Mais informacoes
 * 0 - Sair
 */

 #include <stdio.h>
 #include <stdlib.h>
 #include <locale.h>


 /* declaracao das funcoes utilizadas */
 double somar(double numero1, double numero2){

    return (numero1 + numero2);

 }

 double subtrair(double numero1, double numero2){

    return (numero1 - numero2);

 }

 double multiplicar(double numero1, double numero2){

    return (numero1 * numero2);

 }

 double dividir(double numero1, double numero2){

    return (numero1 / numero2);

 }

 double porcentagem(double numero1, double numero2){

    return (numero1 * numero2)/100;

 }

 int main(){
    setlocale(LC_ALL, "Portuguese");

    int opcao;
    double numero1, numero2;
    double resultado;

    printf("*************************** \n");
    printf("* EXERCICIO - CALCULADORA * \n");
    printf("* ESCOLHA A OPCAO ABAIXO  * \n");
    printf(" [ 1 ] - SOMAR \n");
    printf(" [ 2 ] - SUBTRAIR \n");
    printf(" [ 3 ] - MULTIPLICAR \n");
    printf(" [ 4 ] - DIVISAO \n");
    printf(" [ 5 ] - PORCENTAGEM \n");
    printf(" [ 9 ] - MAIS OPCOES \n");
    printf(" [ 0 ] - SAIR \n");
    printf("*************************** \n");
    scanf("%d" , &opcao);

    switch (opcao) {

    case 1:
        printf("************************* \n");
        printf("* OPCAO ESCOHIDA - SOMA * \n");
        printf("************************* \n");
        printf("Insira os numeros a seguir \n");
        printf("Numero 1: ");
        scanf("%lf" , &numero1);

        printf("Numero 2: ");
        scanf("%lf" , &numero2);

        /* invocar a funcao */
        resultado = somar(numero1 , numero2);
        printf("%.2lf\n" , resultado);
        break;

    case 2:
        printf("************************* \n");
        printf("* OPCAO ESCOHIDA - SUBTRACAO * \n");
        printf("************************* \n");
        printf("Insira os numeros a seguir \n");
        printf("Numero 1: ");
        scanf("%.lf" , &numero1);

        printf("Numero 2: ");
        scanf("%lf" , &numero2);

        /* invocar a funcao */
        resultado = subtrair(numero1 , numero2);
        printf("%.2lf" , resultado);
        break;

    case 3:
        printf("************************* \n");
        printf("* OPCAO ESCOHIDA - MULTIPLICACAO * \n");
        printf("************************* \n");
        printf("Insira os numeros a seguir \n");
        printf("Numero 1: ");
        scanf("%lf" , &numero1);

        printf("Numero 2: ");
        scanf("%lf" , &numero2);

        /* invocar a funcao */
        resultado = multiplicar(numero1 , numero2);
        printf("%.2lf" , resultado);
        break;

    case 4:
        printf("************************* \n");
        printf("* OPCAO ESCOHIDA - DIVISAO * \n");
        printf("************************* \n");
        printf("Insira os numeros a seguir \n");
        printf("Numero 1: ");
        scanf("%lf" , &numero1);

        printf("Numero 2: ");
        scanf("%lf" , &numero2);

        /* nao aceita divisao por zero */
        while(numero2 == 0){

            printf("Nao e possivel fazer divisao por zero - tente novamente ! \n");

            printf("Numero 2: ");
            scanf("%lf" , &numero2);

        }

        /* invocar a funcao */
        resultado = dividir(numero1 , numero2);
        printf("%.2lf" , resultado);
        break;

    case 5:
        printf("************************* \n");
        printf("* OPCAO ESCOHIDA - PORCENTAGEM * \n");
        printf("************************* \n");
        printf("Insira os numeros a seguir \n");
        printf("Numero 1: ");
        scanf("%lf" , &numero1);

        printf("Numero 2: ");
        scanf("%lf" , &numero2);

        /* invocar a funcao */
        resultado = porcentagem(numero1 , numero2);
        printf("%.2lf" , resultado);
        break;

    case 9:
        printf("************************* \n");
        printf("*   MAIS  INFORMACOES   * \n");
        printf("************************* \n");
        break;

    case 0:
        printf("************************* \n");
        printf("*      SAIR  DO APP     * \n");
        printf("************************* \n");
        break;
    
    default:
        printf("******************************* \n");
        printf("* OPCAO INFORMADA E INVALIDA  * \n");
        printf("******************************* \n");
        break;
    }

    system("pause");
    system("cls");
    return 0;
 }