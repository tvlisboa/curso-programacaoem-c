/**
 * Exemplo 2
 * Leia uma matriz de ordem 3
 * E mostre na tela os numeros que sao pares
 */

 #include <stdio.h>
 #include <stdlib.h>

 int main(){

    int valores[3][3];
    int line;
    int column;
    int totPar;
    int totImpar;

    /* entrada de dados */

    printf("************************* \n");
    printf("*  EXEMPLO - MATRIZES   * \n");

    for(line = 0 ; line <3; line++){

        for(column = 0 ; column <3 ; column++){

            printf("Insira os valores da linha: %d\n" , line);
            printf("Insira os valores da coluna: %d\n", column);
            scanf("%d" , &valores[line][column]);
        }
    }

    /* saida de dados */
    for(line = 0 ; line <3 ; line++){

        for(column = 0; column <3 ; column++){

            if(valores[line][column] % 2 == 0){

               /* verificar se e par ou impar a matriz*/

            }
            printf("%d\n", valores[line][column]);
        }
        printf("\n");
    }

    system("pause");
    return 0;
 }