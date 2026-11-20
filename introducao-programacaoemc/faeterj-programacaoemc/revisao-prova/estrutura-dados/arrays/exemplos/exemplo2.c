/**
 * Exemplo 2
 * Crie vetor de 5 posicoes
 * Solicite os numeros ao usuario e 
 * Imprima na tela
 */

 #include <stdio.h>
 #include <stdlib.h>

 int main(){

    int numeros[5];
    int i;

    printf("************************* \n");
    printf("*   EXEMPLO 1 - VETOR   * \n");
    printf("************************* \n");

    printf("Informe 5 numeros a seguir \n");

    for(i = 1 ; i<=5 ; i++){

        printf("Digite o %d valor: " , i);
        scanf("%d" , &numeros[i]);

    }

    for(i = 1 ; i<=5 ; i++){

        printf("Valor na posicao %d =: %d\n" , i, numeros[i]);

    }

    system("pause");
    system("cls");
    return 0;
 }