/**
 * Exemplo 2
 * Solicite ao usuario 1 numero
 * Utilizando funcoes 
 * Verifique se o numero informado
 * É par ou impar
 */

 #include <stdio.h>
 #include <stdlib.h>

 int parOuImpar(int num1){

    if(num1 % 2 == 0){

        printf("Numero informado é par!");

    }else{

        printf("Numero informado é impar!");

    }
 }

 int main(){

    int n1;
    int resultado;

    printf("**************************** \n");
    printf("* EXEMPLO 2 - PAR OU IMPAR * \n");
    printf("**************************** \n");

    printf("Digite um numero a seguir: ");
    scanf("%d" , &n1);

    while(n1 <=0){

        printf("Numero informado é invalido - tente novamente \n");
        printf("Digite um numero a seguir: ");
        scanf("%d" , &n1);

    }

    resultado = parOuImpar(n1);

    printf("%d\n" , parOuImpar);
    system("pause");
    system("cls");
    return 0;
 }