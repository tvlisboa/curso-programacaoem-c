/**
 * Exemplo 1 
 * Utilizando vetores
 */

 #include <stdio.h>
 #include <stdlib.h>

 int main(){

    int numeros[4];

    numeros[0] = 3;
    numeros[1] = 2;
    numeros[2] = 3;
    numeros[3] = 5;

    for(int i = 0; i<=3; i++){

        printf("Posicao %d = %d\n" , i, numeros[i]);

    }

    system("pause");
    return 0;
 }