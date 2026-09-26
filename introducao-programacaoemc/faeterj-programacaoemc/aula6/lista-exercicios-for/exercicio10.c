/**
 * Crie uma lista iniciando em 10 e va ate 0 
 * Utilizando a estrutura for
 * Solicite ao usuario o valor do decremento
 */

 #include <stdio.h>
 #include <stdlib.h>

 int main(int argc, char const *argv[])
 {

    int valorDecremento = 0;
    int i;

    printf("************************** \n");
    printf("*      EXERCICIO 10      * \n");
    printf("*   INICIO DA CONTAGEM   * \n");

    printf("Qual o valor do decremento ?");
    scanf("%d" , &valorDecremento);

    for (i = 10; i >= 0; i-=valorDecremento) {
        printf("%d\n", i);
    }
    
    printf("*      FIM DA CONTAGEM      * \n");
    system("pause");
    return 0;
 }
