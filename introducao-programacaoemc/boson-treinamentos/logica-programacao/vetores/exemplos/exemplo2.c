/**
 * Exemplo 2 
 * Leia 10 numeros e mostre quantos sao pares
 * Armazene dentro de um vetor
 * Mostrar a posicao no vetor
 */

 #include <stdio.h>
 #include <stdlib.h>

 int main(){

    int numeros[10];
    int totPar = 0;

    printf("Informe 10 numeros inteiros a seguir \n");

    for (int i = 0; i<=9 ; i++) {
        printf("Digite: ");
        scanf("%d" , &numeros[i]);
        
    }

    /* mostra a posicao do numero par no vetor */
    for(int i = 0 ; i<=9 ; i++){

            if (numeros[i] % 2 == 0) {
                totPar = totPar + 1;
                printf("Valor do numero na posicao %d\n" , i);
            }       
    }

    printf("Total de numeros pares informados %d\n" , totPar);

    system("pause");
    system("cls");
    return 0;
 }