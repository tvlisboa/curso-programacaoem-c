/**
 * Exercicio 6
 * Soma de 1 ate N
 * Solicite ao usuario um numero e calcula a soma de todos os numeros de 1 
 * ate o numero informado pelo usuario
 */

 #include <stdio.h>
 #include <stdlib.h>

 int main(int argc, char const *argv[])
 {

    int numero1;
    int contador = 1;
    int limite;
    int soma = 0;

    printf("******************** \n");
    printf("* EXERCICIO - SOMA * \n");
    printf("* Deseja contar ate quanto ? ");
    scanf("%d" , &limite);

    printf("Informe a seguir os numeros. \n");

    while (contador <= limite) {
        printf("Digite a seguir: ");
        scanf("%d" , &numero1);

        soma = soma + numero1;
        contador++;
    }

    printf("A soma dos numeros informados: %d\n" , soma);
    system("pause");
    system("cls");
    return 0;
 }
 