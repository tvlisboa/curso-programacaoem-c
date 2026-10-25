/**
 * Exemplo 4 
 * Utilizando a estrutura while - solicite ao usuario as seguintes informacoes
 * Ate quanto ele deseja contar e de quanto em quanto deseja 
 * incrementar
 * Mostre as informacoes na tela
 */

 #include <stdio.h>
 #include <stdlib.h>

 int main(){

    int numero1;
    int cont = 1;
    int salto;

    printf("*********************** \n");
    printf(" EXEMPLO 4 - CONTADOR * \n");

    printf("Ate quanto deseja contar? \n");
    scanf("%d" , &numero1);

    printf("Qual valor do salto? \n");
    scanf("%d" , &salto);

    while(cont <= numero1){

        printf("%d\n" , cont );
        cont+=salto;

    }

    printf("Fim da contagem [...]");
    system("pause");
    return 0;
 }