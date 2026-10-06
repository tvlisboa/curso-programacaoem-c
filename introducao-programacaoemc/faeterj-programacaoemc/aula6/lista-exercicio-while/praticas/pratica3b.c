/**
 * Pratica 3
 * Crie um algoritmo que conte ate onde usuario deseja
 * E tambem solicite ao usuario o valor do incremento
 */

 #include <stdio.h>
 #include <stdlib.h>

 int main(){

    int contador = 1;
    int numero1;
    int salto;

    printf("******************************* \n");
    printf(" PRATICA 3 - CONTAGEM USUARIO * \n");
    printf("******************************* \n");
    printf("Ate quanto deseja contar? ");
    scanf("%d" , &numero1);

    printf("Qual valor do incremento? ");
    scanf("%d", &salto);

    printf("Iniciando contagem . . . \n");

    while(contador<=numero1){
        printf("%d\n" , contador);
        contador = contador+salto;
    }

    printf("******************************* \n");
    printf("*       FIM DA CONTAGEM       * \n");
    printf("******************************* \n");
    system("pause");
    return 0;
 }