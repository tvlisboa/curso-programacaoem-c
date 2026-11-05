/**
 * Exemplo 2 - Verificar par ou impar
 * Solicite ao usuario 1 numero inteiro
 * Utilizando funcao - verifique se o numero informado
 * E par ou impar
 */

 #include <stdio.h>
 #include <stdlib.h>

 char  parOuImpar(int numero1){

    if(numero1 % 2 == 0){

        printf("Numero informado - é PAR! \n");

    }else{

        printf("Numero informado - é IMPAR! \n");
        
    }

 }

 int main(){

    int numero1;
    int resultado;

    printf("*************************** \n");
    printf("* EXEMPLO 2 - PAR OU IMPR * \n");
    printf("*************************** \n");

    printf("Digite numero a seguir: ");
    scanf("%d" , &numero1);

    resultado = parOuImpar(numero1);

    printf("%d\n" , resultado);
    system("pause");
    return 0;
 }