/**
 * Exemplo 3 
 * Utilizando a estrutura while
 * Solicite ate onde o usuario deseja contar
 * Mostre as informacoes na tela
 */

 #include <stdio.h>
 #include <stdlib.h>

 int main(){

    int numero1;
    int contador = 1;

    printf("************************* \n");
    printf("* EXEMPLO 3 - CONTADOR  * \n");
    printf("************************* \n");

    printf("Deseja contar ate quanto ? \n");
    scanf("%d" , &numero1);

    printf("Iniciando contagem [...] \n");

        while(contador <= numero1){

            printf("%d\n" , contador);
            contador++;

        }

    system("FIM DA CONTAGEM.... \n");
    system("pause");
    system("cls");
    return 0;
 }