/**
 * Faca um algoritmo que leia de 1 até n - onde o usuário informar
 */

#include <stdio.h>
#include <stdlib.h>

int main() {

    int n1;

    printf("************************* \n");
    printf("*      EXERCICIO 4      * \n");
    printf("*   INICIO DA CONTAGEM  * \n");
    printf("* Deseja contar ate quanto: ");
    scanf("%d", &n1);

    for (int i = 1 ; i <= n1; i++) {
        printf("%d\n" , i); 
    }
    
    /* teste de saida de dados */
    printf("*      FIM DA CONTAGEM      * \n");
    system("pause");
    return 0;
 }