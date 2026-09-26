/**
 * Faca um algoritmo que solicite ao usuario as seguintes informacoes
 * Ate qual numero deseja contar
 * Qual seria seu incremento
 */

 #include <stdio.h>
 #include <stdlib.h>

 int main(int argc, char const *argv[]) {

    int numero1;
    int incremento;
    int i;

    printf("************************* \n");
    printf("*      EXERCICIO 7      * \n");
    printf("*   INICIO DA CONTAGEM  * \n");
    printf("* Ate quanto deseja contar: ");
    scanf("%d", &numero1);

    printf("* Qual valor do incremento? ");
    scanf("%d", &incremento);

    for (i = 1; i <= numero1; i+=incremento) {
        printf("%d\n", i);
    }

    printf("*      FIM DA CONTAGEM      * \n");
    system("pause");
    return 0;
 }
 