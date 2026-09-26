/**
 * Utilizando a estrutura for
 * Solicite ao usuario 5 numeros diferentes
 * Calcule sua media e mostre na tela as informações
 */

 #include <stdio.h>
 #include <stdlib.h>

 int main(int argc, char const *argv[])
 {

    int numero1;
    
    printf("************************* \n");
    printf("*      EXERCICIO 5      * \n");
    printf("*   INICIO DA CONTAGEM  * \n");

    for (int i = 1; i <=5; i++) {
        printf("Informe um numero a seguir: ");
        scanf("%d", &numero1);
    }
    
    system("pause");
    return 0;
 }
 