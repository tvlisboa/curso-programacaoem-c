/**
 * Exemplo 3 - Verificador PAR OU IMPAR
 * Solicite ao usuario um numeros inteiros
 * E utilizando funcao
 * Verifique se o numero informado e
 * Par ou impar
 */

 #include <stdio.h>
 #include <stdlib.h>

 char parImpar(int n1){

    if(n1 % 2 == 0){

        printf("Numero informado e par \n");

    }else{

        printf("Numero informado e impar \n");

    }

 }

 int main(){

    int n1;
    int resultado;

    printf("***************************** \n");
    printf("* EXEMPLO 1 - PAR OU IMPAR  * \n");
    printf("***************************** \n");

    printf("Digite um numero a seguir: ");
    scanf("%d" , &n1);

    resultado = parImpar(n1);
    printf("%d\n" , resultado);
    system("pause");
    return 0;

 }