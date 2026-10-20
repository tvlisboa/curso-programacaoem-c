/**
 * Utilizando a estrutura for
 * Faca uma tabuada - solicitando o numero ao usuario
 */

 #include <stdio.h>
 #include <stdlib.h>

 int main (){

    int numero1;
    int contador = 1;
    int resultado;

    printf("Digite numero a seguir: ");
    scanf("%d" , &numero1);

    for (contador = 1; contador <=10 ; contador++) {
        
        resultado = numero1 * contador;
        printf("%d X %d = %d\n" , numero1 , contador , resultado);

    }
    
    system("pause");
    system("cls");
    return 0;
 }