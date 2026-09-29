/**
 * Exercicio 1 
 * Contagem crescente
 * Crie um algoritmo que inicie em 1 e vá até 10
 * Utilizando a estrutura While
 */

 #include <stdio.h>
 #include <stdlib.h>

 int main(){

    int contador = 1;

    printf("********************** \n");
    printf("* EXERCICIO CONTADOR * \n");
    printf("********************** \n");

    while (contador<=10)
    {
        printf("%d\n" , contador);

        contador = contador + 1 ;
    }

    system("pause");
    return 0;
 }
 