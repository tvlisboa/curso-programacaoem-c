/**
 * Utilizando a estrutura do_while
 * Faca uma tabuada - solicitando o numero ao usuario
 */

 #include <stdio.h>
 #include <stdlib.h>

 int main() {

    int num1;
    int cont = 1;
    int resultado;

    printf("Digite numero para calcular a tabuada: ");
    scanf("%d" , &num1);

    do {
        
        resultado = num1 * cont;
        printf("%d X %d = %d\n" , num1 , cont , resultado);
        cont++;

    } while (cont<=10);
    
    printf("Fim do algoritmo \n");
    system("pause");
    return 0;
 }