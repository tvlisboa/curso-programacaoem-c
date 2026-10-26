/**
 * Exercicio - Tabuada em c
 * Solicite ao usuario um numero inteiro
 * Calcule a sua tabuada utilizando a estrutura 
 * While e mostre  as informacoes na tela
 */

 #include <stdio.h>
 #include <stdlib.h>

 int main(){

    int numero1;
    int cont = 1;
    int resultado;

    printf("*********************** \n");
    printf("* EXERCICIO - TABUADA * \n");
    printf("*********************** \n");

    printf("Informe um numero a seguir ");
    scanf("%d" , &numero1);

    while (cont<=10) {

        resultado = numero1 * cont;
        printf("%d X %d = %d\n" , numero1 , cont , resultado);
        cont++;
    }

    system("pause");
    return 0;
 }