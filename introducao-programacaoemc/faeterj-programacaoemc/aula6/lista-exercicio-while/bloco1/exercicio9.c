/**
 * Exercicio 9
 * Maior numero
 * Solicite ao usuario 5 numeros e utilizando a estrutura while
 * verifique qual foi o maior numero informado pelo usuario
 */

 #include <stdio.h>
 #include <stdlib.h>

 int main(int argc, char const *argv[]) {

    int numero;
    int numeroMaior = 0;
    int contador = 1;

    printf("******************************** \n");
    printf("*   EXERCICIO NUMERO MAIOR     * \n");
    printf("*  INFORME 5 NUMEROS A SEGUIR: * \n");
    printf("******************************** \n");

    while (contador<=5) {
        
        printf("* DIGITE: ");
        scanf("%d", &numero);

        if(numero > numeroMaior){
            numeroMaior = numero;
        }

        contador++;
    }

    printf("******************************** \n");
    printf("Maior numero digitado: %d\n" , numeroMaior);
    printf("******************************** \n");
    system("pause");
    system("cls");
    return 0;
 }
 