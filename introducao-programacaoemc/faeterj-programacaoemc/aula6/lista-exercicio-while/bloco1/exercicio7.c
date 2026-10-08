/**
 * Exercicio 7
 * Solicite ao usuario 5 numeros diferentes
 * Utilizando a estrutura While
 * Some os numeros
 * Calcule a sua media
 * Mostre o resultado na tela
 */

 #include <stdio.h>
 #include <stdlib.h>

 int main(int argc, char const *argv[])
 {

    int numero;
    int contador = 1;
    int soma = 0;
    int media = 0;

    printf("****************************** \n");
    printf("*  EXERCICIO - SOMA E MEDIA  * \n");
    printf("* INFORME 5 NUMEROS A SEGUIR * \n");
    printf("****************************** \n");

    while (contador<=5) {
        printf("Digite: ");
        scanf("%d" , &numero);

        soma = soma + numero;
        media = soma / contador;
        contador++;
    }

    printf("****************************** \n");
    printf("*      DADOS INFORMADOS      * \n");
    printf("Soma: %d\n" , soma);
    printf("Media: %d\n" , media);
    printf("****************************** \n");
    system("pause");
    system("cls");
    return 0;
 }
 