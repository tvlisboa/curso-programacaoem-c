/**
 * Exemplo 5
 * Utilizando a estrutura while
 * Solicite ao usuario 10 numeros inteiros
 * Faca a sua soma e mostre as informacoes na tela
 */

 #include <stdio.h>
 #include <stdlib.h>

 int main(){

        int numero;
        int soma = 0;
        int contador =  1;

        printf("************************* \n");
        printf("*       EXEMPLO - 5     * \n");
        printf(" Digite 10 numeros a seguir \n");

        while(contador<=10){

            printf("Digite o %d o valor: " , contador);
            scanf("%d" , &numero);

            soma = soma + numero;
            contador++;
            
        }

    printf("Soma dos numeros informados: %d\n" , soma);
    system("pause");
    return 0;
 }