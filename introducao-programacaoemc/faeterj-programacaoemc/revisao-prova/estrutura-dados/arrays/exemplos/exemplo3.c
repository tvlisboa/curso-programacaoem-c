/**
 * Exemplo 3
 * Numeros impares ou pares
 * Solicite ao usuario 10 numeros
 * Armazene em um vetor e mostre quais sao impares e pares
 * E a quantidade de impares
 */

 #include <stdio.h>
 #include <stdlib.h>

 int main(){

    int numeros[10];
    int i = 1;
    int totPar = 0;
    int totImpar = 0;

    printf("******************************** \n");
    printf("*   EXEMPLO 2 - PAR OU IMPAR   * \n");
    printf("******************************** \n");

    printf("Digite 10 numeros a seguir: \n");

    for(i = 1; i<=10 ; i++){

        printf("Digite o %dº numero: " , i);
        scanf("%d" , &numeros[i]);

        /* verifica se e par ou impar e faz somatorio */

        if(numeros[i] % 2 == 0){

            printf("O numero %d  na posicao %d é par! \n" , i , numeros[i]);
            totPar++;

        }else{

            printf("O numero %d  na posicao %d é impar! \n" , i , numeros[i]);
            totImpar++;

        }

    }

    printf("Total de numeros pares informados: %d\n", totPar);
    printf("Total de numeros pares informados: %d\n", totImpar);
    system("pause");
    system("cls");
    return 0;
 }