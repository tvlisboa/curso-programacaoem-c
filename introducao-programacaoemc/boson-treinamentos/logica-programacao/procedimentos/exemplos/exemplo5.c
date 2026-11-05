/**
 * Exemplo 5 - Calcule o fatorial de um numero
 * Solicite ao usuario um numero
 * E utilizando funcoes
 * Calcule seu fatorial
 * E mostre na tela
 */

 #include <stdio.h>
 #include <stdlib.h>

 /* funcao - calcula fatorial */
 int fatorial(int n1){

    int cont = 1;
    int res = 1;

    for(cont = 1 ; cont<=n1 ; cont++){

        res = res * cont;

    }

    return (res);

 }

 int main(){

    int n1;
    int fat;

    printf("********************** \n");
    printf("* EXEMPLO - FATORIAL * \n");
    printf("********************** \n");

    printf("Digite um numero a seguir: ");
    scanf("%d" , &n1);

    fat = fatorial(n1);
    printf("O valor fatorial do numero %d é: %d\n" , n1 , fat);
    system("pause");
    return 0;
 }