/**
 * Utilizando a estrutura while
 * Faca uma tabuada - solicitando o numero ao usuario
 */

 #include <stdio.h>
 #include <stdlib.h>

 int main (){

    int num1;
    int resultado;
    int cont = 1;

    printf("Digite um numero para calcular a tabuada: ");
    scanf("%d" , &num1);

    while (cont<=10) {
        
        resultado = num1 * cont;
        printf("%d X %d = %d\n" , num1 , cont , resultado);
        cont++;

    }
    
    printf("Fim do exercicio. \n");
    system("pause");
    system("cls");
    return 0;
 }