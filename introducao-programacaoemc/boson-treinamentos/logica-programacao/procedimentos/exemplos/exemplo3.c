/**
 * Exemplo 3 - Verificador PAR OU IMPAR
 * Solicite ao usuario um numeros inteiros
 * E utilizando funcao
 * Verifique se o numero informado e
 * Par ou impar
 */

 #include <stdio.h>
 #include <stdlib.h>

 /* funcao verifica - se e par ou impar */
 void parOuImpar(int valor){

    if(valor % 2 == 0){

        printf("O numero informado %d\n é par." , valor);

    }else{

        printf("O numero informado %d\n é impar." , valor);

    }

 }

 int main(){

        int n1;

        printf("**************************** \n");
        printf("* EXEMPLO 3 - PAR OU IMPAR * \n");
        printf("**************************** \n");

        printf("Digite um numero a seguir: ");
        scanf("%d" , &n1);

        parOuImpar(n1);

    system("pause");
    return 0;
 }