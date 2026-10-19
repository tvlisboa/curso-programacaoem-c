/**
 * Exemplo 3 - Tabuada
 * Crie um algoritmo - onde usuario informe um numero
 * E calcule a tabuada utilizando
 * a estrutura do_while
 */

 #include <stdio.h>
 #include <stdlib.h>

 int main(){

    int contador = 1;
    int numero;
    int resultado;

    printf("Informe o numero para calcular tabuada \n");
    scanf("%d" , &numero);

    do {
        
        resultado = numero * contador;
        printf("%d x %d = %d\n" , numero , contador , resultado);
        contador++;

    } while (contador<=10);


    system("pause");
    return 0;
 }