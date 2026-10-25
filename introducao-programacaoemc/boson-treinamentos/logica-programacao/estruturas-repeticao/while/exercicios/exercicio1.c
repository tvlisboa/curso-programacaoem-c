/**
 * Exercicio 1 - While
 * Contagem inteligente
 * Solicite ao usuario para informar inicio e o fim
 * Mostre a contagem na tela
 * Caso o inicio for maior - contagem progressiva
 * Caso o inicio menor - contagem regressiva
 */

 #include <stdio.h>
 #include <stdlib.h>

 int main(){

    int inicioContagem;
    int fimContagem;
    int contador;

    printf("******************************** \n");
    printf("*          EXERCICIO - 1       * \n");
    printf("*      CONTAGEM INTELIGENTE    * \n");
    printf("******************************** \n");

    printf("Informe e a seguir inicio da contagem: ");
    scanf("%d" , &inicioContagem);

    printf("Informe a seguir o final da contagem: ");
    scanf("%d" , &fimContagem);

    /* o contador vai iniciar com o valor informado pelo usuario */
    contador = inicioContagem;

    /* quando o inicio da contagem e menor que o final 
     *sera incrementado um a um
     */

    if (inicioContagem < fimContagem){
        
        while(contador <= fimContagem){

            printf("%d\n" , contador);
            contador++;

        }

        /* caso meu inicio da contagem seja maior que o final
         * a contagem vai ser decrescente
         * diminuindo um a um
         */

    }else if(inicioContagem >= fimContagem){

        while(contador >= fimContagem){

            printf("%d\n" , contador);
            contador--;

        }

        /* caso ambos sejam iguais - ira so informar na tela o valos de ambos*/
    }else{
            
            printf("%d\n" , contador);
        }

         system("pause");
         system("cls");
         return 0;

    }
