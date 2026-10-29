/**
 * Exemplo - Numero maior
 * Solicite ao usuario - 10 numeros inteiros
 * Mostre na tela a sua soma 
 * E mostre tambem o maior numero informado
 */

 #include <stdio.h>
 #include <stdlib.h>

 int main(){

    int numeros;
    int cont = 1;
    int soma = 0;
    int numeroMaior = 0;

    printf("*************************** \n");
    printf("* EXERMPLO - NUMERO MARIO * \n");
    printf("*************************** \n");

    printf("Insira 10 numeros inteiros * \n");

    while(cont<=10){

        printf("Digite o %d numero: " , cont);
        scanf("%d" , &numeros);

        if(numeros > numeroMaior){

            numeroMaior = numeros;

        }

        soma = soma + numeros;
        cont++;

    }

    printf("Maior numero informado: %d\n" , numeroMaior);
    printf("Soma dos numeros informados: %d\n" , soma);
    system("pause");
    return 0;
 }