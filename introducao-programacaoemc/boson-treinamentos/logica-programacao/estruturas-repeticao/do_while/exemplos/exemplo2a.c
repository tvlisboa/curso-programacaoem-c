/**
 * Exemplo 2 - a
 * Tabuada
 * Solicite ao usuario um numero e mostre na tela a sua tabuada
 * Utilizando a estrutura do_while
 */

 #include <stdio.h>
 #include <stdlib.h>
 #include <ctype.h>

 int main (){

    int numero1;                        //numero que o usuario ira informar
    int contador = 1;                   //contador da tabuada
    int resultado;                      //armazena os dados da multiplicacao
    char resp;                          //para sair ou continuar o app

    printf("************************************************* \n");
    printf("*             EXERCICIO  -  TABUADA             * \n");
    printf(" INFORME O NUMERO QUE DESEJA CALCULAR A TABUADA * \n");
    printf("************************************************* \n");

    /* faca o bloco de codigo abaixo
     * enquanto a resposta do usuario
     * for diferente de n
     */
    
    do{

        printf("Digite: ");
        scanf("%d", &numero1);

        /* responsavel pre reinicializacao de cada nova tabuada verificada */
        contador = 1;

        /* faca o bloco de codigo abaixo - enquanto meu contador for menor que 10 */
            do{

                resultado = numero1 * contador;
                printf("%d X %d = %d\n" , numero1 , contador , resultado);
                contador++;

            }while(contador <=10);

            printf("Deseja informar outro numero ? [S/N] \n");
            scanf(" %c" , &resp);

            /* conversao input para uppercase */
        resp = toupper((unsigned char) resp);

    }while(resp!='N');
    
    system("pause");
    return 0;
 }