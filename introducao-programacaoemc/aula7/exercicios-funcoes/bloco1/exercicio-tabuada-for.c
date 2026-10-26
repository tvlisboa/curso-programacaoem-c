/**
 * Exercicio - tabuada
 * Solicite ao usuario um numero inteiro
 * Calcule a sua tabuada e mostre na tela
 * Utilizando a estrutura for
 */

 #include <stdio.h>
 #include <stdlib.h>

 int main(){

    int numero1;
    int resultado;

    printf("************************* \n");
    printf("*  EXERCICIO - TABUADA  * \n");
    printf("************************* \n");

    printf("Digite um numero a seguir \n");
    scanf("%d" , &numero1);

    for(int i = 1 ; i<=10 ; i++){

        resultado = numero1 * i;
        printf("%d x %d = %d\n" , numero1 , i , resultado );

    }

    system("pause");
    system("cls");
    return 0;
 }