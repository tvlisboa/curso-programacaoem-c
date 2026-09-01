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
 #include <math.h>

 int main(int argc, char const *argv[])
 {

    int option;
    int n1, n2;
    
    do {

    system("clear");
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

    //soma
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
    
    //subtracao
    case 2:
        printf("* INSIRA DOIS NUMEROS A SEGUIR * \n");
        printf("* Numero 1: ");
        scanf("%d", &n1);

        printf("* Numero 2: ");
        scanf("%d", &n2);

        int subtracao = (n1 - n2);

        printf("\n");
        printf("Subtracao dos numeros informados %d", subtracao);
    break;

    //multiplicacao
    case 3:
        printf("* INSIRA DOIS NUMEROS A SEGUIR * \n");
        printf("* Numero 1: ");
        scanf("%d", &n1);

        printf("* Numero 2: ");
        scanf("%d", &n2);

        int multiplicacao = (n1 * n2);

        printf("\n");
        printf("Multiplicacao dos numeros informados %d", multiplicacao);
    break;

    //divisao
    case 4:
        printf("* INSIRA DOIS NUMEROS A SEGUIR * \n");
        printf("* Numero 1: ");
        scanf("%d", &n1);

        printf("* Numero 2: ");
        scanf("%d", &n2);

        int divisao = (n1 / n2);
        printf("\n");
        printf("Divisao dos numeros informados %d", divisao);
    break;
    
    //quadrado
    case 5:
        printf("* INSIRA DOIS NUMEROS A SEGUIR * \n");
        printf("* Numero 1: ");
        scanf("%d", &n1);

        printf("* Numero 2: ");
        scanf("%d", &n2);

        int numeroQuadrado1 = (n1 * n1);
        int numeroQuadrado2 = (n2 * n2);

        printf("\n");
        printf("O numero %d\n ao quadrado é %.2lf\n", n1, numeroQuadrado1);
        printf("\n");
        printf("O numero %d\n ao quadrado é %.2lf\n", n2, numeroQuadrado2);
    break;

    //raizquadrada
    case 6:
        printf("* INSIRA DOIS NUMEROS A SEGUIR * \n");
        printf("* Numero 1: ");
        scanf("%d", &n1);

        printf("* Numero 2: ");
        scanf("%d", &n2);

        double raizQuadradaN1 = sqrt(n1);       //fnc sqrt calcula a raiz quadrada
        double raizQuadradaN2 = sqrt(n2);       //fnc sqrt calcula a raiz quadrada

        printf("\n");
        printf("A raiz quadrada de %d\n é %.2lf\n: ", n1, raizQuadradaN1);
        printf("A raiz quadrada de %d\n é %.2lf\n: ", n2, raizQuadradaN2);
        printf("\n");
    break;

    //raizcubica
    case 7:
        printf("* INSIRA DOIS NUMEROS A SEGUIR * \n");
        printf("* Numero 1: ");
        scanf("%d", &n1);

        printf("* Numero 2: ");
        scanf("%d", &n2);

        double raizCubicaN1 = cbrt(n1);        //fnc calcula raiz cubica
        double raizCubicaN2 = cbrt(n2);        //fnc calcula raiz cubica

        printf("\n");
        printf("A raiz cubica de %.d\n é %.2lf\n: ", n1, raizCubicaN1);
        printf("A raiz cubica de %.d\n é %.2lf\n: ", n2, raizCubicaN2);
        printf("\n");
    break;

    //resto da soma de dois valores
    case 8:
        printf("* INSIRA DOIS NUMEROS A SEGUIR * \n");
        printf("* Numero 1: ");
        scanf("%d", &n1);

        printf("* Numero 2: ");
        scanf("%d", &n2);

        int resto = (n1 + n2);

        if(resto % 2 == 0){
            printf("O resto da soma dos numeros informados é PAR \n");
        }else{
            printf("O resto da soma dos numeros informados é IMPAR \n");
        }
    break;

    case 9:
        printf("********************************* \n");
        printf("*       CALULADORA BASICA       * \n");
        printf("* SECAO MAIS INFORMACOES ABAIXO * \n");
    break;

    default:
    break;
    }
        
    } while (option != 0);

        printf("\n");
        system("pause");
        system("cls");
        return 0;
 }