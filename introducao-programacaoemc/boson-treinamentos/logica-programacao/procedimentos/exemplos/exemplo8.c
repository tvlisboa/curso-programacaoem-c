/**
 * Exemplo 8 
 * Utilizando funcao
 * Solicite ao usuario um numero inteiro
 * Verifique se o numero informado e
 * Positivo - Negativo ou Neutro
 * Mostre as informacores na tela
 */

 #include <stdio.h>
 #include <stdlib.h>

 /* funcao que verifica se o numero e positivo - negativo - neutro */
 char positivoOuNegativo(int n1){

    if(n1>0){

        printf("Numero: %d e positivo! \n" , n1);

    }else if(n1 == 0){

        printf("Numero: %d e neutro! \n" , n1);

    }else{

        printf("Numero: %d e negativo! \n" , n1);

    }

 }

 int main(){

    int n1;
    int resultado;
    char resp;

    printf("***************************************** \n");
    printf("*    EXEMPLO 8 - POSITIVO OU NEGATIVO   * \n");
    printf("***************************************** \n");

    do{

    }while(resp != 'N');

    printf("Digite um numero a seguir: ");
    scanf("%d" , &n1);

    resultado = positivoOuNegativo(n1);
    printf("Chegou aqui\n");
    printf("%d\n" , resultado);
    system("pause");
    return 0;

 }