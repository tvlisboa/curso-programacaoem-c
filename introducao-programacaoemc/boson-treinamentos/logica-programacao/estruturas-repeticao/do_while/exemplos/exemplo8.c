/**
 * Exemplo 8 
 * Confira se um numero informado pelo usuario
 * É ou nao primo
 */

 #include <stdio.h>
 #include <stdlib.h>

 int main(){

    int numero;
    int contador = 1;
    int contDiv = 0;

    printf("************************* \n");
    printf("Exercicio - 8 - Numeros primos \n");
    printf("Informe um numero a seguir: ");
    scanf("%d" , &numero);

    /* o bloco de codigo vai ser executado enquanto 
     * for menor que o numero que o usuario informou 
     */

    do {

       printf("%d" , contador);

       /* utilizado para saber se numero e primo - 
        * somente sera considerado se for 
        * impar ou igual a 1
        */

       if(numero % contador == 0){
       
        contDiv++;

       }

       contador++;

    } while (contador<=numero);


        if(contDiv>2){

            printf("O numero %d , não e primo \n" , numero);

        }else{

            printf("O numero %d , e primo \n" , numero);

        }

    system("pause");
    return 0;
 }

