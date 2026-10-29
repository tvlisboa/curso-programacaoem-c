/**
 * Exercicio 1
 * Crie um algoritmo que solicite um numero ao usuario
 * E faca a tabuada
 * Utilize a estrutura while
 * E mostre os dados na tela
 */

 #include <stdio.h>
 #include <stdlib.h>
 #include <ctype.h>

 int main(){

    int n1;
    int resultado;
    int cont;
    char resp;

    printf("************************* \n");
    printf("* EXERCICIO 1 - TABUADA * \n");
    printf("************************* \n");

    /* repete o bloco ate o usuario informar sair */
    do{

        printf("Qual numero deseja calcular a tabuada? ");
        scanf("%d" , &n1);

        cont = 1; 

        while(cont<=10){
            
            resultado = n1 * cont;
            printf("%d X %d = %d\n" , n1 , cont , resultado);
            cont++;

        }

        printf("Deseja informar outro numero ? [S/N]");
        scanf(" %c" , &resp);

        /* converte os dados informados pelo usuario - para uppercase */
        resp = toupper((unsigned char) resp);

    }while(resp == 'S');
        
    printf("Fim do algoritmo.... \n");
    system("pause");
    return 0;
 }