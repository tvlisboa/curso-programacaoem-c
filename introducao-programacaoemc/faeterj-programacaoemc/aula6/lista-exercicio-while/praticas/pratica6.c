/**
 * Pratica 6
 * Solicite ao usuario 10 numeros
 * Faca a sua soma - Mostre também qual o maior numero digitado
 * E mostre as informacoes na tela
 */


 #include <stdio.h>
 #include <stdlib.h>

 int main(){

    int numero1;
    int contador = 1;
    int soma = 0;
    int numeroMaior = 0;

    printf("******************************* \n");
    printf("*      EXERCICIO SOMA         * \n");
    printf("* DIGITE 10 NUMEROS A SEGUIR  * \n");
    printf("******************************* \n");

    while (contador<=10)
    {
        printf("Digite: ");
        scanf("%d" , &numero1);

        if(numero1 >  numeroMaior){
            numeroMaior = numero1;
        }

        soma = soma + numero1;
        contador = contador + 1;
    }
    
    printf("******************************* \n");
    printf("A soma dos numeros informados foi: %d\n" , soma);
    printf("O maior numero informado foi: %d\n" , numeroMaior);
    printf("*     FIM DO ALGORITMO     * \n");
    printf("******************************* \n");
    system("print");
    return 0;
 }