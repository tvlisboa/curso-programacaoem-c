/**
 * Exemplo 6 - Passagem de parametro por referencia
 * Sequencia de fibonnacii
 * Solicite ao usuario um numero e calcule a sua sequencia de fibonnacii
 * use funcoes e mostre na tela o resultado
 */

 #include <stdio.h>
 #include <stdlib.h>

 int t1, t2, t3;
 int i;

 int proximoFibonacci(int n1, int n2){

    int n3;

    n3 = n1 + n2;
    printf("%d\n" , n3);

    n1 = n2;
    n2 = n3;

    return(n3);

 }

 int main(){

    t1 = 0;
    t2 = 1;

    printf("*********************** \n");
    printf("* EXEMPLO - FIBONACCI * \n");
    printf("*********************** \n");

    printf("%d\n" , &t1);
    printf("%d\n" , &t2);

    for(i = 3 ; i<=10 ; i++){

        t3 = proximoFibonacci(t1 , t2);
        printf("%d\n" , t3);

    }

    system("pause");
    return 0;
 }