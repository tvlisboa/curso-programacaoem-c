/*
 * Utilizando a estrutura switch - case
 * Faca um algoritmo onde
 * Usuario informe dois numeros e escolha qual operacao matematica ira fazer
 * (1) - Soma 
 * (2) - Subtracao
 * (3) - Multiplicacao
 * (4) - Divisao
 * (5) - Quadrado
 * (9) - Mais opcoes
 * (0) - Sair
 * Valide as entradas - nao aceite numeros menores que zero
 * Mostre na tela os numeros impares e pares informados
 */

 #include <stdio.h>
 #include <stdlib.h>

 int main(int argc, char const *argv[])
 {

    int option;
    int n1, n2;
    
    printf("********************************* \n");
    printf("*       CALULADORA BASICA       * \n");
    printf("* ESCOLHA UMA DAS OPCOES ABAIXO * \n");
    printf("* [ 1 ] SOMA * \n");
    printf("* [ 2 ] SUBTRACAO * \n");
    printf("* [ 3 ] MULTIPLICACAO * \n");
    printf("* [ 4 ] DIVISAO * \n");
    printf("* [ 5 ] QUADRADO * \n");
    printf("* [ 6 ] RAIZ QUADRADA \n");
    printf("* [ 7 ] RAIZ CUBIDA \n");
    printf("* [ 8 ] RESTO DA SOMA \n");
    printf("* [ 9 ] MAIS INFORMACOES \n");
    printf("* [ 0 ] SAIR \n");
    scanf("%d", &option);

    switch (option) {
    case 1:
        printf("* INSIRA DOIS NUMEROS A SEGUIR * \n");
        printf("* Numero 1: ");
        scanf("%d", &n1);

        printf("* Numero 2: ");
        scanf("%d", &n2);

        int soma = (n1 + n2);

        printf("\n");
        printf("Soma dos numeros informados %d", soma);
    break;
    
    case 2:
        printf("* INSIRA DOIS NUMEROS A SEGUIR * \n");
        printf("* Numero 1: ");
        scanf("%d", &n1);

        printf("* Numero 2: ");
        scanf("%d", &n2);

        int subtracao = (n1 + n2);

        printf("\n");
        printf("Subtracao dos numeros informados %d", subtracao);
    break;

    default:
    break;
    }
    

    printf("\n");
    system("pause");
    return 0;
 }
 