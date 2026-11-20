/**
 * Exemplo 4 
 * Solicite ao usuario 10 numeros
 * Armazene os dados em vetores
 * e mostre na tela quais sao
 * Positivos - Negativos e Neutros
 */

 #include <stdio.h>
 #include <stdlib.h>

 int main(){

    int numeros[10];
    int i;
    int totNegativos;
    int totNeutros;
    int totPositivos;

    printf("***************************************** \n");
    printf("*   EXEMPLO 4 - NEGATIVOS E POSITIVOS   * \n");
    printf("***************************************** \n");

    printf("Digite 10 numeros a seguir: \n");

    for(i =1 ; i<=10 ; i++){

        printf("Informe o %dº numero: " , i);
        scanf("%d" , &numeros[i]);

        if(numeros[i]<0){

            printf("Numero informado %d na posicao %d é negativo\n" , numeros[i] , i);
            totNegativos++;

        }else if (numeros[i] == 0){

            printf("Numero informado %d na posicao %d é neutro\n" , numeros[i] , i);
            totNeutros++;

        }else{

            printf("Numero informado %d na posicao %d é positivos\n" , numeros[i] , i);
            totPositivos++;

        }

    }

    printf("***************************************** \n");
    printf("*     DADOS INFORMADOS PELO USUARIO     * \n");
    printf("Total de numeros negativos: %d\n" , totNegativos);
    printf("Total de numeros neutros: %d\n" , totNeutros);
    printf("Total de numeros positivos: %d\n" , totPositivos);
    printf("*            FIM DO ALGORITMO           * \n");
    printf("***************************************** \n");
    system("pause");
    return 0;
 }