/**
 * Pratica 3 - Conte ate onde o usuario determinar
 */

 #include <stdio.h>
 #include <stdlib.h>

 int main(){

    int contador = 1;
    int numero1;

    printf("*************************** \n");
    printf("* ATE ONDE DESEJA CONTAR? * \n");
    printf("*************************** \n");

    printf("* Informe o numero: ");
    scanf("%d", &numero1);

    while (contador<=numero1)
    {
        printf("%d\n", contador);
        contador++;
    }

    printf("*************************** \n");
    printf("*    FIM DA CONTAGEM?     * \n");
    printf("*************************** \n");
    system("pause");
    return 0;
 }