/**
 * Exercicio 10
 * Calculo da media ate determinada quantidade
 * Pergunte ao usuario quantos numeros deseja informar
 * 1 - Receba a quantidade de numeros
 * 2 - Utilize a estrutura while
 * 3 - Receber os numeros
 * 4 - Calculo da soma dos numeros informados
 * 5 - Calculo da media dos numeros informados
 */

 #include <stdio.h>
 #include <stdlib.h>

 int main(int argc, char const *argv[])
 {

    int quantidade = 0;
    int contador = 1;
    int n1;
    int soma = 0;
    int numeroMaior;
    double media = 0;
    
    printf("*********************** \n");
    printf("* EXERCICIO - MEDIANO * \n");
    printf("*********************** \n");

    printf("Quantos numeros deseja informar ? \n");
    scanf("%d" , &quantidade);

    while (contador<=quantidade) {
        printf("Digite a seguir: ");
        scanf("%d" , &n1);

        if(n1>numeroMaior){
            numeroMaior = n1;
        }

        soma = soma + n1;
        media = soma / quantidade;
        contador++;
    }

    printf("*********************** \n");
    printf("Quantidade de numeros informados: %d\n" , quantidade);
    printf("Maior numero informado: %d\n" , numeroMaior);
    printf("Soma: %d\n" , soma);
    printf("Media total: %d\n" , media);
    printf("*********************** \n");
    system("pause");
    system("cls");
    return 0;
 }
 