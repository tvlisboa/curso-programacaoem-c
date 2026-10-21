/**
 * Exemplo 6 - Calcule o fatorial de um numero
 */

 #include <stdio.h>
 #include <stdlib.h>

int main(){

    int contador;
    int numero1;
    int fatorial = 1;

    printf("Informe um numero a seguir ");
    scanf("%d", &numero1);

    contador = numero1;

    do{

        fatorial = contador * fatorial;
        contador = contador - 1;
        
    }while(contador>=1);

    printf("O valor do fatorial de %d é igual a %d\n" , numero1 , fatorial);
    system("pause");
    return 0;
}


 