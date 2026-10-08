/**
 * Exercicio 4
 * Numeros impares
 * Mostre todos os numeros impares entre 1 e 20
 */

 #include <stdio.h>
 #include <stdlib.h>

 int main(int argc, char const *argv[])
 {

    int contador = 1;

    printf("******************************* \n");
    printf("* EXERCICIO - NUMEROS IMPARES * \n");
    printf("******************************* \n");

    while (contador <=20) {
        
        if(contador % 2 == 1){
            printf("Numeros impares: %d\n" , contador);
        }

        contador++;
    }
    
    system("pause");
    system("cls");
    return 0;
 }
 