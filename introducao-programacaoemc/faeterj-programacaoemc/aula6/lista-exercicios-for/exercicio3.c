/**
 * Crie uma tabuada utilizando o operador for
 * Solicite os dados de entrada - qual numero o usuario deseja contar
 * Mostre as informações na tela
 */

 #include <stdio.h>
 #include <stdlib.h>

 int numero1;

 int main(){

    printf("************************* \n");
    printf("*      EXERCICIO 3      * \n");
    printf("*   INICIO DA CONTAGEM  * \n");
    printf("* Insira um numero a seguir: ");
    scanf("%d", &numero1);

    /* inica a contagem em 1 - enquanto ele for menor que 10 - incrementa 1 */
    for(int i = 1 ; i<=10 ; i++){
        printf("%d x %d = %d\n", numero1 , i , numero1 * i );
    }

    printf("*      FIM DA CONTAGEM      * \n");
    system("pause");
    return 0;
 }