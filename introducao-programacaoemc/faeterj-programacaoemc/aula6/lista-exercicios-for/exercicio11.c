/**
 * Faca um algoritmo que solicite ao usuario as seguintes informacoes
 * Ate qual numero deseja contar
 * Qual numero deseja iniciar
 * Qual seria seu incremento
 */

 #include <stdio.h>
 #include <stdlib.h>

 int main(int argc, char const *argv[])
 {

    int final = 0;
    int inicio = 0;
    int incremento = 0;
    int i;

    printf("************************* \n");
    printf("*      EXERCICIO 11     * \n");
    printf("*   INICIO DA CONTAGEM  * \n");

    printf("Ate quanto vamos contar? ");
    scanf("%d", &final);

    printf("Iniciamos em quanto ? ");
    scanf("%d", &inicio);

    printf("E qual o valor do incremento ? ");
    scanf("%d", &incremento);
    printf("************************* \n");
    printf("\n");

    for (i = inicio; i <=final; i+=incremento) {
        printf("%d\n" , i);
    }
    
    /* teste de saida de dados */
    printf("Final da contagem: %d\n" , final);
    printf("Inicio da contagem: %d\n" , inicio);
    printf("Valor do incremento: %d\n" , incremento);
    printf("*   FIM DA CONTAGEM  * \n");
    system("pause");
    return 0;
 }
 