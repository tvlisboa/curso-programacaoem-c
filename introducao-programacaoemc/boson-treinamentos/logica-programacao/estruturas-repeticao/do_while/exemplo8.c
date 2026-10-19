/**
 * Exemplo 8 
 * Confira se um numero informado pelo usuario
 * É ou nao primo
 */

 #include <stdio.h>
 #include <stdlib.h>

 int main(){

    int contador = 1;
    int numero;
    int contDiv = 0;

    printf("Exercicio - 8 - Numeros primos \n");
    printf("Informe um numero a seguir: ");
    scanf("%d" , &numero);

    do {
       printf("%d" , contador);

       if(numero % contador == 0){

        contDiv++;
       }

       contador++;
    } while (contador<=numero);

        if(contDiv>=2){

            printf("O numero %d , não e primo \n" , numero);

        }else{

            printf("O numero %d , e primo \n" , numero);

        }

    system("pause");
    return 0;
 }

