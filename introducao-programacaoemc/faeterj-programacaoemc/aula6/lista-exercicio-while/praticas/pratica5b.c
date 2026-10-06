/**
 * Pratica 5
 * Solicite ao usuario 10 numeros inteiros
 * Faca a sua soma e mostre o maior numero informado
 * Mostre as informacoes na tela
 */

 #include <stdio.h>
 #include <stdlib.h>

 int main(){

    int contador = 1;
    int n1;
    int soma = 0;
    int numeroMaior = 0;

    printf("***************************** \n");
    printf("*   PRATICA - 5 SOMADORES   * \n");
    printf("* INSIRA 5 NUMEROS A SEGUIR * \n");
    printf("***************************** \n");

    while(contador<=5){
        printf("Digite: ");
        scanf("%d" , &n1);

        soma = soma + n1;

        if(n1>numeroMaior){
            numeroMaior = n1;
        }

        contador = contador + 1;
    }

    printf("***************************** \n");
    printf("A soma dos numeros informados: %d\n" , soma);
    printf("Maior numero informado: %d\n" , numeroMaior);
    printf("***************************** \n");
    system("pause");
    return 0;
 }