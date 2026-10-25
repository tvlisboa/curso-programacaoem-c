/**
 * Exemplo 8 
 * Numero primo
 * Solicite para o usuario digitar um numero
 * E verifique se esse numero informado
 * E primo
 * Mostre a informacao na tela
 */

 #include <stdio.h>
 #include <stdlib.h>

 int main(){

    /* declaracao das variaveis */
    int numero1;
    int cont = 1;
    int totDiv = 0;

    printf("************************** \n");
    printf("* EXEMPLO - NUMERO PRIMO * \n");
    printf("************************** \n");

    printf("Digite um numero a seguir: ");
    scanf("%d" , &numero1);

    do{

        if(numero1 % cont == 0){

            totDiv++;

        }

        cont++;

    }while(cont <= numero1);

        if(totDiv>2){

            printf("Numero %d informado - não e numero primo \n" , numero1);

        }else{

            printf("Numero %d informado - e numero primo \n" , numero1);

        }

    printf("Fim do algoritmo. \n");
    system("pause");
    return 0;
 }