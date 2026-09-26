/**
 * Crie uma lista iniciando em 10 e va ate 0 
 * Utilizando a estrutura de repeticao for
 */

 #include <stdio.h>
 #include <stdlib.h>

 int main(int argc, char const *argv[])
 {
    printf("************************* \n");
    printf("*      EXERCICIO 2      * \n");
    printf("*   INICIO DA CONTAGEM  * \n");

    for (int i = 10 ; i >=0; i--){
        printf("%d\n", i);
    }

    printf("*      FIM DA CONTAGEM      * \n");
    system("pause");
    return 0;
 }
 