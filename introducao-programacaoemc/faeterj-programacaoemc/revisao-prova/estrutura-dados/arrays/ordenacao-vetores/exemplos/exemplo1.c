/**
 * Exemplo 1 
 * Ordenacao de vetores
 * Solicite ao usuario 5 numeros diferentes
 * E ordene em ordem crescente
 * Mostre na tela o resultado
 */

 #include <stdio.h>
 #include <stdlib.h>

 int main(){

    int numeros[5];
    int i;
    int j;
    int aux;

    printf("Digite 5 numeros a seguir \n");

    for(i = 0 ; i<5 ; i++){

        printf("Digite:"); 
        scanf("%d" , &numeros);

    }

    for(i=0 ; i < 4 ; i++){

        for (j = i+1 ; i< 5 ; i++) {

            if(numeros[i] > numeros[j]){

                aux = numeros[i];
                numeros[i] = numeros[j];
                numeros[j] = aux;

            }
        } 
    }

    for(i=0 ; i<5 ; i++){

        printf("{ %d\n" , numeros[i] , "}");

    }

    system("pause");
    return 0;
 }