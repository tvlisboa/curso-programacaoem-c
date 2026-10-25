/**
 * Exemplo 8 
 * Confira se um numero informado pelo usuario
 * É ou nao primo
 */

 #include <stdio.h>
 #include <stdlib.h>
 #include <string.h>
 #include <ctype.h>

 int main(){

    int numero;                 //numero informado pelo usuario
    int contador;               //responsavel pelo incremento do loop
    int contDiv = 0;            //responsavel pela descoberta se o numero e primo ou nao
    char resp;               //solicita ao usuario - se deseja continuar ou nao

    printf("************************* \n");
    printf("Exercicio - 8 - Numeros primos \n");

    /* ira repertir o bloco - ate usuario digiar sair */
    do{

        printf("Informe um numero a seguir: ");
        scanf("%d" , &numero);

        contDiv = 0;
        contador = 1;

        /* numeros informados menores que 2 - nao sao primos */

        if(numero >= 2){

            do{

                if(numero % contador == 0){

                    contDiv++;

                }

            }while(contador <= numero);

        }

        if(numero >=2 && contDiv == 2){

            printf("O numero %d informado é primo. \n" , numero);

        }else{

            printf("O numero %d informado nao e primo. \n" , numero);

        }

            printf("Deseja continuar : selecione [S/N] ?");
            scanf("%c" , &resp);

            resp = toupper((unsigned char) resp);

    }while(resp == 'S');

    printf(" Programa finalizado \n");
    system("pause");
    return 0;
 }

