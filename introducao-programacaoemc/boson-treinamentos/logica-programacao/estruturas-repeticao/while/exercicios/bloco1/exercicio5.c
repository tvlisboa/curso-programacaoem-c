/**
 * Exercicio 5
 * Solicite um numero ao usuario
 * O numero deve ser entre 1 e 10
 * Alem disso - mostrar se o numero e invalido
 * Mostre os numeros impares ate 100
 */

 #include <stdio.h>
 #include <stdlib.h>

 int main(){

    int numero1;
    int contador = 0;

    printf("******************** \n");
    printf("*    EXERCICIO 5   * \n");
    printf("******************** \n");

    printf("Digite um numero a seguir entre 1 e 10: ");
    scanf("%d" , &numero1);

    while (numero1 <1 || numero1 > 10) {
        
        printf("Numero informado está incorreto - tente novamente ! \n");
        printf("Digite um numero a seguir entre 1 e 10: ");
        scanf("%d" , &numero1);

    }

    while (numero1 + contador<=100) {

        if ((numero1 + contador) % 2 != 0) {
            printf("Numero informado %d é IMPAR! \n" , numero1 + contador);
        }

        contador++;

    }
    
    system("pause");
    return 0;
 }